/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INCLUDE = 258,
    DEFINE = 259,
    TYPEDEF = 260,
    USING = 261,
    NAMESPACE = 262,
    IDENTIFIER = 263,
    CONSTANT = 264,
    STRING_LITERAL = 265,
    EXTERN = 266,
    STATIC = 267,
    AUTO = 268,
    VOID = 269,
    CHAR = 270,
    SHORT = 271,
    INT = 272,
    LONG = 273,
    FLOAT = 274,
    DOUBLE = 275,
    SIGNED = 276,
    UNSIGNED = 277,
    MUL_ASSIGN = 278,
    DIV_ASSIGN = 279,
    MOD_ASSIGN = 280,
    ADD_ASSIGN = 281,
    SUB_ASSIGN = 282,
    LEFT_ASSIGN = 283,
    RIGHT_ASSIGN = 284,
    AND_ASSIGN = 285,
    XOR_ASSIGN = 286,
    OR_ASSIGN = 287,
    ACCESS = 288,
    NEW = 289,
    CLASS = 290,
    STRUCT = 291,
    CIN = 292,
    COUT = 293,
    PTR_OP = 294,
    INC_OP = 295,
    LEFT_OP = 296,
    SIZEOF = 297,
    RIGHT_OP = 298,
    LE_OP = 299,
    GE_OP = 300,
    EQ_OP = 301,
    NE_OP = 302,
    AND_OP = 303,
    OR_OP = 304,
    DEC_OP = 305,
    CASE = 306,
    DEFAULT = 307,
    IF = 308,
    ELSE = 309,
    SWITCH = 310,
    WHILE = 311,
    DO = 312,
    FOR = 313,
    GOTO = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317,
    CC = 318,
    ENDL = 319
  };
#endif
/* Tokens.  */
#define INCLUDE 258
#define DEFINE 259
#define TYPEDEF 260
#define USING 261
#define NAMESPACE 262
#define IDENTIFIER 263
#define CONSTANT 264
#define STRING_LITERAL 265
#define EXTERN 266
#define STATIC 267
#define AUTO 268
#define VOID 269
#define CHAR 270
#define SHORT 271
#define INT 272
#define LONG 273
#define FLOAT 274
#define DOUBLE 275
#define SIGNED 276
#define UNSIGNED 277
#define MUL_ASSIGN 278
#define DIV_ASSIGN 279
#define MOD_ASSIGN 280
#define ADD_ASSIGN 281
#define SUB_ASSIGN 282
#define LEFT_ASSIGN 283
#define RIGHT_ASSIGN 284
#define AND_ASSIGN 285
#define XOR_ASSIGN 286
#define OR_ASSIGN 287
#define ACCESS 288
#define NEW 289
#define CLASS 290
#define STRUCT 291
#define CIN 292
#define COUT 293
#define PTR_OP 294
#define INC_OP 295
#define LEFT_OP 296
#define SIZEOF 297
#define RIGHT_OP 298
#define LE_OP 299
#define GE_OP 300
#define EQ_OP 301
#define NE_OP 302
#define AND_OP 303
#define OR_OP 304
#define DEC_OP 305
#define CASE 306
#define DEFAULT 307
#define IF 308
#define ELSE 309
#define SWITCH 310
#define WHILE 311
#define DO 312
#define FOR 313
#define GOTO 314
#define CONTINUE 315
#define BREAK 316
#define RETURN 317
#define CC 318
#define ENDL 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
