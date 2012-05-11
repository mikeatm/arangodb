
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         Ahuacatlparse
#define yylex           Ahuacatllex
#define yyerror         Ahuacatlerror
#define yylval          Ahuacatllval
#define yychar          Ahuacatlchar
#define yydebug         Ahuacatldebug
#define yynerrs         Ahuacatlnerrs
#define yylloc          Ahuacatllloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 10 "Ahuacatl/ahuacatl-grammar.y"

#include <stdio.h>
#include <stdlib.h>

#include <BasicsC/common.h>
#include <BasicsC/conversions.h>
#include <BasicsC/strings.h>

#include "Ahuacatl/ahuacatl-ast-node.h"
#include "Ahuacatl/ahuacatl-context.h"
#include "Ahuacatl/ahuacatl-error.h"
#include "Ahuacatl/ahuacatl-parser.h"
#include "Ahuacatl/ahuacatl-parser-functions.h"


/* Line 189 of yacc.c  */
#line 97 "Ahuacatl/ahuacatl-grammar.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_END = 0,
     T_FOR = 258,
     T_LET = 259,
     T_FILTER = 260,
     T_RETURN = 261,
     T_COLLECT = 262,
     T_SORT = 263,
     T_LIMIT = 264,
     T_ASC = 265,
     T_DESC = 266,
     T_IN = 267,
     T_INTO = 268,
     T_NULL = 269,
     T_TRUE = 270,
     T_FALSE = 271,
     T_STRING = 272,
     T_QUOTED_STRING = 273,
     T_NUMBER = 274,
     T_PARAMETER = 275,
     T_ASSIGN = 276,
     T_NOT = 277,
     T_AND = 278,
     T_OR = 279,
     T_EQ = 280,
     T_NE = 281,
     T_LT = 282,
     T_GT = 283,
     T_LE = 284,
     T_GE = 285,
     T_PLUS = 286,
     T_MINUS = 287,
     T_TIMES = 288,
     T_DIV = 289,
     T_MOD = 290,
     T_EXPAND = 291,
     T_QUESTION = 292,
     T_COLON = 293,
     T_COMMA = 294,
     T_OPEN = 295,
     T_CLOSE = 296,
     T_DOC_OPEN = 297,
     T_DOC_CLOSE = 298,
     T_LIST_OPEN = 299,
     T_LIST_CLOSE = 300,
     UPLUS = 301,
     UMINUS = 302,
     FUNCCALL = 303,
     REFERENCE = 304,
     INDEXED = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "Ahuacatl/ahuacatl-grammar.y"

  TRI_aql_node_t* node;
  char* strval;
  bool boolval;
  int64_t intval;



/* Line 214 of yacc.c  */
#line 193 "Ahuacatl/ahuacatl-grammar.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 32 "Ahuacatl/ahuacatl-grammar.y"


////////////////////////////////////////////////////////////////////////////////
/// @brief forward for lexer function defined in ahuacatl-tokens.l
////////////////////////////////////////////////////////////////////////////////

int Ahuacatllex (YYSTYPE*, YYLTYPE*, void*);
 
////////////////////////////////////////////////////////////////////////////////
/// @brief register parse error
////////////////////////////////////////////////////////////////////////////////

void Ahuacatlerror (YYLTYPE* locp, TRI_aql_context_t* const context, const char* err) {
  TRI_SetErrorParseAql(context, err, locp->first_line, locp->first_column);
}

////////////////////////////////////////////////////////////////////////////////
/// @brief shortcut macro for signalling out of memory
////////////////////////////////////////////////////////////////////////////////

#define ABORT_OOM                                                              \
  TRI_SetErrorContextAql(context, TRI_ERROR_OUT_OF_MEMORY, NULL);              \
  YYABORT;

#define scanner context->_parser->_scanner


/* Line 264 of yacc.c  */
#line 246 "Ahuacatl/ahuacatl-grammar.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    52,    51,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    29,    32,    37,    38,    43,    45,    49,
      53,    55,    56,    59,    60,    64,    66,    70,    73,    74,
      76,    78,    81,    86,    89,    93,    97,    99,   101,   103,
     104,   110,   112,   114,   116,   119,   122,   125,   129,   133,
     137,   141,   145,   149,   153,   157,   161,   165,   169,   173,
     177,   181,   187,   188,   190,   192,   196,   198,   200,   201,
     206,   207,   209,   211,   215,   216,   221,   222,   224,   226,
     230,   234,   236,   237,   242,   244,   248,   253,   256,   260,
     264,   269,   271,   273,   275,   277,   279,   281,   283,   285,
     287,   289,   291,   293
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    55,    56,    72,    -1,    -1,    56,
      57,    -1,    58,    -1,    60,    -1,    59,    -1,    61,    -1,
      66,    -1,    71,    -1,     3,    98,    12,    73,    -1,     5,
      73,    -1,     4,    98,    21,    73,    -1,    -1,     7,    62,
      63,    65,    -1,    64,    -1,    63,    39,    64,    -1,    98,
      21,    73,    -1,    73,    -1,    -1,    13,    98,    -1,    -1,
       8,    67,    68,    -1,    69,    -1,    68,    39,    69,    -1,
      73,    70,    -1,    -1,    10,    -1,    11,    -1,     9,    99,
      -1,     9,    99,    39,    99,    -1,     6,    73,    -1,    40,
      73,    41,    -1,    40,    54,    41,    -1,    75,    -1,    76,
      -1,    77,    -1,    -1,    17,    74,    40,    78,    41,    -1,
      80,    -1,    94,    -1,    90,    -1,    31,    73,    -1,    32,
      73,    -1,    22,    73,    -1,    73,    24,    73,    -1,    73,
      23,    73,    -1,    73,    31,    73,    -1,    73,    32,    73,
      -1,    73,    33,    73,    -1,    73,    34,    73,    -1,    73,
      35,    73,    -1,    73,    25,    73,    -1,    73,    26,    73,
      -1,    73,    27,    73,    -1,    73,    28,    73,    -1,    73,
      29,    73,    -1,    73,    30,    73,    -1,    73,    12,    73,
      -1,    73,    37,    73,    38,    73,    -1,    -1,    79,    -1,
      73,    -1,    79,    39,    73,    -1,    81,    -1,    85,    -1,
      -1,    44,    82,    83,    45,    -1,    -1,    84,    -1,    73,
      -1,    84,    39,    73,    -1,    -1,    42,    86,    87,    43,
      -1,    -1,    88,    -1,    89,    -1,    88,    39,    89,    -1,
      97,    38,    73,    -1,    92,    -1,    -1,    90,    91,    36,
      93,    -1,    17,    -1,    92,    51,    17,    -1,    92,    44,
      73,    45,    -1,    51,    17,    -1,    44,    73,    45,    -1,
      93,    51,    17,    -1,    93,    44,    73,    45,    -1,    95,
      -1,    96,    -1,    18,    -1,    19,    -1,    14,    -1,    15,
      -1,    16,    -1,    20,    -1,    17,    -1,    18,    -1,    17,
      -1,    19,    -1,    52,    19,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   183,   183,   183,   197,   199,   204,   206,   208,   210,
     212,   214,   218,   233,   248,   263,   263,   286,   288,   293,
     303,   311,   314,   320,   320,   344,   349,   357,   368,   371,
     374,   380,   392,   407,   423,   426,   454,   457,   460,   463,
     463,   485,   488,   491,   497,   505,   513,   524,   532,   540,
     548,   556,   564,   572,   580,   588,   596,   604,   612,   620,
     628,   639,   650,   652,   657,   660,   666,   669,   675,   675,
     688,   690,   695,   700,   708,   708,   721,   723,   728,   730,
     735,   744,   748,   748,   801,   818,   826,   837,   847,   857,
     864,   874,   877,   883,   891,   905,   913,   921,   932,   943,
     950,   959,   965,   972
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of query string\"", "error", "$undefined", "\"FOR declaration\"",
  "\"LET declaration\"", "\"FILTER declaration\"",
  "\"RETURN declaration\"", "\"COLLECT declaration\"",
  "\"SORT declaration\"", "\"LIMIT declaration\"", "\"ASC keyword\"",
  "\"DESC keyword\"", "\"IN keyword\"", "\"INTO keyword\"", "\"null\"",
  "\"true\"", "\"false\"", "\"identifier\"", "\"quoted string\"",
  "\"number\"", "\"bind parameter\"", "\"assignment\"", "\"not operator\"",
  "\"and operator\"", "\"or operator\"", "\"== operator\"",
  "\"!= operator\"", "\"< operator\"", "\"> operator\"", "\"<= operator\"",
  "\">= operator\"", "\"+ operator\"", "\"- operator\"", "\"* operator\"",
  "\"/ operator\"", "\"% operator\"", "\"[*] operator\"", "\"?\"", "\":\"",
  "\",\"", "\"(\"", "\")\"", "\"{\"", "\"}\"", "\"[\"", "\"]\"", "UPLUS",
  "UMINUS", "FUNCCALL", "REFERENCE", "INDEXED", "'.'", "'-'", "$accept",
  "query", "$@1", "optional_statement_block_statements",
  "statement_block_statement", "for_statement", "filter_statement",
  "let_statement", "collect_statement", "$@2", "collect_list",
  "collect_element", "optional_into", "sort_statement", "$@3", "sort_list",
  "sort_element", "sort_direction", "limit_statement", "return_statement",
  "expression", "$@4", "operator_unary", "operator_binary",
  "operator_ternary", "optional_function_call_arguments",
  "function_arguments_list", "compound_type", "list", "$@5",
  "optional_list_elements", "list_elements_list", "array", "$@6",
  "optional_array_elements", "array_elements_list", "array_element",
  "reference", "$@7", "single_reference", "expansion", "atomic_value",
  "value_literal", "bind_parameter", "array_element_name", "variable_name",
  "signed_number", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    46,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    56,    57,    57,    57,    57,
      57,    57,    58,    59,    60,    62,    61,    63,    63,    64,
      64,    65,    65,    67,    66,    68,    68,    69,    70,    70,
      70,    71,    71,    72,    73,    73,    73,    73,    73,    74,
      73,    73,    73,    73,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    78,    78,    79,    79,    80,    80,    82,    81,
      83,    83,    84,    84,    86,    85,    87,    87,    88,    88,
      89,    90,    91,    90,    92,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    96,    97,
      97,    98,    99,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     4,     2,     4,     0,     4,     1,     3,     3,
       1,     0,     2,     0,     3,     1,     3,     2,     0,     1,
       1,     2,     4,     2,     3,     3,     1,     1,     1,     0,
       5,     1,     1,     1,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     0,     1,     1,     3,     1,     1,     0,     4,
       0,     1,     1,     3,     0,     4,     0,     1,     1,     3,
       3,     1,     0,     4,     1,     3,     4,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,     0,     0,     0,     0,     0,    15,
      23,     0,     5,     6,     8,     7,     9,    10,    11,     3,
     101,     0,     0,    95,    96,    97,    84,    93,    94,    98,
       0,     0,     0,     2,    74,    68,    13,    36,    37,    38,
      41,    66,    67,    43,    81,    42,    91,    92,    33,     0,
       0,   102,     0,    31,     0,     0,     0,    46,    44,    45,
       0,     0,    76,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    21,    17,    20,     0,    24,    25,    28,
     103,     0,    12,    14,    62,    35,    34,    99,   100,     0,
      77,    78,     0,    72,     0,    71,    60,    48,    47,    54,
      55,    56,    57,    58,    59,    49,    50,    51,    52,    53,
       0,     0,     0,    85,     0,     0,    16,     0,     0,    29,
      30,    27,    32,    64,     0,    63,    75,     0,     0,    69,
       0,     0,     0,     0,    83,    86,    22,    18,    19,    26,
      40,     0,    79,    80,    73,    61,     0,    87,     0,     0,
      65,    88,     0,    89,    90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    12,    13,    14,    15,    16,    49,
      83,    84,   126,    17,    50,    87,    88,   131,    18,    19,
      85,    56,    37,    38,    39,   134,   135,    40,    41,    63,
     104,   105,    42,    62,    99,   100,   101,    43,    79,    44,
     144,    45,    46,    47,   102,    86,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -40
static const yytype_int16 yypact[] =
{
     -40,    14,   -40,   -40,   100,     0,     0,   153,   153,   -40,
     -40,   -12,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,    10,    21,   -40,   -40,   -40,     6,   -40,   -40,   -40,
     153,   153,   153,   153,   -40,   -40,   270,   -40,   -40,   -40,
     -40,   -40,   -40,     9,   -39,   -40,   -40,   -40,   270,   172,
     153,   -40,    36,    33,   153,   153,    34,   -40,   -40,   -40,
      35,   194,     2,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,    39,
     153,    84,   -19,     5,   -40,   270,    90,    73,   -40,   222,
     -40,   -12,   270,   270,   153,   -40,   -40,   -40,   -40,    70,
      75,   -40,    77,   270,    71,    78,    51,   306,   294,   318,
     318,    19,    19,    19,    19,   -24,   -24,   -40,   -40,   -40,
     246,   -38,     4,   -40,     0,   172,   -40,   153,   153,   -40,
     -40,   -40,   -40,   270,    82,    79,   -40,     2,   153,   -40,
     153,   153,   153,   102,   -36,   -40,   -40,   -40,   270,   -40,
     -40,   153,   -40,   270,   270,   270,    65,   -40,   153,   107,
     270,   -40,   129,   -40,   -40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,    92,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     1,   -40,   -40,   -40,   -40,    -1,   -40,   -40,   -40,
      -7,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,    -9,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,    -2,    38
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -102
static const yytype_int16 yytable[] =
{
      36,    48,  -101,    21,    22,    80,   142,    51,   158,    75,
      76,    77,    81,   143,     3,   159,    64,    20,   124,    97,
      98,   -39,    54,    57,    58,    59,    61,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      52,    78,    55,    89,   125,   -82,   -39,    92,    93,   145,
      73,    74,    75,    76,    77,    90,   103,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    91,   122,    94,   121,    95,    64,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   133,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,   123,    78,     5,     6,     7,     8,     9,    10,    11,
     161,   127,   128,   136,   137,   138,   139,   140,   151,   157,
     148,    89,   146,   150,   163,    60,   147,   149,   152,   132,
       0,   153,     0,   154,   155,   156,     0,     0,     0,     0,
       0,    64,     0,     0,   160,     0,     0,     0,     0,     0,
       0,   162,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    23,    24,    25,
      26,    27,    28,    29,   164,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    23,    24,    25,    82,
      27,    28,    29,    33,    30,    34,     0,    35,     0,     0,
       0,     0,     0,    31,    32,     0,    64,     0,     0,     0,
       0,     0,    33,     0,    34,     0,    35,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,   129,   130,    64,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    64,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    64,    78,   141,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    64,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    64,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      64,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,    69,    70,    71,    72,    73,
      74,    75,    76,    77
};

static const yytype_int16 yycheck[] =
{
       7,     8,    21,     5,     6,    44,    44,    19,    44,    33,
      34,    35,    51,    51,     0,    51,    12,    17,    13,    17,
      18,    40,    12,    30,    31,    32,    33,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      52,    37,    21,    50,    39,    36,    40,    54,    55,    45,
      31,    32,    33,    34,    35,    19,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    39,    80,    40,    36,    41,    12,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    94,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    17,    37,     3,     4,     5,     6,     7,     8,     9,
      45,    21,    39,    43,    39,    38,    45,    39,    39,    17,
     127,   128,   124,    41,    17,    33,   125,   128,   137,    91,
      -1,   138,    -1,   140,   141,   142,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    14,    15,    16,
      17,    18,    19,    20,    45,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    14,    15,    16,    17,
      18,    19,    20,    40,    22,    42,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    44,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    10,    11,    12,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    12,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    12,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    12,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    12,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      12,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    56,     3,     4,     5,     6,     7,
       8,     9,    57,    58,    59,    60,    61,    66,    71,    72,
      17,    98,    98,    14,    15,    16,    17,    18,    19,    20,
      22,    31,    32,    40,    42,    44,    73,    75,    76,    77,
      80,    81,    85,    90,    92,    94,    95,    96,    73,    62,
      67,    19,    52,    99,    12,    21,    74,    73,    73,    73,
      54,    73,    86,    82,    12,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    37,    91,
      44,    51,    17,    63,    64,    73,    98,    68,    69,    73,
      19,    39,    73,    73,    40,    41,    41,    17,    18,    87,
      88,    89,    97,    73,    83,    84,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    36,    73,    17,    13,    39,    65,    21,    39,    10,
      11,    70,    99,    73,    78,    79,    43,    39,    38,    45,
      39,    38,    44,    51,    93,    45,    98,    64,    73,    69,
      41,    39,    89,    73,    73,    73,    73,    17,    44,    51,
      73,    45,    73,    17,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
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
		  Type, Value, Location, context); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, TRI_aql_context_t* const context)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    TRI_aql_context_t* const context;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, TRI_aql_context_t* const context)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    TRI_aql_context_t* const context;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, TRI_aql_context_t* const context)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, context)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    TRI_aql_context_t* const context;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, context); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, TRI_aql_context_t* const context)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, context)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    TRI_aql_context_t* const context;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

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
int yyparse (TRI_aql_context_t* const context);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (TRI_aql_context_t* const context)
#else
int
yyparse (context)
    TRI_aql_context_t* const context;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 183 "Ahuacatl/ahuacatl-grammar.y"
    {
      // a query or a sub-query always starts a new scope
      if (!TRI_StartScopeContextAql(context)) {
        ABORT_OOM
      }
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 188 "Ahuacatl/ahuacatl-grammar.y"
    {
      // end the scope
      (yyval.node) = (TRI_aql_node_t*) TRI_GetFirstStatementAql(context);

      TRI_EndScopeContextAql(context);
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 197 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 199 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 204 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 206 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 208 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 210 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 212 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 214 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 218 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeForAql(context, (yyvsp[(2) - (4)].strval), (yyvsp[(4) - (4)].node));
      if (!node) {
        ABORT_OOM
      }

      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }
      
      (yyval.node) = node;
    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 233 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeFilterAql(context, (yyvsp[(2) - (2)].node));
      if (!node) {
        ABORT_OOM
      }

      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 248 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeLetAql(context, (yyvsp[(2) - (4)].strval), (yyvsp[(4) - (4)].node));
      if (!node) {
        ABORT_OOM
      }
      
      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 263 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeListAql(context);
      
      if (!node) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 271 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeCollectAql(context, TRI_PopStackParseAql(context), (yyvsp[(4) - (4)].strval));
      if (!node) {
        ABORT_OOM
      }
      
      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 286 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 288 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 293 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeAssignAql(context, (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      if (!TRI_PushListAql(context, node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 303 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!TRI_PushListAql(context, (yyvsp[(1) - (1)].node))) {
        ABORT_OOM
      }
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 311 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.strval) = NULL;
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 314 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.strval) = (yyvsp[(2) - (2)].strval);
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 320 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeListAql(context);
      
      if (!node) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 328 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* list = TRI_PopStackParseAql(context);
      TRI_aql_node_t* node = TRI_CreateNodeSortAql(context, list);
      if (!node) {
        ABORT_OOM
      }
      
      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 344 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!TRI_PushListAql(context, (yyvsp[(1) - (1)].node))) {
        ABORT_OOM
      }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 349 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!TRI_PushListAql(context, (yyvsp[(3) - (3)].node))) {
        ABORT_OOM
      }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 357 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeSortElementAql(context, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].boolval));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 368 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.boolval) = true;
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 371 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.boolval) = true;
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 374 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.boolval) = false;
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 380 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeLimitAql(context, TRI_CreateNodeValueIntAql(context, 0), TRI_CreateNodeValueIntAql(context, (yyvsp[(2) - (2)].intval)));
      if (!node) {
        ABORT_OOM
      }
      
      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 392 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeLimitAql(context, TRI_CreateNodeValueIntAql(context, (yyvsp[(2) - (4)].intval)), TRI_CreateNodeValueIntAql(context, (yyvsp[(4) - (4)].intval)));
      if (!node) {
        ABORT_OOM
      }
      
      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 407 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeReturnAql(context, (yyvsp[(2) - (2)].node));
      if (!node) {
        ABORT_OOM
      }
      
      if (!TRI_AddStatementAql(context, node)) {
        ABORT_OOM
      }
      
      (yyval.node) = node;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 423 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 426 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* subQuery;
      TRI_aql_node_t* result;
      TRI_aql_node_t* nameNode;

      subQuery = TRI_CreateNodeSubqueryAql(context, (yyvsp[(2) - (3)].node));
      if (!subQuery) {
        ABORT_OOM
      }

      // push the sub query execution into the statement list
      if (!TRI_AddStatementAql(context, subQuery)) {
        ABORT_OOM
      }

      nameNode = TRI_AQL_NODE_MEMBER(subQuery, 0);
      if (!nameNode) {
        ABORT_OOM
      }

      result = TRI_CreateNodeReferenceAql(context, TRI_AQL_NODE_STRING(nameNode));
      if (!result) {
        ABORT_OOM
      }

      // return the result
      (yyval.node) = result;
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 454 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 457 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 460 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 463 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node;

      if (!TRI_PushStackParseAql(context, (yyvsp[(1) - (1)].strval))) {
        ABORT_OOM
      }

      node = TRI_CreateNodeListAql(context);
      if (!node) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 476 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* list = TRI_PopStackParseAql(context);
      TRI_aql_node_t* node = TRI_CreateNodeFcallAql(context, TRI_PopStackParseAql(context), list);
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 485 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 488 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 491 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 497 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorUnaryPlusAql(context, (yyvsp[(2) - (2)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 505 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorUnaryMinusAql(context, (yyvsp[(2) - (2)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 513 "Ahuacatl/ahuacatl-grammar.y"
    { 
      TRI_aql_node_t* node = TRI_CreateNodeOperatorUnaryNotAql(context, (yyvsp[(2) - (2)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 524 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryOrAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 532 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryAndAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 540 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryPlusAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 548 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryMinusAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 556 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryTimesAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 564 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryDivAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 572 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryModAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 580 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryEqAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 588 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryNeAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 596 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryLtAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 604 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryGtAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 612 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryLeAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 620 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryGeAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 628 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryInAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 639 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorTernaryAql(context, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 650 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 652 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 657 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_PushListAql(context, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 660 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_PushListAql(context, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 666 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 669 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 675 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeListAql(context);
      if (!node) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 682 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = TRI_PopStackParseAql(context);
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 688 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 690 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 695 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!TRI_PushListAql(context, (yyvsp[(1) - (1)].node))) {
        ABORT_OOM
      }
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 700 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!TRI_PushListAql(context, (yyvsp[(3) - (3)].node))) {
        ABORT_OOM
      }
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 708 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeArrayAql(context);
      if (!node) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 715 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = TRI_PopStackParseAql(context);
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 721 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 723 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 728 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 730 "Ahuacatl/ahuacatl-grammar.y"
    {
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 735 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!TRI_PushArrayAql(context, (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].node))) {
        ABORT_OOM
      }
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 744 "Ahuacatl/ahuacatl-grammar.y"
    {
      // start of reference (collection or variable name)
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 748 "Ahuacatl/ahuacatl-grammar.y"
    {
      // expanded variable access, e.g. variable[*]
      TRI_aql_node_t* node;
      char* varname = TRI_GetNameParseAql(context);

      if (!varname) {
        ABORT_OOM
      }
      
      // push the varname onto the stack
      TRI_PushStackParseAql(context, varname);
      
      // push on the stack what's going to be expanded (will be popped when we come back) 
      TRI_PushStackParseAql(context, (yyvsp[(1) - (1)].node));

      // create a temporary variable for the row iterator (will be popped by "expansion" rule")
      node = TRI_CreateNodeReferenceAql(context, varname);

      if (!node) {
        ABORT_OOM
      }

      // push the variable
      TRI_PushStackParseAql(context, node);
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 772 "Ahuacatl/ahuacatl-grammar.y"
    {
      // return from the "expansion" subrule
      TRI_aql_node_t* expanded = TRI_PopStackParseAql(context);
      TRI_aql_node_t* expand;
      TRI_aql_node_t* nameNode;
      char* varname = TRI_PopStackParseAql(context);

      // push the actual expand node into the statement list
      expand = TRI_CreateNodeExpandAql(context, varname, expanded, (yyvsp[(4) - (4)].node));

      if (!TRI_AddStatementAql(context, expand)) {
        ABORT_OOM
      }
      
      nameNode = TRI_AQL_NODE_MEMBER(expand, 1);
      if (!nameNode) {
        ABORT_OOM
      }

      // return a reference only
      (yyval.node) = TRI_CreateNodeReferenceAql(context, TRI_AQL_NODE_STRING(nameNode));

      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 801 "Ahuacatl/ahuacatl-grammar.y"
    {
      // variable or collection
      TRI_aql_node_t* node;
      
      if (TRI_VariableExistsAql(context, (yyvsp[(1) - (1)].strval))) {
        node = TRI_CreateNodeReferenceAql(context, (yyvsp[(1) - (1)].strval));
      }
      else {
        node = TRI_CreateNodeCollectionAql(context, (yyvsp[(1) - (1)].strval));
      }

      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 818 "Ahuacatl/ahuacatl-grammar.y"
    {
      // named variable access, e.g. variable.reference
      (yyval.node) = TRI_CreateNodeAttributeAccessAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].strval));
      
      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 826 "Ahuacatl/ahuacatl-grammar.y"
    {
      // indexed variable access, e.g. variable[index]
      (yyval.node) = TRI_CreateNodeIndexedAql(context, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
      
      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 837 "Ahuacatl/ahuacatl-grammar.y"
    {
      // named variable access, continuation from * expansion, e.g. [*].variable.reference
      TRI_aql_node_t* node = TRI_PopStackParseAql(context);

      (yyval.node) = TRI_CreateNodeAttributeAccessAql(context, node, (yyvsp[(2) - (2)].strval));

      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 847 "Ahuacatl/ahuacatl-grammar.y"
    {
      // indexed variable access, continuation from * expansion, e.g. [*].variable[index]
      TRI_aql_node_t* node = TRI_PopStackParseAql(context);

      (yyval.node) = TRI_CreateNodeIndexedAql(context, node, (yyvsp[(2) - (3)].node));

      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 857 "Ahuacatl/ahuacatl-grammar.y"
    {
      // named variable access, continuation from * expansion, e.g. [*].variable.xx.reference
      (yyval.node) = TRI_CreateNodeAttributeAccessAql(context, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].strval));
      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 864 "Ahuacatl/ahuacatl-grammar.y"
    {
      // indexed variable access, continuation from * expansion, e.g. [*].variable.xx.[index]
      (yyval.node) = TRI_CreateNodeIndexedAql(context, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
      if (!(yyval.node)) {
        ABORT_OOM
      }
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 874 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 877 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 883 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueStringAql(context, (yyvsp[(1) - (1)].strval));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 891 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node;

      if (!(yyvsp[(1) - (1)].strval)) {
        ABORT_OOM
      }
      
      node = TRI_CreateNodeValueDoubleAql(context, TRI_DoubleString((yyvsp[(1) - (1)].strval)));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 905 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueNullAql(context);
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 913 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueBoolAql(context, true);
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 921 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueBoolAql(context, false);
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 932 "Ahuacatl/ahuacatl-grammar.y"
    {
      TRI_aql_node_t* node = TRI_CreateNodeParameterAql(context, (yyvsp[(1) - (1)].strval));
      if (!node) {
        ABORT_OOM
      }

      (yyval.node) = node;
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 943 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!(yyvsp[(1) - (1)].strval)) {
        ABORT_OOM
      }

      (yyval.strval) = (yyvsp[(1) - (1)].strval);
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 950 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!(yyvsp[(1) - (1)].strval)) {
        ABORT_OOM
      }

      (yyval.strval) = (yyvsp[(1) - (1)].strval);
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 959 "Ahuacatl/ahuacatl-grammar.y"
    {
      (yyval.strval) = (yyvsp[(1) - (1)].strval);
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 965 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!(yyvsp[(1) - (1)].strval)) {
        ABORT_OOM
      }

      (yyval.intval) = TRI_Int64String((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 972 "Ahuacatl/ahuacatl-grammar.y"
    {
      if (!(yyvsp[(2) - (2)].strval)) {
        ABORT_OOM
      }

      (yyval.intval) = - TRI_Int64String((yyvsp[(2) - (2)].strval));
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2995 "Ahuacatl/ahuacatl-grammar.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, context, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, context, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc, context);
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

  yyerror_range[0] = yylsp[1-yylen];
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
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, context);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, context);
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



