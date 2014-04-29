/*-----------------------------------------------------------------------------
 *
 * parser.c
 *			  
 *		
 *		AUTHOR: lord_pretzel
 *
 *		
 *
 *-----------------------------------------------------------------------------
 */

#include "parser/parser.h"
#include "sql_parser.tab.h"
#include "parser/parse_internal.h"
#include "model/node/nodetype.h"
#include "mem_manager/mem_mgr.h"
#include "log/logger.h"
#include "instrumentation/timing_instrumentation.h"

static Node *parseInternal (void);

Node *
parseStream (FILE *stream)
{
    yyin = stream;

    return parseInternal();
}

Node *
parseFromString (char *input)
{
    INFO_LOG("parse SQL:\n%s", input);
    setupStringInput(input);

    return parseInternal();
}

static Node *
parseInternal (void) //TODO make copyObject work first
{
    Node *result;
    START_TIMER("module - parser");

    NEW_AND_ACQUIRE_MEMCONTEXT("PARSER_CONTEXT");

    // parse
    int rc = yyparse();
    if (rc)
    {
        ERROR_LOG("parse error!");
        return NULL;
    }

    STOP_TIMER("module - parser");

    DEBUG_LOG("query block model generated by parser is:\n%s\n\n%s",
            nodeToString(bisonParseResult),
            beatify(nodeToString(bisonParseResult)));

    // create copy of parse result in parent context
    FREE_MEM_CONTEXT_AND_RETURN_COPY(Node,bisonParseResult);
}
