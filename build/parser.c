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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "../src/parser.y" /* yacc.c:339  */

#include "all.h"
#include "alloc.h"
#include "eval.h"
#include "init.h"
#include "lexer.h"

#include <string.h>

#line 76 "parser.c" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    SYM = 258,
    STR = 259,
    INT = 260,
    HEX = 261,
    BIN = 262,
    AND = 263,
    BITAND = 264,
    BITNOT = 265,
    BITOR = 266,
    BITXOR = 267,
    NOT = 268,
    IN = 269,
    OR = 270,
    SHIFTLEFT = 271,
    SHIFTRIGHT = 272,
    XOR = 273,
    EQ = 274,
    GT = 275,
    GTE = 276,
    LT = 277,
    LTE = 278,
    NEQ = 279,
    IF = 280,
    SELECT = 281,
    UNTIL = 282,
    WHILE = 283,
    EXECUTE = 284,
    REXX = 285,
    RUN = 286,
    ABORT = 287,
    EXIT = 288,
    ONERROR = 289,
    TRAP = 290,
    COPYFILES = 291,
    COPYLIB = 292,
    DELETE = 293,
    EXISTS = 294,
    FILEONLY = 295,
    FOREACH = 296,
    MAKEASSIGN = 297,
    MAKEDIR = 298,
    PROTECT = 299,
    STARTUP = 300,
    TEXTFILE = 301,
    TOOLTYPE = 302,
    TRANSCRIPT = 303,
    RENAME = 304,
    COMPLETE = 305,
    DEBUG = 306,
    MESSAGE = 307,
    USER = 308,
    WELCOME = 309,
    WORKING = 310,
    DATABASE = 311,
    EARLIER = 312,
    GETASSIGN = 313,
    GETDEVICE = 314,
    GETDISKSPACE = 315,
    GETENV = 316,
    GETSIZE = 317,
    GETSUM = 318,
    GETVERSION = 319,
    ICONINFO = 320,
    CUS = 321,
    DCL = 322,
    ASKBOOL = 323,
    ASKCHOICE = 324,
    ASKDIR = 325,
    ASKDISK = 326,
    ASKFILE = 327,
    ASKNUMBER = 328,
    ASKOPTIONS = 329,
    ASKSTRING = 330,
    CAT = 331,
    EXPANDPATH = 332,
    FMT = 333,
    PATHONLY = 334,
    PATMATCH = 335,
    STRLEN = 336,
    SUBSTR = 337,
    TACKON = 338,
    SET = 339,
    SYMBOLSET = 340,
    SYMBOLVAL = 341,
    ALL = 342,
    APPEND = 343,
    ASKUSER = 344,
    ASSIGNS = 345,
    CHOICES = 346,
    COMMAND = 347,
    COMPRESSION = 348,
    CONFIRM = 349,
    DEFAULT = 350,
    DELOPTS = 351,
    DEST = 352,
    DISK = 353,
    FAIL = 354,
    FILES = 355,
    FONTS = 356,
    FORCE = 357,
    GETDEFAULTTOOL = 358,
    GETPOSITION = 359,
    GETSTACK = 360,
    GETTOOLTYPE = 361,
    HELP = 362,
    INFOS = 363,
    INCLUDE = 364,
    NEWNAME = 365,
    NEWPATH = 366,
    NOFAIL = 367,
    NOGAUGE = 368,
    NOPOSITION = 369,
    NOREQ = 370,
    OKNODELETE = 371,
    PATTERN = 372,
    PROMPT = 373,
    QUIET = 374,
    RANGE = 375,
    SAFE = 376,
    SETDEFAULTTOOL = 377,
    SETPOSITION = 378,
    SETSTACK = 379,
    SETTOOLTYPE = 380,
    SOURCE = 381,
    SWAPCOLORS = 382,
    OPTIONAL = 383,
    RESIDENT = 384,
    OVERRIDE = 385
  };
#endif
/* Tokens.  */
#define SYM 258
#define STR 259
#define INT 260
#define HEX 261
#define BIN 262
#define AND 263
#define BITAND 264
#define BITNOT 265
#define BITOR 266
#define BITXOR 267
#define NOT 268
#define IN 269
#define OR 270
#define SHIFTLEFT 271
#define SHIFTRIGHT 272
#define XOR 273
#define EQ 274
#define GT 275
#define GTE 276
#define LT 277
#define LTE 278
#define NEQ 279
#define IF 280
#define SELECT 281
#define UNTIL 282
#define WHILE 283
#define EXECUTE 284
#define REXX 285
#define RUN 286
#define ABORT 287
#define EXIT 288
#define ONERROR 289
#define TRAP 290
#define COPYFILES 291
#define COPYLIB 292
#define DELETE 293
#define EXISTS 294
#define FILEONLY 295
#define FOREACH 296
#define MAKEASSIGN 297
#define MAKEDIR 298
#define PROTECT 299
#define STARTUP 300
#define TEXTFILE 301
#define TOOLTYPE 302
#define TRANSCRIPT 303
#define RENAME 304
#define COMPLETE 305
#define DEBUG 306
#define MESSAGE 307
#define USER 308
#define WELCOME 309
#define WORKING 310
#define DATABASE 311
#define EARLIER 312
#define GETASSIGN 313
#define GETDEVICE 314
#define GETDISKSPACE 315
#define GETENV 316
#define GETSIZE 317
#define GETSUM 318
#define GETVERSION 319
#define ICONINFO 320
#define CUS 321
#define DCL 322
#define ASKBOOL 323
#define ASKCHOICE 324
#define ASKDIR 325
#define ASKDISK 326
#define ASKFILE 327
#define ASKNUMBER 328
#define ASKOPTIONS 329
#define ASKSTRING 330
#define CAT 331
#define EXPANDPATH 332
#define FMT 333
#define PATHONLY 334
#define PATMATCH 335
#define STRLEN 336
#define SUBSTR 337
#define TACKON 338
#define SET 339
#define SYMBOLSET 340
#define SYMBOLVAL 341
#define ALL 342
#define APPEND 343
#define ASKUSER 344
#define ASSIGNS 345
#define CHOICES 346
#define COMMAND 347
#define COMPRESSION 348
#define CONFIRM 349
#define DEFAULT 350
#define DELOPTS 351
#define DEST 352
#define DISK 353
#define FAIL 354
#define FILES 355
#define FONTS 356
#define FORCE 357
#define GETDEFAULTTOOL 358
#define GETPOSITION 359
#define GETSTACK 360
#define GETTOOLTYPE 361
#define HELP 362
#define INFOS 363
#define INCLUDE 364
#define NEWNAME 365
#define NEWPATH 366
#define NOFAIL 367
#define NOGAUGE 368
#define NOPOSITION 369
#define NOREQ 370
#define OKNODELETE 371
#define PATTERN 372
#define PROMPT 373
#define QUIET 374
#define RANGE 375
#define SAFE 376
#define SETDEFAULTTOOL 377
#define SETPOSITION 378
#define SETSTACK 379
#define SETTOOLTYPE 380
#define SOURCE 381
#define SWAPCOLORS 382
#define OPTIONAL 383
#define RESIDENT 384
#define OVERRIDE 385

/* Value type.  */



int yyparse (yyscan_t scanner);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 381 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  172
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  144
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  598

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   385

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     131,   132,   135,   133,     2,   136,     2,   134,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     139,   137,   138,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    86,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   246,   247,   248,   249,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     265,   266,   267,   268,   269,   270,   273,   274,   275,   276,
     277,   280,   281,   282,   283,   284,   285,   288,   289,   290,
     291,   292,   293,   295,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   324,   325,
     326,   327,   328,   330,   331,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   350,
     351,   352,   353,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   383,   384,   385,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYM", "STR", "INT", "HEX", "BIN", "AND",
  "BITAND", "BITNOT", "BITOR", "BITXOR", "NOT", "IN", "OR", "SHIFTLEFT",
  "SHIFTRIGHT", "XOR", "EQ", "GT", "GTE", "LT", "LTE", "NEQ", "IF",
  "SELECT", "UNTIL", "WHILE", "EXECUTE", "REXX", "RUN", "ABORT", "EXIT",
  "ONERROR", "TRAP", "COPYFILES", "COPYLIB", "DELETE", "EXISTS",
  "FILEONLY", "FOREACH", "MAKEASSIGN", "MAKEDIR", "PROTECT", "STARTUP",
  "TEXTFILE", "TOOLTYPE", "TRANSCRIPT", "RENAME", "COMPLETE", "DEBUG",
  "MESSAGE", "USER", "WELCOME", "WORKING", "DATABASE", "EARLIER",
  "GETASSIGN", "GETDEVICE", "GETDISKSPACE", "GETENV", "GETSIZE", "GETSUM",
  "GETVERSION", "ICONINFO", "CUS", "DCL", "ASKBOOL", "ASKCHOICE", "ASKDIR",
  "ASKDISK", "ASKFILE", "ASKNUMBER", "ASKOPTIONS", "ASKSTRING", "CAT",
  "EXPANDPATH", "FMT", "PATHONLY", "PATMATCH", "STRLEN", "SUBSTR",
  "TACKON", "SET", "SYMBOLSET", "SYMBOLVAL", "ALL", "APPEND", "ASKUSER",
  "ASSIGNS", "CHOICES", "COMMAND", "COMPRESSION", "CONFIRM", "DEFAULT",
  "DELOPTS", "DEST", "DISK", "FAIL", "FILES", "FONTS", "FORCE",
  "GETDEFAULTTOOL", "GETPOSITION", "GETSTACK", "GETTOOLTYPE", "HELP",
  "INFOS", "INCLUDE", "NEWNAME", "NEWPATH", "NOFAIL", "NOGAUGE",
  "NOPOSITION", "NOREQ", "OKNODELETE", "PATTERN", "PROMPT", "QUIET",
  "RANGE", "SAFE", "SETDEFAULTTOOL", "SETPOSITION", "SETSTACK",
  "SETTOOLTYPE", "SOURCE", "SWAPCOLORS", "OPTIONAL", "RESIDENT",
  "OVERRIDE", "'('", "')'", "'+'", "'/'", "'*'", "'-'", "'='", "'>'",
  "'<'", "$accept", "start", "s", "p", "pp", "ps", "pps", "vps", "opts",
  "vpb", "np", "sps", "par", "cv", "cvv", "opt", "vp", "add", "div", "mul",
  "sub", "and", "bitand", "bitnot", "bitor", "bitxor", "not", "in", "or",
  "shiftleft", "shiftright", "xor", "eq", "gt", "gte", "lt", "lte", "neq",
  "if", "select", "until", "while", "execute", "rexx", "run", "abort",
  "exit", "onerror", "trap", "copyfiles", "copylib", "delete", "exists",
  "fileonly", "foreach", "makeassign", "makedir", "protect", "startup",
  "textfile", "tooltype", "transcript", "rename", "complete", "debug",
  "message", "user", "welcome", "working", "database", "earlier",
  "getassign", "getdevice", "getdiskspace", "getenv", "getsize", "getsum",
  "getversion", "iconinfo", "dcl", "cus", "askbool", "askchoice", "askdir",
  "askdisk", "askfile", "asknumber", "askoptions", "askstring", "cat",
  "expandpath", "fmt", "pathonly", "patmatch", "strlen", "substr",
  "tackon", "set", "symbolset", "symbolval", "all", "append", "askuser",
  "assigns", "choices", "command", "compression", "confirm", "default",
  "delopts", "dest", "disk", "fail", "files", "fonts", "force",
  "getdefaulttool", "getposition", "getstack", "gettooltype", "help",
  "infos", "include", "newname", "newpath", "nofail", "nogauge",
  "noposition", "noreq", "oknodelete", "pattern", "prompt", "quiet",
  "range", "safe", "setdefaulttool", "setposition", "setstack",
  "settooltype", "source", "swapcolors", "optional", "resident",
  "override", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,    40,    41,    43,    47,    42,    45,    61,    62,    60
};
# endif

#define YYPACT_NINF -301

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-301)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -121,  1246,    14,  -301,  -121,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,     2,
      15,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,   137,   -76,    29,   -68,   -68,    29,    29,
      29,    29,    29,    29,    29,    29,   -68,   -68,    29,    29,
      29,    29,    29,    62,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,   148,   -68,    89,  -119,   -68,  -115,
     -68,  -106,   -94,   -68,   -81,    29,    29,    29,    29,    29,
      29,    29,    97,    29,    29,    29,    29,    29,    29,    29,
      29,    29,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,   160,  -301,  -301,  -301,   178,    29,   -61,   -27,   -14,
     -11,    -2,     5,    29,     7,    18,    36,    65,    72,    83,
     120,   -76,   121,   123,    29,   -76,   130,   132,   -71,   -52,
     -49,   187,   698,  -301,   278,   134,   835,   135,  -301,   -76,
    1299,   -46,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,   -44,   -37,   -35,
     138,   -76,   374,   -29,   -23,   379,   -21,   -68,   -19,   -15,
     385,    -8,   144,   390,   791,   145,   796,   801,   806,   154,
     155,   815,   156,   158,   161,   163,   166,   168,  -301,     4,
      26,    25,  -301,    39,    41,  -301,    43,    46,  -301,    48,
    -301,    57,    64,  -301,    68,   820,   171,   181,   188,   190,
     936,   192,    29,    -1,  -301,   950,   194,   955,   196,  1066,
     199,   202,   203,   204,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  1071,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,   -76,  -301,  -301,  1085,  -301,  -301,  -301,  -301,
      71,  -301,    76,  -301,    79,  -301,   207,  -301,   208,  -301,
      81,  -301,   210,   214,    29,   216,   218,    29,    29,   219,
    1091,    29,    29,    29,   221,   223,   224,   227,   230,    29,
      29,    29,    29,    29,   232,    29,    29,   235,   237,   241,
     242,   243,   267,    29,    29,    29,   268,    29,    29,    29,
      29,    29,   269,    29,   270,    29,  -301,  -301,  -301,  -301,
      92,    17,  -301,   272,  -301,   273,   972,  -301,   274,   108,
    -301,   276,  -301,    95,   561,  -301,   101,  -301,   110,   112,
    -301,  -301,  -301,  -301,   114,  -301,  -301,  1109,  -301,   279,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,   288,  -301,   283,  -301,  -301,   287,    45,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,   290,  -301,  -301,    29,  -301,  -301,
      29,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
     291,  -301,  -301,  1096,  1202,  -301,  -301,   293,   294,  1207,
     295,  -301,  -301,  -301,  -301,  -301,   296,   297,   298,   300,
    1226,  -301,   309,   310,  -301,  -301,  -301,  -301,  -301,  -301,
     311,  1231,   312,  -301,   313,   314,   317,  1337,   318,   319,
    -301,  1342,  -301,   320,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,   322,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,    12,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   135,   134,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    11,    21,    20,    17,    18,    19,   242,
       8,     0,     5,     4,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,    16,     0,
       0,     0,    14,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    50,    49,    51,    52,    53,    54,
      55,    56,    57,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    58,    71,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,   243,     0,     0,   246,     0,     0,   249,     0,
     251,     0,     0,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,     7,   258,     6,   159,   160,
     161,   162,   163,   164,     0,   166,   167,   168,   169,   172,
     174,   175,    26,   177,   176,     0,    26,   179,   180,   182,
       0,   184,     0,   186,     0,   187,     0,   190,     0,   189,
       0,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   194,    13,   195,   197,
       0,     0,   198,     0,   200,     0,     0,   205,     0,     0,
     203,     0,   207,     0,     0,   211,     0,   209,     0,     0,
     213,   214,   215,   217,     0,   218,   219,     0,   221,     0,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     0,   236,     0,   238,    25,     0,     0,
     244,   245,   247,   248,   250,   252,   253,   255,   256,   257,
     260,   261,   262,   263,     0,   265,    23,     0,   266,   267,
       0,   268,   155,   156,   157,   158,   170,   171,   173,   165,
      27,   178,   181,   183,   185,   302,   188,    15,   193,   269,
       0,   271,   272,     0,     0,   275,   277,     0,     0,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,     0,
       0,   291,     0,     0,   294,   295,   296,   297,   298,   299,
       0,     0,     0,   304,     0,     0,     0,     0,     0,     0,
     311,     0,   313,     0,   196,   199,   201,   204,   202,   206,
     210,   208,   212,   216,   220,   237,   240,    24,     0,   264,
      22,     9,   270,   273,   274,   276,   278,   279,   280,   286,
     287,   288,   289,   290,   292,   293,   300,   301,   303,   305,
     306,   307,   309,   308,   310,   312,   314,   239
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,  -300,   -66,   136,    -6,  -301,   -30,   286,  -190,
    -301,  -301,  -301,   140,  -301,    54,     0,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
     172,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,   151,  -301,
    -301,  -301,  -110,  -301,   -22,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,   159,  -301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   186,   187,   181,   325,     4,   221,   217,
     182,   323,   469,   202,   203,   222,   183,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
       5,   468,   487,   215,   173,   174,   175,   176,   177,   178,
       1,   352,   220,   302,   172,   356,   220,   305,   174,   175,
     176,   177,   178,   180,   180,   220,   308,   189,   467,   372,
     192,   193,   174,   175,   176,   177,   178,   220,   310,   201,
     204,   205,   205,   208,   209,   210,   180,   180,   567,   219,
     220,   313,   268,   269,   270,   216,   272,   274,   275,   277,
     220,   359,   180,   220,   282,   180,   180,   285,   180,   180,
     288,   338,   291,   293,   294,   295,   296,   297,   299,   220,
     361,   425,   220,   363,   185,   220,   416,   220,   418,   180,
     316,   317,   301,   319,   220,   419,   421,   422,   326,   180,
     322,   180,   429,   430,   368,   339,   211,   214,   220,   432,
     220,   437,   220,   440,   218,   335,   220,   441,   340,   335,
     337,   341,   280,   220,   443,   283,   284,   180,   286,   287,
     342,   488,   401,     1,   179,   463,   464,   343,   180,   345,
     174,   175,   176,   177,   178,   335,     1,   184,   335,   315,
     346,   174,   175,   176,   177,   178,     1,   220,   466,   327,
       1,   329,   500,   174,   175,   176,   177,   178,   347,   568,
     220,   470,   220,   471,   220,   472,     1,   220,   473,   220,
     474,   174,   175,   176,   177,   178,   370,   344,   220,   475,
     174,   175,   176,   177,   178,   220,   476,   348,   355,   220,
     477,   218,   220,   502,   349,   218,   337,   220,   503,   337,
     220,   504,     1,   507,   335,   350,     5,   335,   335,   218,
     335,   335,   337,   220,   554,   337,   220,   559,   188,   406,
     190,   191,   220,   560,   194,   195,   196,   197,   198,   199,
     200,   220,   561,   220,   562,   220,   563,   206,   207,   335,
     428,   431,   351,   353,   484,   354,   486,   271,   273,   490,
     276,   335,   357,   335,   358,   281,   369,   371,   212,   213,
     424,   218,   289,   290,   292,   417,   445,   450,   335,     1,
     298,   174,   175,   176,   177,   178,   454,   455,   457,   335,
     458,     1,   334,   459,   318,   460,   320,   321,   461,   324,
     462,     5,   328,   479,   330,   331,   332,   333,   510,     1,
     336,   180,   180,   480,   517,   518,   180,   520,     1,   365,
     481,   417,   482,   526,   485,   528,   491,   180,   493,   532,
     533,   495,   417,   417,   496,   497,   498,   540,   180,   505,
     506,   544,   508,   546,   547,   549,   509,   180,   511,   553,
     512,   515,   218,   521,   417,   522,   523,   417,   417,   524,
     417,   417,   525,   417,   531,   417,   417,   534,   417,   535,
     173,   513,   514,   536,   537,   538,   519,   174,   175,   176,
     177,   178,   174,   175,   176,   177,   178,   530,   174,   175,
     176,   177,   178,   174,   175,   176,   177,   178,   541,   539,
     543,   550,   552,   267,   555,   556,   557,   551,   558,   212,
     367,   564,   278,   279,   417,   565,   417,   414,   417,   566,
     423,   570,   569,   572,   571,   575,   576,   578,   579,   580,
     581,   300,   582,   303,   304,   306,   307,   309,   311,   312,
     314,   584,   585,   586,   588,   589,   590,   335,   335,   591,
     593,   594,   596,   335,   597,     0,   449,     0,   465,     0,
       0,     0,     0,     0,   335,     0,     0,     0,     0,     5,
       0,     0,     0,     0,   417,   335,     0,     0,     0,     0,
       0,   337,     0,     0,     0,   335,     0,   417,     0,     0,
     417,     0,   417,   417,   360,   362,   364,     0,   417,     0,
       0,     0,     0,     0,     0,   426,   427,     0,     0,     0,
     434,   435,     0,     0,     0,     0,     1,   442,     0,     0,
       0,     1,   446,     0,     0,     0,   527,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   542,     0,     0,   545,     0,   548,     0,     0,     0,
       0,     0,     0,     0,   420,     0,     0,     0,     0,     0,
     433,   436,   438,   439,    89,    90,     0,   444,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     366,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,     0,     0,   165,   166,   167,   168,   169,   170,
     171,    89,    90,     0,     0,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,   175,   176,   177,   178,   174,
     175,   176,   177,   178,   174,   175,   176,   177,   178,   174,
     175,   176,   177,   178,     0,     0,     0,   366,   174,   175,
     176,   177,   178,   174,   175,   176,   177,   178,     0,     0,
       0,   165,   166,   167,   168,   169,   170,   171,    89,    90,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   447,   448,     0,     0,     0,     1,   451,     0,
       0,     0,     1,   452,     0,     0,     0,     1,   453,   174,
     175,   176,   177,   178,     0,     0,     1,   456,     0,     0,
       0,     1,   478,   174,   175,   176,   177,   178,   174,   175,
     176,   177,   178,     0,     0,     0,     1,     0,   165,   166,
     167,   168,   169,   170,   171,    89,    90,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,   157,   158,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   483,   174,
     175,   176,   177,   178,   174,   175,   176,   177,   178,     0,
       0,     1,   489,     0,     0,     0,     1,   492,   174,   175,
     176,   177,   178,   406,   174,   175,   176,   177,   178,   174,
     175,   176,   177,   178,     0,   165,   166,   167,   168,   169,
     170,   171,    89,    90,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   373,     1,   494,     0,
       0,     0,     1,   499,     0,   174,   175,   176,   177,   178,
     174,   175,   176,   177,   178,     0,     1,   501,     0,     0,
       0,     0,     1,   516,     0,     0,     0,     1,   573,   174,
     175,   176,   177,   178,   174,   175,   176,   177,   178,     0,
       0,     0,   165,   166,   167,   168,   169,   170,   171,    89,
      90,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     1,   574,     0,     0,     0,     1,   577,
     174,   175,   176,   177,   178,   174,   175,   176,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     1,   583,     0,
       0,     0,     1,   587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     166,   167,   168,   169,   170,   171,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   366,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   592,
       0,     0,     0,     1,   595
};

static const yytype_int16 yycheck[] =
{
       0,   301,     3,   113,     4,     3,     4,     5,     6,     7,
     131,   201,   131,   132,     0,   205,   131,   132,     3,     4,
       5,     6,     7,    89,    90,   131,   132,    93,     3,   219,
      96,    97,     3,     4,     5,     6,     7,   131,   132,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     3,   115,
     131,   132,   118,   119,   120,   131,   122,   123,   124,   125,
     131,   132,   128,   131,   130,   131,   132,     5,   134,   135,
     136,   132,   138,   139,   140,   141,   142,   143,   144,   131,
     132,   271,   131,   132,    90,   131,   132,   131,   132,   155,
     156,   157,     3,   159,   131,   132,   131,   132,   164,   165,
       3,   167,   131,   132,   214,   132,   112,   113,   131,   132,
     131,   132,   131,   132,   114,   181,   131,   132,   132,   185,
     186,   132,   128,   131,   132,   131,   132,   193,   134,   135,
     132,   132,   115,   131,   132,   131,   132,   132,   204,   132,
       3,     4,     5,     6,     7,   211,   131,   132,   214,   155,
     132,     3,     4,     5,     6,     7,   131,   131,   132,   165,
     131,   167,   352,     3,     4,     5,     6,     7,   132,   469,
     131,   132,   131,   132,   131,   132,   131,   131,   132,   131,
     132,     3,     4,     5,     6,     7,   216,   193,   131,   132,
       3,     4,     5,     6,     7,   131,   132,   132,   204,   131,
     132,   201,   131,   132,   132,   205,   272,   131,   132,   275,
     131,   132,   131,   132,   280,   132,   216,   283,   284,   219,
     286,   287,   288,   131,   132,   291,   131,   132,    92,   121,
      94,    95,   131,   132,    98,    99,   100,   101,   102,   103,
     104,   131,   132,   131,   132,   131,   132,   107,   108,   315,
     272,   273,   132,   132,   320,   132,   322,   121,   122,   325,
     124,   327,   132,   329,   132,   129,   132,   132,   131,   132,
     132,   271,   136,   137,   138,   221,   132,   132,   344,   131,
     132,     3,     4,     5,     6,     7,   132,   132,   132,   355,
     132,   131,   132,   132,   158,   132,   160,   161,   132,   163,
     132,   301,   166,   132,   168,   169,   170,   171,   374,   131,
     132,   377,   378,   132,   380,   381,   382,   383,   131,   132,
     132,   267,   132,   389,   132,   391,   132,   393,   132,   395,
     396,   132,   278,   279,   132,   132,   132,   403,   404,   132,
     132,   407,   132,   409,   410,   411,   132,   413,   132,   415,
     132,   132,   352,   132,   300,   132,   132,   303,   304,   132,
     306,   307,   132,   309,   132,   311,   312,   132,   314,   132,
     370,   377,   378,   132,   132,   132,   382,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,   393,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,   404,   132,
     132,   132,   132,   117,   132,   132,   132,   413,   132,   131,
     132,   132,   126,   127,   360,   132,   362,   129,   364,   132,
     269,   487,   132,   132,   490,   132,   132,   132,   132,   132,
     132,   145,   132,   147,   148,   149,   150,   151,   152,   153,
     154,   132,   132,   132,   132,   132,   132,   513,   514,   132,
     132,   132,   132,   519,   132,    -1,   284,    -1,   299,    -1,
      -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,   469,
      -1,    -1,    -1,    -1,   420,   541,    -1,    -1,    -1,    -1,
      -1,   547,    -1,    -1,    -1,   551,    -1,   433,    -1,    -1,
     436,    -1,   438,   439,   208,   209,   210,    -1,   444,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,
     131,   132,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,   131,   132,    -1,    -1,    -1,   390,    -1,   392,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   405,    -1,    -1,   408,    -1,   410,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,
     274,   275,   276,   277,     3,     4,    -1,   281,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,   137,   138,
     139,     3,     4,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   119,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,    -1,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,     3,     4,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,   131,   132,    -1,    -1,    -1,   131,   132,    -1,
      -1,    -1,   131,   132,    -1,    -1,    -1,   131,   132,     3,
       4,     5,     6,     7,    -1,    -1,   131,   132,    -1,    -1,
      -1,   131,   132,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    -1,    -1,    -1,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,     3,     4,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    -1,
      -1,   131,   132,    -1,    -1,    -1,   131,   132,     3,     4,
       5,     6,     7,   121,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    -1,   133,   134,   135,   136,   137,
     138,   139,     3,     4,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   131,   132,    -1,
      -1,    -1,   131,   132,    -1,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    -1,   131,   132,    -1,    -1,
      -1,    -1,   131,   132,    -1,    -1,    -1,   131,   132,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    -1,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,     3,
       4,    -1,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,   131,   132,    -1,    -1,    -1,   131,   132,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
      -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,    -1,    -1,   131,   132
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   131,   141,   142,   147,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,     3,
       4,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    21,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    81,
      82,    83,    84,    85,    86,   133,   134,   135,   136,   137,
     138,   139,     0,   156,     3,     4,     5,     6,     7,   132,
     143,   145,   150,   156,   132,   145,   143,   144,   144,   143,
     144,   144,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   143,   153,   154,   143,   143,   153,   153,   143,   143,
     143,   145,   131,   132,   145,   272,   131,   149,   156,   143,
     131,   148,   155,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   148,   143,   143,
     143,   144,   143,   144,   143,   143,   144,   143,   148,   148,
     145,   144,   143,   145,   145,     5,   145,   145,   143,   144,
     144,   143,   144,   143,   143,   143,   143,   143,   132,   143,
     148,     3,   132,   148,   148,   132,   148,   148,   132,   148,
     132,   148,   148,   132,   148,   145,   143,   143,   144,   143,
     144,   144,     3,   151,   144,   146,   143,   145,   144,   145,
     144,   144,   144,   144,   132,   143,   132,   143,   132,   132,
     132,   132,   132,   132,   145,   132,   132,   132,   132,   132,
     132,   132,   149,   132,   132,   145,   149,   132,   132,   132,
     148,   132,   148,   132,   148,   132,   119,   132,   272,   132,
     147,   132,   149,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   132,   155,   132,   132,
     148,   131,   132,   268,   132,   149,   131,   132,   274,   131,
     132,   274,   132,   148,   131,   132,   148,   132,   148,   148,
     132,   132,   132,   132,   148,   132,   132,   131,   132,   240,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   131,   132,   282,   132,     3,   142,   152,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   143,   132,   143,     3,   132,   132,
     143,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     149,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     143,   132,   132,   145,   145,   132,   132,   143,   143,   145,
     143,   132,   132,   132,   132,   132,   143,   144,   143,   144,
     145,   132,   143,   143,   132,   132,   132,   132,   132,   132,
     143,   145,   144,   132,   143,   144,   143,   143,   144,   143,
     132,   145,   132,   143,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,     3,   142,   132,
     143,   143,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   140,   141,   142,   143,   143,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   150,
     150,   150,   151,   151,   152,   152,   153,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   178,   179,   180,
     181,   182,   182,   183,   183,   184,   184,   185,   186,   186,
     186,   186,   187,   188,   189,   190,   191,   191,   192,   192,
     193,   194,   195,   195,   195,   195,   196,   196,   197,   197,
     197,   197,   198,   199,   200,   201,   202,   202,   203,   204,
     205,   205,   206,   207,   208,   209,   209,   210,   211,   211,
     212,   213,   214,   215,   216,   217,   217,   217,   218,   219,
     219,   220,   220,   221,   221,   222,   223,   223,   224,   225,
     225,   226,   226,   227,   228,   228,   229,   230,   231,   231,
     232,   233,   234,   235,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   278,
     279,   280,   281,   282,   283
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     3,
       1,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     4,
       4,     5,     4,     5,     4,     5,     4,     4,     5,     4,
       4,     3,     4,     5,     4,     4,     5,     4,     4,     5,
       4,     5,     5,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     4,     4,     5,     4,     4,     4,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     4,     5,     4,     6,
       5,     4,     3,     3,     4,     4,     3,     4,     4,     3,
       4,     3,     4,     4,     3,     4,     4,     4,     4,     3,
       4,     4,     4,     4,     5,     4,     4,     4,     4,     3,
       4,     3,     3,     4,     4,     3,     4,     3,     4,     4,
       4,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     3,     4,     4,     3,     3,     3,     3,     3,     3,
       4,     4,     3,     4,     3,     4,     4,     4,     4,     4,
       4,     3,     4,     3,     4
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
      yyerror (scanner, YY_("syntax error: cannot back up")); \
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
                  Type, Value, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, yyscan_t scanner)
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
                                              , scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* SYM  */
#line 66 "../src/parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).s)); }
#line 1854 "parser.c" /* yacc.c:1257  */
        break;

    case 4: /* STR  */
#line 66 "../src/parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).s)); }
#line 1860 "parser.c" /* yacc.c:1257  */
        break;

    case 141: /* start  */
#line 64 "../src/parser.y" /* yacc.c:1257  */
      { run(((*yyvaluep).e));  }
#line 1866 "parser.c" /* yacc.c:1257  */
        break;

    case 142: /* s  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1872 "parser.c" /* yacc.c:1257  */
        break;

    case 143: /* p  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1878 "parser.c" /* yacc.c:1257  */
        break;

    case 144: /* pp  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1884 "parser.c" /* yacc.c:1257  */
        break;

    case 145: /* ps  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1890 "parser.c" /* yacc.c:1257  */
        break;

    case 146: /* pps  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1896 "parser.c" /* yacc.c:1257  */
        break;

    case 147: /* vps  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1902 "parser.c" /* yacc.c:1257  */
        break;

    case 148: /* opts  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1908 "parser.c" /* yacc.c:1257  */
        break;

    case 149: /* vpb  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1914 "parser.c" /* yacc.c:1257  */
        break;

    case 150: /* np  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1920 "parser.c" /* yacc.c:1257  */
        break;

    case 151: /* sps  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1926 "parser.c" /* yacc.c:1257  */
        break;

    case 152: /* par  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1932 "parser.c" /* yacc.c:1257  */
        break;

    case 153: /* cv  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1938 "parser.c" /* yacc.c:1257  */
        break;

    case 154: /* cvv  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1944 "parser.c" /* yacc.c:1257  */
        break;

    case 155: /* opt  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1950 "parser.c" /* yacc.c:1257  */
        break;

    case 156: /* vp  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1956 "parser.c" /* yacc.c:1257  */
        break;

    case 157: /* add  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1962 "parser.c" /* yacc.c:1257  */
        break;

    case 158: /* div  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1968 "parser.c" /* yacc.c:1257  */
        break;

    case 159: /* mul  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1974 "parser.c" /* yacc.c:1257  */
        break;

    case 160: /* sub  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1980 "parser.c" /* yacc.c:1257  */
        break;

    case 161: /* and  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1986 "parser.c" /* yacc.c:1257  */
        break;

    case 162: /* bitand  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1992 "parser.c" /* yacc.c:1257  */
        break;

    case 163: /* bitnot  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 1998 "parser.c" /* yacc.c:1257  */
        break;

    case 164: /* bitor  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2004 "parser.c" /* yacc.c:1257  */
        break;

    case 165: /* bitxor  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2010 "parser.c" /* yacc.c:1257  */
        break;

    case 166: /* not  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2016 "parser.c" /* yacc.c:1257  */
        break;

    case 167: /* in  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2022 "parser.c" /* yacc.c:1257  */
        break;

    case 168: /* or  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2028 "parser.c" /* yacc.c:1257  */
        break;

    case 169: /* shiftleft  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2034 "parser.c" /* yacc.c:1257  */
        break;

    case 170: /* shiftright  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2040 "parser.c" /* yacc.c:1257  */
        break;

    case 171: /* xor  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2046 "parser.c" /* yacc.c:1257  */
        break;

    case 172: /* eq  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2052 "parser.c" /* yacc.c:1257  */
        break;

    case 173: /* gt  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2058 "parser.c" /* yacc.c:1257  */
        break;

    case 174: /* gte  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2064 "parser.c" /* yacc.c:1257  */
        break;

    case 175: /* lt  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2070 "parser.c" /* yacc.c:1257  */
        break;

    case 176: /* lte  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2076 "parser.c" /* yacc.c:1257  */
        break;

    case 177: /* neq  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2082 "parser.c" /* yacc.c:1257  */
        break;

    case 178: /* if  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2088 "parser.c" /* yacc.c:1257  */
        break;

    case 179: /* select  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2094 "parser.c" /* yacc.c:1257  */
        break;

    case 180: /* until  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2100 "parser.c" /* yacc.c:1257  */
        break;

    case 181: /* while  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2106 "parser.c" /* yacc.c:1257  */
        break;

    case 182: /* execute  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2112 "parser.c" /* yacc.c:1257  */
        break;

    case 183: /* rexx  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2118 "parser.c" /* yacc.c:1257  */
        break;

    case 184: /* run  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2124 "parser.c" /* yacc.c:1257  */
        break;

    case 185: /* abort  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2130 "parser.c" /* yacc.c:1257  */
        break;

    case 186: /* exit  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2136 "parser.c" /* yacc.c:1257  */
        break;

    case 187: /* onerror  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2142 "parser.c" /* yacc.c:1257  */
        break;

    case 188: /* trap  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2148 "parser.c" /* yacc.c:1257  */
        break;

    case 189: /* copyfiles  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2154 "parser.c" /* yacc.c:1257  */
        break;

    case 190: /* copylib  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2160 "parser.c" /* yacc.c:1257  */
        break;

    case 191: /* delete  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2166 "parser.c" /* yacc.c:1257  */
        break;

    case 192: /* exists  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2172 "parser.c" /* yacc.c:1257  */
        break;

    case 193: /* fileonly  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2178 "parser.c" /* yacc.c:1257  */
        break;

    case 194: /* foreach  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2184 "parser.c" /* yacc.c:1257  */
        break;

    case 195: /* makeassign  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2190 "parser.c" /* yacc.c:1257  */
        break;

    case 196: /* makedir  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2196 "parser.c" /* yacc.c:1257  */
        break;

    case 197: /* protect  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2202 "parser.c" /* yacc.c:1257  */
        break;

    case 198: /* startup  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2208 "parser.c" /* yacc.c:1257  */
        break;

    case 199: /* textfile  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2214 "parser.c" /* yacc.c:1257  */
        break;

    case 200: /* tooltype  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2220 "parser.c" /* yacc.c:1257  */
        break;

    case 201: /* transcript  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2226 "parser.c" /* yacc.c:1257  */
        break;

    case 202: /* rename  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2232 "parser.c" /* yacc.c:1257  */
        break;

    case 203: /* complete  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2238 "parser.c" /* yacc.c:1257  */
        break;

    case 204: /* debug  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2244 "parser.c" /* yacc.c:1257  */
        break;

    case 205: /* message  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2250 "parser.c" /* yacc.c:1257  */
        break;

    case 206: /* user  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2256 "parser.c" /* yacc.c:1257  */
        break;

    case 207: /* welcome  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2262 "parser.c" /* yacc.c:1257  */
        break;

    case 208: /* working  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2268 "parser.c" /* yacc.c:1257  */
        break;

    case 209: /* database  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2274 "parser.c" /* yacc.c:1257  */
        break;

    case 210: /* earlier  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2280 "parser.c" /* yacc.c:1257  */
        break;

    case 211: /* getassign  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2286 "parser.c" /* yacc.c:1257  */
        break;

    case 212: /* getdevice  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2292 "parser.c" /* yacc.c:1257  */
        break;

    case 213: /* getdiskspace  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2298 "parser.c" /* yacc.c:1257  */
        break;

    case 214: /* getenv  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2304 "parser.c" /* yacc.c:1257  */
        break;

    case 215: /* getsize  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2310 "parser.c" /* yacc.c:1257  */
        break;

    case 216: /* getsum  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2316 "parser.c" /* yacc.c:1257  */
        break;

    case 217: /* getversion  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2322 "parser.c" /* yacc.c:1257  */
        break;

    case 218: /* iconinfo  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2328 "parser.c" /* yacc.c:1257  */
        break;

    case 219: /* dcl  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2334 "parser.c" /* yacc.c:1257  */
        break;

    case 220: /* cus  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2340 "parser.c" /* yacc.c:1257  */
        break;

    case 221: /* askbool  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2346 "parser.c" /* yacc.c:1257  */
        break;

    case 222: /* askchoice  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2352 "parser.c" /* yacc.c:1257  */
        break;

    case 223: /* askdir  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2358 "parser.c" /* yacc.c:1257  */
        break;

    case 224: /* askdisk  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2364 "parser.c" /* yacc.c:1257  */
        break;

    case 225: /* askfile  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2370 "parser.c" /* yacc.c:1257  */
        break;

    case 226: /* asknumber  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2376 "parser.c" /* yacc.c:1257  */
        break;

    case 227: /* askoptions  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2382 "parser.c" /* yacc.c:1257  */
        break;

    case 228: /* askstring  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2388 "parser.c" /* yacc.c:1257  */
        break;

    case 229: /* cat  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2394 "parser.c" /* yacc.c:1257  */
        break;

    case 230: /* expandpath  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2400 "parser.c" /* yacc.c:1257  */
        break;

    case 231: /* fmt  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2406 "parser.c" /* yacc.c:1257  */
        break;

    case 232: /* pathonly  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2412 "parser.c" /* yacc.c:1257  */
        break;

    case 233: /* patmatch  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2418 "parser.c" /* yacc.c:1257  */
        break;

    case 234: /* strlen  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2424 "parser.c" /* yacc.c:1257  */
        break;

    case 235: /* substr  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2430 "parser.c" /* yacc.c:1257  */
        break;

    case 236: /* tackon  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2436 "parser.c" /* yacc.c:1257  */
        break;

    case 237: /* set  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2442 "parser.c" /* yacc.c:1257  */
        break;

    case 238: /* symbolset  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2448 "parser.c" /* yacc.c:1257  */
        break;

    case 239: /* symbolval  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2454 "parser.c" /* yacc.c:1257  */
        break;

    case 240: /* all  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2460 "parser.c" /* yacc.c:1257  */
        break;

    case 241: /* append  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2466 "parser.c" /* yacc.c:1257  */
        break;

    case 242: /* askuser  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2472 "parser.c" /* yacc.c:1257  */
        break;

    case 243: /* assigns  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2478 "parser.c" /* yacc.c:1257  */
        break;

    case 244: /* choices  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2484 "parser.c" /* yacc.c:1257  */
        break;

    case 245: /* command  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2490 "parser.c" /* yacc.c:1257  */
        break;

    case 246: /* compression  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2496 "parser.c" /* yacc.c:1257  */
        break;

    case 247: /* confirm  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2502 "parser.c" /* yacc.c:1257  */
        break;

    case 248: /* default  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2508 "parser.c" /* yacc.c:1257  */
        break;

    case 249: /* delopts  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2514 "parser.c" /* yacc.c:1257  */
        break;

    case 250: /* dest  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2520 "parser.c" /* yacc.c:1257  */
        break;

    case 251: /* disk  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2526 "parser.c" /* yacc.c:1257  */
        break;

    case 252: /* fail  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2532 "parser.c" /* yacc.c:1257  */
        break;

    case 253: /* files  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2538 "parser.c" /* yacc.c:1257  */
        break;

    case 254: /* fonts  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2544 "parser.c" /* yacc.c:1257  */
        break;

    case 255: /* force  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2550 "parser.c" /* yacc.c:1257  */
        break;

    case 256: /* getdefaulttool  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2556 "parser.c" /* yacc.c:1257  */
        break;

    case 257: /* getposition  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2562 "parser.c" /* yacc.c:1257  */
        break;

    case 258: /* getstack  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2568 "parser.c" /* yacc.c:1257  */
        break;

    case 259: /* gettooltype  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2574 "parser.c" /* yacc.c:1257  */
        break;

    case 260: /* help  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2580 "parser.c" /* yacc.c:1257  */
        break;

    case 261: /* infos  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2586 "parser.c" /* yacc.c:1257  */
        break;

    case 262: /* include  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2592 "parser.c" /* yacc.c:1257  */
        break;

    case 263: /* newname  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2598 "parser.c" /* yacc.c:1257  */
        break;

    case 264: /* newpath  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2604 "parser.c" /* yacc.c:1257  */
        break;

    case 265: /* nofail  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2610 "parser.c" /* yacc.c:1257  */
        break;

    case 266: /* nogauge  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2616 "parser.c" /* yacc.c:1257  */
        break;

    case 267: /* noposition  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2622 "parser.c" /* yacc.c:1257  */
        break;

    case 268: /* noreq  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2628 "parser.c" /* yacc.c:1257  */
        break;

    case 269: /* oknodelete  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2634 "parser.c" /* yacc.c:1257  */
        break;

    case 270: /* pattern  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2640 "parser.c" /* yacc.c:1257  */
        break;

    case 271: /* prompt  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2646 "parser.c" /* yacc.c:1257  */
        break;

    case 272: /* quiet  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2652 "parser.c" /* yacc.c:1257  */
        break;

    case 273: /* range  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2658 "parser.c" /* yacc.c:1257  */
        break;

    case 274: /* safe  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2664 "parser.c" /* yacc.c:1257  */
        break;

    case 275: /* setdefaulttool  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2670 "parser.c" /* yacc.c:1257  */
        break;

    case 276: /* setposition  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2676 "parser.c" /* yacc.c:1257  */
        break;

    case 277: /* setstack  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2682 "parser.c" /* yacc.c:1257  */
        break;

    case 278: /* settooltype  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2688 "parser.c" /* yacc.c:1257  */
        break;

    case 279: /* source  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2694 "parser.c" /* yacc.c:1257  */
        break;

    case 280: /* swapcolors  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2700 "parser.c" /* yacc.c:1257  */
        break;

    case 281: /* optional  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2706 "parser.c" /* yacc.c:1257  */
        break;

    case 282: /* resident  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2712 "parser.c" /* yacc.c:1257  */
        break;

    case 283: /* override  */
#line 69 "../src/parser.y" /* yacc.c:1257  */
      { kill(((*yyvaluep).e)); }
#line 2718 "parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, scanner);
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
#line 85 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = init((yyvsp[0].e)); }
#line 2986 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 2992 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 2998 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3004 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(push((yyvsp[-2].e), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3010 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = (yyvsp[0].e); }
#line 3016 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 96 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3022 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3028 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3034 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3040 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 100 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = (yyvsp[-1].e); }
#line 3046 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 101 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3052 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3058 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 103 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3064 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 104 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3070 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_string((yyvsp[0].s)); }
#line 3076 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_symref((yyvsp[0].s), LINE); }
#line 3082 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(push((yyvsp[-2].e), new_symbol((yyvsp[-1].s))), (yyvsp[0].e)) ; }
#line 3088 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(push(new_contxt(), new_symbol((yyvsp[-1].s))), (yyvsp[0].e)); }
#line 3094 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push((yyvsp[-1].e), new_symbol((yyvsp[0].s))); }
#line 3100 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(new_contxt(), new_symbol((yyvsp[0].s))); }
#line 3106 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3112 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 112 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = push(push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3118 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 246 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("+"), LINE, m_add, (yyvsp[-1].e), NUMBER); }
#line 3124 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 247 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("/"), LINE, m_div, (yyvsp[-1].e), NUMBER); }
#line 3130 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 248 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("*"), LINE, m_mul, (yyvsp[-1].e), NUMBER); }
#line 3136 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 249 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("-"), LINE, m_sub, (yyvsp[-1].e), NUMBER); }
#line 3142 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 252 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("AND"), LINE, m_and, (yyvsp[-1].e), NUMBER); }
#line 3148 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 253 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("BITAND"), LINE, m_bitand, (yyvsp[-1].e), NUMBER); }
#line 3154 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 254 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("BITNOT"), LINE, m_bitnot, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3160 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 255 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("BITOR"), LINE, m_bitor, (yyvsp[-1].e), NUMBER); }
#line 3166 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 256 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("BITXOR"), LINE, m_bitxor, (yyvsp[-1].e), NUMBER); }
#line 3172 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 257 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("NOT"), LINE, m_not, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3178 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 258 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("IN"), LINE, m_in, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3184 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 259 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("OR"), LINE, m_or, (yyvsp[-1].e), NUMBER); }
#line 3190 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 260 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("shiftleft"), LINE, m_shiftleft, (yyvsp[-1].e), NUMBER); }
#line 3196 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 261 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("shiftright"), LINE, m_shiftright, (yyvsp[-1].e), NUMBER); }
#line 3202 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 262 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("XOR"), LINE, m_xor, (yyvsp[-1].e), NUMBER); }
#line 3208 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 265 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("="), LINE, m_eq, (yyvsp[-1].e), NUMBER); }
#line 3214 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 266 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup(">"), LINE, m_gt, (yyvsp[-1].e), NUMBER); }
#line 3220 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 267 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup(">="), LINE, m_gte, (yyvsp[-1].e), NUMBER); }
#line 3226 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 268 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("<"), LINE, m_lt, (yyvsp[-1].e), NUMBER); }
#line 3232 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 269 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("<="), LINE, m_lte, (yyvsp[-1].e), NUMBER); }
#line 3238 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 270 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("<>"), LINE, m_neq, (yyvsp[-1].e), NUMBER); }
#line 3244 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 273 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("if"), LINE, m_if, (yyvsp[-1].e), NUMBER); }
#line 3250 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 274 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("if"), LINE, m_if, (yyvsp[-1].e), NUMBER); }
#line 3256 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 275 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("select"), LINE, m_select, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3262 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 276 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("until"), LINE, m_until, (yyvsp[-1].e), NUMBER); }
#line 3268 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 277 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("while"), LINE, m_while, (yyvsp[-1].e), NUMBER); }
#line 3274 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 280 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("execute"), LINE, m_execute, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3280 "parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 281 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("execute"), LINE, m_execute, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3286 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 282 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("rexx"), LINE, m_rexx, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3292 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 283 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("rexx"), LINE, m_rexx, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3298 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 284 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("run"), LINE, m_run, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3304 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 285 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("run"), LINE, m_run, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3310 "parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 288 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("abort"), LINE, m_abort, (yyvsp[-1].e), NUMBER); }
#line 3316 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 289 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3322 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 290 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3328 "parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 291 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, (yyvsp[-1].e), NUMBER); }
#line 3334 "parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 292 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, NULL, NUMBER); }
#line 3340 "parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 293 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("onerror"), LINE, m_procedure, push(new_contxt(), 
                                                       new_custom(strdup("@onerror"), LINE, NULL, (yyvsp[-1].e))), DANGLE); }
#line 3347 "parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 295 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("trap"), LINE, m_trap, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3353 "parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 298 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("copyfiles"), LINE, m_copyfiles, (yyvsp[-1].e), NUMBER); }
#line 3359 "parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 299 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("copylib"), LINE, m_copylib, (yyvsp[-1].e), NUMBER); }
#line 3365 "parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 300 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("delete"), LINE, m_delete, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3371 "parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 301 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("delete"), LINE, m_delete, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3377 "parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 302 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("exists"), LINE, m_exists, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3383 "parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 303 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("exists"), LINE, m_exists, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3389 "parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 304 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("fileonly"), LINE, m_fileonly, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3395 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 305 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("foreach"), LINE, m_foreach, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3401 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 306 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3407 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 307 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, (yyvsp[-1].e), NUMBER); }
#line 3413 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 308 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3419 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 309 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3425 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 310 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("makedir"), LINE, m_makedir, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3431 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 311 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("makedir"), LINE, m_makedir, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3437 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 312 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3443 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 313 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, (yyvsp[-1].e), NUMBER); }
#line 3449 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 314 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3455 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 315 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3461 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 316 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("startup"), LINE, m_startup, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3467 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 317 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("textfile"), LINE, m_textfile, (yyvsp[-1].e), NUMBER); }
#line 3473 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 318 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("tooltype"), LINE, m_tooltype, (yyvsp[-1].e), NUMBER); }
#line 3479 "parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 319 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("transcript"), LINE, m_transcript, (yyvsp[-1].e), NUMBER); }
#line 3485 "parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 320 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("rename"), LINE, m_rename, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3491 "parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 321 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("rename"), LINE, m_rename, (yyvsp[-1].e), NUMBER); }
#line 3497 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 324 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("complete"), LINE, m_complete, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3503 "parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 325 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("debug"), LINE, m_debug, (yyvsp[-1].e), NUMBER); }
#line 3509 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 326 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("message"), LINE, m_message, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3515 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 327 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("message"), LINE, m_message, (yyvsp[-1].e), NUMBER); }
#line 3521 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 328 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("user"), LINE, m_set, push(push(new_contxt(), 
                                                       new_symbol(strdup("@user-level"))), new_number((yyvsp[-1].n))), DANGLE); }
#line 3528 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 330 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("welcome"), LINE, m_welcome, (yyvsp[-1].e), NUMBER); }
#line 3534 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 331 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("working"), LINE, m_working, (yyvsp[-1].e), NUMBER); }
#line 3540 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 334 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("database"), LINE, m_database, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3546 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 335 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("database"), LINE, m_database, (yyvsp[-1].e), STRING); }
#line 3552 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 336 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("earlier"), LINE, m_earlier, (yyvsp[-1].e), NUMBER); }
#line 3558 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 337 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getassign"), LINE, m_getassign, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3564 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 338 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getassign"), LINE, m_getassign, (yyvsp[-1].e), STRING); }
#line 3570 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 339 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getdevice"), LINE, m_getdevice, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3576 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 340 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getdiskspace"), LINE, m_getdiskspace, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3582 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 341 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getenv"), LINE, m_getenv, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3588 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 342 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getsize"), LINE, m_getsize, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3594 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 343 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getsum"), LINE, m_getsum, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3600 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 344 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getversion"), LINE, m_getversion, NULL, NUMBER); }
#line 3606 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 345 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getversion"), LINE, m_getversion, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3612 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 346 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("getversion"), LINE, m_getversion, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3618 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 347 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("iconinfo"), LINE, m_iconinfo, (yyvsp[-1].e), NUMBER); }
#line 3624 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 350 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("procedure"), LINE, m_procedure, push(new_contxt(), new_custom((yyvsp[-3].s), LINE, (yyvsp[-2].e), (yyvsp[-1].e))), NUMBER); }
#line 3630 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 351 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("procedure"), LINE, m_procedure, push(new_contxt(), new_custom((yyvsp[-2].s), LINE, NULL, (yyvsp[-1].e))), NUMBER); }
#line 3636 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 352 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_cusref((yyvsp[-2].s), LINE, (yyvsp[-1].e)); }
#line 3642 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 353 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_cusref((yyvsp[-1].s), LINE, NULL); }
#line 3648 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 356 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askbool"), LINE, m_askbool, NULL, NUMBER); }
#line 3654 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 357 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askbool"), LINE, m_askbool, (yyvsp[-1].e), NUMBER); }
#line 3660 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 358 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askchoice"), LINE, m_askchoice, (yyvsp[-1].e), NUMBER); }
#line 3666 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 359 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askdir"), LINE, m_askdir, NULL, STRING); }
#line 3672 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 360 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askdir"), LINE, m_askdir, (yyvsp[-1].e), STRING); }
#line 3678 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 361 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askdisk"), LINE, m_askdisk, (yyvsp[-1].e), NUMBER); }
#line 3684 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 362 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askfile"), LINE, m_askfile, NULL, STRING); }
#line 3690 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 363 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askfile"), LINE, m_askfile, (yyvsp[-1].e), STRING); }
#line 3696 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 364 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("asknumber"), LINE, m_asknumber, NULL, NUMBER); }
#line 3702 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 365 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("asknumber"), LINE, m_asknumber, (yyvsp[-1].e), NUMBER); }
#line 3708 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 366 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askoptions"), LINE, m_askoptions, (yyvsp[-1].e), NUMBER); }
#line 3714 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 367 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askstring"), LINE, m_askstring, NULL, STRING); }
#line 3720 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 368 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("askstring"), LINE, m_askstring, (yyvsp[-1].e), STRING); }
#line 3726 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 371 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("cat"), LINE, m_cat, (yyvsp[-1].e), STRING); }
#line 3732 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 372 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("expandpath"), LINE, m_expandpath, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3738 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 373 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native((yyvsp[-2].s), LINE, m_fmt, (yyvsp[-1].e), STRING); }
#line 3744 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 374 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native((yyvsp[-1].s), LINE, m_fmt, NULL, STRING); }
#line 3750 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 375 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("pathonly"), LINE, m_pathonly, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3756 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 376 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("patmatch"), LINE, m_patmatch, (yyvsp[-1].e), NUMBER); }
#line 3762 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 377 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("strlen"), LINE, m_strlen, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3768 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 378 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("substr"), LINE, m_substr, (yyvsp[-1].e), STRING); }
#line 3774 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 379 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("substr"), LINE, m_substr, push((yyvsp[-2].e), (yyvsp[-1].e)), STRING); }
#line 3780 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 380 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("tackon"), LINE, m_tackon, (yyvsp[-1].e), STRING); }
#line 3786 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 383 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("set"), LINE, m_set, (yyvsp[-1].e), DANGLE); }
#line 3792 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 384 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("symbolset"), LINE, m_symbolset, (yyvsp[-1].e), DANGLE); }
#line 3798 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 385 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_native(strdup("symbolval"), LINE, m_symbolval, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3804 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 388 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("all"), OPT_ALL, NULL); }
#line 3810 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 389 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("append"), OPT_APPEND, push(new_contxt(), (yyvsp[-1].e))); }
#line 3816 "parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 390 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("askuser"), OPT_ASKUSER, NULL); }
#line 3822 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 391 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("assigns"), OPT_ASSIGNS, NULL); }
#line 3828 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 392 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("choices"), OPT_CHOICES, (yyvsp[-1].e)); }
#line 3834 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 393 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("command"), OPT_COMMAND, (yyvsp[-1].e)); }
#line 3840 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 394 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("compression"), OPT_COMPRESSION, NULL); }
#line 3846 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 395 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("confirm"), OPT_CONFIRM, push(new_contxt(), (yyvsp[-1].e))); }
#line 3852 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 396 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("confirm"), OPT_CONFIRM, NULL); }
#line 3858 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 397 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("default"), OPT_DEFAULT, push(new_contxt(), (yyvsp[-1].e))); }
#line 3864 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 398 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("delopts"), OPT_DELOPTS, (yyvsp[-1].e)); }
#line 3870 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 399 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("dest"), OPT_DEST, push(new_contxt(), (yyvsp[-1].e))); }
#line 3876 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 400 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("disk"), OPT_DISK, NULL); }
#line 3882 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 401 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("fail"), OPT_FAIL, NULL); }
#line 3888 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 402 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("files"), OPT_FILES, NULL); }
#line 3894 "parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 403 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("fonts"), OPT_FONTS, NULL); }
#line 3900 "parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 404 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("force"), OPT_FORCE, NULL); }
#line 3906 "parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 405 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("getdefaulttool"), OPT_GETDEFAULTTOOL, push(new_contxt(), (yyvsp[-1].e))); }
#line 3912 "parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 406 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("getposition"), OPT_GETPOSITION, (yyvsp[-1].e)); }
#line 3918 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 407 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("getstack"), OPT_GETSTACK, push(new_contxt(), (yyvsp[-1].e))); }
#line 3924 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 408 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("gettooltype"), OPT_GETTOOLTYPE, (yyvsp[-1].e)); }
#line 3930 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 409 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("help"), OPT_HELP, (yyvsp[-1].e)); }
#line 3936 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 410 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("infos"), OPT_INFOS, NULL); }
#line 3942 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 411 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("include"), OPT_INCLUDE, push(new_contxt(), (yyvsp[-1].e))); }
#line 3948 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 412 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("newname"), OPT_NEWNAME, push(new_contxt(), (yyvsp[-1].e))); }
#line 3954 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 413 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("newpath"), OPT_NEWPATH, NULL); }
#line 3960 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 414 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("nofail"), OPT_NOFAIL, NULL); }
#line 3966 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 415 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("nogauge"), OPT_NOGAUGE, NULL); }
#line 3972 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 416 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("noposition"), OPT_NOPOSITION, NULL); }
#line 3978 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 417 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("noreq"), OPT_NOREQ, NULL); }
#line 3984 "parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 418 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("oknodelete"), OPT_OKNODELETE, NULL); }
#line 3990 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 419 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("pattern"), OPT_PATTERN, push(new_contxt(), (yyvsp[-1].e))); }
#line 3996 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 420 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("prompt"), OPT_PROMPT, (yyvsp[-1].e)); }
#line 4002 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 421 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("quiet"), OPT_QUIET, NULL); }
#line 4008 "parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 422 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("range"), OPT_RANGE, (yyvsp[-1].e)); }
#line 4014 "parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 423 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("safe"), OPT_SAFE, NULL); }
#line 4020 "parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 424 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("setdefaulttool"), OPT_SETDEFAULTTOOL, push(new_contxt(), (yyvsp[-1].e))); }
#line 4026 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 425 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("setposition"), OPT_SETPOSITION, (yyvsp[-1].e)); }
#line 4032 "parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 426 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("setstack"), OPT_SETSTACK, push(new_contxt(), (yyvsp[-1].e))); }
#line 4038 "parser.c" /* yacc.c:1646  */
    break;

  case 308:
#line 427 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("settooltype"), OPT_SETTOOLTYPE, (yyvsp[-1].e)); }
#line 4044 "parser.c" /* yacc.c:1646  */
    break;

  case 309:
#line 428 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("settooltype"), OPT_SETTOOLTYPE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4050 "parser.c" /* yacc.c:1646  */
    break;

  case 310:
#line 429 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("source"), OPT_SOURCE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4056 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 430 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("swapcolors"), OPT_SWAPCOLORS, NULL); }
#line 4062 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 431 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("optional"), OPT_OPTIONAL, (yyvsp[-1].e)); }
#line 4068 "parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 432 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("resident"), OPT_RESIDENT, NULL); }
#line 4074 "parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 433 "../src/parser.y" /* yacc.c:1646  */
    { (yyval.e) = new_option(strdup("override"), OPT_OVERRIDE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4080 "parser.c" /* yacc.c:1646  */
    break;


#line 4084 "parser.c" /* yacc.c:1646  */
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
      yyerror (scanner, YY_("syntax error"));
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
        yyerror (scanner, yymsgp);
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
                      yytoken, &yylval, scanner);
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
                  yystos[yystate], yyvsp, scanner);
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
  yyerror (scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, scanner);
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
#line 435 "../src/parser.y" /* yacc.c:1906  */


