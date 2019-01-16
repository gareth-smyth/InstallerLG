/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.1"

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

//----------------------------------------------------------------------------
// parser.y:
//
// InstallerLG parser
//----------------------------------------------------------------------------
// Copyright (C) 2018, Ola Söder. All rights reserved.
// Licensed under the AROS PUBLIC LICENSE (APL) Version 1.1
//----------------------------------------------------------------------------

#include "all.h"
#include "alloc.h"
#include "eval.h"
#include "init.h"
#include "lexer.h"

#include <string.h>

// Always debug.
#define YYDEBUG 1

#line 88 "parser.c" /* yacc.c:339  */

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
    OOM = 260,
    INT = 261,
    HEX = 262,
    BIN = 263,
    AND = 264,
    BITAND = 265,
    BITNOT = 266,
    BITOR = 267,
    BITXOR = 268,
    NOT = 269,
    IN = 270,
    OR = 271,
    SHIFTLEFT = 272,
    SHIFTRIGHT = 273,
    XOR = 274,
    EQ = 275,
    GT = 276,
    GTE = 277,
    LT = 278,
    LTE = 279,
    NEQ = 280,
    IF = 281,
    SELECT = 282,
    UNTIL = 283,
    WHILE = 284,
    TRACE = 285,
    RETRACE = 286,
    EXECUTE = 287,
    REXX = 288,
    RUN = 289,
    ABORT = 290,
    EXIT = 291,
    ONERROR = 292,
    TRAP = 293,
    REBOOT = 294,
    COPYFILES = 295,
    COPYLIB = 296,
    DELETE = 297,
    EXISTS = 298,
    FILEONLY = 299,
    FOREACH = 300,
    MAKEASSIGN = 301,
    MAKEDIR = 302,
    PROTECT = 303,
    STARTUP = 304,
    TEXTFILE = 305,
    TOOLTYPE = 306,
    TRANSCRIPT = 307,
    RENAME = 308,
    COMPLETE = 309,
    DEBUG = 310,
    MESSAGE = 311,
    USER = 312,
    WELCOME = 313,
    WORKING = 314,
    CLOSEMEDIA = 315,
    EFFECT = 316,
    SETMEDIA = 317,
    SHOWMEDIA = 318,
    DATABASE = 319,
    EARLIER = 320,
    GETASSIGN = 321,
    GETDEVICE = 322,
    GETDISKSPACE = 323,
    GETENV = 324,
    GETSIZE = 325,
    GETSUM = 326,
    GETVERSION = 327,
    ICONINFO = 328,
    CUS = 329,
    DCL = 330,
    ASKBOOL = 331,
    ASKCHOICE = 332,
    ASKDIR = 333,
    ASKDISK = 334,
    ASKFILE = 335,
    ASKNUMBER = 336,
    ASKOPTIONS = 337,
    ASKSTRING = 338,
    CAT = 339,
    EXPANDPATH = 340,
    FMT = 341,
    PATHONLY = 342,
    PATMATCH = 343,
    STRLEN = 344,
    SUBSTR = 345,
    TACKON = 346,
    SET = 347,
    SYMBOLSET = 348,
    SYMBOLVAL = 349,
    OPENWBOBJECT = 350,
    SHOWWBOBJECT = 351,
    CLOSEWBOBJECT = 352,
    ALL = 353,
    APPEND = 354,
    ASSIGNS = 355,
    BACK = 356,
    CHOICES = 357,
    COMMAND = 358,
    COMPRESSION = 359,
    CONFIRM = 360,
    DEFAULT = 361,
    DELOPTS = 362,
    DEST = 363,
    DISK = 364,
    FILES = 365,
    FONTS = 366,
    GETDEFAULTTOOL = 367,
    GETPOSITION = 368,
    GETSTACK = 369,
    GETTOOLTYPE = 370,
    HELP = 371,
    INFOS = 372,
    INCLUDE = 373,
    NEWNAME = 374,
    NEWPATH = 375,
    NOGAUGE = 376,
    NOPOSITION = 377,
    NOREQ = 378,
    PATTERN = 379,
    PROMPT = 380,
    QUIET = 381,
    RANGE = 382,
    SAFE = 383,
    SETDEFAULTTOOL = 384,
    SETPOSITION = 385,
    SETSTACK = 386,
    SETTOOLTYPE = 387,
    SOURCE = 388,
    SWAPCOLORS = 389,
    OPTIONAL = 390,
    RESIDENT = 391,
    OVERRIDE = 392
  };
#endif
/* Tokens.  */
#define SYM 258
#define STR 259
#define OOM 260
#define INT 261
#define HEX 262
#define BIN 263
#define AND 264
#define BITAND 265
#define BITNOT 266
#define BITOR 267
#define BITXOR 268
#define NOT 269
#define IN 270
#define OR 271
#define SHIFTLEFT 272
#define SHIFTRIGHT 273
#define XOR 274
#define EQ 275
#define GT 276
#define GTE 277
#define LT 278
#define LTE 279
#define NEQ 280
#define IF 281
#define SELECT 282
#define UNTIL 283
#define WHILE 284
#define TRACE 285
#define RETRACE 286
#define EXECUTE 287
#define REXX 288
#define RUN 289
#define ABORT 290
#define EXIT 291
#define ONERROR 292
#define TRAP 293
#define REBOOT 294
#define COPYFILES 295
#define COPYLIB 296
#define DELETE 297
#define EXISTS 298
#define FILEONLY 299
#define FOREACH 300
#define MAKEASSIGN 301
#define MAKEDIR 302
#define PROTECT 303
#define STARTUP 304
#define TEXTFILE 305
#define TOOLTYPE 306
#define TRANSCRIPT 307
#define RENAME 308
#define COMPLETE 309
#define DEBUG 310
#define MESSAGE 311
#define USER 312
#define WELCOME 313
#define WORKING 314
#define CLOSEMEDIA 315
#define EFFECT 316
#define SETMEDIA 317
#define SHOWMEDIA 318
#define DATABASE 319
#define EARLIER 320
#define GETASSIGN 321
#define GETDEVICE 322
#define GETDISKSPACE 323
#define GETENV 324
#define GETSIZE 325
#define GETSUM 326
#define GETVERSION 327
#define ICONINFO 328
#define CUS 329
#define DCL 330
#define ASKBOOL 331
#define ASKCHOICE 332
#define ASKDIR 333
#define ASKDISK 334
#define ASKFILE 335
#define ASKNUMBER 336
#define ASKOPTIONS 337
#define ASKSTRING 338
#define CAT 339
#define EXPANDPATH 340
#define FMT 341
#define PATHONLY 342
#define PATMATCH 343
#define STRLEN 344
#define SUBSTR 345
#define TACKON 346
#define SET 347
#define SYMBOLSET 348
#define SYMBOLVAL 349
#define OPENWBOBJECT 350
#define SHOWWBOBJECT 351
#define CLOSEWBOBJECT 352
#define ALL 353
#define APPEND 354
#define ASSIGNS 355
#define BACK 356
#define CHOICES 357
#define COMMAND 358
#define COMPRESSION 359
#define CONFIRM 360
#define DEFAULT 361
#define DELOPTS 362
#define DEST 363
#define DISK 364
#define FILES 365
#define FONTS 366
#define GETDEFAULTTOOL 367
#define GETPOSITION 368
#define GETSTACK 369
#define GETTOOLTYPE 370
#define HELP 371
#define INFOS 372
#define INCLUDE 373
#define NEWNAME 374
#define NEWPATH 375
#define NOGAUGE 376
#define NOPOSITION 377
#define NOREQ 378
#define PATTERN 379
#define PROMPT 380
#define QUIET 381
#define RANGE 382
#define SAFE 383
#define SETDEFAULTTOOL 384
#define SETPOSITION 385
#define SETSTACK 386
#define SETTOOLTYPE 387
#define SOURCE 388
#define SWAPCOLORS 389
#define OPTIONAL 390
#define RESIDENT 391
#define OVERRIDE 392

/* Value type.  */



int yyparse (yyscan_t scanner);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 407 "parser.c" /* yacc.c:358  */

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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  195
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  147
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  362
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  701

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     138,   139,   142,   140,     2,   143,     2,   141,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     146,   144,   145,     2,     2,     2,     2,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     277,   278,   279,   280,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   296,   297,   298,   299,   300,
     301,   304,   305,   306,   307,   308,   309,   310,   311,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   328,   329,   330,   331,   332,   333,   334,   336,   337,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   386,   387,   388,   389,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   409,   410,   411,   412,   413,   414,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     444,   445,   446,   449,   450,   451,   452,   453,   454,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYM", "STR", "OOM", "INT", "HEX", "BIN",
  "AND", "BITAND", "BITNOT", "BITOR", "BITXOR", "NOT", "IN", "OR",
  "SHIFTLEFT", "SHIFTRIGHT", "XOR", "EQ", "GT", "GTE", "LT", "LTE", "NEQ",
  "IF", "SELECT", "UNTIL", "WHILE", "TRACE", "RETRACE", "EXECUTE", "REXX",
  "RUN", "ABORT", "EXIT", "ONERROR", "TRAP", "REBOOT", "COPYFILES",
  "COPYLIB", "DELETE", "EXISTS", "FILEONLY", "FOREACH", "MAKEASSIGN",
  "MAKEDIR", "PROTECT", "STARTUP", "TEXTFILE", "TOOLTYPE", "TRANSCRIPT",
  "RENAME", "COMPLETE", "DEBUG", "MESSAGE", "USER", "WELCOME", "WORKING",
  "CLOSEMEDIA", "EFFECT", "SETMEDIA", "SHOWMEDIA", "DATABASE", "EARLIER",
  "GETASSIGN", "GETDEVICE", "GETDISKSPACE", "GETENV", "GETSIZE", "GETSUM",
  "GETVERSION", "ICONINFO", "CUS", "DCL", "ASKBOOL", "ASKCHOICE", "ASKDIR",
  "ASKDISK", "ASKFILE", "ASKNUMBER", "ASKOPTIONS", "ASKSTRING", "CAT",
  "EXPANDPATH", "FMT", "PATHONLY", "PATMATCH", "STRLEN", "SUBSTR",
  "TACKON", "SET", "SYMBOLSET", "SYMBOLVAL", "OPENWBOBJECT",
  "SHOWWBOBJECT", "CLOSEWBOBJECT", "ALL", "APPEND", "ASSIGNS", "BACK",
  "CHOICES", "COMMAND", "COMPRESSION", "CONFIRM", "DEFAULT", "DELOPTS",
  "DEST", "DISK", "FILES", "FONTS", "GETDEFAULTTOOL", "GETPOSITION",
  "GETSTACK", "GETTOOLTYPE", "HELP", "INFOS", "INCLUDE", "NEWNAME",
  "NEWPATH", "NOGAUGE", "NOPOSITION", "NOREQ", "PATTERN", "PROMPT",
  "QUIET", "RANGE", "SAFE", "SETDEFAULTTOOL", "SETPOSITION", "SETSTACK",
  "SETTOOLTYPE", "SOURCE", "SWAPCOLORS", "OPTIONAL", "RESIDENT",
  "OVERRIDE", "'('", "')'", "'+'", "'/'", "'*'", "'-'", "'='", "'>'",
  "'<'", "$accept", "start", "s", "p", "pp", "ps", "pps", "vp", "vps",
  "opts", "xpb", "xpbs", "np", "sps", "par", "cv", "cvv", "opt", "ivp",
  "add", "div", "mul", "sub", "and", "bitand", "bitnot", "bitor", "bitxor",
  "not", "in", "or", "shiftleft", "shiftright", "xor", "eq", "gt", "gte",
  "lt", "lte", "neq", "if", "select", "until", "while", "trace", "retrace",
  "execute", "rexx", "run", "abort", "exit", "onerror", "reboot", "trap",
  "copyfiles", "copylib", "delete", "exists", "fileonly", "foreach",
  "makeassign", "makedir", "protect", "startup", "textfile", "tooltype",
  "transcript", "rename", "complete", "debug", "message", "user",
  "welcome", "working", "closemedia", "effect", "setmedia", "showmedia",
  "database", "earlier", "getassign", "getdevice", "getdiskspace",
  "getenv", "getsize", "getsum", "getversion", "iconinfo", "dcl", "cus",
  "askbool", "askchoice", "askdir", "askdisk", "askfile", "asknumber",
  "askoptions", "askstring", "cat", "expandpath", "fmt", "pathonly",
  "patmatch", "strlen", "substr", "tackon", "set", "symbolset",
  "symbolval", "openwbobject", "showwbobject", "closewbobject", "all",
  "append", "assigns", "back", "choices", "command", "compression",
  "confirm", "default", "delopts", "dest", "disk", "files", "fonts",
  "getdefaulttool", "getposition", "getstack", "gettooltype", "help",
  "infos", "include", "newname", "newpath", "nogauge", "noposition",
  "noreq", "pattern", "prompt", "quiet", "range", "safe", "setdefaulttool",
  "setposition", "setstack", "settooltype", "source", "swapcolors",
  "optional", "resident", "override", "dynopt", YY_NULLPTR
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
     385,   386,   387,   388,   389,   390,   391,   392,    40,    41,
      43,    47,    42,    45,    61,    62,    60
};
# endif

#define YYPACT_NINF -564

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-564)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -127,  1539,    21,  -564,  -564,  -127,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
      36,    66,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
    -116,  -103,   474,   474,   474,   359,    87,  -127,   359,   -90,
     -61,   -61,   474,   359,   359,   359,   359,   474,   359,   474,
     -61,   -61,   359,   359,   359,    97,   474,   359,   107,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   127,   -61,    80,  -120,   -61,  -111,   -61,  -109,
    -106,   -61,  -104,   359,   359,   359,   359,   359,   359,   359,
      96,   359,   359,   474,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   -31,   -92,  -564,  -127,  -564,  -564,  -564,
    -564,  -564,  -564,  1683,  -564,  -564,   133,  -564,  -564,  -564,
     139,   154,   359,   -21,   -18,   -16,   -11,    14,   359,   207,
      24,    26,    32,    44,    46,    48,   234,    63,    78,   644,
    -127,  -127,  -564,  -564,   920,   249,   474,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,   255,
     474,   302,   474,   313,  1251,  -564,   321,   428,   -74,  -127,
    -564,  1935,   -72,   -63,   -59,   474,   -52,    85,  -127,   501,
     -42,   -32,   474,   507,   -22,   -61,   528,   -13,    13,   544,
      29,    90,  -564,   550,   573,   474,   111,  -564,   580,   651,
     125,   359,   687,   697,   788,   144,   148,  1355,   151,   160,
    1361,   176,   195,   202,   204,  -564,    31,    39,    11,  -564,
      43,    53,  -564,    59,    62,  -564,    68,  -564,    70,    81,
    -564,    83,  1367,   212,   221,   229,   232,  1375,   240,   359,
       9,  -564,  1504,   246,    89,   474,   256,   258,  1512,   262,
    1521,   263,   264,   267,   268,  -564,  -564,   -31,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  1649,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  1539,  -564,  -564,   644,
    -564,  -564,  -564,  1658,   105,   109,   359,   269,   359,   270,
    -127,   359,   359,   272,  1664,   359,   359,   359,   274,   281,
     299,   359,   359,   359,   359,  1778,   303,   359,   359,   314,
     317,   318,   324,   359,   359,   335,   359,   344,   359,   359,
     359,   359,   359,   345,   359,   352,   359,   129,  -564,   131,
    1786,   -61,  -564,   135,  1801,  -564,   137,  1807,  -564,  -564,
     360,  -564,  1827,  -564,   141,   359,  -564,  -564,  -564,   143,
     147,   393,  -564,   379,  -564,   156,  1395,  -564,   380,   392,
    -564,   385,  -564,   158,   163,  -564,   165,  -564,   173,   175,
    -564,   184,  -564,  -564,  -564,  -564,   192,  -564,  -564,  -564,
     194,  1833,  -564,  -564,  -564,  -564,   386,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
     390,  -564,   389,  -564,  -564,  -564,   399,    17,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,   400,  -564,  -564,   359,  -564,  -564,   359,  -564,
    -564,   198,   211,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  1839,  -564,  -564,  -564,  -564,  -564,  1845,
    -564,  1851,  -564,   215,  1857,  1863,  -564,  -564,   402,   403,
    1869,   404,  -564,  -564,  -564,   405,   406,   420,   421,  -564,
    1875,  -564,   422,   423,  -564,  -564,  -564,  -564,   425,  1881,
    -564,   426,  -564,   429,   430,   431,  1887,   432,   433,  -564,
    1893,  -564,   435,  -564,  -564,  -564,   218,  -564,  -564,   220,
    -564,  -564,   236,  -564,  -564,  -564,   437,  -564,  -564,   239,
    -564,  -564,  -564,  -564,  -564,  -564,   243,  -564,  -564,  -564,
    -564,   245,  -564,  -564,  -564,   251,  -564,  -564,  -564,  -564,
    -564,   443,  -564,  -564,  -564,  -564,  -564,   253,  -564,   450,
    1107,   437,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  1977,  -564,  -564,  -564,  -564,  -564,  -564,  -564,   452,
    -564
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,    14,     3,    11,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     111,   110,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   147,   146,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     1,    13,    28,    27,    29,
      24,    25,    26,     0,   286,     8,     0,     4,     5,   303,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   198,     0,     0,     0,    17,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    56,    55,    57,
      58,    59,    60,    61,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    62,    76,    63,    75,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   253,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   277,     0,     0,     0,   287,
       0,     0,   290,     0,     0,   293,     0,   295,     0,     0,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    15,     0,   285,     7,
     302,   174,     6,   175,   176,   177,   178,   179,     0,   181,
     182,   183,   184,   187,   189,   190,     0,   193,    21,    34,
     192,   191,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,    16,   206,     0,     0,   210,     0,     0,   211,   215,
       0,   214,     0,   217,     0,     0,   220,   221,   225,     0,
       0,     0,   226,     0,   228,     0,     0,   233,     0,     0,
     231,     0,   237,     0,     0,   241,     0,   239,     0,     0,
     245,     0,   246,   247,   248,   250,     0,   251,   252,   257,
       0,     0,   258,   259,   261,   262,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   278,     0,   280,    33,   284,     0,     0,   288,   289,
     291,   292,   294,   296,   297,   299,   300,   301,   304,   305,
     306,   307,     0,   309,    31,     0,   310,   311,     0,   312,
     313,     0,     0,   317,   318,   170,   171,   172,   173,   185,
     186,   188,   180,     0,    35,   194,    23,   195,   196,     0,
     319,     0,   321,     0,     0,     0,   325,   327,     0,     0,
       0,     0,   331,   332,   333,     0,     0,     0,     0,   339,
       0,   340,     0,     0,   343,   344,   345,   346,     0,     0,
     349,     0,   351,     0,     0,     0,     0,     0,     0,   358,
       0,   360,     0,    18,   199,   200,     0,   203,   204,     0,
     207,   208,     0,   212,   213,   219,     0,   222,   223,     0,
     227,   229,   232,   230,   234,   235,     0,   240,   238,   242,
     243,     0,   249,   254,   255,     0,   263,   279,   283,    32,
     282,     0,   308,    30,     9,   314,   315,     0,    19,     0,
       0,     0,   320,   322,   323,   324,   326,   328,   329,   330,
     334,   335,   336,   337,   338,   341,   342,   347,   348,   350,
     352,   353,   354,   356,   355,   357,   359,   361,   201,   205,
     209,     0,   224,   236,   244,   256,   281,   316,    20,     0,
     362
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -564,  -564,  -334,   311,   673,   -64,  -564,     0,     2,  -115,
    -219,  -564,    30,  -564,  -564,  -564,  -564,  -563,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,   300,  -564,  -564,
    -113,  -564,   100,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
     259,  -564,  -564
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   205,   213,   206,   362,   207,   196,   451,
     399,   403,   208,   360,   527,   227,   228,   237,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
       4,   193,     5,   194,   526,     4,   661,   236,   280,   282,
     402,     1,   545,   287,   524,   292,   293,   295,   291,   339,
     649,   195,   302,   232,   306,   307,   308,   291,   342,   291,
     345,   315,   291,   347,   291,   350,   233,   210,   211,   197,
     198,   199,   200,   201,   202,   219,     1,   376,   337,   290,
     340,   341,   343,   344,   346,   348,   349,   351,   235,   279,
     281,   283,   286,   661,     1,   463,   291,   466,   365,   197,
     198,   199,   200,   201,   202,   291,   467,   291,   309,   291,
     468,   313,   314,   338,   318,   319,   471,   472,   322,   323,
     197,   198,   199,   200,   201,   202,   479,   480,   699,   359,
     197,   198,   199,   200,   201,   202,   291,   482,   375,   352,
     197,   198,   199,   200,   201,   202,   291,   487,   383,   447,
     449,   384,   368,   385,   370,   291,   492,     4,   386,   288,
     197,   198,   199,   200,   201,   202,   197,   198,   199,   200,
     201,   202,   197,   198,   199,   200,   201,   202,   546,     1,
     525,   291,   493,   387,   388,     1,   650,   197,   198,   199,
     200,   201,   202,   390,   453,   391,   456,   291,   495,   520,
     521,   392,   450,   460,   203,   204,   447,   291,   523,   469,
     564,   291,   528,   393,   566,   394,   483,   395,   486,   488,
     489,   291,   529,   651,     4,   496,     4,   291,   530,   500,
     291,   531,   400,   377,   203,   209,   291,   532,   291,   533,
     197,   198,   199,   200,   201,   202,   454,   401,   457,   291,
     534,   291,   535,   462,   474,   284,   285,   291,   550,   497,
       4,     4,   404,   405,   377,   203,   312,   197,   198,   199,
     200,   201,   202,     1,   567,   203,   317,     1,   568,   551,
     502,   501,   197,   198,   199,   200,   201,   202,   197,   198,
     199,   200,   201,   202,   505,   203,   335,   291,   613,   291,
     614,   203,   378,   291,   617,   291,   620,   203,   380,     1,
     625,   291,   627,   510,   377,   291,   628,   511,     4,     4,
     513,   464,   203,   381,     1,   631,   291,   634,     4,   514,
     475,   291,   635,   291,   637,   197,   198,   199,   200,   201,
     202,   291,   638,   291,   639,   516,   197,   198,   199,   200,
     201,   202,   291,   640,   197,   198,   199,   200,   201,   202,
     291,   642,   291,   643,   517,   616,   291,   655,     4,   619,
       5,   518,   622,   519,   571,   203,   389,   574,   575,   291,
     656,   537,   580,     1,   663,   629,   291,   688,   291,   689,
     538,   590,   197,   198,   199,   200,   201,   202,   539,   636,
     599,   540,   396,   397,   291,   690,   641,   291,   692,   543,
     610,   291,   693,   291,   694,   549,   645,   234,   448,   291,
     695,   291,   697,   234,   452,   553,   193,   554,   563,   478,
     481,   556,   558,   559,     4,     4,   560,   561,   570,   572,
       4,   576,   573,   582,   212,   214,   212,   212,   217,   218,
     583,   212,   212,   212,   212,   212,   212,   226,   229,   230,
     231,   197,   198,   199,   200,   201,   202,   657,   584,   289,
     234,   455,   591,   294,   296,   297,   212,   299,   301,   303,
     305,   203,   458,   594,   212,   311,   595,   596,   316,   284,
     459,   320,   212,   597,     4,   324,   212,   327,   329,   330,
     332,   333,   334,   336,   600,     4,   377,   197,   198,   199,
     200,   201,   202,   602,   609,   353,   354,   212,   356,   212,
     212,   611,   212,   363,   364,   366,   367,   203,   212,   623,
     212,   212,   212,   212,   197,   198,   199,   200,   201,   202,
     197,   198,   199,   200,   201,   202,   432,   379,   630,   632,
     437,   379,   379,   382,   633,   646,   445,     4,   647,     5,
     379,   197,   198,   199,   200,   201,   202,   398,   648,   652,
     398,   666,   667,   669,   670,   671,   379,   197,   198,   199,
     200,   201,   202,   197,   198,   199,   200,   201,   202,   672,
     673,   675,   676,     4,   677,   679,   203,   461,   680,   681,
     682,   684,   685,     4,   687,   691,   197,   198,   199,   200,
     201,   202,   696,   197,   198,   199,   200,   201,   202,   698,
     379,   700,   379,   659,   379,   522,   473,   379,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
     382,     0,   234,   484,   382,     0,     0,   491,     0,     0,
     379,     0,     0,     0,   379,   379,     0,     0,     0,   379,
     379,     0,   212,   379,   379,   382,     0,     0,   382,   476,
     477,   382,     0,     0,     0,   234,   485,   197,   198,   199,
     200,   201,   202,     0,   197,   198,   199,   200,   201,   202,
     193,     0,   563,   379,     0,     0,   234,   490,   542,     0,
     544,     0,     0,   548,     0,     0,   552,     0,     0,   379,
       0,   379,   203,   494,     0,     0,     0,     0,   203,   498,
     197,   198,   199,   200,   201,   202,     0,     0,     0,   379,
     197,   198,   199,   200,   201,   202,     0,     0,     0,     0,
     398,   234,   499,     0,   398,     0,     0,   569,   203,   503,
       0,     0,     0,     0,     0,   578,   579,     0,   581,     0,
       0,     0,   585,   212,   587,   212,     0,     0,   592,   593,
       0,     0,     0,     0,   598,     0,     0,   212,     0,   603,
     212,   605,   606,   608,     0,     0,     0,   612,     0,     0,
       0,   379,     0,     0,     0,   379,     0,     0,   379,     0,
       0,     0,     0,   379,     0,     0,   626,     0,   215,   216,
       0,     0,   396,   220,   221,   222,   223,   224,   225,   203,
     504,   197,   198,   199,   200,   201,   202,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   298,   300,
       0,   304,   379,     0,     0,     0,   310,     0,     0,     0,
       0,     0,     0,     0,   321,   203,   507,   325,   326,   328,
       0,   331,     0,     0,     0,   203,   508,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
       0,   357,   358,     0,   361,     0,   653,     0,     0,   654,
     369,     0,   371,   372,   373,   374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,   379,     0,     0,   379,   379,     0,     0,     0,
       0,   379,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,     0,     0,     0,     0,     0,     0,     0,     0,
     379,     0,     0,     0,     0,     0,     0,   382,     0,     0,
       0,   379,     0,   100,   101,     0,   203,   509,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,   113,     0,   114,   115,   406,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   506,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,     0,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   234,     0,
     186,   187,   188,   189,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   586,     0,   588,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   601,
     100,   101,   604,     0,   607,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,   113,
       0,   114,   115,   406,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,     1,     0,   186,   187,   188,
     189,   190,   191,   192,   100,   101,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
     199,   200,   201,   202,   197,   198,   199,   200,   201,   202,
     197,   198,   199,   200,   201,   202,     0,   435,   197,   198,
     199,   200,   201,   202,     0,     0,     0,     0,     0,   203,
       0,   186,   187,   188,   189,   190,   191,   192,   100,   101,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     0,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   203,   512,     0,     0,     0,     0,   203,
     515,     0,     0,     0,     0,   203,   536,   197,   198,   199,
     200,   201,   202,   203,   541,   197,   198,   199,   200,   201,
     202,     0,     0,   437,   197,   198,   199,   200,   201,   202,
       0,     0,     0,   203,     0,   186,   187,   188,   189,   190,
     191,   192,   100,   101,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,     0,     0,     0,
       0,     0,   203,   547,     0,     0,     0,     0,     0,     0,
     203,   555,   197,   198,   199,   200,   201,   202,     0,   203,
     557,   197,   198,   199,   200,   201,   202,   197,   198,   199,
     200,   201,   202,     0,     0,     0,     0,     1,     0,   186,
     187,   188,   189,   190,   191,   192,   100,   101,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   197,   198,   199,   200,   201,   202,   203,   562,   197,
     198,   199,   200,   201,   202,     0,   396,   565,     0,     0,
       0,     0,   203,   577,   197,   198,   199,   200,   201,   202,
     197,   198,   199,   200,   201,   202,     0,     0,     0,     0,
       0,   203,     0,   186,   187,   188,   189,   190,   191,   192,
     197,   198,   199,   200,   201,   202,   197,   198,   199,   200,
     201,   202,   197,   198,   199,   200,   201,   202,   197,   198,
     199,   200,   201,   202,   197,   198,   199,   200,   201,   202,
     197,   198,   199,   200,   201,   202,   197,   198,   199,   200,
     201,   202,   197,   198,   199,   200,   201,   202,   197,   198,
     199,   200,   201,   202,   197,   198,   199,   200,   201,   202,
     197,   198,   199,   200,   201,   202,   197,   198,   199,   200,
     201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,   589,     0,     0,
       0,     0,     0,     0,   234,   615,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     618,     0,     0,     0,     0,   234,   621,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,     0,     0,     0,   203,   624,     0,     0,     0,
       0,   234,   644,     0,     0,     0,     0,     1,   658,     0,
       0,     0,     0,   660,   397,     0,     0,     0,     0,   203,
     662,     0,     0,     0,     0,   203,   664,     0,     0,     0,
       0,   203,   665,   465,     0,     0,     0,   203,   668,     0,
       0,     0,     0,   203,   674,     0,     0,     0,     0,   203,
     678,     0,     0,     0,     0,   203,   683,     0,     0,     0,
       0,   203,   686,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   291,     0,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446
};

static const yytype_int16 yycheck[] =
{
       0,     1,     0,     1,   338,     5,   569,   122,   123,   124,
     229,   138,     3,   126,     3,   130,   131,   132,   138,   139,
       3,     0,   137,   139,   139,   140,   141,   138,   139,   138,
     139,   146,   138,   139,   138,   139,   139,   101,   102,     3,
       4,     5,     6,     7,     8,   109,   138,   139,   163,   139,
     165,   166,   167,   168,   169,   170,   171,   172,   122,   123,
     124,   125,   126,   626,   138,   139,   138,   139,   183,     3,
       4,     5,     6,     7,     8,   138,   139,   138,   142,   138,
     139,   145,   146,     3,   148,   149,   138,   139,   152,   153,
       3,     4,     5,     6,     7,     8,   138,   139,   661,     3,
       3,     4,     5,     6,     7,     8,   138,   139,   139,   173,
       3,     4,     5,     6,     7,     8,   138,   139,   139,   234,
     235,   139,   186,   139,   188,   138,   139,   127,   139,   127,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,   139,   138,
     139,   138,   139,   139,   218,   138,   139,     3,     4,     5,
       6,     7,     8,   139,   279,   139,   281,   138,   139,   138,
     139,   139,   236,   286,   138,   139,   291,   138,   139,   294,
     399,   138,   139,   139,   403,   139,   301,   139,   303,   304,
     305,   138,   139,   527,   194,   310,   196,   138,   139,   314,
     138,   139,   139,   203,   138,   139,   138,   139,   138,   139,
       3,     4,     5,     6,     7,     8,   280,   139,   282,   138,
     139,   138,   139,   287,   139,   138,   139,   138,   139,   139,
     230,   231,   230,   231,   234,   138,   139,     3,     4,     5,
       6,     7,     8,   138,   139,   138,   139,   138,   139,   364,
     139,   315,     3,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,   139,   138,   139,   138,   139,   138,
     139,   138,   139,   138,   139,   138,   139,   138,   139,   138,
     139,   138,   139,   139,   284,   138,   139,   139,   288,   289,
     139,   289,   138,   139,   138,   139,   138,   139,   298,   139,
     298,   138,   139,   138,   139,     3,     4,     5,     6,     7,
       8,   138,   139,   138,   139,   139,     3,     4,     5,     6,
       7,     8,   138,   139,     3,     4,     5,     6,     7,     8,
     138,   139,   138,   139,   139,   450,   138,   139,   338,   454,
     338,   139,   457,   139,   408,   138,   139,   411,   412,   138,
     139,   139,   416,   138,   139,   470,   138,   139,   138,   139,
     139,   425,     3,     4,     5,     6,     7,     8,   139,   484,
     434,   139,   138,   139,   138,   139,   491,   138,   139,   139,
     444,   138,   139,   138,   139,   139,   501,   138,   139,   138,
     139,   138,   139,   138,   139,   139,   396,   139,   396,   299,
     300,   139,   139,   139,   404,   405,   139,   139,   139,   139,
     410,   139,   410,   139,   103,   104,   105,   106,   107,   108,
     139,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     3,     4,     5,     6,     7,     8,   552,   139,   128,
     138,   139,   139,   132,   133,   134,   135,   136,   137,   138,
     139,   138,   139,   139,   143,   144,   139,   139,   147,   138,
     139,   150,   151,   139,   464,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   139,   475,   476,     3,     4,     5,
       6,     7,     8,   139,   139,   174,   175,   176,   177,   178,
     179,   139,   181,   182,   183,   184,   185,   138,   187,   139,
     189,   190,   191,   192,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,   123,   206,   139,   139,
     128,   210,   211,   212,   139,   139,   136,   527,   139,   527,
     219,     3,     4,     5,     6,     7,     8,   226,   139,   139,
     229,   139,   139,   139,   139,   139,   235,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,   139,
     139,   139,   139,   563,   139,   139,   138,   139,   139,   139,
     139,   139,   139,   573,   139,   138,     3,     4,     5,     6,
       7,     8,   139,     3,     4,     5,     6,     7,     8,   139,
     279,   139,   281,   563,   283,   336,   296,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,
     299,    -1,   138,   302,   303,    -1,    -1,   306,    -1,    -1,
     309,    -1,    -1,    -1,   313,   314,    -1,    -1,    -1,   318,
     319,    -1,   321,   322,   323,   324,    -1,    -1,   327,   138,
     139,   330,    -1,    -1,    -1,   138,   139,     3,     4,     5,
       6,     7,     8,    -1,     3,     4,     5,     6,     7,     8,
     660,    -1,   660,   352,    -1,    -1,   138,   139,   357,    -1,
     359,    -1,    -1,   362,    -1,    -1,   365,    -1,    -1,   368,
      -1,   370,   138,   139,    -1,    -1,    -1,    -1,   138,   139,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,   388,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
     399,   138,   139,    -1,   403,    -1,    -1,   406,   138,   139,
      -1,    -1,    -1,    -1,    -1,   414,   415,    -1,   417,    -1,
      -1,    -1,   421,   422,   423,   424,    -1,    -1,   427,   428,
      -1,    -1,    -1,    -1,   433,    -1,    -1,   436,    -1,   438,
     439,   440,   441,   442,    -1,    -1,    -1,   446,    -1,    -1,
      -1,   450,    -1,    -1,    -1,   454,    -1,    -1,   457,    -1,
      -1,    -1,    -1,   462,    -1,    -1,   465,    -1,   105,   106,
      -1,    -1,   138,   110,   111,   112,   113,   114,   115,   138,
     139,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,   138,   501,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,   138,   139,   154,   155,   156,
      -1,   158,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,   178,   179,    -1,   181,    -1,   545,    -1,    -1,   548,
     187,    -1,   189,   190,   191,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     569,    -1,   571,    -1,    -1,   574,   575,    -1,    -1,    -1,
      -1,   580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   590,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     599,    -1,    -1,    -1,    -1,    -1,    -1,   606,    -1,    -1,
      -1,   610,    -1,     3,     4,    -1,   138,   139,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   321,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   422,    -1,   424,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,
       3,     4,   439,    -1,   441,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,     3,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,    -1,   126,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,     3,     4,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   138,   139,    -1,    -1,    -1,    -1,   138,
     139,    -1,    -1,    -1,    -1,   138,   139,     3,     4,     5,
       6,     7,     8,   138,   139,     3,     4,     5,     6,     7,
       8,    -1,    -1,   128,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,     3,     4,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,   138,   139,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,     3,     4,     5,     6,     7,     8,    -1,   138,
     139,     3,     4,     5,     6,     7,     8,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,     3,     4,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     3,     4,     5,     6,     7,     8,   138,   139,     3,
       4,     5,     6,     7,     8,    -1,   138,   139,    -1,    -1,
      -1,    -1,   138,   139,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
      -1,   138,   139,    -1,    -1,    -1,    -1,   138,   139,    -1,
      -1,    -1,    -1,   138,   139,    -1,    -1,    -1,    -1,   138,
     139,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
      -1,   138,   139,    26,    -1,    -1,    -1,   138,   139,    -1,
      -1,    -1,    -1,   138,   139,    -1,    -1,    -1,    -1,   138,
     139,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
      -1,   138,   139,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   138,   148,   149,   154,   155,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       3,     4,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    22,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   140,   141,   142,   143,
     144,   145,   146,   154,   155,     0,   155,     3,     4,     5,
       6,     7,     8,   138,   139,   150,   152,   154,   159,   139,
     152,   152,   150,   151,   150,   151,   151,   150,   150,   152,
     151,   151,   151,   151,   151,   151,   150,   162,   163,   150,
     150,   150,   139,   139,   138,   152,   156,   164,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   152,
     156,   152,   156,   152,   138,   139,   152,   287,   155,   150,
     139,   138,   156,   156,   150,   156,   150,   150,   151,   150,
     151,   150,   156,   150,   151,   150,   156,   156,   156,   152,
     151,   150,   139,   152,   152,   156,   150,   139,   152,   152,
     150,   151,   152,   152,   150,   151,   151,   150,   151,   150,
     150,   151,   150,   150,   150,   139,   150,   156,     3,   139,
     156,   156,   139,   156,   156,   139,   156,   139,   156,   156,
     139,   156,   152,   150,   150,   151,   150,   151,   151,     3,
     160,   151,   153,   150,   150,   156,   150,   150,   152,   151,
     152,   151,   151,   151,   151,   139,   139,   154,   139,   150,
     139,   139,   150,   139,   139,   139,   139,   139,   152,   139,
     139,   139,   139,   139,   139,   139,   138,   139,   150,   157,
     139,   139,   157,   158,   155,   155,    26,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   156,   139,   156,
     152,   156,   139,   156,   152,   139,   156,   152,   139,   139,
     287,   139,   152,   139,   155,    26,   139,   139,   139,   156,
     150,   138,   139,   284,   139,   155,   138,   139,   289,   138,
     139,   289,   139,   156,   150,   139,   156,   139,   156,   156,
     139,   150,   139,   139,   139,   139,   156,   139,   139,   139,
     156,   152,   139,   139,   139,   139,   151,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     138,   139,   297,   139,     3,   139,   149,   161,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   150,   139,   150,     3,   139,   139,   150,   139,
     139,   156,   150,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   155,   157,   139,   157,   139,   139,   150,
     139,   152,   139,   155,   152,   152,   139,   139,   150,   150,
     152,   150,   139,   139,   139,   150,   151,   150,   151,   139,
     152,   139,   150,   150,   139,   139,   139,   139,   150,   152,
     139,   151,   139,   150,   151,   150,   150,   151,   150,   139,
     152,   139,   150,   139,   139,   139,   156,   139,   139,   156,
     139,   139,   156,   139,   139,   139,   150,   139,   139,   156,
     139,   139,   139,   139,   139,   139,   156,   139,   139,   139,
     139,   156,   139,   139,   139,   156,   139,   139,   139,     3,
     139,   149,   139,   150,   150,   139,   139,   156,   139,   159,
     138,   164,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   138,   139,   139,   139,   139,   139,   139,   139,   164,
     139
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   147,   148,   149,   150,   150,   151,   152,   152,   153,
     153,   154,   154,   155,   155,   155,   156,   156,   156,   157,
     157,   157,   158,   158,   159,   159,   159,   159,   159,   159,
     160,   160,   161,   161,   162,   163,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   187,   187,   188,   189,   190,   191,   192,   193,
     193,   193,   193,   194,   194,   194,   194,   195,   195,   195,
     195,   196,   197,   197,   197,   197,   197,   198,   199,   200,
     201,   202,   203,   203,   203,   203,   204,   204,   205,   206,
     207,   207,   207,   207,   208,   208,   208,   208,   209,   209,
     209,   209,   210,   210,   210,   210,   211,   212,   213,   214,
     214,   215,   216,   216,   217,   217,   217,   217,   218,   219,
     219,   220,   221,   222,   223,   224,   225,   225,   226,   227,
     227,   228,   229,   229,   230,   231,   232,   233,   233,   233,
     234,   235,   235,   235,   235,   236,   236,   237,   237,   238,
     239,   239,   240,   241,   241,   242,   242,   243,   244,   244,
     245,   246,   247,   247,   248,   249,   250,   251,   251,   252,
     253,   254,   255,   256,   256,   256,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   293,   294,   295,   296,
     297,   298,   299
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     3,
       1,     1,     3,     2,     1,     3,     2,     1,     3,     3,
       4,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     1,     2,     3,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     5,     5,     3,     3,     5,
       5,     6,     4,     5,     5,     6,     4,     5,     5,     6,
       4,     4,     5,     5,     4,     4,     3,     4,     3,     5,
       4,     4,     5,     5,     6,     4,     4,     5,     4,     5,
       5,     4,     5,     4,     5,     5,     6,     4,     5,     4,
       5,     4,     5,     5,     6,     4,     4,     4,     4,     5,
       4,     4,     4,     3,     5,     5,     6,     4,     4,     4,
       3,     4,     4,     5,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     4,     5,
       4,     6,     5,     5,     4,     4,     3,     3,     4,     4,
       3,     4,     4,     3,     4,     3,     4,     4,     3,     4,
       4,     4,     4,     3,     4,     4,     4,     4,     5,     4,
       4,     4,     4,     4,     5,     5,     6,     4,     4,     3,
       4,     3,     4,     4,     4,     3,     4,     3,     4,     4,
       4,     3,     3,     3,     4,     4,     4,     4,     4,     3,
       3,     4,     4,     3,     3,     3,     3,     4,     4,     3,
       4,     3,     4,     4,     4,     4,     4,     4,     3,     4,
       3,     4,     6
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
  unsigned long yylno = yyrline[yyrule];
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
    default: /* Avoid compiler warnings. */
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
#line 81 "../src/parser.y" /* yacc.c:1258  */
      { free(((*yyvaluep).s)); }
#line 2063 "parser.c" /* yacc.c:1258  */
        break;

    case 4: /* STR  */
#line 81 "../src/parser.y" /* yacc.c:1258  */
      { free(((*yyvaluep).s)); }
#line 2069 "parser.c" /* yacc.c:1258  */
        break;

    case 148: /* start  */
#line 79 "../src/parser.y" /* yacc.c:1258  */
      { run(((*yyvaluep).e));  }
#line 2075 "parser.c" /* yacc.c:1258  */
        break;

    case 149: /* s  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2081 "parser.c" /* yacc.c:1258  */
        break;

    case 150: /* p  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2087 "parser.c" /* yacc.c:1258  */
        break;

    case 151: /* pp  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2093 "parser.c" /* yacc.c:1258  */
        break;

    case 152: /* ps  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2099 "parser.c" /* yacc.c:1258  */
        break;

    case 153: /* pps  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2105 "parser.c" /* yacc.c:1258  */
        break;

    case 154: /* vp  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2111 "parser.c" /* yacc.c:1258  */
        break;

    case 155: /* vps  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2117 "parser.c" /* yacc.c:1258  */
        break;

    case 156: /* opts  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2123 "parser.c" /* yacc.c:1258  */
        break;

    case 157: /* xpb  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2129 "parser.c" /* yacc.c:1258  */
        break;

    case 158: /* xpbs  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2135 "parser.c" /* yacc.c:1258  */
        break;

    case 159: /* np  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2141 "parser.c" /* yacc.c:1258  */
        break;

    case 160: /* sps  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2147 "parser.c" /* yacc.c:1258  */
        break;

    case 161: /* par  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2153 "parser.c" /* yacc.c:1258  */
        break;

    case 162: /* cv  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2159 "parser.c" /* yacc.c:1258  */
        break;

    case 163: /* cvv  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2165 "parser.c" /* yacc.c:1258  */
        break;

    case 164: /* opt  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2171 "parser.c" /* yacc.c:1258  */
        break;

    case 165: /* ivp  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2177 "parser.c" /* yacc.c:1258  */
        break;

    case 166: /* add  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2183 "parser.c" /* yacc.c:1258  */
        break;

    case 167: /* div  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2189 "parser.c" /* yacc.c:1258  */
        break;

    case 168: /* mul  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2195 "parser.c" /* yacc.c:1258  */
        break;

    case 169: /* sub  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2201 "parser.c" /* yacc.c:1258  */
        break;

    case 170: /* and  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2207 "parser.c" /* yacc.c:1258  */
        break;

    case 171: /* bitand  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2213 "parser.c" /* yacc.c:1258  */
        break;

    case 172: /* bitnot  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2219 "parser.c" /* yacc.c:1258  */
        break;

    case 173: /* bitor  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2225 "parser.c" /* yacc.c:1258  */
        break;

    case 174: /* bitxor  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2231 "parser.c" /* yacc.c:1258  */
        break;

    case 175: /* not  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2237 "parser.c" /* yacc.c:1258  */
        break;

    case 176: /* in  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2243 "parser.c" /* yacc.c:1258  */
        break;

    case 177: /* or  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2249 "parser.c" /* yacc.c:1258  */
        break;

    case 178: /* shiftleft  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2255 "parser.c" /* yacc.c:1258  */
        break;

    case 179: /* shiftright  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2261 "parser.c" /* yacc.c:1258  */
        break;

    case 180: /* xor  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2267 "parser.c" /* yacc.c:1258  */
        break;

    case 181: /* eq  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2273 "parser.c" /* yacc.c:1258  */
        break;

    case 182: /* gt  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2279 "parser.c" /* yacc.c:1258  */
        break;

    case 183: /* gte  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2285 "parser.c" /* yacc.c:1258  */
        break;

    case 184: /* lt  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2291 "parser.c" /* yacc.c:1258  */
        break;

    case 185: /* lte  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2297 "parser.c" /* yacc.c:1258  */
        break;

    case 186: /* neq  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2303 "parser.c" /* yacc.c:1258  */
        break;

    case 187: /* if  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2309 "parser.c" /* yacc.c:1258  */
        break;

    case 188: /* select  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2315 "parser.c" /* yacc.c:1258  */
        break;

    case 189: /* until  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2321 "parser.c" /* yacc.c:1258  */
        break;

    case 190: /* while  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2327 "parser.c" /* yacc.c:1258  */
        break;

    case 191: /* trace  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2333 "parser.c" /* yacc.c:1258  */
        break;

    case 192: /* retrace  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2339 "parser.c" /* yacc.c:1258  */
        break;

    case 193: /* execute  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2345 "parser.c" /* yacc.c:1258  */
        break;

    case 194: /* rexx  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2351 "parser.c" /* yacc.c:1258  */
        break;

    case 195: /* run  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2357 "parser.c" /* yacc.c:1258  */
        break;

    case 196: /* abort  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2363 "parser.c" /* yacc.c:1258  */
        break;

    case 197: /* exit  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2369 "parser.c" /* yacc.c:1258  */
        break;

    case 198: /* onerror  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2375 "parser.c" /* yacc.c:1258  */
        break;

    case 199: /* reboot  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2381 "parser.c" /* yacc.c:1258  */
        break;

    case 200: /* trap  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2387 "parser.c" /* yacc.c:1258  */
        break;

    case 201: /* copyfiles  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2393 "parser.c" /* yacc.c:1258  */
        break;

    case 202: /* copylib  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2399 "parser.c" /* yacc.c:1258  */
        break;

    case 203: /* delete  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2405 "parser.c" /* yacc.c:1258  */
        break;

    case 204: /* exists  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2411 "parser.c" /* yacc.c:1258  */
        break;

    case 205: /* fileonly  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2417 "parser.c" /* yacc.c:1258  */
        break;

    case 206: /* foreach  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2423 "parser.c" /* yacc.c:1258  */
        break;

    case 207: /* makeassign  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2429 "parser.c" /* yacc.c:1258  */
        break;

    case 208: /* makedir  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2435 "parser.c" /* yacc.c:1258  */
        break;

    case 209: /* protect  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2441 "parser.c" /* yacc.c:1258  */
        break;

    case 210: /* startup  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2447 "parser.c" /* yacc.c:1258  */
        break;

    case 211: /* textfile  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2453 "parser.c" /* yacc.c:1258  */
        break;

    case 212: /* tooltype  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2459 "parser.c" /* yacc.c:1258  */
        break;

    case 213: /* transcript  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2465 "parser.c" /* yacc.c:1258  */
        break;

    case 214: /* rename  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2471 "parser.c" /* yacc.c:1258  */
        break;

    case 215: /* complete  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2477 "parser.c" /* yacc.c:1258  */
        break;

    case 216: /* debug  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2483 "parser.c" /* yacc.c:1258  */
        break;

    case 217: /* message  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2489 "parser.c" /* yacc.c:1258  */
        break;

    case 218: /* user  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2495 "parser.c" /* yacc.c:1258  */
        break;

    case 219: /* welcome  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2501 "parser.c" /* yacc.c:1258  */
        break;

    case 220: /* working  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2507 "parser.c" /* yacc.c:1258  */
        break;

    case 221: /* closemedia  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2513 "parser.c" /* yacc.c:1258  */
        break;

    case 222: /* effect  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2519 "parser.c" /* yacc.c:1258  */
        break;

    case 223: /* setmedia  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2525 "parser.c" /* yacc.c:1258  */
        break;

    case 224: /* showmedia  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2531 "parser.c" /* yacc.c:1258  */
        break;

    case 225: /* database  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2537 "parser.c" /* yacc.c:1258  */
        break;

    case 226: /* earlier  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2543 "parser.c" /* yacc.c:1258  */
        break;

    case 227: /* getassign  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2549 "parser.c" /* yacc.c:1258  */
        break;

    case 228: /* getdevice  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2555 "parser.c" /* yacc.c:1258  */
        break;

    case 229: /* getdiskspace  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2561 "parser.c" /* yacc.c:1258  */
        break;

    case 230: /* getenv  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2567 "parser.c" /* yacc.c:1258  */
        break;

    case 231: /* getsize  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2573 "parser.c" /* yacc.c:1258  */
        break;

    case 232: /* getsum  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2579 "parser.c" /* yacc.c:1258  */
        break;

    case 233: /* getversion  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2585 "parser.c" /* yacc.c:1258  */
        break;

    case 234: /* iconinfo  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2591 "parser.c" /* yacc.c:1258  */
        break;

    case 235: /* dcl  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2597 "parser.c" /* yacc.c:1258  */
        break;

    case 236: /* cus  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2603 "parser.c" /* yacc.c:1258  */
        break;

    case 237: /* askbool  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2609 "parser.c" /* yacc.c:1258  */
        break;

    case 238: /* askchoice  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2615 "parser.c" /* yacc.c:1258  */
        break;

    case 239: /* askdir  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2621 "parser.c" /* yacc.c:1258  */
        break;

    case 240: /* askdisk  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2627 "parser.c" /* yacc.c:1258  */
        break;

    case 241: /* askfile  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2633 "parser.c" /* yacc.c:1258  */
        break;

    case 242: /* asknumber  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2639 "parser.c" /* yacc.c:1258  */
        break;

    case 243: /* askoptions  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2645 "parser.c" /* yacc.c:1258  */
        break;

    case 244: /* askstring  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2651 "parser.c" /* yacc.c:1258  */
        break;

    case 245: /* cat  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2657 "parser.c" /* yacc.c:1258  */
        break;

    case 246: /* expandpath  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2663 "parser.c" /* yacc.c:1258  */
        break;

    case 247: /* fmt  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2669 "parser.c" /* yacc.c:1258  */
        break;

    case 248: /* pathonly  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2675 "parser.c" /* yacc.c:1258  */
        break;

    case 249: /* patmatch  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2681 "parser.c" /* yacc.c:1258  */
        break;

    case 250: /* strlen  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2687 "parser.c" /* yacc.c:1258  */
        break;

    case 251: /* substr  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2693 "parser.c" /* yacc.c:1258  */
        break;

    case 252: /* tackon  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2699 "parser.c" /* yacc.c:1258  */
        break;

    case 253: /* set  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2705 "parser.c" /* yacc.c:1258  */
        break;

    case 254: /* symbolset  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2711 "parser.c" /* yacc.c:1258  */
        break;

    case 255: /* symbolval  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2717 "parser.c" /* yacc.c:1258  */
        break;

    case 256: /* openwbobject  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2723 "parser.c" /* yacc.c:1258  */
        break;

    case 257: /* showwbobject  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2729 "parser.c" /* yacc.c:1258  */
        break;

    case 258: /* closewbobject  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2735 "parser.c" /* yacc.c:1258  */
        break;

    case 259: /* all  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2741 "parser.c" /* yacc.c:1258  */
        break;

    case 260: /* append  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2747 "parser.c" /* yacc.c:1258  */
        break;

    case 261: /* assigns  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2753 "parser.c" /* yacc.c:1258  */
        break;

    case 262: /* back  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2759 "parser.c" /* yacc.c:1258  */
        break;

    case 263: /* choices  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2765 "parser.c" /* yacc.c:1258  */
        break;

    case 264: /* command  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2771 "parser.c" /* yacc.c:1258  */
        break;

    case 265: /* compression  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2777 "parser.c" /* yacc.c:1258  */
        break;

    case 266: /* confirm  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2783 "parser.c" /* yacc.c:1258  */
        break;

    case 267: /* default  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2789 "parser.c" /* yacc.c:1258  */
        break;

    case 268: /* delopts  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2795 "parser.c" /* yacc.c:1258  */
        break;

    case 269: /* dest  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2801 "parser.c" /* yacc.c:1258  */
        break;

    case 270: /* disk  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2807 "parser.c" /* yacc.c:1258  */
        break;

    case 271: /* files  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2813 "parser.c" /* yacc.c:1258  */
        break;

    case 272: /* fonts  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2819 "parser.c" /* yacc.c:1258  */
        break;

    case 273: /* getdefaulttool  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2825 "parser.c" /* yacc.c:1258  */
        break;

    case 274: /* getposition  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2831 "parser.c" /* yacc.c:1258  */
        break;

    case 275: /* getstack  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2837 "parser.c" /* yacc.c:1258  */
        break;

    case 276: /* gettooltype  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2843 "parser.c" /* yacc.c:1258  */
        break;

    case 277: /* help  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2849 "parser.c" /* yacc.c:1258  */
        break;

    case 278: /* infos  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2855 "parser.c" /* yacc.c:1258  */
        break;

    case 279: /* include  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2861 "parser.c" /* yacc.c:1258  */
        break;

    case 280: /* newname  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2867 "parser.c" /* yacc.c:1258  */
        break;

    case 281: /* newpath  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2873 "parser.c" /* yacc.c:1258  */
        break;

    case 282: /* nogauge  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2879 "parser.c" /* yacc.c:1258  */
        break;

    case 283: /* noposition  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2885 "parser.c" /* yacc.c:1258  */
        break;

    case 284: /* noreq  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2891 "parser.c" /* yacc.c:1258  */
        break;

    case 285: /* pattern  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2897 "parser.c" /* yacc.c:1258  */
        break;

    case 286: /* prompt  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2903 "parser.c" /* yacc.c:1258  */
        break;

    case 287: /* quiet  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2909 "parser.c" /* yacc.c:1258  */
        break;

    case 288: /* range  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2915 "parser.c" /* yacc.c:1258  */
        break;

    case 289: /* safe  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2921 "parser.c" /* yacc.c:1258  */
        break;

    case 290: /* setdefaulttool  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2927 "parser.c" /* yacc.c:1258  */
        break;

    case 291: /* setposition  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2933 "parser.c" /* yacc.c:1258  */
        break;

    case 292: /* setstack  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2939 "parser.c" /* yacc.c:1258  */
        break;

    case 293: /* settooltype  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2945 "parser.c" /* yacc.c:1258  */
        break;

    case 294: /* source  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2951 "parser.c" /* yacc.c:1258  */
        break;

    case 295: /* swapcolors  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2957 "parser.c" /* yacc.c:1258  */
        break;

    case 296: /* optional  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2963 "parser.c" /* yacc.c:1258  */
        break;

    case 297: /* resident  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2969 "parser.c" /* yacc.c:1258  */
        break;

    case 298: /* override  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2975 "parser.c" /* yacc.c:1258  */
        break;

    case 299: /* dynopt  */
#line 84 "../src/parser.y" /* yacc.c:1258  */
      { kill(((*yyvaluep).e)); }
#line 2981 "parser.c" /* yacc.c:1258  */
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
                  (unsigned long) yystacksize));

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
#line 101 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = init((yyvsp[0].e)); }
#line 3249 "parser.c" /* yacc.c:1651  */
    break;

  case 6:
#line 107 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3255 "parser.c" /* yacc.c:1651  */
    break;

  case 7:
#line 108 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3261 "parser.c" /* yacc.c:1651  */
    break;

  case 8:
#line 109 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3267 "parser.c" /* yacc.c:1651  */
    break;

  case 9:
#line 110 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(push((yyvsp[-2].e), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3273 "parser.c" /* yacc.c:1651  */
    break;

  case 12:
#line 113 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = (yyvsp[-1].e); }
#line 3279 "parser.c" /* yacc.c:1651  */
    break;

  case 13:
#line 114 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3285 "parser.c" /* yacc.c:1651  */
    break;

  case 14:
#line 115 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3291 "parser.c" /* yacc.c:1651  */
    break;

  case 15:
#line 116 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = (yyvsp[-1].e); }
#line 3297 "parser.c" /* yacc.c:1651  */
    break;

  case 16:
#line 117 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3303 "parser.c" /* yacc.c:1651  */
    break;

  case 17:
#line 118 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3309 "parser.c" /* yacc.c:1651  */
    break;

  case 18:
#line 119 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = (yyvsp[-1].e); }
#line 3315 "parser.c" /* yacc.c:1651  */
    break;

  case 19:
#line 120 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = (yyvsp[-1].e); }
#line 3321 "parser.c" /* yacc.c:1651  */
    break;

  case 20:
#line 121 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push((yyvsp[-2].e), (yyvsp[-1].e)); }
#line 3327 "parser.c" /* yacc.c:1651  */
    break;

  case 21:
#line 122 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3333 "parser.c" /* yacc.c:1651  */
    break;

  case 22:
#line 123 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3339 "parser.c" /* yacc.c:1651  */
    break;

  case 23:
#line 124 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3345 "parser.c" /* yacc.c:1651  */
    break;

  case 24:
#line 125 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3351 "parser.c" /* yacc.c:1651  */
    break;

  case 25:
#line 126 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3357 "parser.c" /* yacc.c:1651  */
    break;

  case 26:
#line 127 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3363 "parser.c" /* yacc.c:1651  */
    break;

  case 27:
#line 128 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_string((yyvsp[0].s)); }
#line 3369 "parser.c" /* yacc.c:1651  */
    break;

  case 28:
#line 129 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_symref((yyvsp[0].s), LINE); }
#line 3375 "parser.c" /* yacc.c:1651  */
    break;

  case 29:
#line 130 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = NULL; YYFPRINTF(stderr, "Out of memory in line %d\n", LINE); YYABORT; }
#line 3381 "parser.c" /* yacc.c:1651  */
    break;

  case 30:
#line 131 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(push((yyvsp[-2].e), new_symbol((yyvsp[-1].s))), (yyvsp[0].e)) ; }
#line 3387 "parser.c" /* yacc.c:1651  */
    break;

  case 31:
#line 132 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(push(new_contxt(), new_symbol((yyvsp[-1].s))), (yyvsp[0].e)); }
#line 3393 "parser.c" /* yacc.c:1651  */
    break;

  case 32:
#line 133 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push((yyvsp[-1].e), new_symbol((yyvsp[0].s))); }
#line 3399 "parser.c" /* yacc.c:1651  */
    break;

  case 33:
#line 134 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(new_contxt(), new_symbol((yyvsp[0].s))); }
#line 3405 "parser.c" /* yacc.c:1651  */
    break;

  case 34:
#line 135 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3411 "parser.c" /* yacc.c:1651  */
    break;

  case 35:
#line 136 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = push(push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3417 "parser.c" /* yacc.c:1651  */
    break;

  case 170:
#line 277 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("+"), LINE, m_add, (yyvsp[-1].e), NUMBER); }
#line 3423 "parser.c" /* yacc.c:1651  */
    break;

  case 171:
#line 278 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("/"), LINE, m_div, (yyvsp[-1].e), NUMBER); }
#line 3429 "parser.c" /* yacc.c:1651  */
    break;

  case 172:
#line 279 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("*"), LINE, m_mul, (yyvsp[-1].e), NUMBER); }
#line 3435 "parser.c" /* yacc.c:1651  */
    break;

  case 173:
#line 280 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("-"), LINE, m_sub, (yyvsp[-1].e), NUMBER); }
#line 3441 "parser.c" /* yacc.c:1651  */
    break;

  case 174:
#line 283 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("AND"), LINE, m_and, (yyvsp[-1].e), NUMBER); }
#line 3447 "parser.c" /* yacc.c:1651  */
    break;

  case 175:
#line 284 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("BITAND"), LINE, m_bitand, (yyvsp[-1].e), NUMBER); }
#line 3453 "parser.c" /* yacc.c:1651  */
    break;

  case 176:
#line 285 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("BITNOT"), LINE, m_bitnot, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3459 "parser.c" /* yacc.c:1651  */
    break;

  case 177:
#line 286 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("BITOR"), LINE, m_bitor, (yyvsp[-1].e), NUMBER); }
#line 3465 "parser.c" /* yacc.c:1651  */
    break;

  case 178:
#line 287 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("BITXOR"), LINE, m_bitxor, (yyvsp[-1].e), NUMBER); }
#line 3471 "parser.c" /* yacc.c:1651  */
    break;

  case 179:
#line 288 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("NOT"), LINE, m_not, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3477 "parser.c" /* yacc.c:1651  */
    break;

  case 180:
#line 289 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("IN"), LINE, m_in, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3483 "parser.c" /* yacc.c:1651  */
    break;

  case 181:
#line 290 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("OR"), LINE, m_or, (yyvsp[-1].e), NUMBER); }
#line 3489 "parser.c" /* yacc.c:1651  */
    break;

  case 182:
#line 291 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("shiftleft"), LINE, m_shiftleft, (yyvsp[-1].e), NUMBER); }
#line 3495 "parser.c" /* yacc.c:1651  */
    break;

  case 183:
#line 292 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("shiftright"), LINE, m_shiftright, (yyvsp[-1].e), NUMBER); }
#line 3501 "parser.c" /* yacc.c:1651  */
    break;

  case 184:
#line 293 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("XOR"), LINE, m_xor, (yyvsp[-1].e), NUMBER); }
#line 3507 "parser.c" /* yacc.c:1651  */
    break;

  case 185:
#line 296 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("="), LINE, m_eq, (yyvsp[-1].e), NUMBER); }
#line 3513 "parser.c" /* yacc.c:1651  */
    break;

  case 186:
#line 297 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup(">"), LINE, m_gt, (yyvsp[-1].e), NUMBER); }
#line 3519 "parser.c" /* yacc.c:1651  */
    break;

  case 187:
#line 298 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup(">="), LINE, m_gte, (yyvsp[-1].e), NUMBER); }
#line 3525 "parser.c" /* yacc.c:1651  */
    break;

  case 188:
#line 299 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("<"), LINE, m_lt, (yyvsp[-1].e), NUMBER); }
#line 3531 "parser.c" /* yacc.c:1651  */
    break;

  case 189:
#line 300 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("<="), LINE, m_lte, (yyvsp[-1].e), NUMBER); }
#line 3537 "parser.c" /* yacc.c:1651  */
    break;

  case 190:
#line 301 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("<>"), LINE, m_neq, (yyvsp[-1].e), NUMBER); }
#line 3543 "parser.c" /* yacc.c:1651  */
    break;

  case 191:
#line 304 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("if"), LINE, m_if, (yyvsp[-1].e), NUMBER); }
#line 3549 "parser.c" /* yacc.c:1651  */
    break;

  case 192:
#line 305 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("if"), LINE, m_if, (yyvsp[-1].e), NUMBER); }
#line 3555 "parser.c" /* yacc.c:1651  */
    break;

  case 193:
#line 306 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("if"), LINE, m_if, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3561 "parser.c" /* yacc.c:1651  */
    break;

  case 194:
#line 307 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("select"), LINE, m_select, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3567 "parser.c" /* yacc.c:1651  */
    break;

  case 195:
#line 308 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("until"), LINE, m_until, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3573 "parser.c" /* yacc.c:1651  */
    break;

  case 196:
#line 309 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("while"), LINE, m_while, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3579 "parser.c" /* yacc.c:1651  */
    break;

  case 197:
#line 310 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("trace"), LINE, m_trace, NULL, NUMBER); }
#line 3585 "parser.c" /* yacc.c:1651  */
    break;

  case 198:
#line 311 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("retrace"), LINE, m_retrace, NULL, DANGLE); }
#line 3591 "parser.c" /* yacc.c:1651  */
    break;

  case 199:
#line 314 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("execute"), LINE, m_execute, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3597 "parser.c" /* yacc.c:1651  */
    break;

  case 200:
#line 315 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("execute"), LINE, m_execute, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3603 "parser.c" /* yacc.c:1651  */
    break;

  case 201:
#line 316 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("execute"), LINE, m_execute, push((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3609 "parser.c" /* yacc.c:1651  */
    break;

  case 202:
#line 317 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("execute"), LINE, m_execute, (yyvsp[-1].e), NUMBER); }
#line 3615 "parser.c" /* yacc.c:1651  */
    break;

  case 203:
#line 318 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("rexx"), LINE, m_rexx, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3621 "parser.c" /* yacc.c:1651  */
    break;

  case 204:
#line 319 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("rexx"), LINE, m_rexx, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3627 "parser.c" /* yacc.c:1651  */
    break;

  case 205:
#line 320 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("rexx"), LINE, m_rexx, push((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3633 "parser.c" /* yacc.c:1651  */
    break;

  case 206:
#line 321 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("rexx"), LINE, m_rexx, (yyvsp[-1].e), NUMBER); }
#line 3639 "parser.c" /* yacc.c:1651  */
    break;

  case 207:
#line 322 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("run"), LINE, m_run, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3645 "parser.c" /* yacc.c:1651  */
    break;

  case 208:
#line 323 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("run"), LINE, m_run, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3651 "parser.c" /* yacc.c:1651  */
    break;

  case 209:
#line 324 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("run"), LINE, m_run, push((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3657 "parser.c" /* yacc.c:1651  */
    break;

  case 210:
#line 325 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("run"), LINE, m_run, (yyvsp[-1].e), NUMBER); }
#line 3663 "parser.c" /* yacc.c:1651  */
    break;

  case 211:
#line 328 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("abort"), LINE, m_abort, (yyvsp[-1].e), NUMBER); }
#line 3669 "parser.c" /* yacc.c:1651  */
    break;

  case 212:
#line 329 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3675 "parser.c" /* yacc.c:1651  */
    break;

  case 213:
#line 330 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3681 "parser.c" /* yacc.c:1651  */
    break;

  case 214:
#line 331 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3687 "parser.c" /* yacc.c:1651  */
    break;

  case 215:
#line 332 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, (yyvsp[-1].e), NUMBER); }
#line 3693 "parser.c" /* yacc.c:1651  */
    break;

  case 216:
#line 333 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exit"), LINE, m_exit, NULL, NUMBER); }
#line 3699 "parser.c" /* yacc.c:1651  */
    break;

  case 217:
#line 334 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("onerror"), LINE, m_procedure, push(new_contxt(),
                                                        new_custom(strdup("@onerror"), LINE, NULL, (yyvsp[-1].e))), DANGLE); }
#line 3706 "parser.c" /* yacc.c:1651  */
    break;

  case 218:
#line 336 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("reboot"), LINE, m_reboot, NULL, NUMBER); }
#line 3712 "parser.c" /* yacc.c:1651  */
    break;

  case 219:
#line 337 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("trap"), LINE, m_trap, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3718 "parser.c" /* yacc.c:1651  */
    break;

  case 220:
#line 340 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("copyfiles"), LINE, m_copyfiles, (yyvsp[-1].e), NUMBER); }
#line 3724 "parser.c" /* yacc.c:1651  */
    break;

  case 221:
#line 341 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("copylib"), LINE, m_copylib, (yyvsp[-1].e), NUMBER); }
#line 3730 "parser.c" /* yacc.c:1651  */
    break;

  case 222:
#line 342 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("delete"), LINE, m_delete, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3736 "parser.c" /* yacc.c:1651  */
    break;

  case 223:
#line 343 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("delete"), LINE, m_delete, push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3742 "parser.c" /* yacc.c:1651  */
    break;

  case 224:
#line 344 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("delete"), LINE, m_delete, push(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3748 "parser.c" /* yacc.c:1651  */
    break;

  case 225:
#line 345 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("delete"), LINE, m_delete, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3754 "parser.c" /* yacc.c:1651  */
    break;

  case 226:
#line 346 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exists"), LINE, m_exists, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3760 "parser.c" /* yacc.c:1651  */
    break;

  case 227:
#line 347 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("exists"), LINE, m_exists, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3766 "parser.c" /* yacc.c:1651  */
    break;

  case 228:
#line 348 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("fileonly"), LINE, m_fileonly, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3772 "parser.c" /* yacc.c:1651  */
    break;

  case 229:
#line 349 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("foreach"), LINE, m_foreach, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3778 "parser.c" /* yacc.c:1651  */
    break;

  case 230:
#line 350 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3784 "parser.c" /* yacc.c:1651  */
    break;

  case 231:
#line 351 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, (yyvsp[-1].e), NUMBER); }
#line 3790 "parser.c" /* yacc.c:1651  */
    break;

  case 232:
#line 352 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3796 "parser.c" /* yacc.c:1651  */
    break;

  case 233:
#line 353 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makeassign"), LINE, m_makeassign, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3802 "parser.c" /* yacc.c:1651  */
    break;

  case 234:
#line 354 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makedir"), LINE, m_makedir, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3808 "parser.c" /* yacc.c:1651  */
    break;

  case 235:
#line 355 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makedir"), LINE, m_makedir, push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3814 "parser.c" /* yacc.c:1651  */
    break;

  case 236:
#line 356 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makedir"), LINE, m_makedir, push(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3820 "parser.c" /* yacc.c:1651  */
    break;

  case 237:
#line 357 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("makedir"), LINE, m_makedir, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3826 "parser.c" /* yacc.c:1651  */
    break;

  case 238:
#line 358 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3832 "parser.c" /* yacc.c:1651  */
    break;

  case 239:
#line 359 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, (yyvsp[-1].e), NUMBER); }
#line 3838 "parser.c" /* yacc.c:1651  */
    break;

  case 240:
#line 360 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3844 "parser.c" /* yacc.c:1651  */
    break;

  case 241:
#line 361 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("protect"), LINE, m_protect, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3850 "parser.c" /* yacc.c:1651  */
    break;

  case 242:
#line 362 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("startup"), LINE, m_startup, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3856 "parser.c" /* yacc.c:1651  */
    break;

  case 243:
#line 363 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("startup"), LINE, m_startup, push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3862 "parser.c" /* yacc.c:1651  */
    break;

  case 244:
#line 364 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("startup"), LINE, m_startup, push(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3868 "parser.c" /* yacc.c:1651  */
    break;

  case 245:
#line 365 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("startup"), LINE, m_startup, push(push(new_contxt(), new_symref(strdup("@app-name"), LINE)), (yyvsp[-1].e)), NUMBER); }
#line 3874 "parser.c" /* yacc.c:1651  */
    break;

  case 246:
#line 366 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("textfile"), LINE, m_textfile, (yyvsp[-1].e), NUMBER); }
#line 3880 "parser.c" /* yacc.c:1651  */
    break;

  case 247:
#line 367 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("tooltype"), LINE, m_tooltype, (yyvsp[-1].e), NUMBER); }
#line 3886 "parser.c" /* yacc.c:1651  */
    break;

  case 248:
#line 368 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("transcript"), LINE, m_transcript, (yyvsp[-1].e), NUMBER); }
#line 3892 "parser.c" /* yacc.c:1651  */
    break;

  case 249:
#line 369 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("rename"), LINE, m_rename, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3898 "parser.c" /* yacc.c:1651  */
    break;

  case 250:
#line 370 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("rename"), LINE, m_rename, (yyvsp[-1].e), NUMBER); }
#line 3904 "parser.c" /* yacc.c:1651  */
    break;

  case 251:
#line 373 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("complete"), LINE, m_complete, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3910 "parser.c" /* yacc.c:1651  */
    break;

  case 252:
#line 374 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("debug"), LINE, m_debug, (yyvsp[-1].e), NUMBER); }
#line 3916 "parser.c" /* yacc.c:1651  */
    break;

  case 253:
#line 375 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("debug"), LINE, m_debug, NULL, NUMBER); }
#line 3922 "parser.c" /* yacc.c:1651  */
    break;

  case 254:
#line 376 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("message"), LINE, m_message, merge((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3928 "parser.c" /* yacc.c:1651  */
    break;

  case 255:
#line 377 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("message"), LINE, m_message, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3934 "parser.c" /* yacc.c:1651  */
    break;

  case 256:
#line 378 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("message"), LINE, m_message, push(merge((yyvsp[-3].e), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3940 "parser.c" /* yacc.c:1651  */
    break;

  case 257:
#line 379 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("message"), LINE, m_message, (yyvsp[-1].e), NUMBER); }
#line 3946 "parser.c" /* yacc.c:1651  */
    break;

  case 258:
#line 380 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("user"), LINE, m_user, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3952 "parser.c" /* yacc.c:1651  */
    break;

  case 259:
#line 381 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("welcome"), LINE, m_welcome, (yyvsp[-1].e), NUMBER); }
#line 3958 "parser.c" /* yacc.c:1651  */
    break;

  case 260:
#line 382 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("welcome"), LINE, m_welcome, NULL, NUMBER); }
#line 3964 "parser.c" /* yacc.c:1651  */
    break;

  case 261:
#line 383 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("working"), LINE, m_working, (yyvsp[-1].e), NUMBER); }
#line 3970 "parser.c" /* yacc.c:1651  */
    break;

  case 262:
#line 386 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("closemedia"), LINE, m_closemedia, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3976 "parser.c" /* yacc.c:1651  */
    break;

  case 263:
#line 387 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("effect"), LINE, m_effect, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3982 "parser.c" /* yacc.c:1651  */
    break;

  case 264:
#line 388 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("setmedia"), LINE, m_setmedia, (yyvsp[-1].e), NUMBER); }
#line 3988 "parser.c" /* yacc.c:1651  */
    break;

  case 265:
#line 389 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("showmedia"), LINE, m_showmedia, (yyvsp[-1].e), NUMBER); }
#line 3994 "parser.c" /* yacc.c:1651  */
    break;

  case 266:
#line 392 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("database"), LINE, m_database, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4000 "parser.c" /* yacc.c:1651  */
    break;

  case 267:
#line 393 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("database"), LINE, m_database, (yyvsp[-1].e), STRING); }
#line 4006 "parser.c" /* yacc.c:1651  */
    break;

  case 268:
#line 394 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("earlier"), LINE, m_earlier, (yyvsp[-1].e), NUMBER); }
#line 4012 "parser.c" /* yacc.c:1651  */
    break;

  case 269:
#line 395 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getassign"), LINE, m_getassign, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4018 "parser.c" /* yacc.c:1651  */
    break;

  case 270:
#line 396 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getassign"), LINE, m_getassign, (yyvsp[-1].e), STRING); }
#line 4024 "parser.c" /* yacc.c:1651  */
    break;

  case 271:
#line 397 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getdevice"), LINE, m_getdevice, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4030 "parser.c" /* yacc.c:1651  */
    break;

  case 272:
#line 398 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getdiskspace"), LINE, m_getdiskspace, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4036 "parser.c" /* yacc.c:1651  */
    break;

  case 273:
#line 399 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getdiskspace"), LINE, m_getdiskspace, (yyvsp[-1].e), NUMBER); }
#line 4042 "parser.c" /* yacc.c:1651  */
    break;

  case 274:
#line 400 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getenv"), LINE, m_getenv, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4048 "parser.c" /* yacc.c:1651  */
    break;

  case 275:
#line 401 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getsize"), LINE, m_getsize, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4054 "parser.c" /* yacc.c:1651  */
    break;

  case 276:
#line 402 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getsum"), LINE, m_getsum, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4060 "parser.c" /* yacc.c:1651  */
    break;

  case 277:
#line 403 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getversion"), LINE, m_getversion, NULL, NUMBER); }
#line 4066 "parser.c" /* yacc.c:1651  */
    break;

  case 278:
#line 404 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getversion"), LINE, m_getversion, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4072 "parser.c" /* yacc.c:1651  */
    break;

  case 279:
#line 405 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("getversion"), LINE, m_getversion, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 4078 "parser.c" /* yacc.c:1651  */
    break;

  case 280:
#line 406 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("iconinfo"), LINE, m_iconinfo, (yyvsp[-1].e), NUMBER); }
#line 4084 "parser.c" /* yacc.c:1651  */
    break;

  case 281:
#line 409 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("procedure"), LINE, m_procedure, push(new_contxt(), new_custom((yyvsp[-3].s), LINE, (yyvsp[-2].e), (yyvsp[-1].e))), NUMBER); }
#line 4090 "parser.c" /* yacc.c:1651  */
    break;

  case 282:
#line 410 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("procedure"), LINE, m_procedure, push(new_contxt(), new_custom((yyvsp[-2].s), LINE, (yyvsp[-1].e), NULL)), NUMBER); }
#line 4096 "parser.c" /* yacc.c:1651  */
    break;

  case 283:
#line 411 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("procedure"), LINE, m_procedure, push(new_contxt(), new_custom((yyvsp[-2].s), LINE, NULL, (yyvsp[-1].e))), NUMBER); }
#line 4102 "parser.c" /* yacc.c:1651  */
    break;

  case 284:
#line 412 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("procedure"), LINE, m_procedure, push(new_contxt(), new_custom((yyvsp[-1].s), LINE, NULL, NULL)), NUMBER); }
#line 4108 "parser.c" /* yacc.c:1651  */
    break;

  case 285:
#line 413 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_cusref((yyvsp[-2].s), LINE, (yyvsp[-1].e)); }
#line 4114 "parser.c" /* yacc.c:1651  */
    break;

  case 286:
#line 414 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_cusref((yyvsp[-1].s), LINE, NULL); }
#line 4120 "parser.c" /* yacc.c:1651  */
    break;

  case 287:
#line 417 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askbool"), LINE, m_askbool, NULL, NUMBER); }
#line 4126 "parser.c" /* yacc.c:1651  */
    break;

  case 288:
#line 418 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askbool"), LINE, m_askbool, (yyvsp[-1].e), NUMBER); }
#line 4132 "parser.c" /* yacc.c:1651  */
    break;

  case 289:
#line 419 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askchoice"), LINE, m_askchoice, (yyvsp[-1].e), NUMBER); }
#line 4138 "parser.c" /* yacc.c:1651  */
    break;

  case 290:
#line 420 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askdir"), LINE, m_askdir, NULL, STRING); }
#line 4144 "parser.c" /* yacc.c:1651  */
    break;

  case 291:
#line 421 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askdir"), LINE, m_askdir, (yyvsp[-1].e), STRING); }
#line 4150 "parser.c" /* yacc.c:1651  */
    break;

  case 292:
#line 422 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askdisk"), LINE, m_askdisk, (yyvsp[-1].e), NUMBER); }
#line 4156 "parser.c" /* yacc.c:1651  */
    break;

  case 293:
#line 423 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askfile"), LINE, m_askfile, NULL, STRING); }
#line 4162 "parser.c" /* yacc.c:1651  */
    break;

  case 294:
#line 424 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askfile"), LINE, m_askfile, (yyvsp[-1].e), STRING); }
#line 4168 "parser.c" /* yacc.c:1651  */
    break;

  case 295:
#line 425 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("asknumber"), LINE, m_asknumber, NULL, NUMBER); }
#line 4174 "parser.c" /* yacc.c:1651  */
    break;

  case 296:
#line 426 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("asknumber"), LINE, m_asknumber, (yyvsp[-1].e), NUMBER); }
#line 4180 "parser.c" /* yacc.c:1651  */
    break;

  case 297:
#line 427 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askoptions"), LINE, m_askoptions, (yyvsp[-1].e), NUMBER); }
#line 4186 "parser.c" /* yacc.c:1651  */
    break;

  case 298:
#line 428 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askstring"), LINE, m_askstring, NULL, STRING); }
#line 4192 "parser.c" /* yacc.c:1651  */
    break;

  case 299:
#line 429 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("askstring"), LINE, m_askstring, (yyvsp[-1].e), STRING); }
#line 4198 "parser.c" /* yacc.c:1651  */
    break;

  case 300:
#line 432 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("cat"), LINE, m_cat, (yyvsp[-1].e), STRING); }
#line 4204 "parser.c" /* yacc.c:1651  */
    break;

  case 301:
#line 433 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("expandpath"), LINE, m_expandpath, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4210 "parser.c" /* yacc.c:1651  */
    break;

  case 302:
#line 434 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native((yyvsp[-2].s), LINE, m_fmt, (yyvsp[-1].e), STRING); }
#line 4216 "parser.c" /* yacc.c:1651  */
    break;

  case 303:
#line 435 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native((yyvsp[-1].s), LINE, m_fmt, NULL, STRING); }
#line 4222 "parser.c" /* yacc.c:1651  */
    break;

  case 304:
#line 436 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("pathonly"), LINE, m_pathonly, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4228 "parser.c" /* yacc.c:1651  */
    break;

  case 305:
#line 437 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("patmatch"), LINE, m_patmatch, (yyvsp[-1].e), NUMBER); }
#line 4234 "parser.c" /* yacc.c:1651  */
    break;

  case 306:
#line 438 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("strlen"), LINE, m_strlen, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4240 "parser.c" /* yacc.c:1651  */
    break;

  case 307:
#line 439 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("substr"), LINE, m_substr, (yyvsp[-1].e), STRING); }
#line 4246 "parser.c" /* yacc.c:1651  */
    break;

  case 308:
#line 440 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("substr"), LINE, m_substr, push((yyvsp[-2].e), (yyvsp[-1].e)), STRING); }
#line 4252 "parser.c" /* yacc.c:1651  */
    break;

  case 309:
#line 441 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("tackon"), LINE, m_tackon, (yyvsp[-1].e), STRING); }
#line 4258 "parser.c" /* yacc.c:1651  */
    break;

  case 310:
#line 444 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("set"), LINE, m_set, (yyvsp[-1].e), DANGLE); }
#line 4264 "parser.c" /* yacc.c:1651  */
    break;

  case 311:
#line 445 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("symbolset"), LINE, m_symbolset, (yyvsp[-1].e), DANGLE); }
#line 4270 "parser.c" /* yacc.c:1651  */
    break;

  case 312:
#line 446 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("symbolval"), LINE, m_symbolval, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4276 "parser.c" /* yacc.c:1651  */
    break;

  case 313:
#line 449 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("openwbobject"), LINE, m_openwbobject, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4282 "parser.c" /* yacc.c:1651  */
    break;

  case 314:
#line 450 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("openwbobject"), LINE, m_openwbobject, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 4288 "parser.c" /* yacc.c:1651  */
    break;

  case 315:
#line 451 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("openwbobject"), LINE, m_openwbobject, push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 4294 "parser.c" /* yacc.c:1651  */
    break;

  case 316:
#line 452 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("openwbobject"), LINE, m_openwbobject, push(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 4300 "parser.c" /* yacc.c:1651  */
    break;

  case 317:
#line 453 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("showwbobject"), LINE, m_showwbobject, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4306 "parser.c" /* yacc.c:1651  */
    break;

  case 318:
#line 454 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_native(strdup("closewbobject"), LINE, m_closewbobject, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4312 "parser.c" /* yacc.c:1651  */
    break;

  case 319:
#line 457 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("all"), OPT_ALL, NULL); }
#line 4318 "parser.c" /* yacc.c:1651  */
    break;

  case 320:
#line 458 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("append"), OPT_APPEND, (yyvsp[-1].e)); }
#line 4324 "parser.c" /* yacc.c:1651  */
    break;

  case 321:
#line 459 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("assigns"), OPT_ASSIGNS, NULL); }
#line 4330 "parser.c" /* yacc.c:1651  */
    break;

  case 322:
#line 460 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("back"), OPT_BACK, (yyvsp[-1].e)); }
#line 4336 "parser.c" /* yacc.c:1651  */
    break;

  case 323:
#line 461 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("choices"), OPT_CHOICES, (yyvsp[-1].e)); }
#line 4342 "parser.c" /* yacc.c:1651  */
    break;

  case 324:
#line 462 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("command"), OPT_COMMAND, (yyvsp[-1].e)); }
#line 4348 "parser.c" /* yacc.c:1651  */
    break;

  case 325:
#line 463 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("compression"), OPT_COMPRESSION, NULL); }
#line 4354 "parser.c" /* yacc.c:1651  */
    break;

  case 326:
#line 464 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("confirm"), OPT_CONFIRM, push(new_contxt(), (yyvsp[-1].e))); }
#line 4360 "parser.c" /* yacc.c:1651  */
    break;

  case 327:
#line 465 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("confirm"), OPT_CONFIRM, NULL); }
#line 4366 "parser.c" /* yacc.c:1651  */
    break;

  case 328:
#line 466 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("default"), OPT_DEFAULT, push(new_contxt(), (yyvsp[-1].e))); }
#line 4372 "parser.c" /* yacc.c:1651  */
    break;

  case 329:
#line 467 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("delopts"), OPT_DELOPTS, (yyvsp[-1].e)); }
#line 4378 "parser.c" /* yacc.c:1651  */
    break;

  case 330:
#line 468 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("dest"), OPT_DEST, push(new_contxt(), (yyvsp[-1].e))); }
#line 4384 "parser.c" /* yacc.c:1651  */
    break;

  case 331:
#line 469 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("disk"), OPT_DISK, NULL); }
#line 4390 "parser.c" /* yacc.c:1651  */
    break;

  case 332:
#line 470 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("files"), OPT_FILES, NULL); }
#line 4396 "parser.c" /* yacc.c:1651  */
    break;

  case 333:
#line 471 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("fonts"), OPT_FONTS, NULL); }
#line 4402 "parser.c" /* yacc.c:1651  */
    break;

  case 334:
#line 472 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("getdefaulttool"), OPT_GETDEFAULTTOOL, push(new_contxt(), (yyvsp[-1].e))); }
#line 4408 "parser.c" /* yacc.c:1651  */
    break;

  case 335:
#line 473 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("getposition"), OPT_GETPOSITION, (yyvsp[-1].e)); }
#line 4414 "parser.c" /* yacc.c:1651  */
    break;

  case 336:
#line 474 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("getstack"), OPT_GETSTACK, push(new_contxt(), (yyvsp[-1].e))); }
#line 4420 "parser.c" /* yacc.c:1651  */
    break;

  case 337:
#line 475 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("gettooltype"), OPT_GETTOOLTYPE, (yyvsp[-1].e)); }
#line 4426 "parser.c" /* yacc.c:1651  */
    break;

  case 338:
#line 476 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("help"), OPT_HELP, (yyvsp[-1].e)); }
#line 4432 "parser.c" /* yacc.c:1651  */
    break;

  case 339:
#line 477 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("help"), OPT_HELP, push(new_contxt(), new_symref(strdup("@null"), LINE))); }
#line 4438 "parser.c" /* yacc.c:1651  */
    break;

  case 340:
#line 478 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("infos"), OPT_INFOS, NULL); }
#line 4444 "parser.c" /* yacc.c:1651  */
    break;

  case 341:
#line 479 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("include"), OPT_INCLUDE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4450 "parser.c" /* yacc.c:1651  */
    break;

  case 342:
#line 480 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("newname"), OPT_NEWNAME, push(new_contxt(), (yyvsp[-1].e))); }
#line 4456 "parser.c" /* yacc.c:1651  */
    break;

  case 343:
#line 481 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("newpath"), OPT_NEWPATH, NULL); }
#line 4462 "parser.c" /* yacc.c:1651  */
    break;

  case 344:
#line 482 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("nogauge"), OPT_NOGAUGE, NULL); }
#line 4468 "parser.c" /* yacc.c:1651  */
    break;

  case 345:
#line 483 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("noposition"), OPT_NOPOSITION, NULL); }
#line 4474 "parser.c" /* yacc.c:1651  */
    break;

  case 346:
#line 484 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("noreq"), OPT_NOREQ, NULL); }
#line 4480 "parser.c" /* yacc.c:1651  */
    break;

  case 347:
#line 485 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("pattern"), OPT_PATTERN, push(new_contxt(), (yyvsp[-1].e))); }
#line 4486 "parser.c" /* yacc.c:1651  */
    break;

  case 348:
#line 486 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("prompt"), OPT_PROMPT, (yyvsp[-1].e)); }
#line 4492 "parser.c" /* yacc.c:1651  */
    break;

  case 349:
#line 487 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("quiet"), OPT_QUIET, NULL); }
#line 4498 "parser.c" /* yacc.c:1651  */
    break;

  case 350:
#line 488 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("range"), OPT_RANGE, (yyvsp[-1].e)); }
#line 4504 "parser.c" /* yacc.c:1651  */
    break;

  case 351:
#line 489 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("safe"), OPT_SAFE, NULL); }
#line 4510 "parser.c" /* yacc.c:1651  */
    break;

  case 352:
#line 490 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("setdefaulttool"), OPT_SETDEFAULTTOOL, push(new_contxt(), (yyvsp[-1].e))); }
#line 4516 "parser.c" /* yacc.c:1651  */
    break;

  case 353:
#line 491 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("setposition"), OPT_SETPOSITION, (yyvsp[-1].e)); }
#line 4522 "parser.c" /* yacc.c:1651  */
    break;

  case 354:
#line 492 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("setstack"), OPT_SETSTACK, push(new_contxt(), (yyvsp[-1].e))); }
#line 4528 "parser.c" /* yacc.c:1651  */
    break;

  case 355:
#line 493 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("settooltype"), OPT_SETTOOLTYPE, (yyvsp[-1].e)); }
#line 4534 "parser.c" /* yacc.c:1651  */
    break;

  case 356:
#line 494 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("settooltype"), OPT_SETTOOLTYPE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4540 "parser.c" /* yacc.c:1651  */
    break;

  case 357:
#line 495 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("source"), OPT_SOURCE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4546 "parser.c" /* yacc.c:1651  */
    break;

  case 358:
#line 496 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("swapcolors"), OPT_SWAPCOLORS, NULL); }
#line 4552 "parser.c" /* yacc.c:1651  */
    break;

  case 359:
#line 497 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("optional"), OPT_OPTIONAL, (yyvsp[-1].e)); }
#line 4558 "parser.c" /* yacc.c:1651  */
    break;

  case 360:
#line 498 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("resident"), OPT_RESIDENT, NULL); }
#line 4564 "parser.c" /* yacc.c:1651  */
    break;

  case 361:
#line 499 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("override"), OPT_OVERRIDE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4570 "parser.c" /* yacc.c:1651  */
    break;

  case 362:
#line 500 "../src/parser.y" /* yacc.c:1651  */
    { (yyval.e) = new_option(strdup("dynopt"), OPT_DYNOPT, push(push(push(new_contxt(), (yyvsp[-3].e)), (yyvsp[-2].e)), (yyvsp[-1].e))); }
#line 4576 "parser.c" /* yacc.c:1651  */
    break;


#line 4580 "parser.c" /* yacc.c:1651  */
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
#line 502 "../src/parser.y" /* yacc.c:1910  */


