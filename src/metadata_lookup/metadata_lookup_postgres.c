/*-----------------------------------------------------------------------------
 *
 * metadata_lookup_postgres.c
 *			  
 *		- Catalog lookup for postgres database
 *		
 *		AUTHOR: lord_pretzel
 *
 *		
 *
 *-----------------------------------------------------------------------------
 */


#include "common.h"
#include "mem_manager/mem_mgr.h"
#include "log/logger.h"
#include "instrumentation/timing_instrumentation.h"

#include "configuration/option.h"
#include "metadata_lookup/metadata_lookup.h"
#include "metadata_lookup/metadata_lookup_postgres.h"
#include "model/query_block/query_block.h"
#include "model/query_operator/query_operator.h"
#include "model/list/list.h"
#include "model/node/nodetype.h"
#include "model/expression/expression.h"

#if HAVE_LIBPQ
#include "libpq-fe.h"
#endif


#define CONTEXT_NAME "PostgresMemContext"

#define NAME_TABLE_GET_ATTRS "GPRoM_GetTableAttributeNames"
#define PARAMS_TABLE_GET_ATTRS 1
#define QUERY_TABLE_GET_ATTRS "SELECT attname, atttypid " \
		"FROM pg_class c, pg_attribute a " \
		"WHERE c.oid = a.attrelid " \
		"AND relkind = 'r' " \
		"AND relname = $1::text " \
		"AND attname NOT IN ('tableoid', 'cmax', 'xmax', 'cmin', 'xmin', 'ctid');"

#define NAME_TABLE_EXISTS "GPRoM_CheckTableExists"
#define PARAMS_TABLE_EXISTS 1
#define QUERY_TABLE_EXISTS "SELECT EXISTS (SELECT * FROM pg_class " \
		"WHERE relkind = 'r' AND relname = $1::text);"

#define NAME_VIEW_GET_ATTRS "GPRoM_GetViewAttributeNames"
#define PARAMS_VIEW_GET_ATTRS 1
#define QUERY_VIEW_GET_ATTRS "SELECT attname, atttypid " \
        "FROM pg_class c, pg_attribute a " \
        "WHERE c.oid = a.attrelid " \
        "AND relkind = 'v' " \
        "AND relname = $1::text;"

#define NAME_VIEW_EXISTS "GPRoM_CheckViewExists"
#define PARAMS_VIEW_EXISTS 1
#define QUERY_VIEW_EXISTS "SELECT EXISTS (SELECT * FROM pg_class " \
        "WHERE relkind = 'v' AND relname = $1::text);"

#define NAME_IS_WIN_FUNC "GPRoM_IsWinFunc"
#define PARAMS_IS_WIN_FUNC 1
#define QUERY_IS_WIN_FUNC "SELECT bool_or(proiswindow) is_win FROM pg_proc " \
        "WHERE proname = $1::text;"

#define NAME_IS_AGG_FUNC "GPRoM_IsAggFunc"
#define PARAMS_IS_AGG_FUNC 1
#define QUERY_IS_AGG_FUNC "SELECT bool_or(proisagg) AS is_agg FROM pg_proc " \
		"WHERE proname = $1::text;"

#define NAME_GET_VIEW_DEF "GPRoM_GetViewDefinition"
#define PARAMS_GET_VIEW_DEF 1
#define QUERY_GET_VIEW_DEF "SELECT definition FROM pg_views WHERE viewname = $1::text;"

//#define NAME_ "GPRoM_"
//#define PARAMS_ 1
//#define QUERY_ "SELECT"


// prepare a catalog lookup query
#define PREP_QUERY(name) prepareQuery(NAME_ ## name, QUERY_ ## name, PARAMS_ ## name, NULL)

// real versions if libpq is present
#ifdef HAVE_LIBPQ

// functions
static PGresult *execQuery(char *query);
static PGresult *execPrepared(char *qName, List *values);
static boolean prepareQuery(char *qName, char *query, int parameters,
        Oid *types);
static void prepareLookupQueries(void);
static DataType postgresOidToDT(char *Oid);

// closing result sets and connections
#define CLOSE_QUERY() \
		do { \
		    PGresult *_res; \
            _res = PQexec(conn, "CLOSE myportal"); \
            PQclear(_res); \
		} while(0)

#define CLOSE_CONN_AND_FATAL(__VA_ARGS__) \
		do { \
			PQfinish(plugin->conn); \
			FATAL_LOG(__VA_ARGS__); \
		}

#define CLOSE_RES_CONN_AND_FATAL(res, ...) \
        do { \
            PQfinish(plugin->conn); \
            PQclear(res); \
            FATAL_LOG(__VA_ARGS__); \
        } while(0)


// extends MetadataLookupPlugin with postgres connection
typedef struct PostgresPlugin
{
    MetadataLookupPlugin plugin;
    PGconn *conn;
    boolean initialized;
} PostgresPlugin;

static PostgresPlugin *plugin = NULL;
static MemContext *memContext = NULL;


MetadataLookupPlugin *
assemblePostgresMetadataLookupPlugin (void)
{
    plugin = NEW(PostgresPlugin);
    MetadataLookupPlugin *p = (MetadataLookupPlugin *) plugin;

    p->type = METADATA_LOOKUP_PLUGIN_POSTGRES;

    p->initMetadataLookupPlugin = postgresInitMetadataLookupPlugin;
    p->databaseConnectionOpen = postgresDatabaseConnectionOpen;
    p->databaseConnectionClose = postgresDatabaseConnectionClose;
    p->shutdownMetadataLookupPlugin = postgresShutdownMetadataLookupPlugin;
    p->isInitialized = postgresIsInitialized;
    p->catalogTableExists = postgresCatalogTableExists;
    p->catalogViewExists = postgresCatalogViewExists;
    p->getAttributes = postgresGetAttributes;
    p->getAttributeNames = postgresGetAttributeNames;
    p->isAgg = postgresIsAgg;
    p->isWindowFunction = postgresIsWindowFunction;
    p->getTableDefinition = postgresGetTableDefinition;
    p->getViewDefinition = postgresGetViewDefinition;
    p->getTransactionSQLAndSCNs = postgresGetTransactionSQLAndSCNs;
    p->executeAsTransactionAndGetXID = postgresExecuteAsTransactionAndGetXID;

    return p;
}

/* plugin methods */
int
postgresInitMetadataLookupPlugin (void)
{
    if (plugin && plugin->initialized)
        FATAL_LOG("tried to initialize metadata lookup plugin more than once");

    NEW_AND_ACQUIRE_MEMCONTEXT(CONTEXT_NAME);
    memContext = getCurMemContext();

    plugin->plugin.cache = createCache();
    plugin->initialized = TRUE;

    RELEASE_MEM_CONTEXT();
    return EXIT_SUCCESS;
}

int
postgresShutdownMetadataLookupPlugin (void)
{
    ACQUIRE_MEM_CONTEXT(memContext);

    // clear cache

    FREE_AND_RELEASE_CUR_MEM_CONTEXT();
    return EXIT_SUCCESS;
}

int
postgresDatabaseConnectionOpen (void)
{
    StringInfo connStr = makeStringInfo();
    OptionConnection *op = getOptions()->optionConnection;

    ACQUIRE_MEM_CONTEXT(memContext);

    /* create connection string */
    if (op->host)
        appendStringInfo(connStr, " host=%s", op->host);
    if (op->db)
        appendStringInfo(connStr, " dbname=%s", op->db);
    if (op->user)
        appendStringInfo(connStr, " user=%s", op->user);
    if (op->passwd)
        appendStringInfo(connStr, " password=%s", op->passwd);
    if (op->port)
        appendStringInfo(connStr, " port=%u", op->port);

    /* try to connect to db */
    plugin->conn = PQconnectdb(connStr->data);

    /* check to see that the backend connection was successfully made */
    if (plugin->conn == NULL || PQstatus(plugin->conn) == CONNECTION_BAD)
    {
        char *error = PQerrorMessage(plugin->conn);
        PQfinish(plugin->conn);
        FATAL_LOG("unable to connect to postgres database %s\n\nfailed "
                "because of:\n%s", connStr->data, error);
    }

    plugin->initialized = TRUE;

    // prepare queries
    prepareLookupQueries();

    RELEASE_MEM_CONTEXT();
    return EXIT_SUCCESS;
}

static void
prepareLookupQueries(void)
{
    PREP_QUERY(TABLE_GET_ATTRS);
    PREP_QUERY(TABLE_EXISTS);
    PREP_QUERY(VIEW_GET_ATTRS);
    PREP_QUERY(VIEW_EXISTS);
    PREP_QUERY(IS_WIN_FUNC);
    PREP_QUERY(IS_AGG_FUNC);
    PREP_QUERY(GET_VIEW_DEF);
}

int
postgresDatabaseConnectionClose()
{
    ACQUIRE_MEM_CONTEXT(memContext);
    ASSERT(plugin && plugin->initialized);

    PQfinish(plugin->conn);

    RELEASE_MEM_CONTEXT();
    return EXIT_SUCCESS;
}

PGconn *
getPostgresConnection(void)
{
    ASSERT(postgresIsInitialized());

    return plugin->conn;
}

boolean
postgresIsInitialized (void)
{
    if (plugin && plugin->initialized)
    {
        if (plugin->conn == NULL)
        {
            if (postgresDatabaseConnectionOpen() != EXIT_SUCCESS)
                return FALSE;
        }
        if (PQstatus(plugin->conn) == CONNECTION_BAD)
        {
            char *error = PQerrorMessage(plugin->conn);
            ERROR_LOG("unable to connect to postgres database\nfailed "
                    "because of:\n%s", error);
            return FALSE;
        }

        return TRUE;
    }

    return FALSE;
}

boolean
postgresCatalogTableExists (char * tableName)
{
    PGresult *res = NULL;

    if (hasSetElem(plugin->plugin.cache->tableNames,tableName))
        return TRUE;

    // do query
    res = execPrepared(NAME_TABLE_EXISTS, singleton(createConstString(tableName)));
    if (strcmp(PQgetvalue(res,0,0),"t") == 0)
    {
        addToSet(plugin->plugin.cache->tableNames, tableName);
        PQclear(res);
        return TRUE;
    }
    PQclear(res);

    // run query
    return FALSE;
}

boolean
postgresCatalogViewExists (char * viewName)
{
    PGresult *res = NULL;

    if (hasSetElem(plugin->plugin.cache->viewNames,viewName))
        return TRUE;

    // do query
    res = execPrepared(NAME_VIEW_EXISTS, singleton(createConstString(viewName)));
    if (strcmp(PQgetvalue(res,0,0),"t") == 0)
    {
        addToSet(plugin->plugin.cache->viewNames, viewName);
        PQclear(res);
        return TRUE;
    }
    PQclear(res);

    return FALSE;
}


List *
postgresGetAttributes (char *tableName)
{
    PGresult *res = NULL;
    List *attrs = NIL;
    ASSERT(postgresCatalogTableExists(tableName));

    if (MAP_HAS_STRING_KEY(plugin->plugin.cache->tableAttrDefs, tableName))
        return (List *) MAP_GET_STRING(plugin->plugin.cache->tableAttrDefs,tableName);

    // do query
    res = execPrepared(NAME_TABLE_GET_ATTRS, singleton(createConstString(tableName)));

    // loop through results
    for(int i = 0; i < PQntuples(res); i++)
    {
        AttributeDef *a = createAttributeDef(
                strdup(PQgetvalue(res,i,0)),
                postgresOidToDT(strdup(PQgetvalue(res,i,1)))
                );
        attrs = appendToTailOfList(attrs, a);
    }

    // clear result
    PQclear(res);
    MAP_ADD_STRING_KEY(plugin->plugin.cache->tableAttrDefs, tableName, attrs);

    DEBUG_LOG("table %s attributes are <%s>", tableName, beatify(nodeToString(attrs)));

    return attrs;
}

List *
postgresGetAttributeNames (char *tableName)
{
    List *attrs = NIL;
    PGresult *res = NULL;
    ASSERT(postgresCatalogTableExists(tableName));

    if (MAP_HAS_STRING_KEY(plugin->plugin.cache->tableAttrs, tableName))
        return (List *) MAP_GET_STRING(plugin->plugin.cache->tableAttrs,tableName);

    // do query
    res = execPrepared(NAME_TABLE_GET_ATTRS, singleton(createConstString(tableName)));

    // loop through results
    for(int i = 0; i < PQntuples(res); i++)
        attrs = appendToTailOfList(attrs, strdup(PQgetvalue(res,i,0)));

    // clear result
    PQclear(res);
    MAP_ADD_STRING_KEY(plugin->plugin.cache->tableAttrs, tableName, attrs);

    DEBUG_LOG("table %s attributes are <%s>", tableName, stringListToString(attrs));

    return attrs;
}

boolean
postgresIsAgg(char *functionName)
{
    PGresult *res = NULL;
    char *f = strdup(functionName);
    int i = 0;

    for(char *p = f; *p != '\0'; *(p) = tolower(*p), p++)
        ;

    if (hasSetElem(plugin->plugin.cache->aggFuncNames, f))
        return TRUE;

    // do query
    res = execPrepared(NAME_IS_AGG_FUNC, singleton(createConstString(f)));
    if (strcmp(PQgetvalue(res,0,0),"t") == 0)
    {
        addToSet(plugin->plugin.cache->aggFuncNames, f);
        PQclear(res);
        return TRUE;
    }
    PQclear(res);

    return FALSE;
}

boolean
postgresIsWindowFunction(char *functionName)
{
    PGresult *res = NULL;
    if (hasSetElem(plugin->plugin.cache->winFuncNames, functionName))
        return TRUE;

    // do query
    res = execPrepared(NAME_IS_WIN_FUNC, singleton(createConstString(functionName)));
    if (strcmp(PQgetvalue(res,0,0),"t") == 0)
    {
        addToSet(plugin->plugin.cache->winFuncNames, functionName);
        PQclear(res);
        return TRUE;
    }
    PQclear(res);

    return FALSE;
}

char *
postgresGetTableDefinition(char *tableName)
{
    return tableName;
}

char *
postgresGetViewDefinition(char *viewName)
{
    PGresult *res = NULL;

    ASSERT(postgresCatalogViewExists(viewName));
    if (MAP_HAS_STRING_KEY(plugin->plugin.cache->viewDefs, viewName))
         return STRING_VALUE(MAP_GET_STRING(plugin->plugin.cache->viewDefs,viewName));

    // do query
    res = execPrepared(NAME_GET_VIEW_DEF, singleton(createConstString(viewName)));
    if (PQntuples(res) == 1)
    {
        Constant *def = createConstString(PQgetvalue(res,0,0));
        MAP_ADD_STRING_KEY(plugin->plugin.cache->viewDefs, viewName,
                def);
        PQclear(res);
        return STRING_VALUE(def);
    }
    PQclear(res);

    return NULL;
}

void
postgresGetTransactionSQLAndSCNs (char *xid, List **scns, List **sqls,
        List **sqlBinds, IsolationLevel *iso, Constant *commitScn)
{
    FATAL_LOG("not supported for postgres yet");
}

Node *
postgresExecuteAsTransactionAndGetXID (List *statements, IsolationLevel isoLevel)
{
    Constant *xid = NULL;

    FATAL_LOG("not supported for postgres yet");

    return (Node *) xid;
}

static PGresult *
execQuery(char *query)
{
    PGresult *res = NULL;
    ASSERT(postgresIsInitialized());
    PGconn *c = plugin->conn;

    res = PQexec(c, "DECLARE myportal CURSOR FOR ");
    if (PQresultStatus(res) != PGRES_COMMAND_OK)
        CLOSE_RES_CONN_AND_FATAL(res, "DECLARE CURSOR failed: %s",
                PQerrorMessage(c));
    PQclear(res);

    res = PQexec(c, "FETCH ALL in myportal");
    if (PQresultStatus(res) != PGRES_TUPLES_OK)
        CLOSE_RES_CONN_AND_FATAL(res, "FETCH ALL failed: %s", PQerrorMessage(c));

    return res;
}

static PGresult *
execPrepared(char *qName, List *values)
{
    char **params;
    int i;
    int nParams = LIST_LENGTH(values);
    PGresult *res = NULL;
    params = CALLOC(sizeof(char*),LIST_LENGTH(values));

    ASSERT(postgresIsInitialized());

    i = 0;
    FOREACH(Constant,c,values)
        params[i++] = STRING_VALUE(c);

    DEBUG_LOG("run query %s with parameters <%s>",
            qName, exprToSQL((Node *) values));

    res = PQexecPrepared(plugin->conn,
            qName,
            nParams,
            (const char *const *) params,
            NULL,
            NULL,
            0);

    if (PQresultStatus(res) != PGRES_TUPLES_OK)
        CLOSE_RES_CONN_AND_FATAL(res, "query %s failed:\n%s", qName,
                PQresultErrorMessage(res));

    return res;
}

static boolean
prepareQuery(char *qName, char *query, int parameters, Oid *types)
{
    PGresult *res = NULL;
    ASSERT(postgresIsInitialized());
    PGconn *c = plugin->conn;

    res = PQprepare(c,
                    qName,
                    query,
                    parameters,
                    types);
    if (PQresultStatus(res) != PGRES_COMMAND_OK)
        CLOSE_RES_CONN_AND_FATAL(res, "prepare query %s failed: %s",
                qName, PQresultErrorMessage(res));
    PQclear(res);

    DEBUG_LOG("prepared query: %s AS\n%s", qName, query);

    return TRUE;
}

static DataType
postgresOidToDT(char *Oid)
{
    int oid = atoi(Oid);

    switch(oid)
    {
        default:
            return DT_STRING;
    }
}


// NO libpq present. Provide dummy methods to keep compiler quiet
#else

MetadataLookupPlugin *
assemblePostgresMetadataLookupPlugin (void)
{
    return NULL;
}

int
postgresInitMetadataLookupPlugin (void)
{
    return EXIT_SUCCESS;
}

int
postgresShutdownMetadataLookupPlugin (void)
{
    return EXIT_SUCCESS;
}

int
postgresDatabaseConnectionOpen (void)
{
    return EXIT_SUCCESS;
}

int
postgresDatabaseConnectionClose()
{
    return EXIT_SUCCESS;
}

boolean
postgresIsInitialized (void)
{
    return FALSE;
}

boolean
postgresCatalogTableExists (char * tableName)
{
    return FALSE;
}

boolean
postgresCatalogViewExists (char * viewName)
{
    return FALSE;
}

List *
postgresGetAttributes (char *tableName)
{
    return NIL;
}

List *
postgresGetAttributeNames (char *tableName)
{
    return NIL;
}

boolean
postgresIsAgg(char *functionName)
{
    return FALSE;
}

boolean
postgresIsWindowFunction(char *functionName)
{
    return FALSE;
}

char *
postgresGetTableDefinition(char *tableName)
{
    return NULL;
}

char *
postgresGetViewDefinition(char *viewName)
{
    return NULL;
}

void
postgresGetTransactionSQLAndSCNs (char *xid, List **scns, List **sqls,
        List **sqlBinds, IsolationLevel *iso, Constant *commitScn)
{
}

Node *
postgresExecuteAsTransactionAndGetXID (List *statements, IsolationLevel isoLevel)
{
    return NULL;
}

#endif
