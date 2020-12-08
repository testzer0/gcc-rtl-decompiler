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
#line 5 "parser.y" /* yacc.c:339  */

    #include "scanner.h"
    #include "parser.h"
    #include "errors.h"

    void yyerror(const char *msg);

#line 74 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Note = 258,
    T_Insn = 259,
    T_JumpInsn = 260,
    T_CallInsn = 261,
    T_Call = 262,
    T_SymbolRef = 263,
    T_Nil = 264,
    T_Parallel = 265,
    T_TIType = 266,
    T_Clobber = 267,
    T_Set = 268,
    T_Use = 269,
    T_IfThenElse = 270,
    T_ConstInt = 271,
    T_Barrier = 272,
    T_Mem = 273,
    T_Reg = 274,
    T_Pc = 275,
    T_LabelRef = 276,
    T_IFlag = 277,
    T_VFlag = 278,
    T_FFlag = 279,
    T_CFlag = 280,
    T_UFlag = 281,
    T_SIType = 282,
    T_SFType = 283,
    T_DIType = 284,
    T_QIType = 285,
    T_CCType = 286,
    T_CCZType = 287,
    T_CCGCType = 288,
    T_Plus = 289,
    T_Minus = 290,
    T_Mult = 291,
    T_Div = 292,
    T_Lshift = 293,
    T_Ashift = 294,
    T_LshiftRt = 295,
    T_AshiftRt = 296,
    T_Subreg = 297,
    T_ExprList = 298,
    T_EndPara = 299,
    T_RArrow = 300,
    T_SiExtend = 301,
    T_Compare = 302,
    T_Lt = 303,
    T_Gt = 304,
    T_Le = 305,
    T_Ge = 306,
    T_Eq = 307,
    T_Ne = 308,
    T_CodeLabel = 309,
    T_UDiv = 310,
    T_Mod = 311,
    T_UMod = 312,
    T_CCGOCType = 313,
    T_ZeExtend = 314,
    T_FlExtend = 315,
    T_Gtu = 316,
    T_Ltu = 317,
    T_Leu = 318,
    T_Geu = 319,
    T_Neg = 320,
    T_Xor = 321,
    T_Fix = 322,
    T_StringConstant = 323,
    T_IntConstant = 324,
    T_FunBegin = 325,
    TWO = 326
  };
#endif
/* Tokens.  */
#define T_Note 258
#define T_Insn 259
#define T_JumpInsn 260
#define T_CallInsn 261
#define T_Call 262
#define T_SymbolRef 263
#define T_Nil 264
#define T_Parallel 265
#define T_TIType 266
#define T_Clobber 267
#define T_Set 268
#define T_Use 269
#define T_IfThenElse 270
#define T_ConstInt 271
#define T_Barrier 272
#define T_Mem 273
#define T_Reg 274
#define T_Pc 275
#define T_LabelRef 276
#define T_IFlag 277
#define T_VFlag 278
#define T_FFlag 279
#define T_CFlag 280
#define T_UFlag 281
#define T_SIType 282
#define T_SFType 283
#define T_DIType 284
#define T_QIType 285
#define T_CCType 286
#define T_CCZType 287
#define T_CCGCType 288
#define T_Plus 289
#define T_Minus 290
#define T_Mult 291
#define T_Div 292
#define T_Lshift 293
#define T_Ashift 294
#define T_LshiftRt 295
#define T_AshiftRt 296
#define T_Subreg 297
#define T_ExprList 298
#define T_EndPara 299
#define T_RArrow 300
#define T_SiExtend 301
#define T_Compare 302
#define T_Lt 303
#define T_Gt 304
#define T_Le 305
#define T_Ge 306
#define T_Eq 307
#define T_Ne 308
#define T_CodeLabel 309
#define T_UDiv 310
#define T_Mod 311
#define T_UMod 312
#define T_CCGOCType 313
#define T_ZeExtend 314
#define T_FlExtend 315
#define T_Gtu 316
#define T_Ltu 317
#define T_Leu 318
#define T_Geu 319
#define T_Neg 320
#define T_Xor 321
#define T_Fix 322
#define T_StringConstant 323
#define T_IntConstant 324
#define T_FunBegin 325
#define TWO 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "parser.y" /* yacc.c:355  */

    Program *program;
    FuncBody *funcbody;
    List<FuncBody *> *funcbodies;
    Stmt *stmt;
    List<Stmt *> *stmts;
    Note *note;
    Barrier *barrier;
    CodeLabel *codelabel;
    Integer *integer;
    Insn *insn;
    MainCmd *maincmd;
    PlainCmd *plaincmd;
    ParallelCmd *parallelcmd;
    List<PlainCmd *> *cmds;
    ClobberCmd *clobbercmd;
    SetCmd *setcmd;
    UseCmd *usecmd;
    Operand *operand;
    IntOperand *intoperand;
    ExprOperand *exproperand;
    ExtendOperand *extendoperand;
    DerefOperand *derefoperand;
    SymbolRefOperand *symbolrefoperand;
    NegOperand *negoperand;
    FixOperand *fixoperand;
    TypeInfo *typeinfo;
    LocInfo *locinfo;
    MemType *memtype;
    List<Flag *> *flags;
    Flag *flag;
    Expr *expr;
    IntegerExpr *integerexpr;
    PlusExpr *plusexpr;
    MinusExpr *minusexpr;
    MultExpr *multexpr;
    DivExpr *divexpr;
    UDivExpr *udivexpr;
    ModExpr *modexpr;
    UModExpr *umodexpr;
    LshiftExpr *lshiftexpr;
    AshiftExpr *ashiftexpr;
    LshiftRtExpr *lshiftrtexpr;
    AshiftRtExpr *ashiftrtexpr;
    XorExpr *xorexpr;
    SubregExpr *subregexpr;
    CompareExpr *compareexpr;
    ConditionExpr *conditionexpr;
    SymbolRefExpr *symbolrefexpr;
    JumpInsn *jumpinsn;
    Dest *dest;
    Label *label;
    Pc *pc;
    IfThenElse *ifthenelse;
    Comparison *comparison;
    Condition *condition;
    Call *call;
    RetCall *retcall;
    NoRetCall *noretcall;
    ExprList *exprlist;
    List<pair<int,const char *>> *exprlistexpr;

    int integerConstant;
    const char *stringConstant;
    char identifier[32];

#line 323 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 354 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  594

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

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
      73,    72,     2,     2,     2,    74,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   160,   160,   171,   172,   175,   178,   179,   182,   183,
     184,   185,   186,   187,   190,   191,   194,   197,   199,   201,
     205,   206,   209,   211,   214,   216,   218,   220,   225,   226,
     229,   230,   231,   234,   237,   238,   241,   242,   243,   244,
     247,   250,   253,   254,   255,   256,   257,   258,   259,   260,
     263,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   285,   286,
     287,   290,   293,   296,   297,   300,   303,   304,   307,   308,
     311,   312,   313,   314,   315,   318,   319,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   352,   355,   358,   361,   364,   367,   370,
     373,   376,   379,   382,   385,   388,   391,   394,   397,   400,
     403,   406,   410,   411,   412,   415,   416,   419,   420,   423,
     426,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   441,   442,   445,   452,   459,   462,   464,   466,   468,
     472,   473,   474
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Note", "T_Insn", "T_JumpInsn",
  "T_CallInsn", "T_Call", "T_SymbolRef", "T_Nil", "T_Parallel", "T_TIType",
  "T_Clobber", "T_Set", "T_Use", "T_IfThenElse", "T_ConstInt", "T_Barrier",
  "T_Mem", "T_Reg", "T_Pc", "T_LabelRef", "T_IFlag", "T_VFlag", "T_FFlag",
  "T_CFlag", "T_UFlag", "T_SIType", "T_SFType", "T_DIType", "T_QIType",
  "T_CCType", "T_CCZType", "T_CCGCType", "T_Plus", "T_Minus", "T_Mult",
  "T_Div", "T_Lshift", "T_Ashift", "T_LshiftRt", "T_AshiftRt", "T_Subreg",
  "T_ExprList", "T_EndPara", "T_RArrow", "T_SiExtend", "T_Compare", "T_Lt",
  "T_Gt", "T_Le", "T_Ge", "T_Eq", "T_Ne", "T_CodeLabel", "T_UDiv", "T_Mod",
  "T_UMod", "T_CCGOCType", "T_ZeExtend", "T_FlExtend", "T_Gtu", "T_Ltu",
  "T_Leu", "T_Geu", "T_Neg", "T_Xor", "T_Fix", "T_StringConstant",
  "T_IntConstant", "T_FunBegin", "TWO", "')'", "'('", "'-'", "':'",
  "$accept", "Program", "FuncBodies", "FuncBody", "Stmts", "Stmt", "Note",
  "Barrier", "CodeLabel", "Integer", "Insn", "MainCmd", "PlainCmd",
  "ParallelCmd", "Cmds", "ClobberCmd", "SetCmd", "UseCmd", "Operand",
  "IntOperand", "ExprOperand", "ExtendOperand", "DerefOperand",
  "SymbolRefOperand", "NegOperand", "FixOperand", "LocInfo", "Flags",
  "Flag", "MemType", "TypeInfo", "Expr", "IntegerExpr", "PlusExpr",
  "MinusExpr", "MultExpr", "DivExpr", "UDivExpr", "ModExpr", "UModExpr",
  "LshiftExpr", "AshiftExpr", "LshiftRtExpr", "AshiftRtExpr", "XorExpr",
  "SubregExpr", "CompareExpr", "ConditionExpr", "SymbolRefExpr",
  "JumpInsn", "Dest", "Label", "IfThenElse", "Pc", "Comparison",
  "Condition", "Call", "RetCall", "NoRetCall", "ExprList", "ExprListExpr",
  "Junk2", YY_NULLPTR
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
     325,   326,    41,    40,    45,    58
};
# endif

#define YYPACT_NINF -430

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-430)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -48,   -29,    89,   -48,  -430,   150,   -29,  -430,  -430,  -430,
      35,    65,    68,    81,    88,   107,    31,   106,   108,   110,
     118,   134,  -430,  -430,  -430,   114,   138,   139,   140,   142,
     143,  -430,  -430,  -430,  -430,  -430,  -430,   144,   145,   153,
     154,   162,   164,   165,   166,   173,   174,  -430,   175,  -430,
     137,   172,   176,    19,   152,   219,   120,   180,   170,   182,
     183,   184,   185,   178,   194,  -430,  -430,  -430,  -430,  -430,
     195,   196,   197,     6,   199,   159,    46,   141,   319,   231,
     200,    61,   247,   255,   256,   202,   204,  -430,   205,  -430,
     159,   212,     7,    16,   -50,    11,  -430,  -430,  -430,    76,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,  -430,  -430,  -430,  -430,  -430,  -430,   188,   188,   188,
     188,   188,  -430,  -430,  -430,  -430,    74,   188,   213,   217,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,   227,   163,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,   237,
     163,   245,   239,  -430,   246,   248,   250,   242,   243,  -430,
    -430,  -430,   251,   252,  -430,  -430,  -430,  -430,  -430,   188,
      27,  -430,   188,    73,   177,   188,  -430,  -430,   188,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,   253,   257,
     258,   259,   260,   263,   268,   269,   270,   271,   272,   273,
     275,   276,   277,   278,   319,   188,   289,   188,   290,   188,
     163,   188,    86,   249,   295,  -430,     5,   300,   298,   188,
    -430,   244,   308,   188,  -430,   314,   291,   316,   317,   318,
     320,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   321,   322,   319,
     323,   319,   101,   324,   188,   329,    11,   327,   328,    85,
     330,   331,   332,   333,   334,   338,   261,   335,   336,   319,
     177,  -430,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   354,   355,  -430,   319,
     356,   319,   358,   319,  -430,  -430,  -430,   319,   362,    11,
     337,  -430,   319,   360,   311,   361,  -430,   363,  -430,   364,
     365,   366,   319,   367,   368,   371,   372,   373,   374,   375,
     376,   377,   378,    11,  -430,   379,   380,   381,   382,  -430,
    -430,   369,   383,   385,  -430,   386,   387,   388,   389,   390,
     391,   392,   394,   395,   396,   397,   399,   400,   401,   402,
     403,   404,   405,   407,   408,     4,   410,   411,   409,   412,
    -430,  -430,  -430,   414,   415,   416,   417,   319,   319,   319,
     319,   319,   319,   319,   319,  -430,   319,   319,   319,   319,
    -430,   319,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
     418,  -430,   393,   420,   421,   419,   422,   -34,   451,   486,
    -430,   423,   319,   319,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   319,   438,  -430,
     319,   439,   502,   440,   441,   443,   444,   319,   446,   447,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,   448,  -430,   449,   504,   450,   454,   515,
     457,   508,   455,  -430,   456,  -430,   458,   460,   461,    11,
     462,   463,   453,  -430,   319,   521,   464,  -430,   465,   492,
     467,   510,   469,   470,  -430,   534,   475,   473,   474,  -430,
     476,   477,  -430,   478,   384,  -430,   501,   536,   479,   481,
      11,   524,  -430,   483,   484,   487,   488,   490,   489,   485,
     491,   493,   494,    11,   495,   496,   548,    34,    11,  -430,
     111,   498,   499,   319,   500,   503,   505,   506,   319,   -19,
     507,   509,   511,   188,   551,   512,  -430,   513,    34,   514,
     516,   517,  -430,   497,   519,    34,   553,   555,   523,  -430,
     522,   520,   525,    11,  -430,   556,   188,   526,   527,   528,
      34,   188,   529,   531,   535,   533,   537,   539,   540,   -19,
     542,     3,   543,   544,   546,   547,  -430,    28,  -430,  -430,
     549,   550,  -430,  -430
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     5,     7,     1,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   151,   152,     6,     0,     0,     0,     0,     0,
       0,     8,     9,    13,    10,    11,    12,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,    16,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    33,
       0,     0,     0,     0,     0,     0,    85,    86,   139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,   145,   146,     0,     0,     0,
       0,     0,   147,   148,   150,   149,     0,     0,     0,     0,
      42,    43,    44,    46,    45,    47,    48,     0,    77,    57,
      58,    59,    60,    61,    62,    63,    53,    52,    55,    54,
      64,    65,    56,    66,    67,    49,   132,   133,   134,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    17,
      19,    35,     0,     0,    80,    81,    82,    83,    84,     0,
       0,    79,     0,     0,     0,     0,    50,   135,     0,    91,
      87,    88,    89,    90,    92,    93,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,    20,     0,     0,     0,     0,
      34,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,   113,    51,    96,     0,     0,     0,
       0,    25,     0,     0,     0,     0,    38,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,    69,
      70,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    37,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
      73,     0,    75,    71,    97,    98,    99,   107,   108,   109,
     110,   101,   100,   103,   102,   104,   105,   106,   111,   112,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,   117,   121,   122,   123,   124,   127,   118,
     119,   120,   125,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   140,     0,   128,     0,     0,     0,     0,
       0,     0,     0,   137,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,   138,
       0,     0,   131,     0,     0,    23,     0,     0,     0,     0,
       0,     0,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
       0,     0,   154,     0,     0,     0,     0,     0,     0,   161,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,   157,   159,
       0,     0,   156,   158
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -430,  -430,  -430,   577,  -430,   579,  -430,  -430,  -430,   -85,
    -430,  -430,   -54,  -430,  -430,  -430,  -430,  -430,  -186,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,   -66,   -97,  -430,
    -101,  -430,  -430,   283,   285,   292,   293,   303,   304,   305,
     306,   309,   313,   325,   326,   353,   357,   359,   370,  -430,
     398,  -430,  -430,  -430,   406,  -173,  -430,  -430,  -430,    41,
    -429,  -424
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,     7,    16,    17,    18,   165,
      19,    64,    65,    66,    76,    67,    68,    69,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   180,   181,   138,
     198,   305,   306,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    20,
     155,   156,   157,   158,   237,   159,    21,    22,    23,   545,
     546,   531
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     186,   238,   584,   413,   267,    85,   209,   210,   211,   212,
     213,    88,     1,   184,   543,   185,   216,   183,   257,   174,
     175,   176,   177,   178,   443,   444,   172,   590,   174,   175,
     176,   177,   178,   529,     5,   273,   543,   414,   268,   174,
     175,   176,   177,   178,   544,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   543,   220,   300,    86,   302,   544,   530,   232,   415,
     163,   235,   179,   234,   239,   164,   234,   240,    57,     8,
      89,   182,    58,   323,   222,   174,   175,   176,   177,   178,
      94,   544,   233,    31,    25,    98,    99,   238,   174,   175,
     176,   177,   178,   341,   258,   343,   260,   345,   262,    90,
     263,   362,   189,   234,   554,   234,   366,    71,   271,   162,
     163,   560,   275,    72,    26,   164,   374,    27,   190,   191,
     192,   193,   194,   195,   196,   187,   573,   214,   236,   215,
      28,   188,   585,    10,    11,    12,    13,    29,   591,    91,
      92,   264,    59,   308,    60,    61,    62,    14,    63,   197,
     163,    60,    61,    62,   303,   164,    30,   304,    32,    74,
      33,   310,    34,    37,   533,   174,   175,   176,   177,   178,
      35,   424,   425,   426,   427,   428,   429,   430,   431,   189,
     432,   433,   434,   435,    15,   436,    36,    38,    39,    40,
      54,    41,    42,    43,    44,   190,   191,   192,   193,   194,
     195,   196,    45,    46,   364,   111,   112,   113,   114,   115,
     116,    47,    70,    48,    49,    50,   448,   449,   122,   123,
     124,   125,    51,    52,    53,    55,   197,    80,   385,    56,
     160,   463,    93,    73,   465,    75,    77,    78,    79,    94,
      95,   472,    96,    97,    98,    99,    81,   166,    82,    83,
      84,    87,   161,   167,   169,   168,   170,   171,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   173,   217,   218,
     109,   110,   111,   112,   113,   114,   115,   116,   492,   117,
     118,   119,   219,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   221,   223,   224,   225,   272,   228,   229,   368,
     277,   226,   227,   230,   265,   231,   241,    93,   270,   320,
     242,   243,   244,   245,    94,    95,   246,    96,    97,    98,
      99,   247,   248,   249,   250,   251,   252,   537,   253,   254,
     255,   256,   542,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   259,   261,   266,   109,   110,   111,   112,   113,
     114,   115,   116,   269,   117,   118,   119,   274,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   276,   278,   281,
     279,   280,   508,   298,   488,   299,   301,   307,   309,   311,
     315,   312,   438,   314,   316,   317,   318,   319,   321,   322,
     365,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   513,   339,   340,   342,   534,
     344,   363,   367,   369,   373,   370,   371,   372,   525,   375,
     376,   390,   550,   532,   377,   378,   379,   380,   381,   382,
     383,   384,   386,   387,   388,   389,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   569,   400,   401,   402,   403,
     574,   404,   405,   406,   407,   408,   409,   410,   567,   411,
     445,   412,   416,   417,   418,   419,   420,   421,   441,   422,
     423,   437,   439,   446,   440,   442,   447,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     464,   467,   466,   477,   469,   468,   470,   471,   473,   474,
     475,   476,   478,   479,   480,   481,   482,   483,   491,   484,
     493,   485,   486,   487,   489,   490,   494,   496,   495,   497,
     498,   499,   500,   501,   502,   503,   509,   504,   505,   506,
     512,   507,   510,   514,   511,   515,   518,   516,   519,   517,
     521,   520,   523,   522,   528,   551,   524,   561,   526,   527,
     535,   536,   558,   538,   562,   568,   539,   540,   541,   547,
       9,   553,   548,   549,   552,    24,   346,   555,   347,   556,
     557,   559,   563,   565,   564,   348,   349,   572,     0,   570,
     566,   575,   571,   576,   577,   578,   350,   351,   352,   353,
     579,   580,   354,   581,   583,   586,   355,   587,   588,   589,
     582,   592,   593,     0,     0,     0,     0,     0,   356,   357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,     0,     0,     0,
     359,     0,   360,     0,     0,     0,     0,   313,     0,     0,
       0,     0,     0,   361,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   324
};

static const yytype_int16 yycheck[] =
{
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      95,   184,     9,     9,     9,     9,   117,   118,   119,   120,
     121,    75,    70,    73,    43,    75,   127,    93,   214,    22,
      23,    24,    25,    26,    68,    69,    90,     9,    22,    23,
      24,    25,    26,     9,    73,   231,    43,    43,    43,    22,
      23,    24,    25,    26,    73,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,    43,   138,   259,    68,   261,    73,    43,   179,    75,
      69,   182,    75,   180,   185,    74,   183,   188,    69,     0,
      44,    75,    73,   279,   160,    22,    23,    24,    25,    26,
      15,    73,    75,    72,    69,    20,    21,   280,    22,    23,
      24,    25,    26,   299,   215,   301,   217,   303,   219,    73,
     221,   307,    11,   220,   548,   222,   312,     7,   229,    68,
      69,   555,   233,    13,    69,    74,   322,    69,    27,    28,
      29,    30,    31,    32,    33,    69,   570,    73,    75,    75,
      69,    75,   581,     3,     4,     5,     6,    69,   587,    18,
      19,    75,    10,   264,    12,    13,    14,    17,    16,    58,
      69,    12,    13,    14,    73,    74,    69,   262,    72,     9,
      72,   266,    72,    69,    73,    22,    23,    24,    25,    26,
      72,   377,   378,   379,   380,   381,   382,   383,   384,    11,
     386,   387,   388,   389,    54,   391,    72,    69,    69,    69,
      73,    69,    69,    69,    69,    27,    28,    29,    30,    31,
      32,    33,    69,    69,   309,    48,    49,    50,    51,    52,
      53,    69,    13,    69,    69,    69,   422,   423,    61,    62,
      63,    64,    69,    69,    69,    73,    58,    69,   333,    73,
      19,   437,     8,    73,   440,    73,    73,    73,    73,    15,
      16,   447,    18,    19,    20,    21,    72,    20,    73,    73,
      73,    72,    72,    18,    72,    19,    72,    72,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    75,    75,    72,
      46,    47,    48,    49,    50,    51,    52,    53,   484,    55,
      56,    57,    75,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    75,    68,    75,    69,    72,    75,    75,     8,
      29,    73,    72,    72,    75,    73,    73,     8,    30,    68,
      73,    73,    73,    73,    15,    16,    73,    18,    19,    20,
      21,    73,    73,    73,    73,    73,    73,   533,    73,    73,
      73,    73,   538,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    73,    73,    69,    46,    47,    48,    49,    50,
      51,    52,    53,    73,    55,    56,    57,    69,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    73,    72,    69,
      73,    73,     8,    72,   479,    73,    73,    73,    69,    72,
      69,    73,     9,    73,    72,    72,    72,    69,    73,    73,
      73,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,   510,    72,    72,    72,   530,
      72,    69,    72,    72,    68,    72,    72,    72,   523,    72,
      72,    72,   543,   528,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    72,    72,    72,
      72,    72,    72,    72,    72,   566,    72,    72,    72,    72,
     571,    72,    72,    72,    72,    72,    72,    72,   563,    72,
      29,    73,    72,    72,    75,    73,    72,    72,    69,    73,
      73,    73,    72,     7,    73,    73,    73,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,     9,    73,     9,    73,    75,    73,    73,    72,    72,
      72,    72,    72,    69,     9,    68,    18,    72,    75,    73,
       9,    73,    72,    72,    72,    72,    72,    45,    73,    72,
      30,    72,    72,     9,    69,    72,    45,    73,    72,    72,
      69,    73,    16,    29,    75,    72,    68,    73,    68,    72,
      75,    72,    69,    72,    16,    14,    72,    14,    73,    73,
      72,    72,    75,    73,    19,    19,    73,    72,    72,    72,
       3,    68,    73,    72,    72,     6,   303,    73,   303,    73,
      73,    72,    69,    73,    72,   303,   303,    69,    -1,    73,
      75,    72,    75,    72,    69,    72,   303,   303,   303,   303,
      73,    72,   303,    73,    72,    72,   303,    73,    72,    72,
     579,    72,    72,    -1,    -1,    -1,    -1,    -1,   303,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     303,    -1,   303,    -1,    -1,    -1,    -1,   269,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,    77,    78,    79,    73,    80,    81,     0,    79,
       3,     4,     5,     6,    17,    54,    82,    83,    84,    86,
     125,   132,   133,   134,    81,    69,    69,    69,    69,    69,
      69,    72,    72,    72,    72,    72,    72,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    73,    73,    73,    69,    73,    10,
      12,    13,    14,    16,    87,    88,    89,    91,    92,    93,
      13,     7,    13,    73,     9,    73,    90,    73,    73,    73,
      69,    72,    73,    73,    73,     9,    68,    72,    88,    44,
      73,    18,    19,     8,    15,    16,    18,    19,    20,    21,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    46,
      47,    48,    49,    50,    51,    52,    53,    55,    56,    57,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   105,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   126,   127,   128,   129,   131,
      19,    72,    68,    69,    74,    85,    20,    18,    19,    72,
      72,    72,    88,    75,    22,    23,    24,    25,    26,    75,
     103,   104,    75,   103,    73,    75,    85,    69,    75,    11,
      27,    28,    29,    30,    31,    32,    33,    58,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,    73,    75,   106,    75,    72,    75,
     103,    75,   103,    68,    75,    69,    73,    72,    75,    75,
      72,    73,   106,    75,   104,   106,    75,   130,   131,   106,
     106,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    94,   106,    73,
     106,    73,   106,   106,    75,    75,    69,     9,    43,    73,
      30,   106,    72,    94,    69,   106,    73,    29,    72,    73,
      73,    69,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    72,    73,
      94,    73,    94,    73,    85,   107,   108,    73,   106,    69,
      85,    72,    73,   126,    73,    69,    72,    72,    72,    69,
      68,    73,    73,    94,   130,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    94,    72,    94,    72,    94,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    94,    69,    85,    73,    94,    72,     8,    72,
      72,    72,    72,    68,    94,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    85,    73,    73,    73,    73,
      72,    73,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,     9,    43,    75,    72,    72,    75,    73,
      72,    72,    73,    73,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    73,     9,    72,
      73,    69,    73,    68,    69,    29,     7,    73,    94,    94,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    94,    72,    94,    73,     9,    75,    73,
      73,    73,    94,    72,    72,    72,    72,     9,    72,    69,
       9,    68,    18,    72,    73,    73,    72,    72,    85,    72,
      72,    75,    94,     9,    72,    73,    45,    72,    30,    72,
      72,     9,    69,    72,    73,    72,    72,    73,     8,    45,
      16,    75,    69,    85,    29,    72,    73,    72,    68,    68,
      72,    75,    72,    69,    72,    85,    73,    73,    16,     9,
      43,   137,    85,    73,   106,    72,    72,    94,    73,    73,
      72,    72,    94,    43,    73,   135,   136,    72,    73,    72,
     106,    14,    72,    68,   137,    73,    73,    73,    75,    72,
     137,    14,    19,    69,    72,    73,    75,    85,    19,   106,
      73,    75,    69,   137,   106,    72,    72,    69,    72,    73,
      72,    73,   135,    72,     9,   136,    72,    73,    72,    72,
       9,   136,    72,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    80,    80,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    87,
      88,    88,    88,    89,    90,    90,    91,    91,    91,    91,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    98,    99,   100,   100,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   125,   126,   126,   126,   127,   127,   128,   128,   129,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   134,   135,   136,   136,   136,   136,
     137,   137,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     5,     4,     4,     9,     8,     9,
       2,     1,    15,    21,    18,    12,    16,    19,     1,     1,
       1,     1,     1,     3,     4,     3,     7,     8,     7,     8,
       7,     8,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       5,     6,     7,     6,     4,     6,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     6,     8,     9,     6,
      23,    20,     1,     1,     1,     2,     4,    10,    12,     1,
       7,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,    44,    35,     1,    14,    12,    14,    12,
       1,     7,     8
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
     '$$ = $1'.

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
#line 160 "parser.y" /* yacc.c:1646  */
    { 
                                                    (yylsp[0]);
                                                    (yyval.program) = new Program((yyvsp[0].funcbodies));
                                                    if (ReportError::findNumErrors() == 0) {
                                                        // $$->Print(0);
                                                        (yyval.program)->Analyze();
                                                        (yyval.program)->GenerateCode(0);
                                                    }
                                                }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 171 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies)=(yyvsp[-1].funcbodies))->Append((yyvsp[0].funcbody)); }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 172 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies) = new List<FuncBody *>)->Append((yyvsp[0].funcbody)); }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.funcbody) = new FuncBody((yyvsp[0].stmts), (yyvsp[-1].identifier)); }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 178 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts)=(yyvsp[-1].stmts))->Append((yyvsp[0].stmt)); }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 179 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts) = new List<Stmt *>)->Append((yyvsp[0].stmt)); }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].note); }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].barrier); }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].insn); }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].jumpinsn); }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].call); }
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].codelabel); }
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.barrier) = new Barrier(); }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel((yyvsp[-7].integerConstant)); }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel((yyvsp[-6].integerConstant)); }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel((yyvsp[-7].integerConstant)); }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer(-(yyvsp[0].integerConstant)); }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer((yyvsp[0].integerConstant)); }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-8].maincmd)); }
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-14].maincmd)); }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-11].maincmd)); }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-5].maincmd)); }
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn(NULL); }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-12].maincmd)); }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].plaincmd); }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].parallelcmd); }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].clobbercmd); }
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].setcmd); }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].usecmd); }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 234 "parser.y" /* yacc.c:1646  */
    { (yyval.parallelcmd) = new ParallelCmd((yyvsp[-1].cmds)); }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 237 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = (yyvsp[-3].cmds))->Append((yyvsp[-1].plaincmd)); }
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 238 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = new List<PlainCmd *>)->Append((yyvsp[-1].plaincmd)); }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.setcmd) = new SetCmd((yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.usecmd) = new UseCmd(); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].intoperand); }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].exproperand); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].extendoperand); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].symbolrefoperand); }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].derefoperand); }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].negoperand); }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].fixoperand); }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].dest); }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.intoperand) = new IntOperand((yyvsp[0].integer)->getValue()); }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand((yyvsp[-3].locinfo),(yyvsp[-1].typeinfo),(yyvsp[0].expr)); }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftexpr)); }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftexpr)); }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftrtexpr)); }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftrtexpr)); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].compareexpr)); }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].plusexpr)); }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].minusexpr)); }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].multexpr)); }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].divexpr)); }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].udivexpr)); }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 277 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].modexpr)); }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].umodexpr)); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].xorexpr)); }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].subregexpr)); }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].conditionexpr)); }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].symbolrefexpr)); }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 285 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 286 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval.derefoperand) = new DerefOperand((yyvsp[-5].locinfo),(yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefoperand) = new SymbolRefOperand((yyvsp[-1].stringConstant)); }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.negoperand) = new NegOperand((yyvsp[-1].operand)); }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.negoperand) = new NegOperand((yyvsp[-1].operand)); }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.fixoperand) = new FixOperand((yyvsp[-1].operand)); }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[-1].memtype), (yyvsp[0].flags)); }
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[0].memtype),NULL); }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 307 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = (yyvsp[-1].flags))->Append((yyvsp[0].flag)); }
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 308 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = new List<Flag *>)->Append((yyvsp[0].flag)); }
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("i"); }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("v"); }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("f"); }
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("c"); }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("u"); }
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("mem"); }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("reg"); }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("si"); }
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 323 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("sf"); }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("di"); }
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("qi"); }
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ti"); }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("cc"); }
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccz"); }
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgc"); }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgoc"); }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].integerexpr); }
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].plusexpr); }
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].minusexpr); }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].multexpr); }
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftexpr); }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftexpr); }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftrtexpr); }
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftrtexpr); }
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 341 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].xorexpr); }
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].subregexpr); }
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].compareexpr); }
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].divexpr); }
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].udivexpr); }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].modexpr); }
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].umodexpr); }
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].conditionexpr); }
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].symbolrefexpr); }
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.integerexpr) = new IntegerExpr((yyvsp[0].integer)->getValue()); }
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.plusexpr) = new PlusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.minusexpr) = new MinusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.multexpr) = new MultExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.divexpr) = new DivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.udivexpr) = new UDivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.modexpr) = new ModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 373 "parser.y" /* yacc.c:1646  */
    { (yyval.umodexpr) = new UModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftexpr) = new LshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftexpr) = new AshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftrtexpr) = new LshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 385 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftrtexpr) = new AshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.xorexpr) = new XorExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.subregexpr) = new SubregExpr((yyvsp[-4].typeinfo),(yyvsp[-2].operand)); }
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.compareexpr) = new CompareExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 397 "parser.y" /* yacc.c:1646  */
    { (yyval.conditionexpr) = new ConditionExpr((yyvsp[-8].condition),(yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefexpr) = new SymbolRefExpr((yyvsp[-3].typeinfo),(yyvsp[-1].stringConstant)); }
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 405 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-11].dest)); }
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-8].dest)); }
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].label); }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].ifthenelse); }
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 412 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].pc); }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 423 "parser.y" /* yacc.c:1646  */
    { (yyval.pc) = new Pc(); }
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.comparison) = new Comparison((yyvsp[-6].condition),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 429 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("lt"); }
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gt"); }
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("le"); }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 432 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ge"); }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("eq"); }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 434 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ne"); }
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gtu"); }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 436 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ltu"); }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 437 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("geu"); }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 438 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("leu"); }
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].retcall); }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 442 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].noretcall); }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval.retcall) = new RetCall((yyvsp[-33].typeinfo),(yyvsp[-32].integerConstant),(yyvsp[-19].stringConstant),(yyvsp[-1].exprlist)); }
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.noretcall) = new NoRetCall((yyvsp[-18].stringConstant),(yyvsp[-1].exprlist)); }
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 459 "parser.y" /* yacc.c:1646  */
    { (yyval.exprlist) = new ExprList((yyvsp[0].exprlistexpr)); }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 463 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr) = new List<pair<int, const char*>>)->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 465 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr) = new List<pair<int, const char*>>)->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 467 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr)=(yyvsp[-1].exprlistexpr))->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 469 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr)=(yyvsp[-1].exprlistexpr))->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 472 "parser.y" /* yacc.c:1646  */
    { }
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 473 "parser.y" /* yacc.c:1646  */
    { }
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 474 "parser.y" /* yacc.c:1646  */
    { }
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2895 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 477 "parser.y" /* yacc.c:1906  */


void InitParser()
{
   // printf("Initializing parser.\n\n");
   yydebug = false;
}
