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
    T_FunBegin = 320
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

#line 309 "y.tab.c" /* yacc.c:355  */
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

#line 340 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  569

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

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
      66,    67,     2,     2,     2,    68,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,     2,
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
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   153,   153,   162,   163,   166,   169,   170,   173,   174,
     175,   176,   177,   178,   181,   182,   185,   188,   190,   192,
     196,   197,   200,   202,   205,   207,   209,   211,   216,   217,
     220,   221,   222,   225,   228,   229,   232,   233,   234,   235,
     238,   241,   244,   245,   246,   247,   248,   249,   250,   253,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   274,   275,   278,   281,
     284,   285,   288,   289,   292,   293,   296,   297,   298,   299,
     302,   303,   306,   307,   308,   309,   310,   311,   312,   313,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   334,   337,   340,   343,
     346,   349,   352,   355,   358,   361,   364,   367,   370,   373,
     376,   379,   382,   385,   389,   390,   391,   394,   395,   398,
     399,   402,   405,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   420,   421,   424,   431,   438,   441,   443,
     445,   447,   451,   452,   453
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
  "'('", "')'", "'-'", "':'", "$accept", "Program", "FuncBodies",
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
     315,   316,   317,   318,   319,   320,    40,    41,    45,    58
};
# endif

#define YYPACT_NINF -526

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-526)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,    -1,   107,   -44,  -526,    24,    -1,  -526,  -526,  -526,
       9,    77,    84,    89,    99,   109,   100,   122,   134,   135,
     140,   143,  -526,  -526,  -526,   124,   147,   148,   149,   150,
     151,  -526,  -526,  -526,  -526,  -526,  -526,   152,   155,   156,
     157,   158,   159,   160,   161,   162,   163,  -526,   164,  -526,
     167,   169,   170,    57,   142,   196,    13,   171,   220,   172,
     173,   174,   177,   166,   178,  -526,  -526,  -526,  -526,  -526,
     180,   181,   182,     6,   184,    74,     1,    83,   300,   225,
     189,   102,   237,   240,   241,   192,   194,  -526,   195,  -526,
      74,   206,    10,    73,    51,   -26,  -526,  -526,  -526,    35,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,  -526,  -526,  -526,  -526,  -526,  -526,   104,   104,   104,
     104,  -526,  -526,  -526,  -526,   105,   197,  -526,  -526,  -526,
    -526,  -526,  -526,   207,   175,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,   217,   175,   106,   221,  -526,   199,
     231,   198,   229,   230,  -526,  -526,  -526,   233,   236,  -526,
    -526,  -526,  -526,   274,   103,  -526,   104,   114,   145,   104,
    -526,  -526,   104,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,   238,   239,   243,   244,   245,   246,   247,   248,   251,
     256,   257,   258,   259,   261,   262,   300,   104,   263,   104,
     175,   104,   121,   272,   242,  -526,    27,   264,   279,   104,
    -526,   234,   278,   104,  -526,   277,   325,   289,   297,   298,
     301,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   299,   302,   300,    93,
     304,   104,   303,   -26,   305,   307,    62,   308,   311,   309,
     310,   312,   314,   317,   315,   316,   300,   145,  -526,   318,
     319,   320,   321,   322,   323,   324,   326,   327,   328,   329,
     330,   331,   332,   334,  -526,   300,   335,   300,  -526,  -526,
    -526,   300,   339,   -26,   340,  -526,   300,   338,   363,   341,
    -526,   342,  -526,   343,   344,   349,   300,   347,   348,   350,
     353,   354,   355,   356,   357,   358,   359,   -26,  -526,   360,
     361,   362,   364,  -526,   365,  -526,   366,   367,   368,   369,
     370,   371,   372,   374,   375,   376,   377,   379,   380,   381,
     382,   383,   384,   385,   388,     3,   389,   390,   386,   392,
    -526,  -526,  -526,   393,   394,   396,   397,   300,   300,   300,
     300,   300,   300,   300,   300,  -526,   300,   300,   300,   300,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,   398,  -526,   420,
     399,   401,   395,   402,    48,   404,   400,  -526,   403,   300,
     300,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   300,   417,  -526,   300,   419,   456,   418,
     422,   423,   424,   300,   425,   426,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,   427,  -526,
     428,   461,   429,   433,   462,   435,   468,   432,  -526,   434,
    -526,   436,   437,   438,   -26,   439,   440,   441,  -526,   300,
     482,   442,  -526,   445,   458,   446,   475,   447,   448,  -526,
     499,   452,   450,   453,  -526,   451,   454,  -526,   457,   504,
    -526,   477,   506,   455,   463,   -26,   498,  -526,   459,   464,
     465,   466,   470,   467,   469,   472,   471,   473,   -26,   476,
     478,   512,    39,   -26,  -526,    63,   474,   479,   300,   481,
     483,   484,   485,   300,   -19,   486,   488,   489,   104,   378,
     490,  -526,   480,    39,   492,   493,   494,  -526,   495,   496,
      39,   517,   518,   491,  -526,   500,   502,   497,   -26,  -526,
     526,   104,   503,   501,   507,    39,   104,   505,   508,   509,
     510,   513,   511,   514,   -19,   515,     4,   516,   519,   520,
     521,  -526,     5,  -526,  -526,   522,   523,  -526,  -526
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
    -526,  -526,  -526,   533,  -526,   542,  -526,  -526,  -526,   -85,
    -526,  -526,   -50,  -526,  -526,  -526,  -526,  -526,  -182,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,   -70,   -61,  -526,  -101,
    -526,  -526,    96,    97,   275,   287,   294,   306,   313,   333,
     336,   337,   345,   346,   351,   352,   373,  -526,   387,  -526,
    -526,  -526,   283,  -167,  -526,  -526,  -526,     7,  -525,  -383
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
     180,   228,   390,   559,   565,    85,   202,   203,   204,   205,
      71,     1,   518,   177,   246,    88,    72,    10,    11,    12,
      13,   560,   169,   170,   171,   172,   254,   566,   158,   260,
     167,    14,   159,    89,   391,   518,   518,   519,   504,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   210,     5,   286,    90,   255,    86,
     519,   519,   392,    25,   183,   225,    15,    94,   229,   173,
     505,   230,    98,    99,   307,   212,    60,    61,    62,   184,
     185,   186,   187,   188,   189,   169,   170,   171,   172,   181,
     228,    91,    92,   324,   182,   326,   247,     8,   249,   342,
     250,   419,   420,   224,   346,   183,   224,   178,   258,   190,
     179,    57,   262,    58,   354,   169,   170,   171,   172,   508,
     184,   185,   186,   187,   188,   189,   169,   170,   171,   172,
     529,    26,   176,   169,   170,   171,   172,   535,    27,   224,
     292,   224,    59,    28,    60,    61,    62,   158,    63,   287,
     190,   159,   548,    29,   288,   157,   158,    31,   294,   213,
     159,   206,   223,    30,   207,   401,   402,   403,   404,   405,
     406,   407,   408,   226,   409,   410,   411,   412,    37,    32,
     251,   111,   112,   113,   114,   115,   116,   169,   170,   171,
     172,    33,    34,   121,   122,   123,   124,    35,   344,    70,
      36,    38,    39,    40,    41,    42,    43,   424,   425,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    74,
      80,   438,   365,    54,   440,    55,    56,    73,    75,    77,
      78,   447,    93,    79,   155,    81,    82,    83,    84,    94,
      95,    87,    96,    97,    98,    99,   156,   161,   162,   164,
     163,   165,   166,   215,   208,   217,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   168,   209,   467,   109,   110,
     111,   112,   113,   114,   115,   116,   211,   117,   118,   119,
     214,   120,   121,   122,   123,   124,   125,   216,   218,   219,
     220,   259,   221,   222,   231,   232,   253,   257,    93,   233,
     234,   235,   236,   237,   238,    94,    95,   239,    96,    97,
      98,    99,   240,   241,   242,   243,   512,   244,   245,   248,
     256,   517,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   252,   261,   263,   109,   110,   111,   112,   113,   114,
     115,   116,   264,   117,   118,   119,   265,   120,   121,   122,
     123,   124,   125,   266,   267,   268,   284,   293,   285,   463,
     291,   348,   295,   296,   298,   299,   300,   301,   303,   302,
     304,   305,   306,   327,   328,   309,   310,   311,   312,   313,
     314,   315,   526,   316,   317,   318,   319,   320,   321,   322,
     488,   323,   325,   343,   509,   347,   345,   422,   349,   350,
     351,   352,   353,   500,   355,   356,   357,   525,   507,   358,
     359,   360,   361,   362,   363,   364,   366,   367,   368,   414,
     369,   421,   370,   371,   372,   373,   374,   375,   376,   377,
     544,   378,   379,   380,   381,   549,   382,   383,   384,   385,
     386,   387,   388,   542,   389,   395,   393,   394,   396,   417,
     397,   398,   399,   400,   413,   442,   415,   416,   418,   423,
     452,   455,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   439,   441,   457,   443,   444,   445,
     446,   468,   448,   449,   450,   451,   453,   454,   456,   458,
     459,   471,   460,   473,   461,   462,   464,   465,   476,   469,
     466,   470,   483,   472,   474,   475,   477,   478,   480,   479,
     484,   481,   485,   482,   486,   489,   490,   487,   503,   493,
     491,   536,   492,   494,   495,   498,     9,   537,   496,   497,
     499,   510,   501,   528,   502,   543,   511,   513,    24,   514,
     308,   515,   516,   522,   523,   538,   524,   527,   530,   531,
     532,   557,   329,   534,   533,     0,   541,   539,   540,   545,
     546,   547,   550,   552,   330,   551,     0,   553,   555,   554,
     556,   331,   558,   561,     0,   562,     0,   563,   564,   567,
     568,     0,     0,   332,     0,     0,     0,     0,     0,     0,
     333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     334,     0,     0,   335,   336,     0,     0,     0,     0,     0,
       0,     0,   337,   338,     0,     0,     0,     0,   339,   340,
       0,     0,     0,   297,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341
};

static const yytype_int16 yycheck[] =
{
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      95,   178,     9,     9,     9,     9,   117,   118,   119,   120,
       7,    65,    41,    93,   206,    75,    13,     3,     4,     5,
       6,   556,    22,    23,    24,    25,     9,   562,    64,   221,
      90,    17,    68,    42,    41,    41,    41,    66,     9,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   134,    66,   248,    66,    41,    63,
      66,    66,    69,    64,    11,   176,    52,    15,   179,    69,
      41,   182,    20,    21,   266,   155,    12,    13,    14,    26,
      27,    28,    29,    30,    31,    22,    23,    24,    25,    64,
     267,    18,    19,   285,    69,   287,   207,     0,   209,   291,
     211,    63,    64,   174,   296,    11,   177,    66,   219,    56,
      69,    64,   223,    66,   306,    22,    23,    24,    25,    66,
      26,    27,    28,    29,    30,    31,    22,    23,    24,    25,
     523,    64,    69,    22,    23,    24,    25,   530,    64,   210,
     251,   212,    10,    64,    12,    13,    14,    64,    16,    66,
      56,    68,   545,    64,   249,    63,    64,    67,   253,    63,
      68,    66,    69,    64,    69,   357,   358,   359,   360,   361,
     362,   363,   364,    69,   366,   367,   368,   369,    64,    67,
      69,    46,    47,    48,    49,    50,    51,    22,    23,    24,
      25,    67,    67,    58,    59,    60,    61,    67,   293,    13,
      67,    64,    64,    64,    64,    64,    64,   399,   400,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,     9,
      64,   413,   317,    66,   416,    66,    66,    66,    66,    66,
      66,   423,     8,    66,    19,    67,    66,    66,    66,    15,
      16,    67,    18,    19,    20,    21,    67,    20,    18,    67,
      19,    67,    67,    64,    67,    67,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    69,    69,   459,    44,    45,
      46,    47,    48,    49,    50,    51,    69,    53,    54,    55,
      69,    57,    58,    59,    60,    61,    62,    66,    69,    69,
      67,    67,    66,    29,    66,    66,    64,    28,     8,    66,
      66,    66,    66,    66,    66,    15,    16,    66,    18,    19,
      20,    21,    66,    66,    66,    66,   508,    66,    66,    66,
      66,   513,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    69,    64,    66,    44,    45,    46,    47,    48,    49,
      50,    51,    27,    53,    54,    55,    67,    57,    58,    59,
      60,    61,    62,    66,    66,    64,    67,    64,    66,   454,
      66,     8,    67,    66,    66,    64,    67,    67,    64,    67,
      63,    66,    66,   287,   287,    67,    67,    67,    67,    67,
      67,    67,    14,    67,    67,    67,    67,    67,    67,    67,
     485,    67,    67,    64,   505,    67,    66,     7,    67,    67,
      67,    67,    63,   498,    67,    67,    66,   518,   503,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,     9,
      66,    27,    67,    67,    67,    67,    67,    67,    67,    67,
     541,    67,    67,    67,    67,   546,    67,    67,    67,    67,
      67,    67,    67,   538,    66,    69,    67,    67,    66,    64,
      67,    67,    66,    66,    66,     9,    67,    66,    66,    66,
       9,     9,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    66,    18,    69,    66,    66,
      66,     9,    67,    67,    67,    67,    67,    64,    63,    67,
      66,    43,    66,    28,    67,    67,    67,    67,     9,    67,
      69,    66,     8,    67,    67,    67,    64,    67,    67,    66,
      43,    67,    16,    66,    69,    27,    67,    64,    16,    63,
      66,    14,    67,    63,    67,    64,     3,    19,    69,    67,
      67,    67,    66,    63,    66,    19,    67,    66,     6,    66,
     267,    67,    67,    67,    66,    64,    67,    67,    66,    66,
      66,   554,   287,    67,    69,    -1,    69,    67,    66,    66,
      69,    64,    67,    64,   287,    67,    -1,    67,    67,    66,
      66,   287,    67,    67,    -1,    66,    -1,    67,    67,    67,
      67,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,
     287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287,    -1,    -1,   287,   287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   287,   287,    -1,    -1,    -1,    -1,   287,   287,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    71,    72,    73,    66,    74,    75,     0,    73,
       3,     4,     5,     6,    17,    52,    76,    77,    78,    80,
     117,   124,   125,   126,    75,    64,    64,    64,    64,    64,
      64,    67,    67,    67,    67,    67,    67,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    66,    66,    66,    64,    66,    10,
      12,    13,    14,    16,    81,    82,    83,    85,    86,    87,
      13,     7,    13,    66,     9,    66,    84,    66,    66,    66,
      64,    67,    66,    66,    66,     9,    63,    67,    82,    42,
      66,    18,    19,     8,    15,    16,    18,    19,    20,    21,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      57,    58,    59,    60,    61,    62,    88,    89,    90,    91,
      92,    93,    94,    95,    98,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     118,   119,   120,   121,   123,    19,    67,    63,    64,    68,
      79,    20,    18,    19,    67,    67,    67,    82,    69,    22,
      23,    24,    25,    69,    96,    97,    69,    96,    66,    69,
      79,    64,    69,    11,    26,    27,    28,    29,    30,    31,
      56,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    66,    69,    67,    69,
      96,    69,    96,    63,    69,    64,    66,    67,    69,    69,
      67,    66,    29,    69,    97,    99,    69,   122,   123,    99,
      99,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    88,    99,    66,    99,
      99,    69,    69,    64,     9,    41,    66,    28,    99,    67,
      88,    64,    99,    66,    27,    67,    66,    66,    64,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    67,    66,    88,    66,    79,   100,
     101,    66,    99,    64,    79,    67,    66,   118,    66,    64,
      67,    67,    67,    64,    63,    66,    66,    88,   122,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    88,    67,    88,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    88,    64,    79,    66,    88,    67,     8,    67,
      67,    67,    67,    63,    88,    67,    67,    66,    66,    66,
      66,    66,    66,    66,    66,    79,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    66,
       9,    41,    69,    67,    67,    69,    66,    67,    67,    66,
      66,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    66,     9,    67,    66,    64,    66,    63,
      64,    27,     7,    66,    88,    88,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    88,    67,
      88,    66,     9,    69,    66,    66,    66,    88,    67,    67,
      67,    67,     9,    67,    64,     9,    63,    18,    67,    66,
      66,    67,    67,    79,    67,    67,    69,    88,     9,    67,
      66,    43,    67,    28,    67,    67,     9,    64,    67,    66,
      67,    67,    66,     8,    43,    16,    69,    64,    79,    27,
      67,    66,    67,    63,    63,    67,    69,    67,    64,    67,
      79,    66,    66,    16,     9,    41,   129,    79,    66,    99,
      67,    67,    88,    66,    66,    67,    67,    88,    41,    66,
     127,   128,    67,    66,    67,    99,    14,    67,    63,   129,
      66,    66,    66,    69,    67,   129,    14,    19,    64,    67,
      66,    69,    79,    19,    99,    66,    69,    64,   129,    99,
      67,    67,    64,    67,    66,    67,    66,   127,    67,     9,
     128,    67,    66,    67,    67,     9,   128,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    83,    84,    84,    85,    85,    85,    85,
      86,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   117,   118,   118,   118,   119,   119,   120,
     120,   121,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   126,   127,   128,   128,
     128,   128,   129,   129,   129
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
#line 153 "parser.y" /* yacc.c:1646  */
    { 
                                                    (yylsp[0]);
                                                    (yyval.program) = new Program((yyvsp[0].funcbodies));
                                                    if (ReportError::findNumErrors() == 0) {
                                                        (yyval.program)->Print(0);
                                                    }
                                                }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 162 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies)=(yyvsp[-1].funcbodies))->Append((yyvsp[0].funcbody)); }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 163 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies) = new List<FuncBody *>)->Append((yyvsp[0].funcbody)); }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.funcbody) = new FuncBody((yyvsp[0].stmts), (yyvsp[-1].identifier)); }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 169 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts)=(yyvsp[-1].stmts))->Append((yyvsp[0].stmt)); }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 170 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts) = new List<Stmt *>)->Append((yyvsp[0].stmt)); }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 173 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].note); }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].barrier); }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].insn); }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].jumpinsn); }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].call); }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].codelabel); }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval.barrier) = new Barrier(); }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel(); }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel(); }
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 193 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel(); }
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer(-(yyvsp[0].integerConstant)); }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer((yyvsp[0].integerConstant)); }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-8].maincmd)); }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-14].maincmd)); }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-11].maincmd)); }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-5].maincmd)); }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn(NULL); }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-12].maincmd)); }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].plaincmd); }
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].parallelcmd); }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].clobbercmd); }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].setcmd); }
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].usecmd); }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.parallelcmd) = new ParallelCmd((yyvsp[-1].cmds)); }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 228 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = (yyvsp[-3].cmds))->Append((yyvsp[-1].plaincmd)); }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = new List<PlainCmd *>)->Append((yyvsp[-1].plaincmd)); }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 234 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.setcmd) = new SetCmd((yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.usecmd) = new UseCmd(); }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].intoperand); }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].exproperand); }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].extendoperand); }
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].symbolrefoperand); }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].derefoperand); }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].negoperand); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].dest); }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.intoperand) = new IntOperand((yyvsp[0].integer)->getValue()); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand((yyvsp[-3].locinfo),(yyvsp[-1].typeinfo),(yyvsp[0].expr)); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftexpr)); }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftexpr)); }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftrtexpr)); }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftrtexpr)); }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].compareexpr)); }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].plusexpr)); }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].minusexpr)); }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].multexpr)); }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].divexpr)); }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].udivexpr)); }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].modexpr)); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].umodexpr)); }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].subregexpr)); }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].conditionexpr)); }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].symbolrefexpr)); }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.derefoperand) = new DerefOperand((yyvsp[-5].locinfo),(yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefoperand) = new SymbolRefOperand((yyvsp[-1].stringConstant)); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.negoperand) = new NegOperand((yyvsp[-1].operand)); }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 285 "parser.y" /* yacc.c:1646  */
    { (yyval.negoperand) = new NegOperand((yyvsp[-1].operand)); }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[-1].memtype), (yyvsp[0].flags)); }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[0].memtype),NULL); }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 292 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = (yyvsp[-1].flags))->Append((yyvsp[0].flag)); }
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 293 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = new List<Flag *>)->Append((yyvsp[0].flag)); }
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("i"); }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("v"); }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("f"); }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("c"); }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("mem"); }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("reg"); }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("si"); }
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("di"); }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("qi"); }
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ti"); }
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("cc"); }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccz"); }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgc"); }
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgoc"); }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].integerexpr); }
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].plusexpr); }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].minusexpr); }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].multexpr); }
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftexpr); }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftexpr); }
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftrtexpr); }
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 323 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftrtexpr); }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].subregexpr); }
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].compareexpr); }
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].divexpr); }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].udivexpr); }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].modexpr); }
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].umodexpr); }
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].conditionexpr); }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].symbolrefexpr); }
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.integerexpr) = new IntegerExpr((yyvsp[0].integer)->getValue()); }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.plusexpr) = new PlusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.minusexpr) = new MinusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.multexpr) = new MultExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.divexpr) = new DivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.udivexpr) = new UDivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.modexpr) = new ModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.umodexpr) = new UModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftexpr) = new LshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftexpr) = new AshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftrtexpr) = new LshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftrtexpr) = new AshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.subregexpr) = new SubregExpr((yyvsp[-4].typeinfo),(yyvsp[-2].operand)); }
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 373 "parser.y" /* yacc.c:1646  */
    { (yyval.compareexpr) = new CompareExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.conditionexpr) = new ConditionExpr((yyvsp[-8].condition),(yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefexpr) = new SymbolRefExpr((yyvsp[-3].typeinfo),(yyvsp[-1].stringConstant)); }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-11].dest)); }
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-8].dest)); }
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 389 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].label); }
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 390 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].ifthenelse); }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].pc); }
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 398 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.pc) = new Pc(); }
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 405 "parser.y" /* yacc.c:1646  */
    { (yyval.comparison) = new Comparison((yyvsp[-6].condition),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("lt"); }
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gt"); }
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("le"); }
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ge"); }
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 412 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("eq"); }
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ne"); }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gtu"); }
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ltu"); }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("geu"); }
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 417 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("leu"); }
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].retcall); }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].noretcall); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 428 "parser.y" /* yacc.c:1646  */
    { (yyval.retcall) = new RetCall((yyvsp[-33].typeinfo),(yyvsp[-32].integerConstant),(yyvsp[-19].stringConstant),(yyvsp[-1].exprlist)); }
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.noretcall) = new NoRetCall((yyvsp[-18].stringConstant),(yyvsp[-1].exprlist)); }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 438 "parser.y" /* yacc.c:1646  */
    { (yyval.exprlist) = new ExprList((yyvsp[0].exprlistexpr)); }
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 442 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr) = new List<pair<int, const char*>>)->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 444 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr) = new List<pair<int, const char*>>)->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 446 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr)=(yyvsp[-1].exprlistexpr))->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 448 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprlistexpr)=(yyvsp[-1].exprlistexpr))->Append(make_pair((yyvsp[-5].integerConstant),(yyvsp[-6].typeinfo)->getType())); }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 451 "parser.y" /* yacc.c:1646  */
    { }
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 452 "parser.y" /* yacc.c:1646  */
    { }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 453 "parser.y" /* yacc.c:1646  */
    { }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2811 "y.tab.c" /* yacc.c:1646  */
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
#line 456 "parser.y" /* yacc.c:1906  */


void InitParser()
{
   printf("Initializing parser.\n\n");
   yydebug = false;
}
