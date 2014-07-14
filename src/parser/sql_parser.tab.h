/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
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


/* Line 2068 of yacc.c  */
#line 159 "sql_parser.tab.h"
} YYSTYPE;
=======
#line 163 "sql_parser.tab.h" /* yacc.c:1909  */
};
>>>>>>> ba77ae611a41d4bea598f0ca12d5cbb95b3332a7
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


