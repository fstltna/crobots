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
#line 1 "grammar.y" /* yacc.c:339  */



/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include "crobots.h"
#include "compiler.h"


#line 84 "y.tab.c" /* yacc.c:339  */

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
    IDENTIFIER = 258,
    CONSTANT = 259,
    INC_OP = 260,
    DEC_OP = 261,
    LEFT_OP = 262,
    RIGHT_OP = 263,
    LE_OP = 264,
    GE_OP = 265,
    EQ_OP = 266,
    NE_OP = 267,
    AND_OP = 268,
    OR_OP = 269,
    MUL_ASSIGN = 270,
    DIV_ASSIGN = 271,
    MOD_ASSIGN = 272,
    ADD_ASSIGN = 273,
    SUB_ASSIGN = 274,
    LEFT_ASSIGN = 275,
    RIGHT_ASSIGN = 276,
    AND_ASSIGN = 277,
    XOR_ASSIGN = 278,
    OR_ASSIGN = 279,
    EXTERN = 280,
    AUTO = 281,
    REGISTER = 282,
    INT = 283,
    LONG = 284,
    IF = 285,
    ELSE = 286,
    WHILE = 287,
    FOR = 288,
    RETURN = 289,
    BREAK = 290,
    U_NEGATIVE = 291,
    U_NOT = 292,
    U_ONES = 293
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define INC_OP 260
#define DEC_OP 261
#define LEFT_OP 262
#define RIGHT_OP 263
#define LE_OP 264
#define GE_OP 265
#define EQ_OP 266
#define NE_OP 267
#define AND_OP 268
#define OR_OP 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define LEFT_ASSIGN 275
#define RIGHT_ASSIGN 276
#define AND_ASSIGN 277
#define XOR_ASSIGN 278
#define OR_ASSIGN 279
#define EXTERN 280
#define AUTO 281
#define REGISTER 282
#define INT 283
#define LONG 284
#define IF 285
#define ELSE 286
#define WHILE 287
#define FOR 288
#define RETURN 289
#define BREAK 290
#define U_NEGATIVE 291
#define U_NOT 292
#define U_ONES 293

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

#line 211 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   436

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    49,    42,     2,
      52,    53,    47,    45,    54,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      43,    39,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,    40,    57,    51,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    90,    95,    99,   100,   111,   122,   137,
     155,   164,   165,   169,   170,   183,   196,   221,   226,   231,
     239,   240,   244,   245,   250,   255,   263,   264,   269,   277,
     278,   283,   291,   292,   297,   302,   307,   315,   316,   321,
     329,   330,   338,   339,   347,   348,   356,   357,   365,   366,
     374,   378,   379,   396,   405,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   425,   430,   434,   435,   439,   440,
     441,   442,   446,   447,   451,   452,   462,   463,   464,   468,
     469,   473,   477,   488,   493,   501,   508,   509,   513,   521,
     522,   526,   530,   531,   535,   536,   540,   541,   545,   549,
     550,   551,   552,   553,   557,   558,   559,   563,   564,   568,
     569,   570,   571,   572,   576,   577,   578,   579,   583,   584,
     588,   589,   593,   594,   602,   603,   607,   615,   622,   630,
     637,   644,   652,   659,   666,   674,   682,   683,   687,   696,
     702,   703,   707,   708,   712
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "EXTERN", "AUTO", "REGISTER", "INT", "LONG",
  "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK", "U_NEGATIVE", "U_NOT",
  "U_ONES", "'='", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "'~'", "'('", "')'", "','", "';'", "'{'", "'}'",
  "$accept", "primary_expr", "postfix_expr", "fcall_start",
  "argument_expr_list", "unary_expr", "unary_operator", "cast_expr",
  "multiplicative_expr", "additive_expr", "shift_expr", "relational_expr",
  "equality_expr", "and_expr", "exclusive_or_expr", "inclusive_or_expr",
  "logical_and_expr", "logical_or_expr", "conditional_expr",
  "assignment_expr", "assignment_lval", "assignment_operator", "expr",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "declarator", "declarator2", "func_start", "type_specifier_list",
  "parameter_identifier", "parameter_declaration_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "type_name", "abstract_declarator", "abstract_declarator2",
  "initializer", "initializer_list", "statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "selection1_statement", "selection2_statement",
  "if_clause", "else_clause", "iteration_statement", "while_token",
  "while_clause", "jump_statement", "file", "external_definition",
  "function_definition", "function_body", "identifier", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    61,
     124,    94,    38,    60,    62,    43,    45,    42,    47,    37,
      33,   126,    40,    41,    44,    59,   123,   125
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     313,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    12,   193,
     193,    79,   -27,    13,   114,   -88,   -88,   -88,   -88,    25,
     -88,    72,   -88,   -88,   145,   -88,    12,   -88,    79,   -88,
     -88,   -88,   -88,    33,   -88,   -88,   -88,    28,   -88,   299,
     -88,   -88,   364,   364,   -19,   -88,   267,   -15,   -88,   -88,
     -88,   357,   -88,   -88,   -88,    22,   331,   378,   384,   -88,
      73,   110,   117,    26,   147,     7,    10,    17,    49,    54,
     -88,   -88,   384,    29,   -88,   -88,   178,   211,   -88,   -88,
     -88,   -88,   277,   -88,    21,   277,   -88,   -88,    63,   -88,
     -88,   -88,    28,   -88,   299,   -88,   -88,   384,   -88,   -88,
     384,   -88,    38,   -88,    57,   -88,    36,    83,   -88,   -88,
     -88,   -88,   132,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   -88,   -88,   -88,   244,
     -88,   -88,    85,   384,   -88,   -88,   -88,   -16,    91,   -88,
     -88,   101,   -88,   -88,    95,   384,   -88,   384,   -88,   -88,
     -88,    73,    73,   110,   110,   117,   117,   117,   117,    26,
      26,   147,     7,    10,    17,    49,   -88,   -88,   277,   107,
      39,   -88,   -88,   -88,    19,   116,    84,   -88,   -88,   125,
      24,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   160,
     -88,   -88,   137,   -88,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   144,    76,    77,    78,    79,    80,   139,     0,    68,
      70,     0,    81,     0,     0,   136,   138,    82,    66,     0,
      72,    74,    69,    71,     0,   118,     0,   142,     0,   140,
      85,    83,    89,     0,    88,     1,   137,     0,    67,     0,
     141,     3,     0,     0,     0,   131,     0,     0,    17,    18,
      19,     0,   122,   114,     5,    13,     0,    20,     0,    22,
      26,    29,    32,    37,    40,    42,    44,    46,    48,    50,
      51,    65,     0,     0,   120,   109,     0,     0,   110,   111,
     124,   125,     0,   112,     0,     0,   113,     2,    74,   119,
     143,    84,     0,    73,     0,   104,    75,     0,    14,    15,
       0,   134,     0,   133,     0,    86,    96,     0,     8,     9,
      10,     7,     0,    11,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    54,    53,    20,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,   123,   116,     0,
     115,   121,   126,     0,   130,    90,   107,     0,     0,   135,
       4,     0,    87,    97,    98,     0,     6,     0,    23,    24,
      25,    27,    28,    30,    31,    35,    36,    33,    34,    38,
      39,    41,    43,    45,    47,    49,   117,   129,     0,     0,
       0,   105,   128,   100,    96,     0,    91,    92,    95,     0,
       0,    21,    12,   127,   132,   106,   108,    94,   101,     0,
      99,   102,     0,    93,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -88,   -88,   -22,   -88,   -47,    61,    65,
      27,    86,    35,    67,    68,    23,    78,   -88,   -88,   -33,
     -88,   -88,   -41,    18,   123,   -88,   190,   -88,   -48,    -7,
     -88,   -88,   180,   140,   -88,    37,   -88,    30,   185,    77,
     -88,   -87,   -88,   -73,    98,   216,   166,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   230,   -88,
     231,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,    55,    56,   112,   126,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   125,    73,    25,    26,    19,    20,     9,    10,    11,
      12,    13,   194,    32,    33,   195,   196,   197,   198,   163,
     164,    96,   157,    74,    75,    28,    77,    78,    79,    80,
      81,    82,   188,    83,    84,    85,    86,    14,    15,    16,
      29,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    21,    57,   105,   151,   102,    95,   156,    17,   152,
     104,   127,   154,    34,    17,     1,     1,    57,     7,    88,
      98,    99,     1,   113,    57,    30,    17,   108,   109,    57,
      88,     1,     7,   100,    57,   135,   136,    17,   190,   146,
     103,   191,     1,    41,    42,    43,    89,     5,     6,   141,
      57,   142,     5,     6,    57,    57,   104,   143,   162,   158,
      57,    95,   144,    57,     5,     6,    31,    18,   145,   137,
     138,   161,    57,   153,   110,    57,   151,   211,    57,    37,
      38,   168,   169,   170,   147,    48,    91,    92,   161,    49,
      50,    51,    34,   159,    89,    94,   205,     2,     3,     4,
       5,     6,    39,   206,     2,     3,     4,     5,     6,    27,
     160,    39,   189,   105,    35,   203,   187,     1,   201,    27,
     128,   129,   130,     8,   133,   134,    90,    57,    24,     5,
       6,    57,    22,    23,   202,    24,   165,     8,   209,     2,
       3,     4,     5,     6,   192,    57,   162,   200,     1,    41,
      42,    43,   105,   161,   193,   131,   132,    95,   139,   140,
     204,   105,   175,   176,   177,   178,    57,   184,    57,   208,
       2,     3,     4,     5,     6,    44,   181,    45,   210,    46,
      47,     1,    41,    42,    43,   166,   167,   207,     5,     6,
     214,    48,   171,   172,    17,    49,    50,    51,   173,   174,
      52,    24,    53,     2,     3,     4,     5,     6,    44,   182,
      45,   183,    46,    47,     1,    41,    42,    43,     2,     3,
       4,     5,     6,   185,    48,   179,   180,    93,    49,    50,
      51,   106,   155,    52,    24,   148,   107,   212,   199,   213,
      76,    44,   149,    45,    36,    46,    47,     1,    41,    42,
      43,     0,    40,     0,     0,     0,     0,    48,     0,     0,
       0,    49,    50,    51,     0,     0,    52,    24,   150,     0,
       1,    41,    42,    43,    44,     0,    45,     0,    46,    47,
       1,    41,    42,    43,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,    51,     0,     0,    52,
      24,   186,     1,    41,    42,    43,     0,    44,     0,    45,
       0,    46,    47,    48,     0,     0,     1,    49,    50,    51,
       0,     0,   101,    48,     0,     0,     0,    49,    50,    51,
       0,     0,    52,    24,     1,    41,    42,    43,     2,     3,
       4,     5,     6,     0,     0,    48,     0,     0,     0,    49,
      50,    51,     0,     0,     0,    94,     0,     0,     0,     0,
       1,    41,    42,    43,     0,     0,     0,     1,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,    49,    50,    51,   111,     5,     6,     1,    41,    42,
      43,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    48,     0,     0,     0,    49,    50,    51,
      48,     0,     0,     0,    49,    50,    97,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,    51
};

static const yytype_int16 yycheck[] =
{
       0,     8,    24,    51,    77,    46,    39,    94,     8,    82,
      51,    58,    85,    13,    14,     3,     3,    39,     0,    26,
      42,    43,     3,    56,    46,    52,    26,     5,     6,    51,
      37,     3,    14,    52,    56,     9,    10,    37,    54,    72,
      55,    57,     3,     4,     5,     6,    28,    28,    29,    42,
      72,    41,    28,    29,    76,    77,    97,    40,   106,   100,
      82,    94,    13,    85,    28,    29,    53,    55,    14,    43,
      44,    52,    94,    52,    52,    97,   149,    53,   100,    54,
      55,   128,   129,   130,    55,    46,    53,    54,    52,    50,
      51,    52,    92,    55,    76,    56,    57,    25,    26,    27,
      28,    29,    39,   190,    25,    26,    27,    28,    29,    11,
      53,    39,   153,   161,     0,   188,    31,     3,   165,    21,
      47,    48,    49,     0,     7,     8,    28,   149,    56,    28,
      29,   153,     9,    10,   167,    56,    53,    14,    54,    25,
      26,    27,    28,    29,    53,   167,   194,    52,     3,     4,
       5,     6,   200,    52,    53,    45,    46,   190,    11,    12,
      53,   209,   135,   136,   137,   138,   188,   144,   190,    53,
      25,    26,    27,    28,    29,    30,   141,    32,    53,    34,
      35,     3,     4,     5,     6,    53,    54,   194,    28,    29,
      53,    46,   131,   132,   194,    50,    51,    52,   133,   134,
      55,    56,    57,    25,    26,    27,    28,    29,    30,   142,
      32,   143,    34,    35,     3,     4,     5,     6,    25,    26,
      27,    28,    29,   145,    46,   139,   140,    37,    50,    51,
      52,    51,    92,    55,    56,    57,    51,   200,   161,   209,
      24,    30,    76,    32,    14,    34,    35,     3,     4,     5,
       6,    -1,    21,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    57,    -1,
       3,     4,     5,     6,    30,    -1,    32,    -1,    34,    35,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,
      56,    57,     3,     4,     5,     6,    -1,    30,    -1,    32,
      -1,    34,    35,    46,    -1,    -1,     3,    50,    51,    52,
      -1,    -1,    55,    46,    -1,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    56,     3,     4,     5,     6,    25,    26,
      27,    28,    29,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    28,    29,     3,     4,     5,
       6,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    46,    -1,    -1,    -1,    50,    51,    52,
      46,    -1,    -1,    -1,    50,    51,    52,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    25,    26,    27,    28,    29,    81,    82,    85,
      86,    87,    88,    89,   115,   116,   117,   119,    55,    83,
      84,    87,    82,    82,    56,    81,    82,   102,   103,   118,
      52,    53,    91,    92,   119,     0,   116,    54,    55,    39,
     118,     4,     5,     6,    30,    32,    34,    35,    46,    50,
      51,    52,    55,    57,    59,    60,    61,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    80,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   111,   112,   113,   114,   119,    87,    81,
     102,    53,    54,    84,    56,    77,    99,    52,    63,    63,
      52,    55,    80,    55,    80,    86,    90,    96,     5,     6,
      52,    53,    62,    77,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    39,    79,    63,    65,    47,    48,
      49,    45,    46,     7,     8,     9,    10,    43,    44,    11,
      12,    42,    41,    40,    13,    14,    77,    55,    57,   104,
      57,   101,   101,    52,   101,    91,    99,   100,    80,    55,
      53,    52,    86,    97,    98,    53,    53,    54,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    71,    72,    73,    74,    57,    31,   110,    80,
      54,    57,    53,    53,    90,    93,    94,    95,    96,    97,
      52,    65,    77,   101,    53,    57,    99,    87,    53,    54,
      53,    53,    93,    95,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    77,    77,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    86,
      86,    87,    88,    88,    88,    89,    90,    90,    91,    92,
      92,    93,    94,    94,    95,    95,    96,    96,    97,    98,
      98,    98,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     2,     2,     2,
       2,     1,     3,     1,     2,     2,     2,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     1,     3,     2,     1,     1,     2,     1,     3,
       2,     3,     3,     4,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     1,     1,     2,     4,     4,     1,
       2,     1,     4,     2,     2,     3,     1,     2,     1,     1,
       2,     3,     1,     2,     1
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
        case 2:
#line 76 "grammar.y" /* yacc.c:1646  */
    { /* printf("IDENTIFIER\n"); */
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    if (findvar(last_ident,func_tab) == -1) {
		      /* printf("\n***undeclared %s***\n",last_ident); */
		      undeclared++;
		    }
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!efetch(work))
		  return(1);
		}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 91 "grammar.y" /* yacc.c:1646  */
    { /*printf("CONSTANT\n"); */
		 if (!econst(kk))
		   return(1);
		}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "grammar.y" /* yacc.c:1646  */
    { /* printf("FCALL\n"); */
		popid(func_ident,func_stack,&func_off); /* note ptr to off */
		if ((work = findvar(func_ident,func_tab)) == -1) {
		  /* printf("\n***declared %s***\n",func_ident); */
		  undeclared--; /*function name mistakenly undeclared*/
		  work = allocvar(func_ident,func_tab);
		}
		if(!efcall(work))
		  return(1);
		}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "grammar.y" /* yacc.c:1646  */
    { /* printf("FCALL\n"); */
		popid(func_ident,func_stack,&func_off); /* note ptr to off */
		if ((work = findvar(func_ident,func_tab)) == -1) {
		  /* printf("\n***declared %s***\n",func_ident); */
		  undeclared--; /*function name mistakenly undeclared*/
		  work = allocvar(func_ident,func_tab);
		}
		if (!efcall(work))
		  return(1);
		}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "grammar.y" /* yacc.c:1646  */
    { /* printf("POSTFIX-INC\n"); */
		/* this is wrong!  same as infix increment */
		postfix++;
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if(!estore(work,ADD_ASSIGN))
		  return(1);
		}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "grammar.y" /* yacc.c:1646  */
    { /* printf("POSTFIX-DEC\n"); */
		/* this is wrong!  same as infix decrement */
		postfix++;
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,SUB_ASSIGN))
		  return(1);
		}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 156 "grammar.y" /* yacc.c:1646  */
    { /* printf("FCALL-START\n"); */
		stackid(last_ident,func_stack,&func_off); /* note ptr to off */
		if (!eframe())
		  return(1);
		}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 171 "grammar.y" /* yacc.c:1646  */
    { /* printf("INFIX-INC\n"); */
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,ADD_ASSIGN))
		  return(1);
		}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "grammar.y" /* yacc.c:1646  */
    { /* printf("INFIX-DEC\n"); */
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,SUB_ASSIGN))
		  return(1);
		}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 197 "grammar.y" /* yacc.c:1646  */
    { /* printf("UNARY-OP\n"); */
		/* note special tokens defined only to pass to interpreter */
		un_op = *(op_stack + op_off);
		op_off--;
		if (un_op == '-') {
		  if (!econst(0L))
		    return(1);
		  if (!ebinop(U_NEGATIVE))
		    return(1);
		} else if (un_op == '!') {
		  if (!econst(0L))
		    return(1);
		  if (!ebinop(U_NOT))
		    return(1);
		} else if (un_op == '~') {
		  if (!econst(0L))
		    return(1);
		  if (!ebinop(U_ONES))
		    return(1);
		}
		}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 222 "grammar.y" /* yacc.c:1646  */
    { /* printf("UNARY-OP\n"); */
		op_off++;
		*(op_stack + op_off) = '-';
		}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 227 "grammar.y" /* yacc.c:1646  */
    { 
		op_off++;
		*(op_stack + op_off) = '!';
		}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 232 "grammar.y" /* yacc.c:1646  */
    { 
		op_off++;
		*(op_stack + op_off) = '~';
		}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "grammar.y" /* yacc.c:1646  */
    { /* printf("MULTIPLY\n"); */
		if (!ebinop('*'))
		  return(1);
		}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 251 "grammar.y" /* yacc.c:1646  */
    { /*printf("DIVIDE\n"); */
		if (!ebinop('/'))
		  return(1);
		}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 256 "grammar.y" /* yacc.c:1646  */
    { /* printf("MOD\n"); */
		if (!ebinop('%'))
		  return(1);
		}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 265 "grammar.y" /* yacc.c:1646  */
    { /* printf("ADD\n"); */
		if (!ebinop('+'))
		  return(1);
		}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 270 "grammar.y" /* yacc.c:1646  */
    { /* printf("SUBTRACT\n"); */
		if (!ebinop('-'))
		  return(1);
		}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 279 "grammar.y" /* yacc.c:1646  */
    { /* printf("SHIFT-LEFT\n"); */
		if (!ebinop(LEFT_OP))
		  return(1);
		}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 284 "grammar.y" /* yacc.c:1646  */
    { /* printf("SHIFT-RIGHT\n"); */
		if (!ebinop(RIGHT_OP))
		  return(1);
		}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 293 "grammar.y" /* yacc.c:1646  */
    { /* printf("LESS-THAN\n"); */
		if (!ebinop('<'))
		  return(1);
		}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 298 "grammar.y" /* yacc.c:1646  */
    { /* printf("GREATER-THAN\n"); */
		if (!ebinop('>'))
		  return(1);
		}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 303 "grammar.y" /* yacc.c:1646  */
    { /*printf("LESS-EQUAL\n"); */
		if (!ebinop(LE_OP))
		  return(1);
		}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 308 "grammar.y" /* yacc.c:1646  */
    { /* printf("GREATER-EQUAL\n"); */
		if (!ebinop(GE_OP))
		  return(1);
		}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 317 "grammar.y" /* yacc.c:1646  */
    { /* printf("EQUAL\n"); */
		if (!ebinop(EQ_OP))
		  return(1);
		}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 322 "grammar.y" /* yacc.c:1646  */
    { /* printf("NOT-EQUAL\n"); */
		if (!ebinop(NE_OP))
		  return(1);
		}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 331 "grammar.y" /* yacc.c:1646  */
    { /* printf("AND\n"); */
		if (!ebinop('&'))
		  return(1);
		}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 340 "grammar.y" /* yacc.c:1646  */
    { /* printf("EXCLUSIVE-OR\n"); */
		if (!ebinop('^'))
		  return(1);
		}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 349 "grammar.y" /* yacc.c:1646  */
    { /* printf("INCLUSIVE-OR\n"); */
		if (!ebinop('|'))
		  return(1);
		}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 358 "grammar.y" /* yacc.c:1646  */
    { /* printf("LOGICAL-AND\n"); */
		if (!ebinop(AND_OP))
		  return(1);
		}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 367 "grammar.y" /* yacc.c:1646  */
    { /* printf("LOGICAL-OR\n"); */
		if (!ebinop(OR_OP))
		  return(1);
		}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 380 "grammar.y" /* yacc.c:1646  */
    { /* printf("ASSIGNMENT\n"); */
		/* func_ident used as temp storage */
		popid(func_ident,var_stack,&var_off); /* note ptr to off */
		if ((work = findvar(func_ident,var_tab)) == -1)
		  if ((work = findvar(func_ident,ext_tab)) == -1) {
		    work = allocvar(func_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,*(op_stack + op_off)))
		  return(1);
		op_off--;
		}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 397 "grammar.y" /* yacc.c:1646  */
    { /* printf("ASSIGNMENT-LVAL\n"); */
		stackid(last_ident,var_stack,&var_off); /* note ptr to off */
		op_off++;
		*(op_stack + op_off) = work;
		}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 406 "grammar.y" /* yacc.c:1646  */
    { work =  '=';}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 408 "grammar.y" /* yacc.c:1646  */
    { work = MUL_ASSIGN;}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 410 "grammar.y" /* yacc.c:1646  */
    { work = DIV_ASSIGN;}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 412 "grammar.y" /* yacc.c:1646  */
    { work = MOD_ASSIGN;}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 414 "grammar.y" /* yacc.c:1646  */
    { work = ADD_ASSIGN;}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 416 "grammar.y" /* yacc.c:1646  */
    { work = SUB_ASSIGN;}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 418 "grammar.y" /* yacc.c:1646  */
    { work = LEFT_ASSIGN;}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 420 "grammar.y" /* yacc.c:1646  */
    { work = RIGHT_ASSIGN;}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 422 "grammar.y" /* yacc.c:1646  */
    { work = AND_ASSIGN;}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 424 "grammar.y" /* yacc.c:1646  */
    { work = XOR_ASSIGN;}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 426 "grammar.y" /* yacc.c:1646  */
    { work = OR_ASSIGN;}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 453 "grammar.y" /* yacc.c:1646  */
    { /* printf("INITIALIZER\n"); */
		fprintf(f_out,"\n**Warning** unsupported initializer\n");
		/* get rid of constant placed on stack */
		if (!echop())
		  return(1);
		}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 478 "grammar.y" /* yacc.c:1646  */
    { /* printf("VARIABLE-DECLARE\n"); */
		if (in_func) {
		  if (findvar(last_ident,var_tab) == -1)
		    allocvar(last_ident,var_tab);
		}
		else {
		  if (findvar(last_ident,ext_tab) == -1)
		    allocvar(last_ident,ext_tab);
		}
		}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 489 "grammar.y" /* yacc.c:1646  */
    { /* printf("FUNCTION-DECLARE\n"); */
		if (new_func() == -1)
		  return (1); /* exit the parser */
		}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 494 "grammar.y" /* yacc.c:1646  */
    { /* printf("FUNCTION-DECLARE\n"); */
		if (new_func() == -1)
		  return (1); /* exit the parser */
		}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 502 "grammar.y" /* yacc.c:1646  */
    { /* printf("FUNCTION-DEF-START\n"); */
		strcpy(func_ident,last_ident);
		}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 514 "grammar.y" /* yacc.c:1646  */
    { /* printf("PARAMETER-DECLARE\n"); */
		allocvar(last_ident,var_tab);
		num_parm++;
		}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 595 "grammar.y" /* yacc.c:1646  */
    { /* printf("CHOP\n"); */
		if (!echop())
		  return(1);
		}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 608 "grammar.y" /* yacc.c:1646  */
    { /* printf("IF-THEN\n"); */
		else_part();
		close_if();
		}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 616 "grammar.y" /* yacc.c:1646  */
    { /* printf("IF-THEN-ELSE\n"); */
		close_if();
		}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 623 "grammar.y" /* yacc.c:1646  */
    { /* printf("IF-CLAUSE\n"); */
		if (!new_if())
		  return (1); /* exit parser */
		}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 631 "grammar.y" /* yacc.c:1646  */
    { /* printf("ELSE-CLAUSE\n"); */
		else_part();
		}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 638 "grammar.y" /* yacc.c:1646  */
    { /* printf("WHILE\n"); */
		close_while();
		}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 645 "grammar.y" /* yacc.c:1646  */
    { /* printf("WHILE-TOKEN\n"); */
		if (!new_while())
		  return (1);  /* exit the parser */
		}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 653 "grammar.y" /* yacc.c:1646  */
    { /* printf("WHILE-CLAUSE\n"); */
		while_expr();
		}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 660 "grammar.y" /* yacc.c:1646  */
    { /* printf("BREAK\n"); */
		/* breaks can be handled by building a instruct chain */
		/* as part of the while_nest structures and patching them */
		/* on while_close.  maybe later */
		fprintf(f_out,"\n**Warning** unsupported break\n");
		}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 667 "grammar.y" /* yacc.c:1646  */
    { /* printf("RETURN-NOEXPR\n"); */
		/* all functions must return a value */
		if (!econst(1L))
		  return(1);
		if (!eretsub())
		  return(1);
		}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 675 "grammar.y" /* yacc.c:1646  */
    { /* printf("RETURN\n"); */
		if (!eretsub())
		  return(1);
		}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 688 "grammar.y" /* yacc.c:1646  */
    { /* printf("FUNCTION-DEFINITION\n"); */
		/* all functions must return a value */
		if (!econst(1L))
		  return(1);
		if (!eretsub())
		  return(1);
		end_func();
		}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 697 "grammar.y" /* yacc.c:1646  */
    { /* printf("EXTERNAL-DECLARE\n"); */
		}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2140 "y.tab.c" /* yacc.c:1646  */
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
