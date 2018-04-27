/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define dbg(x)  printf("%d", x)
int yylex(void);
void yyerror(char *);


#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 255 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1410

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  447

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,    66,     2,    85,    78,     2,
      74,    75,    79,    80,    72,    81,    69,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    65,
      67,    73,    68,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    87,    71,    82,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    24,    28,    29,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    46,    47,    48,
      49,    51,    52,    53,    57,    58,    62,    63,    67,    68,
      69,    73,    74,    75,    79,    80,    81,    82,    83,    84,
      85,    86,    89,    90,    91,    93,    94,    95,    99,   100,
     104,   105,   107,   108,   109,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   126,   127,   128,   129,
     132,   133,   134,   135,   136,   137,   138,   139,   142,   143,
     144,   148,   149,   150,   156,   157,   158,   161,   162,   165,
     168,   169,   170,   174,   175,   176,   177,   181,   182,   183,
     184,   185,   186,   187,   188,   194,   195,   196,   197,   198,
     199,   203,   204,   205,   206,   207,   208,   212,   213,   217,
     218,   219,   220,   224,   225,   226,   230,   231,   232,   236,
     237,   238,   239,   240,   244,   245,   246,   250,   251,   255,
     256,   260,   261,   265,   266,   270,   271,   275,   276,   280,
     281,   285,   286,   290,   291,   296,   297,   301,   304,   305,
     308,   309,   312,   313,   316,   317,   318,   319,   320,   323,
     324,   328,   329,   332,   334,   336,   339,   340,   341,   344,
     345,   346,   347,   348,   351,   354,   355,   356,   357,   360,
     361,   362,   365,   366,   368,   369,   370,   371,   372,   373,
     374,   375,   379,   380,   383,   386,   387,   388,   389,   390,
     393,   394,   398,   399,   400,   401,   405,   406,   409,   410,
     411,   412,   413,   416,   417,   420,   421,   424,   425,   426,
     427
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "DEFINE", "TYPEDEF", "USING",
  "NAMESPACE", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "EXTERN",
  "STATIC", "AUTO", "VOID", "CHAR", "SHORT", "INT", "LONG", "FLOAT",
  "DOUBLE", "SIGNED", "UNSIGNED", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "ACCESS", "NEW", "CLASS", "STRUCT", "CIN",
  "COUT", "PTR_OP", "INC_OP", "LEFT_OP", "SIZEOF", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "DEC_OP", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "CC", "ENDL", "';'", "'#'", "'<'", "'>'",
  "'.'", "'{'", "'}'", "','", "'='", "'('", "')'", "'['", "']'", "'&'",
  "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'^'", "'|'", "'?'",
  "':'", "$accept", "strt", "external_dec", "declarations", "external",
  "ZZ", "Z", "type", "storage_specifier", "type_specifier", "UD",
  "sign_specifier", "assignmentlist", "YY", "IY", "assignment_operator",
  "assignment", "X", "function_call", "function_call2", "T", "E",
  "array_define", "array_declare", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "argument_expression_list", "struct_declare", "class_define", "DS",
  "YRT", "CLASS_BLOCK", "BLCK", "cns", "cnss", "constructor",
  "function_definition", "FUNCTION_OUTSIDE", "YX", "YXx",
  "outside_class_function", "class_call", "COMPOUND_BLOCK",
  "STATEMENT_LIST", "STATEMENT", "EXPRESSION_STATEMENT",
  "LABELED_STATEMENT", "SDF", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "expression_statement", "JUMP_STATEMENT", "PRINT_STATEMENT", "YZV", "YT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    59,    35,    60,    62,    46,
     123,   125,    44,    61,    40,    41,    91,    93,    38,    42,
      43,    45,   126,    33,    47,    37,    94,   124,    63,    58
};
# endif

#define YYPACT_NINF -402

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-402)))

#define YYTABLE_NINF -160

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1305,  1334,    69,  1105,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,    21,    45,    37,  1224,
    -402,  -402,  -402,   -21,   887,   186,  -402,  -402,   916,    17,
      26,    40,   407,   486,    73,    83,  -402,    41,  -402,    93,
    -402,    63,   124,   152,   168,   143,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,   180,  -402,   898,   913,
     933,    88,  -402,     9,    10,     2,   190,  -402,  -402,  -402,
    1334,  1119,    47,  -402,   948,   992,   948,   776,  -402,  -402,
    -402,  -402,  -402,  -402,   146,  -402,  -402,  -402,  -402,  -402,
      48,  -402,    87,   565,   913,  -402,    95,   233,    66,    57,
     232,   147,   141,   150,   203,   -24,  -402,  -402,   174,  -402,
     916,  -402,  -402,  -402,  -402,  -402,   933,  -402,   933,  -402,
    -402,   405,  -402,  -402,  -402,   191,   196,   238,   192,  1129,
      18,     6,   148,  -402,  -402,  -402,    58,  -402,  -402,   913,
     156,   265,  -402,   240,   275,  1334,  -402,   345,    11,   287,
     933,   350,   639,   270,  1009,   913,  -402,   776,  -402,  -402,
     285,   291,   161,   933,   359,  -402,  -402,   360,   267,   913,
     913,  -402,  -402,   913,   913,   913,   913,   913,   913,   913,
     913,   913,   913,   913,   913,   913,   913,   913,   913,   913,
     913,   913,   913,  -402,  -402,  -402,   700,   301,   304,   296,
     299,   308,   405,   309,   372,   319,   320,   622,  -402,   405,
    -402,  1027,    56,   316,  -402,   405,  -402,  -402,  -402,  -402,
    -402,   323,  -402,  -402,   381,   791,   306,  -402,   170,   933,
    -402,  -402,   119,   357,   385,  -402,   361,  -402,   247,   933,
     252,  -402,  -402,    22,  -402,   405,   146,   192,   303,  -402,
     387,   321,   390,    64,    75,  -402,   324,   913,  -402,  -402,
    -402,  -402,  -402,  -402,   178,   122,  -402,  -402,  -402,  -402,
      95,    95,   233,   233,    66,    66,    66,    66,    57,    57,
     232,   147,   141,   150,   203,    34,  -402,   332,   334,   913,
     913,   913,   347,   811,   339,  -402,  -402,  -402,    78,   336,
    1226,  -402,  -402,  -402,   405,  -402,   335,  -402,  -402,     6,
     183,  -402,  -402,  -402,   146,  -402,   381,   340,   362,   358,
     363,  -402,   438,   376,   377,  -402,   375,   382,   380,  -402,
     383,   384,  -402,  -402,   913,  -402,  -402,   913,   448,    20,
     185,   193,   198,   394,  -402,    94,   811,  -402,  -402,  -402,
     199,  -402,  -402,   265,  1374,  -402,  -402,   391,   314,   314,
    -402,  -402,  1334,  1198,   405,  -402,  -402,   401,  -402,   406,
     409,  -402,   405,   404,   405,   913,  -402,   837,  -402,  -402,
     383,   120,  1044,   361,   408,   412,  1374,   135,  -402,  -402,
    -402,  -402,   410,   414,   424,   440,   454,   273,  -402,   227,
     405,   228,  1374,  1307,  -402,   405,  1374,  -402,  1374,  -402,
     448,    20,    20,   405,   514,   436,   456,   463,  -402,   405,
    -402,   458,  -402,  -402,  -402,  -402,  -402,  -402,   441,   484,
    -402,  -402,  -402,  -402,   563,   405,   273,   405,   273,   460,
    -402,   461,  -402,   273,   273,  -402,  -402
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      78,     0,     0,    42,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    45,    46,     0,     0,     0,    78,
       2,     5,     6,     0,    78,    47,    30,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,    16,     0,
      42,     0,     0,     0,     0,   186,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,    55,    78,     0,
      78,    89,    91,    43,    44,     0,     0,     1,     3,     7,
       0,    93,    94,    95,     0,     0,     0,     0,   111,   112,
     113,   114,   115,   116,    26,    48,    50,    51,    70,    71,
      90,    97,   105,   117,     0,   119,   123,   126,   129,   134,
     137,   139,   141,   143,   145,   147,   149,   151,    75,   175,
       0,    29,     8,     9,    10,    11,    78,    12,    78,    13,
      14,   191,    15,    43,    44,     0,     0,     0,     0,    93,
      94,    86,     0,    72,    93,    94,     0,    77,    68,     0,
     185,     0,    92,     0,     0,     0,    18,     0,     0,     0,
      78,     0,    78,     0,    78,     0,   106,     0,   109,   107,
      93,     0,     0,    78,     0,   103,   104,     0,     0,     0,
       0,   117,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    67,    69,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   191,
     194,    78,     0,     0,   189,   190,   196,   200,   197,   198,
     199,     0,    23,    21,     0,    78,     0,    84,     0,    78,
      80,    87,     0,     0,     0,   158,   163,   156,     0,    78,
       0,    24,    25,     0,    19,   191,    27,    76,    93,   170,
       0,     0,     0,    94,    95,    66,     0,     0,    96,    49,
     102,   101,    99,   153,     0,     0,   150,   120,   121,   122,
     124,   125,   127,   128,   132,   133,   130,   131,   135,   136,
     138,   140,   142,   144,   146,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   220,   221,     0,     0,
      93,   203,   174,   192,   193,   201,     0,   188,    81,    86,
       0,    53,    54,    79,    85,    88,     0,   161,     0,     0,
       0,    17,     0,   179,   182,   172,     0,     0,   176,   169,
       0,     0,   110,   118,     0,   100,    98,     0,     0,     0,
       0,     0,     0,     0,   216,     0,     0,   218,   222,   195,
       0,    83,   187,     0,   168,   157,   155,     0,   183,   183,
     171,    22,   178,     0,   191,   154,   148,   225,   223,   227,
     229,   224,     0,     0,     0,     0,   217,     0,    82,   160,
      42,     0,    78,   163,     0,     0,   168,     0,    20,   180,
     181,   177,     0,     0,     0,     0,   210,   209,   212,     0,
       0,     0,   168,    93,   162,   191,   168,   165,   168,   184,
       0,     0,     0,     0,     0,     0,     0,     0,   214,     0,
     164,     0,   167,   166,   226,   228,   230,   211,     0,     0,
     204,   213,   215,   173,     0,   191,   209,   191,   209,     0,
     207,     0,   205,   195,   195,   208,   206
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,  -402,   516,    36,  -402,  -402,  -139,     0,  -402,   -14,
    -402,   508,   -36,   373,   -55,     1,  -402,   -50,    -8,    23,
    -122,  -402,    -1,  -402,  -402,  -402,   107,  -402,   -86,   160,
     165,    31,   154,   352,   365,   367,   364,   366,  -402,   210,
    -144,    15,  -402,  -402,  -402,  -402,   195,   177,  -348,   -17,
    -221,  -402,    46,    67,   208,    -7,  -402,  -402,  -196,  -204,
    -170,  -402,  -402,  -401,  -402,  -402,   211,  -402,  -402,   151,
     -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,   210,    22,   244,    23,   211,    25,    26,
      27,    28,    84,    85,    86,   226,    29,    87,    30,    31,
     132,    61,    32,    33,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   212,   264,    34,    35,   143,   235,   319,   383,   384,
     149,   385,   386,   387,   251,   326,    38,    39,   213,   214,
     215,   216,   217,   416,   218,   219,   346,   220,   221,   368,
     371
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    43,    62,   307,    60,   137,   238,   109,   172,   228,
     138,   303,   146,   299,   111,   227,    88,   140,   144,    24,
     241,   242,   131,    90,   263,   190,   266,   -74,   369,    63,
     323,   324,   292,   116,   118,   440,    21,   442,   407,   108,
      65,    66,   445,   446,    69,   304,    36,    89,   286,   327,
      88,    70,    88,    64,   420,    21,   -74,   133,   422,   133,
     423,   137,   142,   137,   191,    36,   194,    37,   195,   147,
     150,   123,   154,   108,   136,   108,    44,   161,   163,  -159,
     145,    89,   112,    89,   370,   243,    37,   267,   268,   269,
     -74,   113,   162,   -74,   170,   352,   193,   325,   141,   137,
     303,   180,   181,   310,   255,   114,   192,   178,    88,   179,
      88,   121,   -74,   -72,   246,   133,   131,   133,   -74,   -74,
     -72,   301,   -74,   337,   182,   183,   164,   165,   192,   -53,
     192,   108,   124,   108,   304,   231,   -53,   166,   119,    89,
     -54,    89,    88,   348,    88,   239,    88,   -54,   120,   133,
     192,   133,   250,   133,   232,    88,   167,   256,   122,   376,
     125,   168,   133,   169,   139,   108,   192,   108,   392,   108,
     162,   333,   162,    89,   173,    89,   126,    89,   108,   174,
     175,   156,   158,   159,   265,   402,    89,   350,   128,   309,
     365,   192,    70,   314,   192,    62,   315,    60,   148,   336,
     408,   171,   396,    88,   398,   121,   285,    14,    15,   421,
      90,   274,   275,   276,   277,   381,   127,    88,   163,    59,
     229,    88,   298,   230,   133,   186,   108,   187,   133,   233,
     418,    88,    59,   192,    89,   331,   258,   188,   133,   439,
     108,   441,   229,   427,   108,   313,   192,   381,    89,   432,
     334,   189,    89,   335,   108,   229,   222,   192,   351,   436,
     372,   223,    89,   381,   438,   192,   225,   381,   373,   381,
     192,   229,   224,   374,   378,   134,   135,    73,   184,   185,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   234,   192,
     192,   154,   417,   419,   340,   341,   342,    74,   345,    75,
     236,   -42,   -52,   176,   177,   311,   312,    76,   320,    70,
     321,   322,   323,   324,   414,   415,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   270,   271,   278,   279,
     237,    77,   262,   272,   273,    78,    79,    80,    81,    82,
      83,   389,   390,   240,   382,   425,   426,   245,   247,   252,
     -42,   345,   250,   250,   171,   109,   257,   260,   261,   287,
     289,   288,   151,   290,    88,   -52,    57,    58,   -52,    59,
     294,   133,   291,   293,   295,   296,   382,   302,   305,   306,
     399,   316,   401,   317,   318,   328,   329,   108,   330,   332,
     338,   339,   382,   343,   347,    89,   382,   349,   382,   243,
       1,     2,   353,   196,   135,    73,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   356,   355,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      16,    17,   197,   198,   171,    74,   357,    75,   358,   359,
     360,   354,   362,   361,   364,    76,   367,   363,   199,   388,
     200,   201,   202,   203,   204,   205,   206,   207,   375,   393,
     208,    18,   115,   394,   397,   209,   395,   406,   405,    77,
      57,   409,   410,    78,    79,    80,    81,    82,    83,     1,
       2,   411,   196,   135,    73,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   412,   413,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    16,
      17,   197,   198,   428,    74,   429,    75,   430,   431,   433,
     434,   443,   444,   110,    76,    68,   259,   199,   280,   200,
     201,   202,   203,   204,   205,   206,   207,   366,   379,   208,
      18,   117,   281,   283,   435,   282,   284,   377,    77,    57,
     404,   424,    78,    79,    80,    81,    82,    83,     1,     2,
     391,   196,   135,    73,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    16,    17,
     197,   198,     0,    74,     0,    75,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,   199,     0,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,   208,    18,
     134,   135,    73,   437,     0,     0,     0,    77,    57,     0,
       0,    78,    79,    80,    81,    82,    83,   248,   130,    73,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    74,     0,    75,     0,     0,     0,     0,     0,
       0,     0,    76,     0,    41,    42,     0,     0,     0,    74,
       0,    75,     0,     0,     0,     0,     0,   297,     0,    76,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     0,     0,    45,   -42,
     -42,     0,     0,    77,   249,     0,     0,    78,    79,    80,
      81,    82,    83,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
     -42,     0,   -42,     0,     0,     0,     0,     0,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,     0,     0,     0,    56,
       0,     0,   -42,    57,    58,     0,    59,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   160,   135,    73,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   129,
     130,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,     0,     0,     0,    74,     0,    75,   134,
     135,    73,     0,     0,     0,     0,    76,     0,     0,     0,
       0,    74,     0,    75,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,   134,   135,    73,     0,     0,
      77,    74,     0,    75,    78,    79,    80,    81,    82,    83,
       0,    76,     0,     0,     0,    77,   308,     0,     0,    78,
      79,    80,    81,    82,    83,     0,   344,    74,     0,    75,
       0,     0,     0,     0,     0,    77,     0,    76,     0,    78,
      79,    80,    81,    82,    83,    71,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,    73,     0,
       0,    77,   400,     0,     0,    78,    79,    80,    81,    82,
      83,   134,   135,    73,    40,     0,     0,    74,     0,    75,
       7,     8,     9,    10,    11,    12,    13,    76,    74,     0,
      75,   129,    72,    73,     0,     0,     0,     0,    76,     0,
       0,    41,    42,    74,     0,    75,   134,   135,    73,     0,
       0,    77,     0,    76,     0,    78,    79,    80,    81,    82,
      83,     0,    77,    74,     0,    75,    78,    79,    80,    81,
      82,    83,     0,    76,     0,     0,     0,    77,    74,     0,
      75,    78,    79,    80,    81,    82,    83,     0,    76,     0,
     134,   135,    73,     0,     0,     0,     0,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,   129,   253,   254,
       0,     0,   155,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    74,     0,    75,   300,    72,    73,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,    74,
       0,    75,   403,    72,    73,     0,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,   157,    74,     0,    75,
      78,    79,    80,    81,    82,    83,     0,    76,     0,     0,
       0,     0,     0,    77,    74,     0,    75,    78,    79,    80,
      81,    82,    83,     0,    76,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,     0,    45,     0,     0,     0,     0,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   -52,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,     0,     0,    57,    58,
       0,    59,     0,     0,   -52,     0,     0,     0,   151,     0,
       0,   -52,    57,   152,   -52,    59,     0,     0,   151,     0,
     -52,   -52,    57,    58,   -52,    59,    40,     0,   153,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,    67,     0,     0,     0,     0,     1,
       2,     0,     3,    41,    42,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,   -52,     0,     0,     0,   151,     0,     0,   -52,    57,
      58,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     0,     3,     0,   153,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      16,    17,    40,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    18,   -52,     0,     0,     0,   151,     0,     0,   -52,
      57,   152,   380,    59,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42
};

static const yytype_int16 yycheck[] =
{
       0,     1,     3,   224,     3,    60,   145,    24,    94,   131,
      60,   215,    10,   209,    28,     9,    24,     8,     8,    19,
       9,    10,    58,    24,   168,    49,   170,     9,     8,     8,
       8,     9,   202,    32,    33,   436,     0,   438,   386,    24,
       3,     4,   443,   444,    65,   215,     0,    24,   192,   245,
      58,    72,    60,     8,   402,    19,     9,    58,   406,    60,
     408,   116,    63,   118,    88,    19,   116,     0,   118,    67,
      70,     8,    71,    58,    59,    60,     7,    77,    72,    70,
      70,    58,    65,    60,    64,    74,    19,   173,   174,   175,
      72,    65,    77,    75,    93,   316,   110,    75,    89,   154,
     304,    44,    45,   225,   154,    65,    72,    41,   116,    43,
     118,    70,    65,    65,   150,   116,   152,   118,    71,    72,
      72,    65,    75,    89,    67,    68,    39,    40,    72,    65,
      72,   116,     8,   118,   304,    77,    72,    50,    65,   116,
      65,   118,   150,    65,   152,   145,   154,    72,    65,   150,
      72,   152,   152,   154,   139,   163,    69,   157,    65,    65,
       8,    74,   163,    76,    76,   150,    72,   152,   364,   154,
     155,   257,   157,   150,    79,   152,     8,   154,   163,    84,
      85,    74,    75,    76,   169,    65,   163,   309,     8,   225,
     334,    72,    72,   229,    72,   196,    77,   196,     8,    77,
      65,    94,   372,   211,   374,    70,   191,    21,    22,   405,
     211,   180,   181,   182,   183,   354,    73,   225,    72,    76,
      72,   229,   207,    75,   225,    78,   211,    86,   229,    73,
     400,   239,    76,    72,   211,   252,    75,    87,   239,   435,
     225,   437,    72,   413,   229,    75,    72,   386,   225,   419,
      72,    48,   229,    75,   239,    72,    65,    72,    75,   429,
      75,    65,   239,   402,   434,    72,    74,   406,    75,   408,
      72,    72,    34,    75,    75,     8,     9,    10,    46,    47,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    33,    72,
      72,   300,    75,    75,   289,   290,   291,    40,   293,    42,
      70,     8,     9,    80,    81,     9,    10,    50,    71,    72,
      68,    69,     8,     9,    51,    52,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   176,   177,   184,   185,
      65,    74,    75,   178,   179,    78,    79,    80,    81,    82,
      83,   358,   359,     8,   354,   411,   412,    70,     8,    89,
      75,   346,   362,   363,   257,   382,    75,     8,     8,    68,
      74,    67,    69,    74,   382,    72,    73,    74,    75,    76,
       8,   382,    74,    74,    65,    65,   386,    71,    65,     8,
     375,    34,   377,     8,    33,     8,    75,   382,     8,    75,
      68,    67,   402,    56,    65,   382,   406,    71,   408,    74,
       5,     6,    72,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    65,    71,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      35,    36,    37,    38,   337,    40,     8,    42,    72,    72,
      75,    89,    72,    71,    70,    50,     8,    74,    53,    68,
      55,    56,    57,    58,    59,    60,    61,    62,    74,    68,
      65,    66,    65,    67,    70,    70,    67,    65,    70,    74,
      73,    71,    68,    78,    79,    80,    81,    82,    83,     5,
       6,    67,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    67,    54,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    35,
      36,    37,    38,     9,    40,    89,    42,    71,    65,    71,
      89,    71,    71,    25,    50,    19,   163,    53,   186,    55,
      56,    57,    58,    59,    60,    61,    62,   337,   353,    65,
      66,    65,   187,   189,    70,   188,   190,   346,    74,    73,
     383,   410,    78,    79,    80,    81,    82,    83,     5,     6,
     362,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    35,    36,
      37,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
       8,     9,    10,    70,    -1,    -1,    -1,    74,    73,    -1,
      -1,    78,    79,    80,    81,    82,    83,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    35,    36,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    65,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    -1,    -1,     8,     9,
      10,    -1,    -1,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    40,    -1,    42,     8,
       9,    10,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,     8,     9,    10,    -1,    -1,
      74,    40,    -1,    42,    78,    79,    80,    81,    82,    83,
      -1,    50,    -1,    -1,    -1,    74,    75,    -1,    -1,    78,
      79,    80,    81,    82,    83,    -1,    65,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    50,    -1,    78,
      79,    80,    81,    82,    83,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    -1,
      -1,    74,    75,    -1,    -1,    78,    79,    80,    81,    82,
      83,     8,     9,    10,     8,    -1,    -1,    40,    -1,    42,
      14,    15,    16,    17,    18,    19,    20,    50,    40,    -1,
      42,     8,     9,    10,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    35,    36,    40,    -1,    42,     8,     9,    10,    -1,
      -1,    74,    -1,    50,    -1,    78,    79,    80,    81,    82,
      83,    -1,    74,    40,    -1,    42,    78,    79,    80,    81,
      82,    83,    -1,    50,    -1,    -1,    -1,    74,    40,    -1,
      42,    78,    79,    80,    81,    82,    83,    -1,    50,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,     8,     9,    10,
      -1,    -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    40,    -1,    42,     8,     9,    10,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,     8,     9,    10,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    40,    -1,    42,
      78,    79,    80,    81,    82,    83,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    74,    40,    -1,    42,    78,    79,    80,
      81,    82,    83,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    -1,    -1,     8,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     9,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    73,    74,
      -1,    76,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    74,    65,    76,    -1,    -1,    69,    -1,
      71,    72,    73,    74,    75,    76,     8,    -1,    89,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,     5,
       6,    -1,     8,    35,    36,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    65,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,     8,    -1,    89,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      35,    36,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    66,    65,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    74,     8,    76,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     8,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    35,    36,    66,    91,
      92,    93,    94,    96,    97,    98,    99,   100,   101,   106,
     108,   109,   112,   113,   133,   134,   142,   143,   146,   147,
       8,    35,    36,    97,     7,     8,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    69,    73,    74,    76,
     105,   111,   112,     8,     8,     3,     4,     0,    92,    65,
      72,     8,     9,    10,    40,    42,    50,    74,    78,    79,
      80,    81,    82,    83,   102,   103,   104,   107,   108,   109,
     112,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   139,
     101,    99,    65,    65,    65,    65,   105,    65,   105,    65,
      65,    70,    65,     8,     8,     8,     8,    73,     8,     8,
       9,   102,   110,   112,     8,     9,   131,   104,   107,    76,
       8,    89,   112,   135,     8,    70,    10,    67,     8,   140,
      97,    69,    74,    89,   105,    74,   116,    74,   116,   116,
       8,    97,   131,    72,    39,    40,    50,    69,    74,    76,
     105,   116,   118,    79,    84,    85,    80,    81,    41,    43,
      44,    45,    67,    68,    46,    47,    78,    86,    87,    48,
      49,    88,    72,    99,   107,   107,     8,    37,    38,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    65,    70,
      93,    97,   131,   148,   149,   150,   151,   152,   154,   155,
     157,   158,    65,    65,    34,    74,   105,     9,   110,    72,
      75,    77,   131,    73,    33,   136,    70,    65,    96,    97,
       8,     9,    10,    74,    95,    70,   102,     8,     8,    75,
      97,   144,    89,     9,    10,   107,    97,    75,    75,   103,
       8,     8,    75,   130,   132,   131,   130,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   122,   122,
     123,   124,   125,   126,   127,   131,   130,    68,    67,    74,
      74,    74,   150,    74,     8,    65,    65,    65,   131,   148,
       8,    65,    71,   149,   150,    65,     8,   140,    75,   102,
     110,     9,    10,    75,   102,    77,    34,     8,    33,   137,
      71,    68,    69,     8,     9,    75,   145,   148,     8,    75,
       8,   139,    75,   118,    72,    75,    77,    89,    68,    67,
     131,   131,   131,    56,    65,   131,   156,    65,    65,    71,
     110,    75,   140,    72,    89,    71,    65,     8,    72,    72,
      75,    71,    72,    74,    70,   130,   129,     8,   159,     8,
      64,   160,    75,    75,    75,    74,    65,   156,    75,   136,
       8,    96,    97,   138,   139,   141,   142,   143,    68,   145,
     145,   144,   148,    68,    67,    67,   150,    70,   150,   131,
      75,   131,    65,     8,   137,    70,    65,   138,    65,    71,
      68,    67,    67,    54,    51,    52,   153,    75,   150,    75,
     138,   148,   138,   138,   159,   160,   160,   150,     9,    89,
      71,    65,   150,    71,    89,    70,   150,    70,   150,   148,
     153,   148,   153,    71,    71,   153,   153
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    98,    98,    98,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   110,   111,   111,   112,
     113,   113,   113,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   121,   122,
     122,   122,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   139,
     139,   140,   140,   141,   142,   143,   144,   144,   144,   145,
     145,   145,   145,   145,   146,   147,   147,   147,   147,   148,
     148,   148,   149,   149,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   152,   153,   153,   153,   153,   153,
     154,   154,   155,   155,   155,   155,   156,   156,   157,   157,
     157,   157,   157,   158,   158,   159,   159,   160,   160,   160,
     160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     5,     3,     4,
       7,     4,     6,     4,     1,     1,     2,     4,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     0,     1,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     0,     5,
       4,     5,     7,     6,     1,     3,     0,     3,     4,     2,
       2,     2,     3,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     6,     4,     6,     2,     0,
       4,     2,     4,     0,     3,     2,     3,     3,     0,     4,
       3,     4,     3,     4,     4,     2,     2,     4,     0,     1,
       3,     3,     1,     0,     8,     3,     2,     6,     5,     1,
       1,     0,     2,     0,     1,     3,     1,     1,     1,     1,
       1,     2,     1,     2,     7,     5,     7,     4,     6,     0,
       5,     7,     5,     7,     6,     7,     1,     2,     3,     2,
       2,     2,     3,     4,     4,     1,     4,     1,     4,     1,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 189:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("0");}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("1");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("2");}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1875 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 430 "parser.y" /* yacc.c:1906  */



void yyerror(char *msg)
{
printf("Invalid Expression %s\n", msg);
}
int main ()
{
yyparse();

return 0;
}
