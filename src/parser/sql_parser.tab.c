/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 8 "sql_parser.y"

#include "common.h"
#include "mem_manager/mem_mgr.h"
#include "model/expression/expression.h"
#include "model/list/list.h"
#include "model/node/nodetype.h"
#include "model/query_block/query_block.h"
#include "parser/parse_internal.h"
#include "log/logger.h"
#include "model/query_operator/operator_property.h"

#define RULELOG(grule) \
    { \
        TRACE_LOG("Parsing grammer rule <%s>", #grule); \
    }
    
#undef free

Node *bisonParseResult = NULL;


/* Line 268 of yacc.c  */
#line 93 "sql_parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
<<<<<<< HEAD
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     intConst = 258,
     floatConst = 259,
     stringConst = 260,
     identifier = 261,
     parameter = 262,
     comparisonOps = 263,
     SELECT = 264,
     INSERT = 265,
     UPDATE = 266,
     DELETE = 267,
     PROVENANCE = 268,
     OF = 269,
     BASERELATION = 270,
     SCN = 271,
     TIMESTAMP = 272,
     HAS = 273,
     TABLE = 274,
     ONLY = 275,
     UPDATED = 276,
     SHOW = 277,
     INTERMEDIATE = 278,
     USE = 279,
     TUPLE = 280,
     VERSIONS = 281,
     FROM = 282,
     AS = 283,
     WHERE = 284,
     DISTINCT = 285,
     STARALL = 286,
     AND = 287,
     OR = 288,
     LIKE = 289,
     NOT = 290,
     IN = 291,
     ISNULL = 292,
     BETWEEN = 293,
     EXCEPT = 294,
     EXISTS = 295,
     AMMSC = 296,
     NULLVAL = 297,
     ALL = 298,
     ANY = 299,
     IS = 300,
     SOME = 301,
     UNION = 302,
     INTERSECT = 303,
     MINUS = 304,
     INTO = 305,
     VALUES = 306,
     HAVING = 307,
     GROUP = 308,
     ORDER = 309,
     BY = 310,
     LIMIT = 311,
     SET = 312,
     INT = 313,
     BEGIN_TRANS = 314,
     COMMIT_TRANS = 315,
     ROLLBACK_TRANS = 316,
     CASE = 317,
     WHEN = 318,
     THEN = 319,
     ELSE = 320,
     END = 321,
     OVER_TOK = 322,
     PARTITION = 323,
     ROWS = 324,
     RANGE = 325,
     UNBOUNDED = 326,
     PRECEDING = 327,
     CURRENT = 328,
     ROW = 329,
     FOLLOWING = 330,
     NULLS = 331,
     FIRST = 332,
     LAST = 333,
     ASC = 334,
     DESC = 335,
     DUMMYEXPR = 336,
     JOIN = 337,
     NATURAL = 338,
     LEFT = 339,
     RIGHT = 340,
     OUTER = 341,
     INNER = 342,
     CROSS = 343,
     ON = 344,
     USING = 345,
     FULL = 346,
     TYPE = 347,
     TRANSACTION = 348,
     WITH = 349,
     XOR = 350
   };
=======
  enum yytokentype
  {
    intConst = 258,
    floatConst = 259,
    stringConst = 260,
    identifier = 261,
    parameter = 262,
    comparisonOps = 263,
    SELECT = 264,
    INSERT = 265,
    UPDATE = 266,
    DELETE = 267,
    PROVENANCE = 268,
    OF = 269,
    BASERELATION = 270,
    SCN = 271,
    TIMESTAMP = 272,
    HAS = 273,
    TABLE = 274,
    ONLY = 275,
    UPDATED = 276,
    SHOW = 277,
    INTERMEDIATE = 278,
    USE = 279,
    TUPLE = 280,
    VERSIONS = 281,
    FROM = 282,
    AS = 283,
    WHERE = 284,
    DISTINCT = 285,
    STARALL = 286,
    AND = 287,
    OR = 288,
    LIKE = 289,
    NOT = 290,
    IN = 291,
    ISNULL = 292,
    BETWEEN = 293,
    EXCEPT = 294,
    EXISTS = 295,
    AMMSC = 296,
    NULLVAL = 297,
    ROWNUM = 298,
    ALL = 299,
    ANY = 300,
    IS = 301,
    SOME = 302,
    UNION = 303,
    INTERSECT = 304,
    MINUS = 305,
    INTO = 306,
    VALUES = 307,
    HAVING = 308,
    GROUP = 309,
    ORDER = 310,
    BY = 311,
    LIMIT = 312,
    SET = 313,
    INT = 314,
    BEGIN_TRANS = 315,
    COMMIT_TRANS = 316,
    ROLLBACK_TRANS = 317,
    CASE = 318,
    WHEN = 319,
    THEN = 320,
    ELSE = 321,
    END = 322,
    OVER_TOK = 323,
    PARTITION = 324,
    ROWS = 325,
    RANGE = 326,
    UNBOUNDED = 327,
    PRECEDING = 328,
    CURRENT = 329,
    ROW = 330,
    FOLLOWING = 331,
    NULLS = 332,
    FIRST = 333,
    LAST = 334,
    ASC = 335,
    DESC = 336,
    DUMMYEXPR = 337,
    JOIN = 338,
    NATURAL = 339,
    LEFT = 340,
    RIGHT = 341,
    OUTER = 342,
    INNER = 343,
    CROSS = 344,
    ON = 345,
    USING = 346,
    FULL = 347,
    TYPE = 348,
    TRANSACTION = 349,
    WITH = 350,
    XOR = 351
  };
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 29 "sql_parser.y"

    /* 
     * Declare some C structure those will be used as data type
     * for various tokens used in grammar rules.
     */
     Node *node;
     List *list;
     char *stringVal;
     int intVal;
     double floatVal;

<<<<<<< HEAD


/* Line 293 of yacc.c  */
#line 238 "sql_parser.tab.c"
} YYSTYPE;
=======
#line 236 "sql_parser.tab.c" /* yacc.c:355  */
};
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

<<<<<<< HEAD

/* Line 343 of yacc.c  */
#line 250 "sql_parser.tab.c"
=======
#line 251 "sql_parser.tab.c" /* yacc.c:358  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  186
/* YYNRULES -- Number of states.  */
#define YYNSTATES  361
=======
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,     2,     2,    12,    14,     2,
      19,    18,    10,     8,   110,     9,   111,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   109,
       2,    20,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    13,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,    17,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    16,    18,    20,
      22,    24,    28,    30,    32,    34,    38,    42,    44,    50,
      52,    54,    56,    64,    72,    79,    80,    85,    90,    91,
      94,    96,    99,   102,   105,   108,   111,   114,   120,   121,
     123,   129,   131,   135,   139,   143,   151,   156,   158,   160,
     164,   168,   172,   176,   181,   182,   184,   194,   195,   197,
     203,   205,   209,   211,   215,   217,   221,   223,   227,   231,
     233,   235,   237,   239,   241,   243,   245,   247,   249,   251,
     253,   255,   259,   263,   267,   271,   275,   279,   283,   287,
     291,   294,   300,   306,   312,   317,   320,   322,   327,   328,
     331,   332,   335,   341,   342,   346,   347,   350,   353,   358,
     360,   363,   366,   369,   372,   373,   376,   378,   382,   385,
     388,   391,   394,   396,   401,   405,   407,   411,   415,   420,
     426,   431,   437,   442,   444,   447,   449,   452,   455,   457,
     459,   464,   467,   471,   476,   477,   479,   485,   491,   495,
     502,   503,   507,   508,   511,   515,   517,   520,   524,   528,
     532,   538,   545,   551,   558,   563,   565,   567,   569,   570,
     572,   573,   577,   578,   581,   582,   586,   587,   590,   592,
     596,   600,   601,   603,   605,   606,   609
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     112,     0,    -1,   113,   108,    -1,   112,   113,   108,    -1,
     114,    -1,   115,    -1,   119,    -1,   116,    -1,   130,    -1,
     125,    -1,   127,    -1,    19,   115,    18,    -1,   134,    -1,
     120,    -1,   132,    -1,   106,   117,   115,    -1,   117,   109,
     118,    -1,   118,    -1,     6,    40,    19,   115,    18,    -1,
      71,    -1,    72,    -1,    73,    -1,    25,   121,   122,    26,
      19,   113,    18,    -1,    25,   121,   122,    26,    19,   112,
      18,    -1,    25,   121,   122,    26,   105,     5,    -1,    -1,
      40,    26,    28,     3,    -1,    40,    26,    29,     5,    -1,
      -1,   106,   123,    -1,   124,    -1,   123,   124,    -1,   104,
       5,    -1,    31,     6,    -1,    32,    33,    -1,    34,    35,
      -1,    37,    38,    -1,    24,   126,     6,    41,   168,    -1,
      -1,    39,    -1,    23,     6,    69,   128,   167,    -1,   129,
      -1,   128,   109,   129,    -1,   141,    17,   139,    -1,   141,
      17,   159,    -1,    22,    62,     6,    63,    19,   131,    18,
      -1,    22,    62,     6,   115,    -1,   140,    -1,     6,    -1,
     131,   109,     6,    -1,   131,   109,   140,    -1,   115,    60,
     115,    -1,   115,    61,   115,    -1,   115,    59,   133,   115,
      -1,    -1,    55,    -1,    21,   135,   136,   156,   167,   171,
     172,   173,   174,    -1,    -1,    42,    -1,    42,   101,    19,
     138,    18,    -1,   137,    -1,   136,   109,   137,    -1,   139,
      -1,   139,    40,     6,    -1,    10,    -1,     6,   110,    10,
      -1,   139,    -1,   138,   109,   139,    -1,    19,   139,    18,
      -1,   140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,
      -1,   145,    -1,   146,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,   139,     8,   139,    -1,   139,
       9,   139,    -1,   139,    10,   139,    -1,   139,    11,   139,
      -1,   139,    12,   139,    -1,   139,    13,   139,    -1,   139,
      14,   139,    -1,   139,    15,   139,    -1,   139,    17,   139,
      -1,    16,   139,    -1,     6,    19,   138,    18,   150,    -1,
      53,    19,   138,    18,   150,    -1,    74,   139,   147,   149,
      78,    -1,    74,   147,   149,    78,    -1,   147,   148,    -1,
     148,    -1,    75,   139,    76,   139,    -1,    -1,    77,   139,
      -1,    -1,    79,   151,    -1,    19,   152,   173,   153,    18,
      -1,    -1,    80,    67,   138,    -1,    -1,    81,   154,    -1,
      82,   154,    -1,    50,   155,    44,   155,    -1,   155,    -1,
      83,    84,    -1,    85,    86,    -1,   139,    84,    -1,   139,
      87,    -1,    -1,    39,   157,    -1,   158,    -1,   157,   109,
     158,    -1,     6,   165,    -1,     6,   164,    -1,   159,   165,
      -1,   159,   164,    -1,   161,    -1,    19,   161,    18,   164,
      -1,    19,   115,    18,    -1,     6,    -1,   160,   109,     6,
      -1,    19,   161,    18,    -1,   158,    95,    94,   158,    -1,
     158,    95,   162,    94,   158,    -1,   158,   100,    94,   158,
      -1,   158,   162,    94,   158,   163,    -1,   158,    94,   158,
     163,    -1,    96,    -1,    96,    98,    -1,    97,    -1,    97,
      98,    -1,   103,    98,    -1,   103,    -1,    99,    -1,   102,
      19,   160,    18,    -1,   101,   168,    -1,   165,     6,   166,
      -1,   165,    40,     6,   166,    -1,    -1,    27,    -1,    30,
      25,    19,   160,    18,    -1,    36,    25,    19,   160,    18,
      -1,    34,    35,    25,    -1,    34,    35,    25,    19,   160,
      18,    -1,    -1,    19,   160,    18,    -1,    -1,    41,   168,
      -1,    19,   168,    18,    -1,   139,    -1,    47,   168,    -1,
     168,    44,   168,    -1,   168,    45,   168,    -1,   168,    46,
     168,    -1,   168,    50,   139,    44,   139,    -1,   139,    17,
     169,    19,   115,    18,    -1,   139,    17,    19,   115,    18,
      -1,   139,   170,    48,    19,   115,    18,    -1,    52,    19,
     115,    18,    -1,    56,    -1,    55,    -1,    58,    -1,    -1,
      47,    -1,    -1,    65,    67,   138,    -1,    -1,    64,   168,
      -1,    -1,    66,    67,   175,    -1,    -1,    68,   140,    -1,
     176,    -1,   175,   109,   176,    -1,   139,   177,   178,    -1,
      -1,    91,    -1,    92,    -1,    -1,    88,    89,    -1,    88,
      90,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   134,   134,   140,   149,   154,   159,   164,   175,   176,
     177,   184,   185,   186,   187,   191,   199,   204,   212,   220,
     221,   222,   229,   240,   250,   262,   263,   268,   276,   277,
     285,   286,   294,   299,   304,   310,   316,   328,   337,   338,
     352,   360,   365,   373,   382,   397,   402,   416,   417,   475,
     480,   485,   493,   494,   503,   526,   527,   532,   544,   548,
     556,   561,   566,   571,   582,   583,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   612,   613,   614,   621,   627,
     646,   653,   660,   667,   674,   681,   690,   697,   706,   716,
     728,   737,   752,   757,   765,   770,   778,   786,   787,   798,
     799,   807,   815,   816,   824,   825,   834,   846,   851,   859,
     864,   869,   874,   887,   888,   892,   897,   906,   913,   922,
     929,   938,   946,   959,   967,   968,   972,   973,   980,   986,
     992,  1000,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1022,
    1023,  1027,  1034,  1044,  1045,  1053,  1061,  1069,  1076,  1087,
    1088,  1098,  1099,  1103,  1104,  1105,  1111,  1118,  1125,  1143,
    1151,  1156,  1163,  1176,  1184,  1185,  1186,  1190,  1191,  1195,
    1196,  1200,  1201,  1209,  1210,  1214,  1215,  1219,  1224,  1232,
    1244,  1245,  1250,  1258,  1259,  1264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "intConst", "floatConst", "stringConst",
  "identifier", "parameter", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "'&'", "'|'", "'!'", "comparisonOps", "')'", "'('", "'='", "SELECT",
  "INSERT", "UPDATE", "DELETE", "PROVENANCE", "OF", "BASERELATION", "SCN",
  "TIMESTAMP", "HAS", "TABLE", "ONLY", "UPDATED", "SHOW", "INTERMEDIATE",
  "USE", "TUPLE", "VERSIONS", "FROM", "AS", "WHERE", "DISTINCT", "STARALL",
  "AND", "OR", "LIKE", "NOT", "IN", "ISNULL", "BETWEEN", "EXCEPT",
<<<<<<< HEAD
  "EXISTS", "AMMSC", "NULLVAL", "ALL", "ANY", "IS", "SOME", "UNION",
  "INTERSECT", "MINUS", "INTO", "VALUES", "HAVING", "GROUP", "ORDER", "BY",
  "LIMIT", "SET", "INT", "BEGIN_TRANS", "COMMIT_TRANS", "ROLLBACK_TRANS",
  "CASE", "WHEN", "THEN", "ELSE", "END", "OVER_TOK", "PARTITION", "ROWS",
  "RANGE", "UNBOUNDED", "PRECEDING", "CURRENT", "ROW", "FOLLOWING",
  "NULLS", "FIRST", "LAST", "ASC", "DESC", "DUMMYEXPR", "JOIN", "NATURAL",
  "LEFT", "RIGHT", "OUTER", "INNER", "CROSS", "ON", "USING", "FULL",
  "TYPE", "TRANSACTION", "WITH", "XOR", "';'", "','", "'.'", "$accept",
  "stmtList", "stmt", "dmlStmt", "queryStmt", "withQuery", "withViewList",
  "withView", "transactionIdentifier", "provStmt", "optionalProvAsOf",
  "optionalProvWith", "provOptionList", "provOption", "deleteQuery",
  "fromString", "updateQuery", "setClause", "setExpression", "insertQuery",
  "insertList", "setOperatorQuery", "optionalAll", "selectQuery",
  "optionalDistinct", "selectClause", "selectItem", "exprList",
  "expression", "constant", "attributeRef", "sqlParameter",
  "binaryOperatorExpression", "unaryOperatorExpression", "sqlFunctionCall",
  "caseExpression", "caseWhenList", "caseWhen", "optionalCaseElse",
  "overClause", "windowSpec", "optWindowPart", "optWindowFrame",
  "windowBoundaries", "windowBound", "optionalFrom", "fromClause",
  "fromClauseItem", "subQuery", "identifierList", "fromJoinItem",
  "joinType", "joinCond", "optionalAlias", "optionalFromProv",
  "optionalAttrAlias", "optionalWhere", "whereExpression",
  "nestedSubQueryOperator", "optionalNot", "optionalGroupBy",
  "optionalHaving", "optionalOrderBy", "optionalLimit", "orderList",
  "orderExpr", "optionalSortOrder", "optionalNullOrder", 0
=======
  "EXISTS", "AMMSC", "NULLVAL", "ROWNUM", "ALL", "ANY", "IS", "SOME",
  "UNION", "INTERSECT", "MINUS", "INTO", "VALUES", "HAVING", "GROUP",
  "ORDER", "BY", "LIMIT", "SET", "INT", "BEGIN_TRANS", "COMMIT_TRANS",
  "ROLLBACK_TRANS", "CASE", "WHEN", "THEN", "ELSE", "END", "OVER_TOK",
  "PARTITION", "ROWS", "RANGE", "UNBOUNDED", "PRECEDING", "CURRENT", "ROW",
  "FOLLOWING", "NULLS", "FIRST", "LAST", "ASC", "DESC", "DUMMYEXPR",
  "JOIN", "NATURAL", "LEFT", "RIGHT", "OUTER", "INNER", "CROSS", "ON",
  "USING", "FULL", "TYPE", "TRANSACTION", "WITH", "XOR", "';'", "','",
  "'.'", "$accept", "stmtList", "stmt", "dmlStmt", "queryStmt",
  "withQuery", "withViewList", "withView", "transactionIdentifier",
  "provStmt", "optionalProvAsOf", "optionalProvWith", "provOptionList",
  "provOption", "deleteQuery", "fromString", "updateQuery", "setClause",
  "setExpression", "insertQuery", "insertContent", "setOperatorQuery",
  "optionalAll", "selectQuery", "optionalDistinct", "selectClause",
  "selectItem", "exprList", "expression", "constant", "attributeRef",
  "sqlParameter", "binaryOperatorExpression", "unaryOperatorExpression",
  "sqlFunctionCall", "caseExpression", "caseWhenList", "caseWhen",
  "optionalCaseElse", "overClause", "windowSpec", "optWindowPart",
  "optWindowFrame", "windowBoundaries", "windowBound", "optionalFrom",
  "fromClause", "fromClauseItem", "subQuery", "identifierList",
  "fromJoinItem", "joinType", "joinCond", "optionalAlias",
  "optionalFromProv", "optionalAttrAlias", "optionalWhere",
  "whereExpression", "nestedSubQueryOperator", "optionalNot",
  "optionalGroupBy", "optionalHaving", "optionalOrderBy", "optionalLimit",
  "orderList", "orderExpr", "optionalSortOrder", "optionalNullOrder", YY_NULLPTR
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    43,    45,
      42,    47,    37,    94,    38,   124,    33,   263,    41,    40,
      61,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,    59,
      44,    46
};
# endif

<<<<<<< HEAD
/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   116,   117,   117,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   125,   126,   126,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   132,   132,   132,   133,   133,   134,   135,   135,   135,
     136,   136,   137,   137,   137,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     142,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   148,   149,   149,
     150,   150,   151,   152,   152,   153,   153,   153,   154,   154,
     155,   155,   155,   155,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   162,   162,   162,   162,   162,   162,   162,
     163,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     166,   166,   167,   167,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   177,   177,   177,   178,   178,   178
};
=======
#define YYPACT_NINF -210

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-210)))

#define YYTABLE_NINF -168

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-168)))
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
<<<<<<< HEAD
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     3,     1,     5,     1,
       1,     1,     7,     7,     6,     0,     4,     4,     0,     2,
       1,     2,     2,     2,     2,     2,     2,     5,     0,     1,
       5,     1,     3,     3,     3,     7,     4,     1,     1,     3,
       3,     3,     3,     4,     0,     1,     9,     0,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     5,     5,     5,     4,     2,     1,     4,     0,     2,
       0,     2,     5,     0,     3,     0,     2,     2,     4,     1,
       2,     2,     2,     2,     0,     2,     1,     3,     2,     2,
       2,     2,     1,     4,     3,     1,     3,     3,     4,     5,
       4,     5,     4,     1,     2,     1,     2,     2,     1,     1,
       4,     2,     3,     4,     0,     1,     5,     5,     3,     6,
       0,     3,     0,     2,     3,     1,     2,     3,     3,     3,
       5,     6,     5,     6,     4,     1,     1,     1,     0,     1,
       0,     3,     0,     2,     0,     3,     0,     2,     1,     3,
       3,     0,     1,     1,     0,     2,     2
=======
     135,   155,   -24,   -30,    41,    25,    36,  -210,  -210,  -210,
      80,    15,   -18,  -210,   205,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,    82,   -22,   413,   121,   100,  -210,   183,
     165,    91,   162,    27,  -210,  -210,    86,  -210,   145,   155,
     155,  -210,   186,  -210,  -210,  -210,   -10,  -210,  -210,   421,
     421,   187,  -210,   307,   -20,  -210,   557,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,    30,   210,   176,    88,   181,   185,
     200,    80,   205,  -210,  -210,   155,  -210,  -210,   421,   421,
     215,   232,   600,   567,   421,   421,   469,    63,  -210,    44,
     413,   195,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   257,   147,   255,   205,  -210,  -210,   -29,  -210,   266,
     360,   282,   283,   289,   264,   268,   269,   299,   181,  -210,
      24,   155,  -210,  -210,    -8,   590,    -7,  -210,  -210,    -5,
     450,    63,   421,  -210,   243,   246,   300,   222,   351,   246,
    -210,  -210,   360,   284,   459,   459,   321,   321,   321,  -210,
     600,   521,   610,  -210,  -210,    -4,   421,   210,  -210,   438,
     360,   360,   334,   506,   359,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,   135,   343,   102,  -210,   421,   272,   272,
     421,   275,   590,  -210,  -210,   331,   322,   344,  -210,    39,
     300,   122,   351,   341,    44,    44,   129,   278,   279,  -210,
     273,   281,   276,  -210,    39,   359,   325,   316,   107,   393,
      -2,  -210,   381,   590,  -210,   489,    12,   359,   155,   339,
    -210,   353,   360,   360,   360,   421,    74,     4,  -210,  -210,
     590,   389,  -210,  -210,   590,  -210,   391,   386,   402,   403,
     424,   161,  -210,   163,   351,   446,    44,   336,  -210,  -210,
      44,  -210,    44,   421,   360,   366,  -210,  -210,  -210,   381,
    -210,   170,   381,  -210,  -210,  -210,   419,   420,    79,    79,
     127,   547,  -210,  -210,   369,  -210,   447,   454,   447,   447,
    -210,   403,   178,  -210,    39,   360,   456,  -210,  -210,    44,
    -210,   446,   375,   359,   422,   418,  -210,   217,   155,   155,
     421,   426,   366,     8,   447,     9,    11,  -210,   359,   447,
    -210,  -210,   421,   333,  -210,  -210,   313,   329,   590,   421,
      67,  -210,    14,  -210,  -210,    26,   235,   379,  -210,  -210,
    -210,  -210,   375,   265,   265,   474,  -210,  -210,  -210,  -210,
     406,   421,   286,   423,   425,   245,  -210,  -210,  -210,  -210,
      95,  -210,  -210,   461,  -210,  -210,  -210,  -210,  -210,  -210,
     286,  -210
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    55,     0,     0,    38,    25,    19,    20,    21,
       0,     0,     0,     4,     5,     7,     6,    13,     9,    10,
       8,    14,    12,     0,    56,     0,     0,     0,    39,     0,
       0,    28,     0,     0,    17,     1,     0,     2,    52,     0,
       0,    11,     0,    75,    76,    77,    78,    79,    62,     0,
       0,     0,    74,     0,   113,    58,    60,    67,    68,    69,
      70,    71,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     3,    53,     0,    49,    50,     0,     0,
       0,    78,    89,     0,     0,     0,     0,    97,    95,     0,
       0,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    45,    78,   151,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,    16,    51,     0,    64,     0,    63,    66,     0,
       0,    97,     0,    94,     0,   143,     0,   114,   115,   143,
     121,    59,     0,   169,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    61,   124,     0,     0,     0,    40,     0,
       0,     0,     0,   154,    37,    26,    27,    33,    34,    35,
      36,    32,    31,     0,     0,     0,    57,     0,    99,    99,
       0,     0,    98,    93,   144,     0,     0,     0,   118,   117,
       0,     0,     0,   121,     0,     0,     0,   132,   134,   138,
       0,   137,     0,   120,   119,   152,     0,   171,     0,     0,
       0,    42,     0,    43,    44,   154,     0,   155,     0,     0,
     168,     0,     0,     0,     0,     0,     0,     0,    24,    18,
      65,     0,    90,    91,    96,    92,     0,     0,     0,   149,
       0,     0,   123,   126,   116,     0,     0,     0,   133,   135,
       0,   136,     0,     0,     0,   173,    46,   125,    47,     0,
     153,     0,     0,   165,   164,   166,     0,     0,   156,   157,
     158,     0,    23,    22,   102,   100,     0,   147,     0,     0,
     141,   149,   123,   122,     0,     0,     0,   131,   127,     0,
     129,     0,   170,   172,     0,   175,   163,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,   142,   140,     0,
     128,   130,     0,     0,    54,   161,     0,     0,   159,     0,
     104,   145,     0,   146,   150,     0,   180,   174,   177,   176,
     160,   162,   103,     0,     0,     0,   148,   139,   181,   182,
     183,     0,     0,     0,     0,     0,   105,   108,   106,   101,
       0,   179,   178,     0,   109,   110,   111,   112,   184,   185,
       0,   107
};

<<<<<<< HEAD
/* YYDEFGOTO[NTERM-NUM].  */
=======
  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,   337,     5,  -210,     2,  -210,  -210,   440,  -210,  -210,
    -210,  -210,  -210,   404,  -210,  -210,  -210,  -210,   352,  -210,
     317,  -210,  -210,  -210,  -210,  -210,   434,   -78,   -25,   213,
     -42,  -210,  -210,  -210,  -210,  -210,   442,   -70,   408,   361,
    -210,  -210,  -210,   218,  -209,  -210,  -210,   -85,   392,    20,
    -105,   367,   292,  -132,  -131,   305,   466,  -140,  -210,  -210,
    -210,  -210,   285,  -210,  -210,   247,  -210,  -210
};

  /* YYDEFGOTO[NTERM-NUM].  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    36,    13,    14,    15,    33,    34,    16,    17,
      31,    69,   118,   119,    18,    29,    19,   107,   108,    20,
     105,    21,    75,    22,    25,    54,    55,   124,   163,    57,
      58,    59,    60,    61,    62,    63,    87,    88,   134,   232,
     275,   302,   335,   346,   347,    91,   137,   192,   139,   155,
     140,   202,   287,   188,   189,   280,   143,   164,   266,   221,
     207,   255,   295,   314,   327,   328,   340,   351
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -282
static const yytype_int16 yypact[] =
{
     130,   352,   -12,   -29,    43,    22,    37,  -282,  -282,  -282,
      73,    15,   -16,  -282,   253,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,    80,   -17,   412,    93,    55,  -282,   126,
     111,    61,   132,    29,  -282,  -282,    77,  -282,   124,   352,
     352,  -282,   178,  -282,  -282,  -282,    -9,  -282,  -282,   432,
     432,   197,   201,   -26,  -282,   545,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,    26,   186,   170,    27,    94,   193,   202,
      73,   253,  -282,  -282,   352,  -282,  -282,   432,   432,   212,
     210,   277,   555,   432,   432,   459,    71,  -282,    38,   412,
     189,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     229,   218,   253,  -282,   -24,  -282,   221,   359,   245,   251,
     244,   226,   231,   234,   262,    94,  -282,    -5,   352,  -282,
    -282,    -7,   566,    -6,  -282,  -282,    -2,   449,    71,   432,
    -282,   195,   493,   175,   169,   290,   493,  -282,  -282,   359,
     228,   315,   315,   291,   291,   291,  -282,   277,   470,   336,
    -282,   420,   186,  -282,   437,   359,   359,   286,   504,   168,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   130,   304,
     109,  -282,   432,   243,   243,   432,   257,   566,  -282,  -282,
     349,   296,   351,  -282,    23,   175,   115,   290,   321,    38,
      38,   306,   270,   293,  -282,   246,   298,   300,  -282,    23,
     168,   331,   335,  -282,     4,  -282,  -282,   376,   566,  -282,
     483,   292,   168,   352,   314,  -282,   356,   359,   359,   359,
     432,    72,    28,  -282,  -282,   566,   388,  -282,  -282,   566,
    -282,   389,   385,   394,   395,   414,   165,  -282,   150,   290,
     492,    38,   327,  -282,  -282,    38,  -282,    38,   432,   359,
     366,  -282,   499,   376,  -282,   173,   376,  -282,  -282,  -282,
     415,   430,    68,    68,   112,   527,  -282,  -282,   372,  -282,
     448,   436,   448,   448,  -282,   395,   192,  -282,    23,   359,
     456,  -282,  -282,    38,  -282,   492,   368,   168,   421,   431,
    -282,  -282,  -282,   209,   352,   352,   432,   422,   366,  -282,
       8,   448,    10,    13,  -282,   168,   448,  -282,  -282,   432,
     442,  -282,  -282,   239,   242,   566,   432,    34,  -282,   501,
      14,  -282,  -282,    25,   232,   399,  -282,  -282,  -282,  -282,
     368,   258,   258,   491,  -282,  -282,  -282,  -282,  -282,   434,
     432,   276,   426,   438,   343,  -282,  -282,  -282,  -282,    75,
    -282,  -282,   482,  -282,  -282,  -282,  -282,  -282,  -282,   276,
    -282
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,   360,     5,  -282,     2,  -282,  -282,   462,  -282,  -282,
    -282,  -282,  -282,   418,  -282,  -282,  -282,  -282,   391,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,   457,   -77,   -25,  -144,
     -43,  -282,  -282,  -282,  -282,  -282,   460,   -66,   419,   374,
    -282,  -282,  -282,   217,  -281,  -282,  -282,   -84,   396,  -113,
    -110,   370,   297,  -128,  -127,   309,   486,  -137,  -282,  -282,
    -282,  -282,   299,  -282,  -282,   256,  -282,  -282
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -169
static const yytype_int16 yytable[] =
{
      56,   126,   205,    23,   138,    12,   129,   203,   204,    79,
     176,   178,   142,   179,   208,    35,   258,   133,    24,    89,
     216,   217,   273,   109,    82,    83,   321,   323,    86,   324,
     260,   193,   336,    26,     1,    72,     2,     3,     4,     5,
       6,    76,    77,   173,   337,   239,     1,    27,     2,   102,
     135,     2,     6,   125,   125,     6,   222,   223,   224,   125,
     130,   133,   225,   136,    28,    56,   104,   144,   145,   146,
     147,   148,   149,   150,   151,   152,    30,   123,   210,   240,
      42,   157,   268,   269,   270,   193,    32,     7,     8,     9,
      90,    37,   272,     1,   103,     2,     3,     4,     5,     6,
      41,    80,   177,   177,    23,   177,   209,   182,   177,   244,
     245,   283,   284,    37,   293,   109,   111,   112,   209,   209,
     229,   209,    10,   175,   209,   224,     1,    64,     2,   225,
     174,   125,     6,   353,   213,   215,   209,    71,   191,    85,
     242,   132,    38,    39,    40,   308,     7,     8,     9,   333,
     334,   361,   230,   154,     1,   234,     2,     3,     4,     5,
       6,   288,    38,    39,    40,   290,     1,   291,     2,  -143,
      65,   103,     6,  -168,     1,   292,     2,  -168,   227,   282,
       6,    10,    38,    39,    40,   358,   359,    83,   296,    66,
     184,    67,   241,   185,   152,    73,   -11,   186,    68,   187,
     271,    74,    70,  -143,   310,    78,    84,     7,     8,     9,
     104,   120,   113,   114,   191,   115,   106,   110,   116,   121,
     261,    38,    39,    40,   246,   127,   197,   198,   125,   199,
      38,    39,    40,   201,    83,   315,   142,    83,   -11,   -11,
     -11,   332,    10,    92,    93,    94,    95,    96,    97,    98,
      99,    79,   100,    92,    93,    94,    95,    96,    97,    98,
      99,    23,   100,   153,   297,    38,    39,    40,    43,    44,
      45,    81,    47,   184,   156,   318,   185,    38,    39,    40,
     186,    49,   187,   159,    50,   165,   117,   326,   166,    43,
      44,    45,    81,    47,   125,   167,   303,   168,   305,   306,
     316,   317,    49,   169,   171,    50,   135,   170,   345,   345,
      43,    44,    45,    81,    47,   342,   326,   345,    51,   190,
      52,     2,   183,    49,   322,     6,    50,   338,   339,   325,
     356,   330,   194,   357,    97,   345,    43,    44,    45,    51,
      53,    52,    43,    44,    45,    81,    47,   331,   228,   343,
     206,   344,   231,   218,   235,    49,   236,   237,   262,   243,
      51,    53,    52,    43,    44,    45,    81,    47,   250,   238,
     343,   252,   344,    38,    39,    40,    49,   248,   249,   160,
     251,   254,    53,    85,    43,    44,    45,    81,    47,    38,
      39,    40,    51,   253,    52,   263,   264,    49,   265,   257,
     259,   267,     2,   222,   223,   224,     6,   161,   274,   225,
     276,   277,   162,    51,    53,    52,    43,    44,    45,    46,
      47,   278,   279,    48,    43,    44,    45,    81,    47,    49,
     281,   289,    50,   294,    51,    53,    52,    49,   298,   299,
      50,    43,    44,    45,    81,    47,   195,   196,   197,   198,
     301,   199,   200,   154,    49,   201,    53,   212,    92,    93,
      94,    95,    96,    97,    98,    99,    51,   100,    52,    94,
      95,    96,    97,   304,    51,   309,    52,    92,    93,    94,
      95,    96,    97,    98,    99,   177,   100,   313,    53,   341,
     312,    51,   349,    52,   319,   350,    53,    92,    93,    94,
      95,    96,    97,    98,    99,   360,   219,   128,   354,   211,
     226,   122,   355,    53,    92,    93,    94,    95,    96,    97,
      98,    99,   172,   219,   141,   256,   329,   180,   131,    92,
      93,    94,    95,    96,    97,    98,   220,  -167,   100,   181,
     233,   195,   196,   197,   198,    85,   199,   200,   285,   286,
     201,   214,   348,   220,  -167,    92,    93,    94,    95,    96,
      97,    98,    99,   247,   100,    92,    93,    94,    95,    96,
      97,    98,    99,   158,   100,    92,    93,    94,    95,    96,
      97,    98,    99,   311,   100,   128,   307,   320,   352,     0,
       0,   300,     0,     0,     0,     0,     0,   101,    92,    93,
      94,    95,    96,    97,    98,    99,     0,   100,    92,    93,
      94,    95,    96,    97,     0,     0,     0,   100,    92,    93,
      94,    95,    96,    97
};

<<<<<<< HEAD
#define yypact_value_is_default(yystate) \
  ((yystate) == (-282))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-169))

static const yytype_uint16 yycheck[] =
=======
static const yytype_int16 yycheck[] =
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
{
      25,    79,   142,     1,    89,     0,    84,   139,   139,    19,
      18,    18,    41,    18,    18,     0,    18,    87,    42,    39,
     160,   161,    18,    65,    49,    50,    18,    18,    53,    18,
      18,   136,    18,    63,    19,    33,    21,    22,    23,    24,
      25,    39,    40,    19,    18,     6,    19,     6,    21,    19,
       6,    21,    25,    78,    79,    25,    44,    45,    46,    84,
      85,   131,    50,    19,    39,    90,    64,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    40,    75,   156,    40,
     102,   110,   222,   223,   224,   190,     6,    72,    73,    74,
     110,   109,    18,    19,    64,    21,    22,    23,    24,    25,
      18,   111,   110,   110,   102,   110,   110,   132,   110,   194,
     195,   243,   243,   109,   254,   157,    28,    29,   110,   110,
      18,   110,   107,   121,   110,    46,    19,     6,    21,    50,
     106,   156,    25,   342,   159,   160,   110,   110,   136,    76,
      18,    78,    60,    61,    62,   285,    72,    73,    74,    82,
      83,   360,   177,     6,    19,   180,    21,    22,    23,    24,
      25,   246,    60,    61,    62,   250,    19,   252,    21,     6,
      70,    64,    25,    46,    19,   253,    21,    50,   173,    18,
      25,   107,    60,    61,    62,    90,    91,   212,    18,     6,
      27,    26,   190,    30,   219,   109,    18,    34,   107,    36,
     225,    56,    40,    40,   289,    19,    19,    72,    73,    74,
     208,    26,    31,    32,   212,    34,     6,    41,    37,    19,
     218,    60,    61,    62,    95,    10,    97,    98,   253,   100,
      60,    61,    62,   104,   259,    18,    41,   262,    60,    61,
      62,   319,   107,     8,     9,    10,    11,    12,    13,    14,
      15,    19,    17,     8,     9,    10,    11,    12,    13,    14,
      15,   259,    17,     6,   262,    60,    61,    62,     3,     4,
       5,     6,     7,    27,    19,   300,    30,    60,    61,    62,
      34,    16,    36,    17,    19,     3,   105,   312,     5,     3,
       4,     5,     6,     7,   319,     6,   276,    33,   278,   279,
     298,   299,    16,    35,     5,    19,     6,    38,   333,   334,
       3,     4,     5,     6,     7,    50,   341,   342,    53,    19,
      55,    21,    79,    16,   304,    25,    19,    92,    93,   309,
      85,    18,   110,    88,    13,   360,     3,     4,     5,    53,
      75,    55,     3,     4,     5,     6,     7,    18,     5,    84,
      66,    86,    80,    19,    79,    16,    25,    35,    19,    18,
      53,    75,    55,     3,     4,     5,     6,     7,    95,    25,
      84,    95,    86,    60,    61,    62,    16,    99,    99,    19,
      99,    65,    75,    76,     3,     4,     5,     6,     7,    60,
      61,    62,    53,    68,    55,    56,    57,    16,    59,     6,
      19,    48,    21,    44,    45,    46,    25,    47,    19,    50,
      19,    25,    52,    53,    75,    55,     3,     4,     5,     6,
       7,    19,    19,    10,     3,     4,     5,     6,     7,    16,
       6,    95,    19,    67,    53,    75,    55,    16,    19,    19,
      19,     3,     4,     5,     6,     7,    95,    96,    97,    98,
      81,   100,   101,     6,    16,   104,    75,    19,     8,     9,
      10,    11,    12,    13,    14,    15,    53,    17,    55,    10,
      11,    12,    13,    19,    53,    19,    55,     8,     9,    10,
      11,    12,    13,    14,    15,   110,    17,    69,    75,   110,
      68,    53,    18,    55,    68,    89,    75,     8,     9,    10,
      11,    12,    13,    14,    15,    44,    17,    18,    85,   157,
     173,    71,    87,    75,     8,     9,    10,    11,    12,    13,
      14,    15,   118,    17,    90,   208,   313,    77,    86,     8,
       9,    10,    11,    12,    13,    14,    47,    48,    17,   131,
     179,    95,    96,    97,    98,    76,   100,   101,   102,   103,
     104,   159,   334,    47,    48,     8,     9,    10,    11,    12,
      13,    14,    15,   196,    17,     8,     9,    10,    11,    12,
      13,    14,    15,   107,    17,     8,     9,    10,    11,    12,
      13,    14,    15,   291,    17,    18,   281,   302,   341,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    40,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    17,     8,     9,
      10,    11,    12,    13
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    21,    22,    23,    24,    25,    72,    73,    74,
     107,   113,   114,   115,   116,   117,   120,   121,   126,   128,
     131,   133,   135,   116,    42,   136,    63,     6,    39,   127,
      40,   122,     6,   118,   119,     0,   114,   109,    60,    61,
      62,    18,   102,     3,     4,     5,     6,     7,    10,    16,
      19,    53,    55,    75,   137,   138,   140,   141,   142,   143,
     144,   145,   146,   147,     6,    70,     6,    26,   107,   123,
      40,   110,   116,   109,    56,   134,   116,   116,    19,    19,
     111,     6,   140,   140,    19,    76,   140,   148,   149,    39,
     110,   157,     8,     9,    10,    11,    12,    13,    14,    15,
      17,    40,    19,    64,   116,   132,     6,   129,   130,   142,
      41,    28,    29,    31,    32,    34,    37,   105,   124,   125,
      26,    19,   119,   116,   139,   140,   139,    10,    18,   139,
     140,   148,    78,   149,   150,     6,    19,   158,   159,   160,
     162,   138,    41,   168,   140,   140,   140,   140,   140,   140,
     140,   140,   140,     6,     6,   161,    19,   110,   168,    17,
      19,    47,    52,   140,   169,     3,     5,     6,    33,    35,
      38,     5,   125,    19,   106,   116,    18,   110,    18,    18,
      77,   150,   140,    79,    27,    30,    34,    36,   165,   166,
      19,   116,   159,   162,   110,    95,    96,    97,    98,   100,
     101,   104,   163,   165,   166,   169,    66,   172,    18,   110,
     139,   130,    19,   140,   160,   140,   169,   169,    19,    17,
      47,   171,    44,    45,    46,    50,   113,   114,     5,    18,
     140,    80,   151,   151,   140,    79,    25,    35,    25,     6,
      40,   116,    18,    18,   159,   159,    95,   163,    99,    99,
      95,    99,    95,    68,    65,   173,   132,     6,    18,    19,
      18,   116,    19,    56,    57,    59,   170,    48,   169,   169,
     169,   140,    18,    18,    19,   152,    19,    25,    19,    19,
     167,     6,    18,   165,   166,   102,   103,   164,   159,    95,
     159,   159,   139,   169,    67,   174,    18,   116,    19,    19,
      44,    81,   153,   161,    19,   161,   161,   167,   169,    19,
     159,   164,    68,    69,   175,    18,   116,   116,   140,    68,
     174,    18,   161,    18,    18,   161,   140,   176,   177,   141,
      18,    18,   139,    82,    83,   154,    18,    18,    92,    93,
     178,   110,    50,    84,    86,   140,   155,   156,   155,    18,
      89,   179,   177,   156,    85,    87,    85,    88,    90,    91,
      44,   156
};

<<<<<<< HEAD
#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif
=======
  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   117,   118,   118,   119,   120,
     120,   120,   121,   121,   121,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   125,   125,   125,   126,   127,   127,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   133,   134,   134,   135,   136,   136,   136,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   145,
     146,   146,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   153,   153,   154,   154,   154,   155,   155,   156,
     156,   156,   156,   157,   157,   158,   158,   159,   159,   159,
     159,   159,   159,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   163,   163,   163,   163,   163,   163,   163,   164,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     178,   178,   178,   179,   179,   179
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     3,     1,     5,     1,
       1,     1,     7,     7,     6,     0,     4,     4,     0,     2,
       1,     2,     2,     2,     2,     2,     2,     5,     0,     1,
       5,     1,     3,     3,     3,     4,     7,     4,     1,     3,
       3,     4,     0,     1,     9,     0,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       5,     5,     5,     4,     2,     1,     4,     0,     2,     0,
       2,     5,     0,     3,     0,     2,     2,     4,     1,     2,
       2,     2,     2,     0,     2,     1,     3,     2,     2,     2,
       2,     1,     4,     3,     1,     3,     3,     4,     5,     4,
       5,     4,     1,     2,     1,     2,     2,     1,     1,     4,
       2,     3,     4,     0,     1,     5,     5,     3,     6,     0,
       3,     0,     2,     3,     1,     2,     3,     3,     3,     5,
       6,     5,     6,     4,     1,     1,     1,     0,     1,     0,
       3,     0,     2,     0,     3,     0,     2,     1,     3,     3,
       0,     1,     1,     0,     2,     2
};

>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
<<<<<<< HEAD

/* Line 1806 of yacc.c  */
#line 134 "sql_parser.y"
=======
#line 135 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("stmtList::stmt"); 
				(yyval.list) = singleton((yyvsp[(1) - (2)].node));
				bisonParseResult = (Node *) (yyval.list);	 
			}
<<<<<<< HEAD
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 140 "sql_parser.y"
=======
#line 1669 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 141 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("stmtlist::stmtList::stmt");
				(yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(2) - (3)].node));	
				bisonParseResult = (Node *) (yyval.list); 
			}
<<<<<<< HEAD
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 149 "sql_parser.y"
=======
#line 1679 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 150 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
            RULELOG("stmt::dmlStmt");
            (yyval.node) = (yyvsp[(1) - (1)].node);
        }
<<<<<<< HEAD
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 154 "sql_parser.y"
=======
#line 1688 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 155 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
            RULELOG("stmt::queryStmt");
            (yyval.node) = (yyvsp[(1) - (1)].node);
        }
<<<<<<< HEAD
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 159 "sql_parser.y"
=======
#line 1697 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 160 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
            RULELOG("stmt::transactionIdentifier");
            (yyval.node) = (Node *) createTransactionStmt((yyvsp[(1) - (1)].stringVal));
        }
<<<<<<< HEAD
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 164 "sql_parser.y"
=======
#line 1706 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 165 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
			RULELOG("stmt::withQuery"); 
			(yyval.node) = (yyvsp[(1) - (1)].node); 
		}
<<<<<<< HEAD
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 174 "sql_parser.y"
    { RULELOG("dmlStmt::insertQuery"); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 175 "sql_parser.y"
    { RULELOG("dmlStmt::deleteQuery"); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 176 "sql_parser.y"
    { RULELOG("dmlStmt::updateQuery"); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 183 "sql_parser.y"
    { RULELOG("queryStmt::bracketedQuery"); (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 184 "sql_parser.y"
    { RULELOG("queryStmt::selectQuery"); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 185 "sql_parser.y"
    { RULELOG("queryStmt::provStmt"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 186 "sql_parser.y"
    { RULELOG("queryStmt::setOperatorQuery"); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 191 "sql_parser.y"
=======
#line 1715 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 175 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("dmlStmt::insertQuery"); }
#line 1721 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 176 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("dmlStmt::deleteQuery"); }
#line 1727 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 177 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("dmlStmt::updateQuery"); }
#line 1733 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 184 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("queryStmt::bracketedQuery"); (yyval.node) = (yyvsp[-1].node); }
#line 1739 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 185 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("queryStmt::selectQuery"); }
#line 1745 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 186 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("queryStmt::provStmt"); }
#line 1751 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 187 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("queryStmt::setOperatorQuery"); }
#line 1757 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 192 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("withQuery::withViewList::queryStmt");
			(yyval.node) = (Node *) createWithStmt((yyvsp[(2) - (3)].list), (yyvsp[(3) - (3)].node));
		}
<<<<<<< HEAD
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 199 "sql_parser.y"
=======
#line 1766 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 200 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("withViewList::list::view");
			(yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
		}
<<<<<<< HEAD
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 204 "sql_parser.y"
=======
#line 1775 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("withViewList::view");
			(yyval.list) = singleton((yyvsp[(1) - (1)].node));
		}
<<<<<<< HEAD
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 212 "sql_parser.y"
=======
#line 1784 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 213 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("withView::ident::AS:queryStmt");
			(yyval.node) = (Node *) createNodeKeyValue((Node *) createConstString((yyvsp[(1) - (5)].stringVal)), (yyvsp[(4) - (5)].node));
		}
<<<<<<< HEAD
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 219 "sql_parser.y"
    { RULELOG("transactionIdentifier::BEGIN"); (yyval.stringVal) = strdup("TRANSACTION_BEGIN"); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 220 "sql_parser.y"
    { RULELOG("transactionIdentifier::COMMIT"); (yyval.stringVal) = strdup("TRANSACTION_COMMIT"); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 221 "sql_parser.y"
    { RULELOG("transactionIdentifier::ROLLBACK"); (yyval.stringVal) = strdup("TRANSACTION_ABORT"); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 229 "sql_parser.y"
=======
#line 1793 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 220 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("transactionIdentifier::BEGIN"); (yyval.stringVal) = strdup("TRANSACTION_BEGIN"); }
#line 1799 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 221 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("transactionIdentifier::COMMIT"); (yyval.stringVal) = strdup("TRANSACTION_COMMIT"); }
#line 1805 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 222 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("transactionIdentifier::ROLLBACK"); (yyval.stringVal) = strdup("TRANSACTION_ABORT"); }
#line 1811 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 230 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
            RULELOG("provStmt::stmt");
            Node *stmt = (yyvsp[(6) - (7)].node);
	    	ProvenanceStmt *p = createProvenanceStmt(stmt);
		    p->inputType = isQBUpdate(stmt) ? PROV_INPUT_UPDATE : PROV_INPUT_QUERY;
		    p->provType = PROV_PI_CS;
		    p->asOf = (Node *) (yyvsp[(2) - (7)].node);
		    p->options = (yyvsp[(3) - (7)].list);
            (yyval.node) = (Node *) p;
        }
<<<<<<< HEAD
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 240 "sql_parser.y"
=======
#line 1826 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 241 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("provStmt::stmtlist");
			ProvenanceStmt *p = createProvenanceStmt((Node *) (yyvsp[(6) - (7)].list));
			p->inputType = PROV_INPUT_UPDATE_SEQUENCE;
			p->provType = PROV_PI_CS;
			p->asOf = (Node *) (yyvsp[(2) - (7)].node);
			p->options = (yyvsp[(3) - (7)].list);
			(yyval.node) = (Node *) p;
		}
<<<<<<< HEAD
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 250 "sql_parser.y"
=======
#line 1840 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 251 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("provStmt::transaction");
			ProvenanceStmt *p = createProvenanceStmt((Node *) createConstString((yyvsp[(6) - (6)].stringVal)));
			p->inputType = PROV_INPUT_TRANSACTION;
			p->provType = PROV_PI_CS;
			p->options = (yyvsp[(3) - (6)].list);
			(yyval.node) = (Node *) p;
		}
<<<<<<< HEAD
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 261 "sql_parser.y"
    { RULELOG("optionalProvAsOf::EMPTY"); (yyval.node) = NULL; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 263 "sql_parser.y"
=======
#line 1853 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 262 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalProvAsOf::EMPTY"); (yyval.node) = NULL; }
#line 1859 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 264 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("optionalProvAsOf::SCN");
			(yyval.node) = (Node *) createConstLong((yyvsp[(4) - (4)].intVal));
		}
<<<<<<< HEAD
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 268 "sql_parser.y"
=======
#line 1868 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 269 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("optionalProvAsOf::TIMESTAMP");
			(yyval.node) = (Node *) createConstString((yyvsp[(4) - (4)].stringVal));
		}
<<<<<<< HEAD
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 275 "sql_parser.y"
    { RULELOG("optionalProvWith::EMPTY"); (yyval.list) = NIL; }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 277 "sql_parser.y"
=======
#line 1877 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 276 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalProvWith::EMPTY"); (yyval.list) = NIL; }
#line 1883 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 278 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("optionalProvWith::WITH");
			(yyval.list) = (yyvsp[(2) - (2)].list);
		}
<<<<<<< HEAD
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 284 "sql_parser.y"
    { RULELOG("provOptionList::option"); (yyval.list) = singleton((yyvsp[(1) - (1)].node)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 286 "sql_parser.y"
=======
#line 1892 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 285 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("provOptionList::option"); (yyval.list) = singleton((yyvsp[0].node)); }
#line 1898 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 287 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
			RULELOG("provOptionList::list"); 
			(yyval.list) = appendToTailOfList((yyvsp[(1) - (2)].list),(yyvsp[(2) - (2)].node)); 
		}
<<<<<<< HEAD
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 294 "sql_parser.y"
=======
#line 1907 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 295 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
			RULELOG("provOption::TYPE"); 
			(yyval.node) = (Node *) createStringKeyValue("TYPE", (yyvsp[(2) - (2)].stringVal)); 
		}
<<<<<<< HEAD
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 299 "sql_parser.y"
=======
#line 1916 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 300 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("provOption::TABLE");
			(yyval.node) = (Node *) createStringKeyValue("TABLE", (yyvsp[(2) - (2)].stringVal));
		}
<<<<<<< HEAD
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 304 "sql_parser.y"
=======
#line 1925 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 305 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("provOption::ONLY::UPDATED");
			(yyval.node) = (Node *) createNodeKeyValue((Node *) createConstString(PROP_PC_ONLY_UPDATED), 
					(Node *) createConstBool(TRUE));
		}
<<<<<<< HEAD
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 310 "sql_parser.y"
=======
#line 1935 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 311 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("provOption::SHOW::INTERMEDIATE");
			(yyval.node) = (Node *) createNodeKeyValue((Node *) createConstString(PROP_PC_SHOW_INTERMEDIATE), 
					(Node *) createConstBool(TRUE));
		}
<<<<<<< HEAD
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 316 "sql_parser.y"
=======
#line 1945 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 317 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
			RULELOG("provOption::TUPLE::VERSIONS");
			(yyval.node) = (Node *) createNodeKeyValue((Node *) createConstString(PROP_PC_TUPLE_VERSIONS),
					(Node *) createConstBool(TRUE));
		}
<<<<<<< HEAD
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 328 "sql_parser.y"
=======
#line 1955 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 329 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
             RULELOG("deleteQuery");
             (yyval.node) = (Node *) createDelete((yyvsp[(3) - (5)].stringVal), (yyvsp[(5) - (5)].node));
         }
<<<<<<< HEAD
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 336 "sql_parser.y"
    { RULELOG("fromString::NULL"); (yyval.stringVal) = NULL; }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 337 "sql_parser.y"
    { RULELOG("fromString::FROM"); (yyval.stringVal) = (yyvsp[(1) - (1)].stringVal); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 352 "sql_parser.y"
=======
#line 1964 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 337 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("fromString::NULL"); (yyval.stringVal) = NULL; }
#line 1970 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 338 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("fromString::FROM"); (yyval.stringVal) = (yyvsp[0].stringVal); }
#line 1976 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 353 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
                RULELOG(updateQuery); 
                (yyval.node) = (Node *) createUpdate((yyvsp[(2) - (5)].stringVal), (yyvsp[(4) - (5)].list), (yyvsp[(5) - (5)].node)); 
            }
<<<<<<< HEAD
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 360 "sql_parser.y"
=======
#line 1985 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 361 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("setClause::setExpression");
                (yyval.list) = singleton((yyvsp[(1) - (1)].node));
            }
<<<<<<< HEAD
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 365 "sql_parser.y"
=======
#line 1994 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 366 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("setClause::setClause::setExpression");
                (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
            }
<<<<<<< HEAD
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 373 "sql_parser.y"
=======
#line 2003 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 374 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                if (!strcmp((yyvsp[(2) - (3)].stringVal),"=")) {
                    RULELOG("setExpression::attributeRef::expression");
                    List *expr = singleton((yyvsp[(1) - (3)].node));
                    expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                    (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
                }
            }
<<<<<<< HEAD
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 382 "sql_parser.y"
=======
#line 2016 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 383 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                if (!strcmp((yyvsp[(2) - (3)].stringVal), "=")) {
                    RULELOG("setExpression::attributeRef::queryStmt");
                    List *expr = singleton((yyvsp[(1) - (3)].node));
                    expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                    (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
                }
            }
<<<<<<< HEAD
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 397 "sql_parser.y"
    { 
            	RULELOG("insertQuery::insertList"); 
            	(yyval.node) = (Node *) createInsert((yyvsp[(3) - (7)].stringVal),(Node *) (yyvsp[(6) - (7)].list), NULL); 
        	}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 402 "sql_parser.y"
    { 
                RULELOG("insertQuery::queryStmt");
                (yyval.node) = (Node *) createInsert((yyvsp[(3) - (4)].stringVal), (yyvsp[(4) - (4)].node), NULL);
            }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 410 "sql_parser.y"
    { 
            	RULELOG("insertList::constant");
            	(yyval.list) = singleton((yyvsp[(1) - (1)].node)); 
            }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 415 "sql_parser.y"
    {
                RULELOG("insertList::IDENTIFIER");
                (yyval.list) = singleton(createAttributeReference((yyvsp[(1) - (1)].stringVal)));
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 420 "sql_parser.y"
    { 
                RULELOG("insertList::insertList::::IDENTIFIER");
                (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), createAttributeReference((yyvsp[(3) - (3)].stringVal)));
            }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 425 "sql_parser.y"
    { 
            	RULELOG("insertList::insertList::constant");
            	(yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 439 "sql_parser.y"
=======
#line 2029 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 398 "sql_parser.y" /* yacc.c:1646  */
    { 
           	RULELOG("insertQuery::insertList"); 
           	(yyval.node) = (Node *) createInsert((yyvsp[-1].stringVal),(Node *) (yyvsp[0].node), NIL); 
        }
#line 2038 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 403 "sql_parser.y" /* yacc.c:1646  */
    { 
           	RULELOG("insertQuery::insertList"); 
           	(yyval.node) = (Node *) createInsert((yyvsp[-4].stringVal),(Node *) (yyvsp[0].node), (yyvsp[-2].list)); 
     	}
#line 2047 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 416 "sql_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (Node *) (yyvsp[-1].list); }
#line 2053 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 476 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("setOperatorQuery::INTERSECT");
                (yyval.node) = (Node *) createSetQuery((yyvsp[(2) - (3)].stringVal), FALSE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
<<<<<<< HEAD
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 444 "sql_parser.y"
=======
#line 2062 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 481 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("setOperatorQuery::MINUS");
                (yyval.node) = (Node *) createSetQuery((yyvsp[(2) - (3)].stringVal), FALSE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
<<<<<<< HEAD
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 449 "sql_parser.y"
=======
#line 2071 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 486 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("setOperatorQuery::UNION");
                (yyval.node) = (Node *) createSetQuery((yyvsp[(2) - (4)].stringVal), ((yyvsp[(3) - (4)].stringVal) != NULL), (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
            }
<<<<<<< HEAD
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 456 "sql_parser.y"
    { RULELOG("optionalAll::NULL"); (yyval.stringVal) = NULL; }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 457 "sql_parser.y"
    { RULELOG("optionalAll::ALLTRUE"); (yyval.stringVal) = (yyvsp[(1) - (1)].stringVal); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 467 "sql_parser.y"
=======
#line 2080 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 493 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalAll::NULL"); (yyval.stringVal) = NULL; }
#line 2086 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 494 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalAll::ALLTRUE"); (yyval.stringVal) = (yyvsp[0].stringVal); }
#line 2092 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 504 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG(selectQuery);
                QueryBlock *q =  createQueryBlock();
                
                q->distinct = (yyvsp[(2) - (9)].node);
                q->selectClause = (yyvsp[(3) - (9)].list);
                q->fromClause = (yyvsp[(4) - (9)].list);
                q->whereClause = (yyvsp[(5) - (9)].node);
                q->groupByClause = (yyvsp[(6) - (9)].list);
                q->havingClause = (yyvsp[(7) - (9)].node);
                q->orderByClause = (yyvsp[(8) - (9)].list);
                q->limitClause = (yyvsp[(9) - (9)].node);
                
                (yyval.node) = (Node *) q; 
            }
<<<<<<< HEAD
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 489 "sql_parser.y"
    { RULELOG("optionalDistinct::NULL"); (yyval.node) = NULL; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 491 "sql_parser.y"
=======
#line 2112 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 526 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalDistinct::NULL"); (yyval.node) = NULL; }
#line 2118 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 528 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("optionalDistinct::DISTINCT");
                (yyval.node) = (Node *) createDistinctClause(NULL);
            }
<<<<<<< HEAD
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 496 "sql_parser.y"
=======
#line 2127 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 533 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("optionalDistinct::DISTINCT::exprList");
                (yyval.node) = (Node *) createDistinctClause((yyvsp[(4) - (5)].list));
            }
<<<<<<< HEAD
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 508 "sql_parser.y"
=======
#line 2136 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 545 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("selectClause::selectItem"); (yyval.list) = singleton((yyvsp[(1) - (1)].node));
            }
<<<<<<< HEAD
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 512 "sql_parser.y"
=======
#line 2144 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 549 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("selectClause::selectClause::selectItem");
                (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); 
            }
<<<<<<< HEAD
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 520 "sql_parser.y"
=======
#line 2153 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 557 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                 RULELOG("selectItem::expression"); 
                 (yyval.node) = (Node *) createSelectItem(NULL, (yyvsp[(1) - (1)].node)); 
             }
<<<<<<< HEAD
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 525 "sql_parser.y"
=======
#line 2162 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 562 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                 RULELOG("selectItem::expression::identifier"); 
                 (yyval.node) = (Node *) createSelectItem((yyvsp[(3) - (3)].stringVal), (yyvsp[(1) - (3)].node));
             }
<<<<<<< HEAD
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 530 "sql_parser.y"
=======
#line 2171 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 567 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
         		RULELOG("selectItem::*"); 
         		(yyval.node) = (Node *) createSelectItem(strdup("*"), NULL); 
     		}
<<<<<<< HEAD
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 535 "sql_parser.y"
=======
#line 2180 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 572 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
         		RULELOG("selectItem::*"); 
     			(yyval.node) = (Node *) createSelectItem(CONCAT_STRINGS((yyvsp[(1) - (3)].stringVal),".*"), NULL); 
 			}
<<<<<<< HEAD
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 545 "sql_parser.y"
    { RULELOG("exprList::SINGLETON"); (yyval.list) = singleton((yyvsp[(1) - (1)].node)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 547 "sql_parser.y"
=======
#line 2189 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 582 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("exprList::SINGLETON"); (yyval.list) = singleton((yyvsp[0].node)); }
#line 2195 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 584 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                  RULELOG("exprList::exprList::expression");
                  (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
             }
<<<<<<< HEAD
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 558 "sql_parser.y"
    { RULELOG("expression::bracked"); (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 559 "sql_parser.y"
    { RULELOG("expression::constant"); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 560 "sql_parser.y"
    { RULELOG("expression::attributeRef"); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 561 "sql_parser.y"
    { RULELOG("expression::sqlParameter"); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 562 "sql_parser.y"
    { RULELOG("expression::binaryOperatorExpression"); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 563 "sql_parser.y"
    { RULELOG("expression::unaryOperatorExpression"); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 564 "sql_parser.y"
    { RULELOG("expression::sqlFunctionCall"); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 565 "sql_parser.y"
    { RULELOG("expression::case"); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 574 "sql_parser.y"
    { RULELOG("constant::INT"); (yyval.node) = (Node *) createConstInt((yyvsp[(1) - (1)].intVal)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 575 "sql_parser.y"
    { RULELOG("constant::FLOAT"); (yyval.node) = (Node *) createConstFloat((yyvsp[(1) - (1)].floatVal)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 576 "sql_parser.y"
    { RULELOG("constant::STRING"); (yyval.node) = (Node *) createConstString((yyvsp[(1) - (1)].stringVal)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 583 "sql_parser.y"
    { RULELOG("attributeRef::IDENTIFIER"); (yyval.node) = (Node *) createAttributeReference((yyvsp[(1) - (1)].stringVal)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 589 "sql_parser.y"
    { RULELOG("sqlParameter::PARAMETER"); (yyval.node) = (Node *) createSQLParameter((yyvsp[(1) - (1)].stringVal)); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 609 "sql_parser.y"
=======
#line 2204 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 595 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::bracked"); (yyval.node) = (yyvsp[-1].node); }
#line 2210 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 596 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::constant"); }
#line 2216 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 597 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::attributeRef"); }
#line 2222 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 598 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::sqlParameter"); }
#line 2228 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 599 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::binaryOperatorExpression"); }
#line 2234 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 600 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::unaryOperatorExpression"); }
#line 2240 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 601 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::sqlFunctionCall"); }
#line 2246 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 602 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::case"); }
#line 2252 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 603 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("expression::ROWNUM"); (yyval.node) = (Node *) makeNode(RowNumExpr); }
#line 2258 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 612 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("constant::INT"); (yyval.node) = (Node *) createConstInt((yyvsp[0].intVal)); }
#line 2264 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 613 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("constant::FLOAT"); (yyval.node) = (Node *) createConstFloat((yyvsp[0].floatVal)); }
#line 2270 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 614 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("constant::STRING"); (yyval.node) = (Node *) createConstString((yyvsp[0].stringVal)); }
#line 2276 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 621 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("attributeRef::IDENTIFIER"); (yyval.node) = (Node *) createAttributeReference((yyvsp[0].stringVal)); }
#line 2282 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 627 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("sqlParameter::PARAMETER"); (yyval.node) = (Node *) createSQLParameter((yyvsp[0].stringVal)); }
#line 2288 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 647 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '+' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 616 "sql_parser.y"
=======
#line 2299 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 654 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '-' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 623 "sql_parser.y"
=======
#line 2310 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 661 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '*' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 630 "sql_parser.y"
=======
#line 2321 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 668 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '/' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 637 "sql_parser.y"
=======
#line 2332 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 675 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '%' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 644 "sql_parser.y"
=======
#line 2343 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 682 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '^' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 653 "sql_parser.y"
=======
#line 2354 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 691 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '&' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 660 "sql_parser.y"
=======
#line 2365 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 698 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression:: '|' ");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 669 "sql_parser.y"
=======
#line 2376 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 707 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("binaryOperatorExpression::comparisonOps");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 679 "sql_parser.y"
=======
#line 2387 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 717 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("unaryOperatorExpression:: '!' ");
                List *expr = singleton((yyvsp[(2) - (2)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(1) - (2)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 691 "sql_parser.y"
=======
#line 2397 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 729 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("sqlFunctionCall::IDENTIFIER::exprList");
				FunctionCall *f = createFunctionCall((yyvsp[(1) - (5)].stringVal), (yyvsp[(3) - (5)].list));
				if ((yyvsp[(5) - (5)].node) != NULL)
					(yyval.node) = (Node *) createWindowFunction(f, (WindowDef *) (yyvsp[(5) - (5)].node));
				else  
                	(yyval.node) = (Node *) f; 
            }
<<<<<<< HEAD
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 700 "sql_parser.y"
=======
#line 2410 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 738 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("sqlFunctionCall::AMMSC::exprList");
				FunctionCall *f = createFunctionCall((yyvsp[(1) - (5)].stringVal), (yyvsp[(3) - (5)].list));
				if ((yyvsp[(5) - (5)].node) != NULL)
					(yyval.node) = (Node *) createWindowFunction(f, (WindowDef *) (yyvsp[(5) - (5)].node));
				else  
                	(yyval.node) = (Node *) f; 
            }
<<<<<<< HEAD
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 715 "sql_parser.y"
=======
#line 2423 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 753 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("caseExpression::CASE::expression::whens:else:END");
				(yyval.node) = (Node *) createCaseExpr((yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].list), (yyvsp[(4) - (5)].node));
			}
<<<<<<< HEAD
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 720 "sql_parser.y"
=======
#line 2432 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 758 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("caseExpression::CASE::whens::else::END");
				(yyval.node) = (Node *) createCaseExpr(NULL, (yyvsp[(2) - (4)].list), (yyvsp[(3) - (4)].node));
			}
<<<<<<< HEAD
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 728 "sql_parser.y"
=======
#line 2441 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 766 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("caseWhenList::list::caseWhen");
				(yyval.list) = appendToTailOfList((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
			}
<<<<<<< HEAD
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 733 "sql_parser.y"
=======
#line 2450 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 771 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("caseWhenList::caseWhen");
				(yyval.list) = singleton((yyvsp[(1) - (1)].node));
			}
<<<<<<< HEAD
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 741 "sql_parser.y"
=======
#line 2459 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 779 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("caseWhen::WHEN::expression::THEN::expression");
				(yyval.node) = (Node *) createCaseWhen((yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node));
			}
<<<<<<< HEAD
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 748 "sql_parser.y"
    { RULELOG("optionalCaseElse::NULL"); (yyval.node) = NULL; }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 750 "sql_parser.y"
=======
#line 2468 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 786 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalCaseElse::NULL"); (yyval.node) = NULL; }
#line 2474 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 788 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalCaseElse::ELSE::expression");
				(yyval.node) = (yyvsp[(2) - (2)].node);
			}
<<<<<<< HEAD
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 760 "sql_parser.y"
    { RULELOG("overclause::NULL"); (yyval.node) = NULL; }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 762 "sql_parser.y"
=======
#line 2483 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 798 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("overclause::NULL"); (yyval.node) = NULL; }
#line 2489 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 800 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("overclause::window");
				(yyval.node) = (yyvsp[(2) - (2)].node);
			}
<<<<<<< HEAD
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 770 "sql_parser.y"
=======
#line 2498 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 808 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("window");
				(yyval.node) = (Node *) createWindowDef((yyvsp[(2) - (5)].list),(yyvsp[(3) - (5)].list), (WindowFrame *) (yyvsp[(4) - (5)].node));
			}
<<<<<<< HEAD
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 777 "sql_parser.y"
    { RULELOG("optWindowPart::NULL"); (yyval.list) = NIL; }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 779 "sql_parser.y"
=======
#line 2507 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 815 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optWindowPart::NULL"); (yyval.list) = NIL; }
#line 2513 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 817 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optWindowPart::PARTITION:BY::expressionList");
				(yyval.list) = (yyvsp[(3) - (3)].list);
			}
<<<<<<< HEAD
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 786 "sql_parser.y"
    { RULELOG("optWindowFrame::NULL"); (yyval.node) = NULL; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 788 "sql_parser.y"
=======
#line 2522 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 824 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optWindowFrame::NULL"); (yyval.node) = NULL; }
#line 2528 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 826 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				WindowBound *l, *u = NULL;
				RULELOG("optWindowFrame::ROWS::windoBoundaries");
				l = getNthOfListP((yyvsp[(2) - (2)].list), 0);
				if(LIST_LENGTH((yyvsp[(2) - (2)].list)) > 1)
					u = getNthOfListP((yyvsp[(2) - (2)].list), 1);
				(yyval.node) = (Node *) createWindowFrame(WINFRAME_ROWS, l, u); 
			}
<<<<<<< HEAD
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 797 "sql_parser.y"
=======
#line 2541 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 835 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				WindowBound *l, *u = NULL; 
				RULELOG("optWindowFrame::RANGE::windoBoundaries"); 
				l = getNthOfListP((yyvsp[(2) - (2)].list), 0);
				if(LIST_LENGTH((yyvsp[(2) - (2)].list)) > 1)
					u = getNthOfListP((yyvsp[(2) - (2)].list), 1);
				(yyval.node) = (Node *) createWindowFrame(WINFRAME_RANGE, l, u); 
			}
<<<<<<< HEAD
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 809 "sql_parser.y"
=======
#line 2554 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 847 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("windowBoundaries::BETWEEN"); 
				(yyval.list) = LIST_MAKE((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node)); 
			}
<<<<<<< HEAD
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 814 "sql_parser.y"
=======
#line 2563 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 852 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("windowBoundaries::windowBound"); 
				(yyval.list) = singleton((yyvsp[(1) - (1)].node)); 
			}
<<<<<<< HEAD
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 822 "sql_parser.y"
=======
#line 2572 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 860 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("windowBound::UNBOUNDED::PRECEDING"); 
				(yyval.node) = (Node *) createWindowBound(WINBOUND_UNBOUND_PREC, NULL); 
			}
<<<<<<< HEAD
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 827 "sql_parser.y"
=======
#line 2581 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 865 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("windowBound::CURRENT::ROW"); 
				(yyval.node) = (Node *) createWindowBound(WINBOUND_CURRENT_ROW, NULL); 
			}
<<<<<<< HEAD
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 832 "sql_parser.y"
=======
#line 2590 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 870 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("windowBound::expression::PRECEDING"); 
				(yyval.node) = (Node *) createWindowBound(WINBOUND_EXPR_PREC, (yyvsp[(1) - (2)].node)); 
			}
<<<<<<< HEAD
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 837 "sql_parser.y"
=======
#line 2599 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 875 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("windowBound::expression::FOLLOWING"); 
				(yyval.node) = (Node *) createWindowBound(WINBOUND_EXPR_FOLLOW, (yyvsp[(1) - (2)].node)); 
			}
<<<<<<< HEAD
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 849 "sql_parser.y"
    { RULELOG("optionalFrom::NULL"); (yyval.list) = NULL; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 850 "sql_parser.y"
    { RULELOG("optionalFrom::fromClause"); (yyval.list) = (yyvsp[(2) - (2)].list); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 855 "sql_parser.y"
=======
#line 2608 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 887 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalFrom::NULL"); (yyval.list) = NULL; }
#line 2614 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 888 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalFrom::fromClause"); (yyval.list) = (yyvsp[0].list); }
#line 2620 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 893 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromClause::fromClauseItem");
                (yyval.list) = singleton((yyvsp[(1) - (1)].node));
            }
<<<<<<< HEAD
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 860 "sql_parser.y"
=======
#line 2629 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 898 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromClause::fromClause::fromClauseItem");
                (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
            }
<<<<<<< HEAD
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 869 "sql_parser.y"
=======
#line 2638 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 907 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromClauseItem");
				FromItem *f = createFromTableRef(NULL, NIL, (yyvsp[(1) - (2)].stringVal));
				f->provInfo = (FromProvInfo *) (yyvsp[(2) - (2)].node);
                (yyval.node) = (Node *) f;
            }
<<<<<<< HEAD
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 876 "sql_parser.y"
=======
#line 2649 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 914 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromClauseItem");
                FromItem *f = createFromTableRef(((FromItem *) (yyvsp[(2) - (2)].node))->name, 
						((FromItem *) (yyvsp[(2) - (2)].node))->attrNames, (yyvsp[(1) - (2)].stringVal));
				f->provInfo = ((FromItem *) (yyvsp[(2) - (2)].node))->provInfo;
                (yyval.node) = (Node *) f;
            }
<<<<<<< HEAD
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 885 "sql_parser.y"
=======
#line 2661 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 923 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromClauseItem::subQuery");
                FromItem *f = (FromItem *) (yyvsp[(1) - (2)].node);
                f->provInfo = (FromProvInfo *) (yyvsp[(2) - (2)].node);
                (yyval.node) = (yyvsp[(1) - (2)].node);
            }
<<<<<<< HEAD
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 892 "sql_parser.y"
=======
#line 2672 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 930 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromClauseItem::subQuery");
                FromSubquery *s = (FromSubquery *) (yyvsp[(1) - (2)].node);
                s->from.name = ((FromItem *) (yyvsp[(2) - (2)].node))->name;
                s->from.attrNames = ((FromItem *) (yyvsp[(2) - (2)].node))->attrNames;
                s->from.provInfo = ((FromItem *) (yyvsp[(2) - (2)].node))->provInfo;
                (yyval.node) = (Node *) s;
            }
<<<<<<< HEAD
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 901 "sql_parser.y"
=======
#line 2685 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 939 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
        		FromItem *f;
        		RULELOG("fromClauseItem::fromJoinItem");
        		f = (FromItem *) (yyvsp[(1) - (1)].node);
        		f->name = NULL;
        		(yyval.node) = (Node *) f;
        	}
<<<<<<< HEAD
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 909 "sql_parser.y"
=======
#line 2697 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 947 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
        		FromItem *f;
        		RULELOG("fromClauseItem::fromJoinItem");
        		f = (FromItem *) (yyvsp[(2) - (4)].node);
        		f->name = ((FromItem *) (yyvsp[(4) - (4)].node))->name;
                f->attrNames = ((FromItem *) (yyvsp[(4) - (4)].node))->attrNames;
                f->provInfo = ((FromItem *) (yyvsp[(4) - (4)].node))->provInfo;
        		(yyval.node) = (Node *) f;
        	}
<<<<<<< HEAD
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 922 "sql_parser.y"
=======
#line 2711 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 960 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("subQuery::queryStmt");
                (yyval.node) = (Node *) createFromSubquery(NULL, NULL, (yyvsp[(2) - (3)].node));
            }
<<<<<<< HEAD
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 929 "sql_parser.y"
    { (yyval.list) = singleton((yyvsp[(1) - (1)].stringVal)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 930 "sql_parser.y"
    { (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].stringVal)); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 934 "sql_parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 936 "sql_parser.y"
=======
#line 2720 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 967 "sql_parser.y" /* yacc.c:1646  */
    { (yyval.list) = singleton((yyvsp[0].stringVal)); }
#line 2726 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 968 "sql_parser.y" /* yacc.c:1646  */
    { (yyval.list) = appendToTailOfList((yyvsp[-2].list), (yyvsp[0].stringVal)); }
#line 2732 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 972 "sql_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2738 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 974 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromJoinItem::NATURAL");
                (yyval.node) = (Node *) createFromJoin(NULL, NIL, (FromItem *) (yyvsp[(1) - (4)].node), 
						(FromItem *) (yyvsp[(4) - (4)].node), "JOIN_INNER", "JOIN_COND_NATURAL", 
						NULL);
          	}
<<<<<<< HEAD
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 943 "sql_parser.y"
=======
#line 2749 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 981 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("fromJoinItem::NATURALjoinType");
                (yyval.node) = (Node *) createFromJoin(NULL, NIL, (FromItem *) (yyvsp[(1) - (5)].node), 
                		(FromItem *) (yyvsp[(5) - (5)].node), (yyvsp[(3) - (5)].stringVal), "JOIN_COND_NATURAL", NULL);
          	}
<<<<<<< HEAD
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 949 "sql_parser.y"
=======
#line 2759 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 987 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("fromJoinItem::CROSS JOIN");
                (yyval.node) = (Node *) createFromJoin(NULL, NIL, (FromItem *) (yyvsp[(1) - (4)].node), 
                		(FromItem *) (yyvsp[(4) - (4)].node), "JOIN_CROSS", "JOIN_COND_ON", NULL);
          	}
<<<<<<< HEAD
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 955 "sql_parser.y"
=======
#line 2769 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 993 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("fromJoinItem::JOIN::joinType::joinCond");
				char *condType = (isA((yyvsp[(5) - (5)].node),List)) ? "JOIN_COND_USING" : 
						"JOIN_COND_ON";
                (yyval.node) = (Node *) createFromJoin(NULL, NIL, (FromItem *) (yyvsp[(1) - (5)].node), 
                		(FromItem *) (yyvsp[(4) - (5)].node), (yyvsp[(2) - (5)].stringVal), condType, (yyvsp[(5) - (5)].node));
          	}
<<<<<<< HEAD
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 963 "sql_parser.y"
=======
#line 2781 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1001 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("fromJoinItem::JOIN::joinCond");
				char *condType = (isA((yyvsp[(4) - (4)].node),List)) ? "JOIN_COND_USING" : 
						"JOIN_COND_ON"; 
                (yyval.node) = (Node *) createFromJoin(NULL, NIL, (FromItem *) (yyvsp[(1) - (4)].node), 
                		(FromItem *) (yyvsp[(3) - (4)].node), "JOIN_INNER", 
                		condType, (yyvsp[(4) - (4)].node));
          	}
<<<<<<< HEAD
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 974 "sql_parser.y"
    { RULELOG("joinType::LEFT"); (yyval.stringVal) = "JOIN_LEFT_OUTER"; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 975 "sql_parser.y"
    { RULELOG("joinType::LEFT OUTER"); (yyval.stringVal) = "JOIN_LEFT_OUTER"; }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 976 "sql_parser.y"
    { RULELOG("joinType::RIGHT "); (yyval.stringVal) = "JOIN_RIGHT_OUTER"; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 977 "sql_parser.y"
    { RULELOG("joinType::RIGHT OUTER"); (yyval.stringVal) = "JOIN_RIGHT_OUTER"; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 978 "sql_parser.y"
    { RULELOG("joinType::FULL OUTER"); (yyval.stringVal) = "JOIN_FULL_OUTER"; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 979 "sql_parser.y"
    { RULELOG("joinType::FULL"); (yyval.stringVal) = "JOIN_FULL_OUTER"; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 980 "sql_parser.y"
    { RULELOG("joinType::INNER"); (yyval.stringVal) = "JOIN_INNER"; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 984 "sql_parser.y"
    { (yyval.node) = (Node *) (yyvsp[(3) - (4)].list); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 985 "sql_parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 990 "sql_parser.y"
=======
#line 2794 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1012 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::LEFT"); (yyval.stringVal) = "JOIN_LEFT_OUTER"; }
#line 2800 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1013 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::LEFT OUTER"); (yyval.stringVal) = "JOIN_LEFT_OUTER"; }
#line 2806 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1014 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::RIGHT "); (yyval.stringVal) = "JOIN_RIGHT_OUTER"; }
#line 2812 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1015 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::RIGHT OUTER"); (yyval.stringVal) = "JOIN_RIGHT_OUTER"; }
#line 2818 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1016 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::FULL OUTER"); (yyval.stringVal) = "JOIN_FULL_OUTER"; }
#line 2824 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1017 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::FULL"); (yyval.stringVal) = "JOIN_FULL_OUTER"; }
#line 2830 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1018 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("joinType::INNER"); (yyval.stringVal) = "JOIN_INNER"; }
#line 2836 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1022 "sql_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (Node *) (yyvsp[-1].list); }
#line 2842 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1023 "sql_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2848 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1028 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalAlias::identifier"); 
				FromItem *f = createFromItem((yyvsp[(2) - (3)].stringVal),(yyvsp[(3) - (3)].list));
 				f->provInfo = (FromProvInfo *) (yyvsp[(1) - (3)].node);
				(yyval.node) = (Node *) f;
			}
<<<<<<< HEAD
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 997 "sql_parser.y"
=======
#line 2859 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1035 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("optionalAlias::identifier"); 
				FromItem *f = createFromItem((yyvsp[(3) - (4)].stringVal),(yyvsp[(4) - (4)].list));
 				f->provInfo = (FromProvInfo *) (yyvsp[(1) - (4)].node); 
				(yyval.node) = (Node *) f;
			}
<<<<<<< HEAD
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1006 "sql_parser.y"
    { RULELOG("optionalFromProv::empty"); (yyval.node) = NULL; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1008 "sql_parser.y"
=======
#line 2870 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1044 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalFromProv::empty"); (yyval.node) = NULL; }
#line 2876 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1046 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalFromProv::BASERELATION");
				FromProvInfo *p = makeNode(FromProvInfo);
				p->baserel = TRUE;
				p->userProvAttrs = NIL;				 
				(yyval.node) = (Node *) p; 
			}
<<<<<<< HEAD
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1016 "sql_parser.y"
=======
#line 2888 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1054 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalFromProv::userProvAttr");
				FromProvInfo *p = makeNode(FromProvInfo);
				p->baserel = FALSE;
				p->userProvAttrs = (yyvsp[(4) - (5)].list);				 
				(yyval.node) = (Node *) p; 
			}
<<<<<<< HEAD
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1024 "sql_parser.y"
=======
#line 2900 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1062 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalFromProv::userProvDupAttr");
				FromProvInfo *p = makeNode(FromProvInfo);
				p->baserel = TRUE;
				p->userProvAttrs = (yyvsp[(4) - (5)].list);
				(yyval.node) = (Node *) p;
			}
<<<<<<< HEAD
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1032 "sql_parser.y"
=======
#line 2912 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1070 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalFromProv::intermediateProv");
				FromProvInfo *p = makeNode(FromProvInfo);
				p->intermediateProv = TRUE;
				(yyval.node) = (Node *) p;
			}
<<<<<<< HEAD
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1039 "sql_parser.y"
=======
#line 2923 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1077 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalFromProv::intermediateProv::attrList");
				FromProvInfo *p = makeNode(FromProvInfo);
				p->intermediateProv = TRUE;
				p->userProvAttrs = (yyvsp[(5) - (6)].list);
				(yyval.node) = (Node *) p;
			}
<<<<<<< HEAD
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 1049 "sql_parser.y"
    { RULELOG("optionalAttrAlias::empty"); (yyval.list) = NULL; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 1051 "sql_parser.y"
=======
#line 2935 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1087 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalAttrAlias::empty"); (yyval.list) = NULL; }
#line 2941 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1089 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
				RULELOG("optionalAttrAlias::identifierList"); (yyval.list) = (yyvsp[(2) - (3)].list); 
			}
<<<<<<< HEAD
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1060 "sql_parser.y"
    { RULELOG("optionalWhere::NULL"); (yyval.node) = NULL; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1061 "sql_parser.y"
    { RULELOG("optionalWhere::whereExpression"); (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 1065 "sql_parser.y"
    { RULELOG("where::brackedWhereExpression"); (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 1066 "sql_parser.y"
    { RULELOG("whereExpression::expression"); (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 1068 "sql_parser.y"
=======
#line 2949 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1098 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalWhere::NULL"); (yyval.node) = NULL; }
#line 2955 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1099 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalWhere::whereExpression"); (yyval.node) = (yyvsp[0].node); }
#line 2961 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1103 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("where::brackedWhereExpression"); (yyval.node) = (yyvsp[-1].node); }
#line 2967 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1104 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("whereExpression::expression"); (yyval.node) = (yyvsp[0].node); }
#line 2973 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1106 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::NOT");
                List *expr = singleton((yyvsp[(2) - (2)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(1) - (2)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 1074 "sql_parser.y"
=======
#line 2983 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1112 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::AND");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 1081 "sql_parser.y"
=======
#line 2994 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1119 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::OR");
                List *expr = singleton((yyvsp[(1) - (3)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 1088 "sql_parser.y"
=======
#line 3005 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1126 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				//if ($2 == NULL)
                //{
                	RULELOG("whereExpression::LIKE");
	                List *expr = singleton((yyvsp[(1) - (3)].node));
	                expr = appendToTailOfList(expr, (yyvsp[(3) - (3)].node));
	                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (3)].stringVal), expr);
                /* }
				else
				{   
                	RULELOG("whereExpression::NOT::LIKE");
                	List *expr = singleton($1);
                	expr = appendToTailOfList(expr, $4);
                	Node *like = (Node *) createOpExpr($3, expr);
                	$$ = (Node *) createOpExpr("NOT", singleton(like));
				}*/
            }
<<<<<<< HEAD
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 1106 "sql_parser.y"
=======
#line 3027 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1144 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::BETWEEN-AND");
                List *expr = singleton((yyvsp[(1) - (5)].node));
                expr = appendToTailOfList(expr, (yyvsp[(3) - (5)].node));
                expr = appendToTailOfList(expr, (yyvsp[(5) - (5)].node));
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (5)].stringVal), expr);
            }
<<<<<<< HEAD
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 1114 "sql_parser.y"
=======
#line 3039 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1152 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::comparisonOps::nestedSubQueryOperator::Subquery");
                (yyval.node) = (Node *) createNestedSubquery((yyvsp[(3) - (6)].stringVal), (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].stringVal), (yyvsp[(5) - (6)].node));
            }
<<<<<<< HEAD
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 1119 "sql_parser.y"
=======
#line 3048 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1157 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::Subquery");
                Node *q = (Node *) createNestedSubquery("SCALAR", NULL, NULL, (yyvsp[(4) - (5)].node)); 
                List *expr = LIST_MAKE((yyvsp[(1) - (5)].node), q);
                (yyval.node) = (Node *) createOpExpr((yyvsp[(2) - (5)].stringVal), expr); 
            }
<<<<<<< HEAD
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 1126 "sql_parser.y"
=======
#line 3059 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1164 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                if ((yyvsp[(2) - (6)].stringVal) == NULL)
                {
                    RULELOG("whereExpression::IN");
                    (yyval.node) = (Node *) createNestedSubquery("ANY", (yyvsp[(1) - (6)].node), "=", (yyvsp[(5) - (6)].node));
                }
                else
                {
                    RULELOG("whereExpression::NOT::IN");
                    (yyval.node) = (Node *) createNestedSubquery("ALL",(yyvsp[(1) - (6)].node), "<>", (yyvsp[(5) - (6)].node));
                }
            }
<<<<<<< HEAD
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 1139 "sql_parser.y"
=======
#line 3076 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1177 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("whereExpression::EXISTS");
                (yyval.node) = (Node *) createNestedSubquery((yyvsp[(1) - (4)].stringVal), NULL, NULL, (yyvsp[(3) - (4)].node));
            }
<<<<<<< HEAD
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 1146 "sql_parser.y"
    { RULELOG("nestedSubQueryOperator::ANY"); (yyval.stringVal) = (yyvsp[(1) - (1)].stringVal); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 1147 "sql_parser.y"
    { RULELOG("nestedSubQueryOperator::ALL"); (yyval.stringVal) = (yyvsp[(1) - (1)].stringVal); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 1148 "sql_parser.y"
    { RULELOG("nestedSubQueryOperator::SOME"); (yyval.stringVal) = "ANY"; }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 1152 "sql_parser.y"
    { RULELOG("optionalNot::NULL"); (yyval.stringVal) = NULL; }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 1153 "sql_parser.y"
    { RULELOG("optionalNot::NOT"); (yyval.stringVal) = (yyvsp[(1) - (1)].stringVal); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 1157 "sql_parser.y"
    { RULELOG("optionalGroupBy::NULL"); (yyval.list) = NULL; }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 1158 "sql_parser.y"
    { RULELOG("optionalGroupBy::GROUPBY"); (yyval.list) = (yyvsp[(3) - (3)].list); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 1162 "sql_parser.y"
    { RULELOG("optionalOrderBy:::NULL"); (yyval.node) = NULL; }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 1164 "sql_parser.y"
=======
#line 3085 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1184 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("nestedSubQueryOperator::ANY"); (yyval.stringVal) = (yyvsp[0].stringVal); }
#line 3091 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1185 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("nestedSubQueryOperator::ALL"); (yyval.stringVal) = (yyvsp[0].stringVal); }
#line 3097 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1186 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("nestedSubQueryOperator::SOME"); (yyval.stringVal) = "ANY"; }
#line 3103 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1190 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalNot::NULL"); (yyval.stringVal) = NULL; }
#line 3109 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1191 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalNot::NOT"); (yyval.stringVal) = (yyvsp[0].stringVal); }
#line 3115 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1195 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalGroupBy::NULL"); (yyval.list) = NULL; }
#line 3121 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1196 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalGroupBy::GROUPBY"); (yyval.list) = (yyvsp[0].list); }
#line 3127 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1200 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalOrderBy:::NULL"); (yyval.node) = NULL; }
#line 3133 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1202 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    { 
                RULELOG("optionalHaving::HAVING"); 
                (yyval.node) = (Node *) (yyvsp[(2) - (2)].node);
            }
<<<<<<< HEAD
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 1171 "sql_parser.y"
    { RULELOG("optionalOrderBy:::NULL"); (yyval.list) = NULL; }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 1172 "sql_parser.y"
    { RULELOG("optionalOrderBy::ORDERBY"); (yyval.list) = (yyvsp[(3) - (3)].list); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 1176 "sql_parser.y"
    { RULELOG("optionalLimit::NULL"); (yyval.node) = NULL; }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 1177 "sql_parser.y"
    { RULELOG("optionalLimit::CONSTANT"); (yyval.node) = (yyvsp[(2) - (2)].node);}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 1182 "sql_parser.y"
=======
#line 3142 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1209 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalOrderBy:::NULL"); (yyval.list) = NULL; }
#line 3148 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1210 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalOrderBy::ORDERBY"); (yyval.list) = (yyvsp[0].list); }
#line 3154 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1214 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalLimit::NULL"); (yyval.node) = NULL; }
#line 3160 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1215 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalLimit::CONSTANT"); (yyval.node) = (yyvsp[0].node);}
#line 3166 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1220 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("clauseList::orderExpr");
                (yyval.list) = singleton((yyvsp[(1) - (1)].node));
            }
<<<<<<< HEAD
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 1187 "sql_parser.y"
=======
#line 3175 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1225 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
                RULELOG("orderList::orderList::orderExpr");
                (yyval.list) = appendToTailOfList((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
            }
<<<<<<< HEAD
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 1195 "sql_parser.y"
=======
#line 3184 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1233 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("orderExpr::expr::sortOrder::nullOrder");
				SortOrder o = (strcmp((yyvsp[(2) - (3)].stringVal),"ASC") == 0) ?  SORT_ASC : SORT_DESC;
				SortNullOrder n = (strcmp((yyvsp[(3) - (3)].stringVal),"NULLS_FIRST") == 0) ? 
						SORT_NULLS_FIRST : 
						SORT_NULLS_LAST;
				(yyval.node) = (Node *) createOrderExpr((yyvsp[(1) - (3)].node), o, n);
			}
<<<<<<< HEAD
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 1206 "sql_parser.y"
    { RULELOG("optionalSortOrder::empty"); (yyval.stringVal) = "ASC"; }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 1208 "sql_parser.y"
=======
#line 3197 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1244 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalSortOrder::empty"); (yyval.stringVal) = "ASC"; }
#line 3203 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1246 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalSortOrder::ASC");
				(yyval.stringVal) = "ASC";
			}
<<<<<<< HEAD
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 1213 "sql_parser.y"
=======
#line 3212 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1251 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalSortOrder::DESC");
				(yyval.stringVal) = "DESC";
			}
<<<<<<< HEAD
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 1220 "sql_parser.y"
    { RULELOG("optionalNullOrder::empty"); (yyval.stringVal) = "NULLS_LAST"; }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 1222 "sql_parser.y"
=======
#line 3221 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1258 "sql_parser.y" /* yacc.c:1646  */
    { RULELOG("optionalNullOrder::empty"); (yyval.stringVal) = "NULLS_LAST"; }
#line 3227 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1260 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalNullOrder::NULLS FIRST");
				(yyval.stringVal) = "NULLS_FIRST";
			}
<<<<<<< HEAD
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 1227 "sql_parser.y"
=======
#line 3236 "sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1265 "sql_parser.y" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
    {
				RULELOG("optionalNullOrder::NULLS LAST");
				(yyval.stringVal) = "NULLS_LAST";
			}
<<<<<<< HEAD
    break;



/* Line 1806 of yacc.c  */
#line 3676 "sql_parser.tab.c"
=======
#line 3245 "sql_parser.tab.c" /* yacc.c:1646  */
    break;


#line 3249 "sql_parser.tab.c" /* yacc.c:1646  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}
<<<<<<< HEAD



/* Line 2067 of yacc.c  */
#line 1234 "sql_parser.y"
=======
#line 1272 "sql_parser.y" /* yacc.c:1906  */
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7




/* FUTURE WORK 

PRIORITIES
7)
4)
1)

EXHAUSTIVE LIST
2. Implement support for RETURNING statement in DELETE queries.
3. Implement support for column list like (col1, col2, col3). 
   Needed in insert queries, select queries where conditions etc.
4. Implement support for Transactions.
5. Implement support for Create queries.
7. Implement support for AS OF (timestamp) modifier of a table reference
8. Implement support for casting expressions
9. Implement support for IN array expressions like a IN (1,2,3,4,5)
10. Implement support for ASC, DESC, NULLS FIRST/LAST in ORDER BY
11. Add DDL statements
12. Add provenance storage policy language
13. Add provenance export options (also requires several other changes in the application)
*/

