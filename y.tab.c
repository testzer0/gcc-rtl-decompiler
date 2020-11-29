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
    T_SIType = 281,
    T_DIType = 282,
    T_QIType = 283,
    T_CCType = 284,
    T_CCZType = 285,
    T_CCGCType = 286,
    T_Plus = 287,
    T_Minus = 288,
    T_Mult = 289,
    T_Div = 290,
    T_Lshift = 291,
    T_Ashift = 292,
    T_LshiftRt = 293,
    T_AshiftRt = 294,
    T_Subreg = 295,
    T_ExprList = 296,
    T_EndPara = 297,
    T_RArrow = 298,
    T_SiExtend = 299,
    T_Compare = 300,
    T_Lt = 301,
    T_Gt = 302,
    T_Le = 303,
    T_Ge = 304,
    T_Eq = 305,
    T_Ne = 306,
    T_CodeLabel = 307,
    T_UDiv = 308,
    T_Mod = 309,
    T_UMod = 310,
    T_CCGOCType = 311,
    T_ZeExtend = 312,
    T_Gtu = 313,
    T_Ltu = 314,
    T_Leu = 315,
    T_Geu = 316,
    T_Neg = 317,
    T_StringConstant = 318,
    T_IntConstant = 319,
    T_FunBegin = 320,
    TWO = 321
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
#define T_SIType 281
#define T_DIType 282
#define T_QIType 283
#define T_CCType 284
#define T_CCZType 285
#define T_CCGCType 286
#define T_Plus 287
#define T_Minus 288
#define T_Mult 289
#define T_Div 290
#define T_Lshift 291
#define T_Ashift 292
#define T_LshiftRt 293
#define T_AshiftRt 294
#define T_Subreg 295
#define T_ExprList 296
#define T_EndPara 297
#define T_RArrow 298
#define T_SiExtend 299
#define T_Compare 300
#define T_Lt 301
#define T_Gt 302
#define T_Le 303
#define T_Ge 304
#define T_Eq 305
#define T_Ne 306
#define T_CodeLabel 307
#define T_UDiv 308
#define T_Mod 309
#define T_UMod 310
#define T_CCGOCType 311
#define T_ZeExtend 312
#define T_Gtu 313
#define T_Ltu 314
#define T_Leu 315
#define T_Geu 316
#define T_Neg 317
#define T_StringConstant 318
#define T_IntConstant 319
#define T_FunBegin 320
#define TWO 321

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

#line 311 "y.tab.c" /* yacc.c:355  */
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

#line 342 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   671

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  569

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
      68,    67,     2,     2,     2,    69,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,     2,
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   167,   168,   171,   174,   175,   178,   179,
     180,   181,   182,   183,   186,   187,   190,   193,   195,   197,
     201,   202,   205,   207,   210,   212,   214,   216,   221,   222,
     225,   226,   227,   230,   233,   234,   237,   238,   239,   240,
     243,   246,   249,   250,   251,   252,   253,   254,   255,   258,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   279,   280,   283,   286,
     289,   290,   293,   294,   297,   298,   301,   302,   303,   304,
     307,   308,   311,   312,   313,   314,   315,   316,   317,   318,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   339,   342,   345,   348,
     351,   354,   357,   360,   363,   366,   369,   372,   375,   378,
     381,   384,   387,   390,   394,   395,   396,   399,   400,   403,
     404,   407,   410,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   425,   426,   429,   436,   443,   446,   448,
     450,   452,   456,   457,   458
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
  "T_CFlag", "T_SIType", "T_DIType", "T_QIType", "T_CCType", "T_CCZType",
  "T_CCGCType", "T_Plus", "T_Minus", "T_Mult", "T_Div", "T_Lshift",
  "T_Ashift", "T_LshiftRt", "T_AshiftRt", "T_Subreg", "T_ExprList",
  "T_EndPara", "T_RArrow", "T_SiExtend", "T_Compare", "T_Lt", "T_Gt",
  "T_Le", "T_Ge", "T_Eq", "T_Ne", "T_CodeLabel", "T_UDiv", "T_Mod",
  "T_UMod", "T_CCGOCType", "T_ZeExtend", "T_Gtu", "T_Ltu", "T_Leu",
  "T_Geu", "T_Neg", "T_StringConstant", "T_IntConstant", "T_FunBegin",
  "TWO", "')'", "'('", "'-'", "':'", "$accept", "Program", "FuncBodies",
  "FuncBody", "Stmts", "Stmt", "Note", "Barrier", "CodeLabel", "Integer",
  "Insn", "MainCmd", "PlainCmd", "ParallelCmd", "Cmds", "ClobberCmd",
  "SetCmd", "UseCmd", "Operand", "IntOperand", "ExprOperand",
  "ExtendOperand", "DerefOperand", "SymbolRefOperand", "NegOperand",
  "LocInfo", "Flags", "Flag", "MemType", "TypeInfo", "Expr", "IntegerExpr",
  "PlusExpr", "MinusExpr", "MultExpr", "DivExpr", "UDivExpr", "ModExpr",
  "UModExpr", "LshiftExpr", "AshiftExpr", "LshiftRtExpr", "AshiftRtExpr",
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
     315,   316,   317,   318,   319,   320,   321,    41,    40,    45,
      58
};
# endif

#define YYPACT_NINF -420

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-420)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     1,   134,    17,  -420,    24,     1,  -420,  -420,  -420,
      68,    75,    85,    89,    93,   102,   100,   131,   133,   139,
     140,   142,  -420,  -420,  -420,   135,   141,   146,   147,   148,
     150,  -420,  -420,  -420,  -420,  -420,  -420,   151,   152,   155,
     156,   157,   158,   159,   160,   161,   162,  -420,   163,  -420,
     145,   165,   167,   -42,   107,   215,   138,   168,   220,   169,
     170,   171,   172,   166,   176,  -420,  -420,  -420,  -420,  -420,
     177,   178,   179,     5,   181,   183,   -22,   137,   300,   225,
     184,    78,   236,   239,   240,   191,   193,  -420,   194,  -420,
     183,   192,     9,    13,    -3,    43,  -420,  -420,  -420,    82,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,  -420,  -420,  -420,  -420,  -420,  -420,   132,   132,   132,
     132,  -420,  -420,  -420,  -420,    59,   196,  -420,  -420,  -420,
    -420,  -420,  -420,   195,   149,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,   205,   149,   201,   206,  -420,   222,
     229,   223,   228,   230,  -420,  -420,  -420,   232,   235,  -420,
    -420,  -420,  -420,   273,    70,  -420,   132,    74,   143,   132,
    -420,  -420,   132,  -420,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,   237,   238,   241,   242,   243,   244,   245,   246,   249,
     254,   255,   256,   257,   259,   260,   300,   132,   261,   132,
     149,   132,   113,   271,   266,  -420,    61,   274,   276,   132,
    -420,   234,   279,   132,  -420,   284,   280,   289,   295,   296,
     301,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   299,   302,   300,   101,
     303,   132,   304,    43,   305,   306,   110,   307,   309,   310,
     311,   312,   316,   313,   314,   315,   300,   143,  -420,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,  -420,   300,   332,   300,  -420,  -420,
    -420,   300,   337,    43,   334,  -420,   300,   336,   359,   338,
    -420,   339,  -420,   340,   341,   346,   300,   343,   344,   347,
     348,   351,   352,   353,   354,   355,   356,    43,  -420,   357,
     358,   360,   361,  -420,   345,  -420,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   374,   375,   376,   377,
     379,   380,   381,   382,   383,     3,   385,   387,   386,   389,
    -420,  -420,  -420,   388,   391,   392,   393,   300,   300,   300,
     300,   300,   300,   300,   300,  -420,   300,   300,   300,   300,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,   394,  -420,   405,
     396,   397,   395,   398,   -21,   400,   443,  -420,   399,   300,
     300,   401,   402,   403,   404,   406,   407,   408,   409,   410,
     411,   412,   413,   300,   414,  -420,   300,   415,   455,   416,
     417,   419,   420,   300,   422,   423,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,   424,  -420,
     425,   463,   426,   418,   475,   431,   477,   429,  -420,   430,
    -420,   432,   434,   435,    43,   436,   437,   427,  -420,   300,
     490,   438,  -420,   439,   465,   442,   478,   444,   445,  -420,
     501,   449,   447,   448,  -420,   450,   451,  -420,   452,   373,
    -420,   472,   503,   453,   457,    43,   495,  -420,   458,   456,
     459,   464,   466,   461,   460,   467,   468,   469,    43,   470,
     471,   515,    92,    43,  -420,    60,   473,   474,   300,   476,
     479,   481,   482,   300,   -20,   483,   484,   486,   132,   519,
     487,  -420,   480,    92,   488,   489,   491,  -420,   485,   493,
      92,   521,   518,   494,  -420,   496,   497,   492,    43,  -420,
     523,   132,   498,   499,   500,    92,   132,   504,   505,   506,
     507,   508,   510,   511,   -20,   513,     4,   514,   516,   520,
     522,  -420,     6,  -420,  -420,   524,   525,  -420,  -420
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     5,     7,     1,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   144,     6,     0,     0,     0,     0,     0,
       0,     8,     9,    13,    10,    11,    12,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,    16,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    33,
       0,     0,     0,     0,     0,     0,    80,    81,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   134,   135,   136,   137,   138,     0,     0,     0,
       0,   139,   140,   142,   141,     0,     0,    42,    43,    44,
      46,    45,    47,     0,    73,    56,    57,    58,    59,    60,
      61,    62,    52,    51,    54,    53,    63,    55,    64,    65,
      48,   124,   125,   126,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,    17,    19,    35,     0,     0,    76,
      77,    78,    79,     0,     0,    75,     0,     0,     0,     0,
      49,   127,     0,    85,    82,    83,    84,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,    20,     0,     0,     0,     0,
      34,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,   106,    50,
      90,     0,     0,     0,     0,    25,     0,     0,     0,     0,
      38,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    37,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
      70,    68,    91,    92,    93,   100,   101,   102,   103,    95,
      94,    97,    96,    98,    99,   104,   105,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   108,   109,   110,
     114,   115,   116,   117,   119,   111,   112,   113,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
     120,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,   130,     0,     0,   123,     0,     0,
      23,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,   149,   151,     0,     0,   148,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -420,  -420,  -420,   542,  -420,   540,  -420,  -420,  -420,   -85,
    -420,  -420,   -50,  -420,  -420,  -420,  -420,  -420,  -182,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,   -70,   -97,  -420,  -101,
    -420,  -420,   264,   281,   286,   288,   291,   298,   308,   333,
     335,   342,   349,   350,   362,   378,   384,  -420,   390,  -420,
    -420,  -420,   294,  -167,  -420,  -420,  -420,    28,  -408,  -419
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,     7,    16,    17,    18,   160,
      19,    64,    65,    66,    76,    67,    68,    69,   126,   127,
     128,   129,   130,   131,   132,   133,   174,   175,   134,   191,
     289,   290,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    20,   150,   151,
     152,   153,   227,   154,    21,    22,    23,   520,   521,   506
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     180,   228,   390,   559,    85,   565,   202,   203,   204,   205,
      89,   518,    57,   177,   246,    88,    58,    10,    11,    12,
      13,   169,   170,   171,   172,   169,   170,   171,   172,   260,
     167,    14,   419,   420,   391,   518,    90,   518,   519,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   210,   178,   286,   179,    86,     5,
     254,   183,   519,   392,   519,   225,    15,   224,   229,   173,
     224,   230,     1,   176,   307,   212,   184,   185,   186,   187,
     188,   189,   169,   170,   171,   172,   169,   170,   171,   172,
     228,   504,   255,   324,   529,   326,   247,   158,   249,   342,
     250,   535,   159,   224,   346,   224,   190,    59,   258,    60,
      61,    62,   262,    63,   354,    94,   548,   206,   508,   207,
      98,    99,    25,   505,     8,   169,   170,   171,   172,    26,
     223,   157,   158,   183,   226,    71,   181,   159,   560,    27,
     292,    72,   182,    28,   566,    91,    92,    29,   184,   185,
     186,   187,   188,   189,   288,   158,    30,    31,   294,   287,
     159,   169,   170,   171,   172,   401,   402,   403,   404,   405,
     406,   407,   408,   251,   409,   410,   411,   412,   190,   111,
     112,   113,   114,   115,   116,    60,    61,    62,    32,    37,
      33,   121,   122,   123,   124,    38,    34,    35,   344,    36,
      39,    40,    41,    54,    42,    43,    44,   424,   425,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    70,    74,
      80,   438,   365,    55,   440,    56,    73,    75,    77,    78,
      79,   447,    93,    81,   155,    82,    83,    84,    87,    94,
      95,   156,    96,    97,    98,    99,   161,   162,   164,   163,
     165,   166,   168,   208,   213,   209,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   211,   214,   467,   109,   110,
     111,   112,   113,   114,   115,   116,   215,   117,   118,   119,
     217,   120,   121,   122,   123,   124,   125,   216,   218,   220,
     219,   259,   222,   221,   257,   231,   232,   264,    93,   233,
     234,   235,   236,   237,   238,    94,    95,   239,    96,    97,
      98,    99,   240,   241,   242,   243,   512,   244,   245,   248,
     253,   517,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   252,   256,   261,   109,   110,   111,   112,   113,   114,
     115,   116,   263,   117,   118,   119,   265,   120,   121,   122,
     123,   124,   125,   266,   267,   268,   284,   348,   293,   463,
     285,   291,   295,   299,   296,   298,   304,   300,   301,   302,
     303,   483,   305,   306,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   325,
     488,   343,   345,   347,   509,   349,   350,   351,   352,   353,
     355,   356,   370,   500,   414,   357,   358,   525,   507,   359,
     360,   361,   362,   363,   364,   366,   367,   421,   368,   369,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     544,   381,   382,   383,   384,   549,   385,   386,   387,   388,
     422,   389,   393,   542,   394,   397,   395,   396,   398,   417,
     399,   400,   413,   415,   442,   416,   418,   423,   426,   427,
     428,   429,   452,   430,   431,   432,   433,   434,   435,   436,
     437,   439,   454,   441,   455,   444,   443,   445,   446,   448,
     449,   450,   451,   453,   456,   457,   458,   466,   459,   468,
     460,   461,   462,   464,   465,   469,   473,   470,   471,   472,
     476,   474,   475,   477,   478,   484,   479,   480,   481,   485,
     482,   487,   489,   486,   491,   490,   492,   493,   495,   494,
     496,   503,   498,   526,   497,   536,   499,   537,   501,   502,
     510,   511,   543,   528,   513,     9,    24,   514,   515,   516,
     522,   327,   523,   524,   527,   533,   530,   531,   538,   532,
     534,   308,   541,   539,   547,   540,   545,     0,   328,   546,
     552,   550,   551,   329,   553,   330,   554,   555,   331,   556,
     558,   561,   557,     0,   562,   332,     0,   563,     0,   564,
       0,   567,   568,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     334,     0,   335,     0,     0,     0,     0,     0,     0,   336,
       0,     0,     0,     0,     0,     0,   337,   338,     0,     0,
       0,     0,     0,     0,     0,     0,   297,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,     0,     0,     0,     0,
       0,   341
};

static const yytype_int16 yycheck[] =
{
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      95,   178,     9,     9,     9,     9,   117,   118,   119,   120,
      42,    41,    64,    93,   206,    75,    68,     3,     4,     5,
       6,    22,    23,    24,    25,    22,    23,    24,    25,   221,
      90,    17,    63,    64,    41,    41,    68,    41,    68,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   134,    68,   248,    70,    63,    68,
       9,    11,    68,    70,    68,   176,    52,   174,   179,    70,
     177,   182,    65,    70,   266,   155,    26,    27,    28,    29,
      30,    31,    22,    23,    24,    25,    22,    23,    24,    25,
     267,     9,    41,   285,   523,   287,   207,    64,   209,   291,
     211,   530,    69,   210,   296,   212,    56,    10,   219,    12,
      13,    14,   223,    16,   306,    15,   545,    68,    68,    70,
      20,    21,    64,    41,     0,    22,    23,    24,    25,    64,
      70,    63,    64,    11,    70,     7,    64,    69,   556,    64,
     251,    13,    70,    64,   562,    18,    19,    64,    26,    27,
      28,    29,    30,    31,   249,    64,    64,    67,   253,    68,
      69,    22,    23,    24,    25,   357,   358,   359,   360,   361,
     362,   363,   364,    70,   366,   367,   368,   369,    56,    46,
      47,    48,    49,    50,    51,    12,    13,    14,    67,    64,
      67,    58,    59,    60,    61,    64,    67,    67,   293,    67,
      64,    64,    64,    68,    64,    64,    64,   399,   400,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    13,     9,
      64,   413,   317,    68,   416,    68,    68,    68,    68,    68,
      68,   423,     8,    67,    19,    68,    68,    68,    67,    15,
      16,    67,    18,    19,    20,    21,    20,    18,    67,    19,
      67,    67,    70,    67,    63,    70,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    70,    70,   459,    44,    45,
      46,    47,    48,    49,    50,    51,    64,    53,    54,    55,
      67,    57,    58,    59,    60,    61,    62,    68,    70,    67,
      70,    67,    29,    68,    28,    68,    68,    27,     8,    68,
      68,    68,    68,    68,    68,    15,    16,    68,    18,    19,
      20,    21,    68,    68,    68,    68,   508,    68,    68,    68,
      64,   513,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    70,    68,    64,    44,    45,    46,    47,    48,    49,
      50,    51,    68,    53,    54,    55,    67,    57,    58,    59,
      60,    61,    62,    68,    68,    64,    67,     8,    64,   454,
      68,    68,    67,    64,    68,    68,    63,    67,    67,    67,
      64,     8,    68,    68,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
     485,    64,    68,    67,   505,    67,    67,    67,    67,    63,
      67,    67,    67,   498,     9,    68,    68,   518,   503,    68,
      68,    68,    68,    68,    68,    68,    68,    27,    68,    68,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
     541,    67,    67,    67,    67,   546,    67,    67,    67,    67,
       7,    68,    67,   538,    67,    67,    70,    68,    67,    64,
      68,    68,    68,    67,     9,    68,    68,    68,    67,    67,
      67,    67,     9,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    64,    68,     9,    68,    70,    68,    68,    67,
      67,    67,    67,    67,    63,    18,    67,    70,    68,     9,
      68,    67,    67,    67,    67,    67,    28,    68,    43,    67,
       9,    67,    67,    64,    67,    43,    68,    67,    67,    16,
      68,    64,    27,    70,    68,    67,    67,    63,    67,    63,
      70,    16,    64,    14,    67,    14,    67,    19,    68,    68,
      67,    67,    19,    63,    68,     3,     6,    68,    67,    67,
      67,   287,    68,    67,    67,    70,    68,    68,    64,    68,
      67,   267,    70,    67,    64,    68,    68,    -1,   287,    70,
      64,    67,    67,   287,    67,   287,    68,    67,   287,    68,
      67,    67,   554,    -1,    68,   287,    -1,    67,    -1,    67,
      -1,    67,    67,    -1,    -1,   287,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287,    -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,   287,
      -1,    -1,    -1,    -1,    -1,    -1,   287,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,   287,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,
      -1,   287
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    72,    73,    74,    68,    75,    76,     0,    74,
       3,     4,     5,     6,    17,    52,    77,    78,    79,    81,
     118,   125,   126,   127,    76,    64,    64,    64,    64,    64,
      64,    67,    67,    67,    67,    67,    67,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    68,    68,    68,    64,    68,    10,
      12,    13,    14,    16,    82,    83,    84,    86,    87,    88,
      13,     7,    13,    68,     9,    68,    85,    68,    68,    68,
      64,    67,    68,    68,    68,     9,    63,    67,    83,    42,
      68,    18,    19,     8,    15,    16,    18,    19,    20,    21,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      57,    58,    59,    60,    61,    62,    89,    90,    91,    92,
      93,    94,    95,    96,    99,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     119,   120,   121,   122,   124,    19,    67,    63,    64,    69,
      80,    20,    18,    19,    67,    67,    67,    83,    70,    22,
      23,    24,    25,    70,    97,    98,    70,    97,    68,    70,
      80,    64,    70,    11,    26,    27,    28,    29,    30,    31,
      56,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,    68,    70,    67,    70,
      97,    70,    97,    63,    70,    64,    68,    67,    70,    70,
      67,    68,    29,    70,    98,   100,    70,   123,   124,   100,
     100,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    89,   100,    68,   100,
     100,    70,    70,    64,     9,    41,    68,    28,   100,    67,
      89,    64,   100,    68,    27,    67,    68,    68,    64,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    67,    68,    89,    68,    80,   101,
     102,    68,   100,    64,    80,    67,    68,   119,    68,    64,
      67,    67,    67,    64,    63,    68,    68,    89,   123,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    89,    67,    89,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    89,    64,    80,    68,    89,    67,     8,    67,
      67,    67,    67,    63,    89,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    80,    68,    68,    68,    68,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
       9,    41,    70,    67,    67,    70,    68,    67,    67,    68,
      68,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    68,     9,    67,    68,    64,    68,    63,
      64,    27,     7,    68,    89,    89,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    89,    67,
      89,    68,     9,    70,    68,    68,    68,    89,    67,    67,
      67,    67,     9,    67,    64,     9,    63,    18,    67,    68,
      68,    67,    67,    80,    67,    67,    70,    89,     9,    67,
      68,    43,    67,    28,    67,    67,     9,    64,    67,    68,
      67,    67,    68,     8,    43,    16,    70,    64,    80,    27,
      67,    68,    67,    63,    63,    67,    70,    67,    64,    67,
      80,    68,    68,    16,     9,    41,   130,    80,    68,   100,
      67,    67,    89,    68,    68,    67,    67,    89,    41,    68,
     128,   129,    67,    68,    67,   100,    14,    67,    63,   130,
      68,    68,    68,    70,    67,   130,    14,    19,    64,    67,
      68,    70,    80,    19,   100,    68,    70,    64,   130,   100,
      67,    67,    64,    67,    68,    67,    68,   128,    67,     9,
     129,    67,    68,    67,    67,     9,   129,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    75,    75,    76,    76,
      76,    76,    76,    76,    77,    77,    78,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    84,    85,    85,    86,    86,    86,    86,
      87,    88,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   118,   119,   119,   119,   120,   120,   121,
     121,   122,   123,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   127,   128,   129,   129,
     129,   129,   130,   130,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     5,     4,     4,     9,     8,     9,
       2,     1,    15,    21,    18,    12,    16,    19,     1,     1,
       1,     1,     1,     3,     4,     3,     7,     8,     7,     8,
       7,     8,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     6,     7,
       6,     4,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     6,     8,
       9,     6,    23,    20,     1,     1,     1,     2,     4,    10,
      12,     1,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,    44,    35,     1,    14,    12,
      14,    12,     1,     7,     8
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
#line 156 "parser.y" /* yacc.c:1646  */
    { 
                                                    (yylsp[0]);
                                                    (yyval.program) = new Program((yyvsp[0].funcbodies));
                                                    if (ReportError::findNumErrors() == 0) {
                                                        // $$->Print(0);
                                                        (yyval.program)->Analyze();
                                                        (yyval.program)->GenerateCode(0);
                                                    }
                                                }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 167 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies)=(yyvsp[-1].funcbodies))->Append((yyvsp[0].funcbody)); }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 168 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies) = new List<FuncBody *>)->Append((yyvsp[0].funcbody)); }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 171 "parser.y" /* yacc.c:1646  */
    { (yyval.funcbody) = new FuncBody((yyvsp[0].stmts), (yyvsp[-1].identifier)); }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 174 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts)=(yyvsp[-1].stmts))->Append((yyvsp[0].stmt)); }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 175 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts) = new List<Stmt *>)->Append((yyvsp[0].stmt)); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].note); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].barrier); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].insn); }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].jumpinsn); }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].call); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].codelabel); }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval.barrier) = new Barrier(); }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel((yyvsp[-7].integerConstant)); }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel((yyvsp[-6].integerConstant)); }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel((yyvsp[-7].integerConstant)); }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer(-(yyvsp[0].integerConstant)); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer((yyvsp[0].integerConstant)); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-8].maincmd)); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-14].maincmd)); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-11].maincmd)); }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-5].maincmd)); }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn(NULL); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-12].maincmd)); }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].plaincmd); }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].parallelcmd); }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].clobbercmd); }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].setcmd); }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].usecmd); }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.parallelcmd) = new ParallelCmd((yyvsp[-1].cmds)); }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 233 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = (yyvsp[-3].cmds))->Append((yyvsp[-1].plaincmd)); }
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 234 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = new List<PlainCmd *>)->Append((yyvsp[-1].plaincmd)); }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.setcmd) = new SetCmd((yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval.usecmd) = new UseCmd(); }
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].intoperand); }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].exproperand); }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].extendoperand); }
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].symbolrefoperand); }
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].derefoperand); }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].negoperand); }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].dest); }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.intoperand) = new IntOperand((yyvsp[0].integer)->getValue()); }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand((yyvsp[-3].locinfo),(yyvsp[-1].typeinfo),(yyvsp[0].expr)); }
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftexpr)); }
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftexpr)); }
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftrtexpr)); }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftrtexpr)); }
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].compareexpr)); }
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].plusexpr)); }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].minusexpr)); }
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].multexpr)); }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].divexpr)); }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].udivexpr)); }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].modexpr)); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].umodexpr)); }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].subregexpr)); }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].conditionexpr)); }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].symbolrefexpr)); }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.derefoperand) = new DerefOperand((yyvsp[-5].locinfo),(yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 286 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefoperand) = new SymbolRefOperand((yyvsp[-1].stringConstant)); }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.negoperand) = new NegOperand((yyvsp[-1].operand)); }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval.negoperand) = new NegOperand((yyvsp[-1].operand)); }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[-1].memtype), (yyvsp[0].flags)); }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[0].memtype),NULL); }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 297 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = (yyvsp[-1].flags))->Append((yyvsp[0].flag)); }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 298 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = new List<Flag *>)->Append((yyvsp[0].flag)); }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("i"); }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("v"); }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("f"); }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("c"); }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("mem"); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("reg"); }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("si"); }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("di"); }
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("qi"); }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ti"); }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("cc"); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccz"); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgc"); }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgoc"); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].integerexpr); }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].plusexpr); }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 323 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].minusexpr); }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].multexpr); }
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftexpr); }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftexpr); }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftrtexpr); }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftrtexpr); }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].subregexpr); }
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].compareexpr); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].divexpr); }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].udivexpr); }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].modexpr); }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].umodexpr); }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].conditionexpr); }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].symbolrefexpr); }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyval.integerexpr) = new IntegerExpr((yyvsp[0].integer)->getValue()); }
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.plusexpr) = new PlusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.minusexpr) = new MinusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.multexpr) = new MultExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.divexpr) = new DivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.udivexpr) = new UDivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.modexpr) = new ModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.umodexpr) = new UModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftexpr) = new LshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftexpr) = new AshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 369 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftrtexpr) = new LshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftrtexpr) = new AshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.subregexpr) = new SubregExpr((yyvsp[-4].typeinfo),(yyvsp[-2].operand)); }
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.compareexpr) = new CompareExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.conditionexpr) = new ConditionExpr((yyvsp[-8].condition),(yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefexpr) = new SymbolRefExpr((yyvsp[-3].typeinfo),(yyvsp[-1].stringConstant)); }
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 389 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-11].dest)); }
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-8].dest)); }
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].label); }
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].ifthenelse); }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].pc); }
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval.pc) = new Pc(); }
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.comparison) = new Comparison((yyvsp[-6].condition),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("lt"); }
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gt"); }
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("le"); }
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ge"); }
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 417 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("eq"); }
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 418 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ne"); }
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gtu"); }
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ltu"); }
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("geu"); }
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 422 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("leu"); }
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 425 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].retcall); }
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].noretcall); }
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.retcall) = new RetCall((yyvsp[-33].typeinfo),(yyvsp[-32].integerConstant),(yyvsp[-19].stringConstant),(yyvsp[-1].exprlist)); }
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval.noretcall) = new NoRetCall((yyvsp[-18].stringConstant),(yyvsp[-1].exprlist)); }
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.exprlist) = new ExprList((yyvsp[0].exprlistexpr)); }
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 447 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr) = new List<pair<int, const char*>>)->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 449 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr) = new List<pair<int, const char*>>)->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 451 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr)=(yyvsp[-1].exprlistexpr))->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 453 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr)=(yyvsp[-1].exprlistexpr))->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 456 "parser.y" /* yacc.c:1646  */
    { }
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 457 "parser.y" /* yacc.c:1646  */
    { }
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 458 "parser.y" /* yacc.c:1646  */
    { }
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2818 "y.tab.c" /* yacc.c:1646  */
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
#line 461 "parser.y" /* yacc.c:1906  */


void InitParser()
{
   // printf("Initializing parser.\n\n");
   yydebug = false;
}
