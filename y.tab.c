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
    T_StringConstant = 315,
    T_IntConstant = 316,
    T_FunBegin = 317
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
#define T_StringConstant 315
#define T_IntConstant 316
#define T_FunBegin 317

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

    int integerConstant;
    const char *stringConstant;
    char identifier[32];

#line 299 "y.tab.c" /* yacc.c:355  */
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

#line 330 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   642

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  548

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      63,    64,     2,     2,     2,    65,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   145,   145,   154,   155,   158,   161,   162,   165,   166,
     167,   168,   169,   170,   173,   174,   177,   180,   182,   184,
     188,   189,   192,   194,   197,   199,   201,   203,   208,   209,
     212,   213,   214,   217,   220,   221,   224,   225,   226,   227,
     230,   233,   236,   237,   238,   239,   240,   241,   244,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   264,   265,   268,   271,   274,   275,
     278,   279,   282,   283,   284,   285,   288,   289,   292,   293,
     294,   295,   296,   297,   298,   299,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   319,   322,   325,   328,   331,   334,   337,   340,   343,
     346,   349,   352,   355,   358,   361,   364,   367,   371,   372,
     373,   376,   377,   380,   381,   384,   387,   390,   391,   392,
     393,   394,   395,   396,   397,   400,   401,   404,   411,   418,
     420,   422,   424,   428,   429,   430
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
  "T_UMod", "T_CCGOCType", "T_ZeExtend", "T_Gtu", "T_Ltu",
  "T_StringConstant", "T_IntConstant", "T_FunBegin", "'('", "')'", "'-'",
  "':'", "$accept", "Program", "FuncBodies", "FuncBody", "Stmts", "Stmt",
  "Note", "Barrier", "CodeLabel", "Integer", "Insn", "MainCmd", "PlainCmd",
  "ParallelCmd", "Cmds", "ClobberCmd", "SetCmd", "UseCmd", "Operand",
  "IntOperand", "ExprOperand", "ExtendOperand", "DerefOperand",
  "SymbolRefOperand", "LocInfo", "Flags", "Flag", "MemType", "TypeInfo",
  "Expr", "IntegerExpr", "PlusExpr", "MinusExpr", "MultExpr", "DivExpr",
  "UDivExpr", "ModExpr", "UModExpr", "LshiftExpr", "AshiftExpr",
  "LshiftRtExpr", "AshiftRtExpr", "SubregExpr", "CompareExpr",
  "ConditionExpr", "JumpInsn", "Dest", "Label", "IfThenElse", "Pc",
  "Comparison", "Condition", "Call", "RetCall", "NoRetCall", "Junk",
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
     315,   316,   317,    40,    41,    45,    58
};
# endif

#define YYPACT_NINF -511

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-511)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -47,   -20,    67,   -47,  -511,    65,   -20,  -511,  -511,  -511,
      17,    22,    36,    48,    54,    63,   119,   129,   131,   133,
     134,   135,  -511,  -511,  -511,    80,    98,   123,   139,   142,
     143,  -511,  -511,  -511,  -511,  -511,  -511,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,  -511,   155,  -511,
     156,   157,   158,    77,   166,   183,    13,   159,   214,   161,
     165,   167,   168,   171,   163,  -511,  -511,  -511,  -511,  -511,
     172,   177,   179,     3,   180,   178,   -29,   132,   284,   210,
     181,    51,   221,   225,   227,   184,   185,  -511,   195,  -511,
     178,   194,    66,   164,    14,   120,  -511,  -511,  -511,   -39,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,  -511,  -511,  -511,  -511,  -511,  -511,    92,    92,    92,
      92,  -511,  -511,   206,  -511,  -511,  -511,  -511,  -511,   208,
     164,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,   212,
     164,   187,   213,  -511,   219,   220,   217,   222,   223,  -511,
    -511,  -511,   226,   224,  -511,  -511,  -511,  -511,   255,    83,
    -511,   103,    96,    92,  -511,  -511,    92,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,   228,   230,   231,   232,   233,
     234,   235,   238,   243,   244,   245,   246,   248,   249,   250,
     251,    92,   164,    92,   111,   259,   265,  -511,    24,   264,
     257,    92,  -511,   218,   275,    92,  -511,   313,   280,   282,
     283,   286,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,    95,   285,
      92,   289,   120,   287,   290,    72,   291,   294,   288,   292,
     293,   297,   296,   298,   284,    96,  -511,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   314,   315,   284,  -511,  -511,  -511,   284,   316,   120,
     318,  -511,   284,   319,   278,   321,  -511,   322,  -511,   323,
     328,   284,   325,   326,   329,   331,   332,   333,   336,   337,
     338,   339,   120,  -511,   340,   341,   342,   343,  -511,  -511,
     327,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   356,   357,   358,   359,   361,   363,    19,   364,
     365,   367,   368,  -511,  -511,   366,   370,   372,   373,   284,
     284,   284,   284,   284,   284,   284,   284,  -511,   284,   284,
     284,   284,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,   374,  -511,   398,
     375,   377,   380,   379,   114,   335,   420,  -511,   381,   284,
     284,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   284,   394,  -511,   284,   396,   429,   395,
     397,   399,   400,   284,   401,   402,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,   403,  -511,
     404,   434,   405,   409,   436,   411,   446,   408,  -511,   410,
    -511,   412,   413,   414,   120,   415,   416,   417,  -511,   284,
     465,   418,  -511,   421,   317,   422,   448,   423,   424,  -511,
     472,   428,   426,   430,  -511,   427,   431,  -511,   433,   477,
    -511,   449,   478,   432,   438,   120,   355,  -511,   437,   439,
     440,   443,   445,   442,   441,   444,   450,   451,   120,   447,
     453,   481,    33,   120,  -511,    10,   454,   455,   284,   457,
     458,   459,   460,   284,    38,   461,   463,   464,    92,   486,
     466,   452,    33,   468,   469,   470,  -511,   456,   471,    33,
     495,   494,   473,  -511,   474,   476,   475,   120,  -511,   498,
      92,   479,   480,   482,    33,    92,   483,   484,   488,   487,
     489,   490,   492,    38,   493,    21,   496,   499,   497,   500,
    -511,    23,  -511,  -511,   501,   502,  -511,  -511
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     5,     7,     1,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     6,     0,     0,     0,     0,     0,
       0,     8,     9,    13,    10,    11,    12,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,    16,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    33,
       0,     0,     0,     0,     0,     0,    76,    77,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,   129,   130,   131,   132,     0,     0,     0,
       0,   133,   134,     0,    42,    43,    44,    46,    45,     0,
      69,    55,    56,    57,    58,    59,    60,    61,    51,    50,
      53,    52,    62,    54,    63,    47,   118,   119,   120,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    17,
      19,    35,     0,     0,    72,    73,    74,    75,     0,     0,
      71,     0,     0,     0,    48,   121,     0,    81,    78,    79,
      80,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    20,     0,     0,
       0,     0,    34,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,    49,    86,     0,     0,     0,
       0,    25,     0,     0,     0,     0,    38,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,     0,     0,     0,     0,    65,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,    66,    87,    88,    89,    96,    97,    98,    99,
      91,    90,    93,    92,    94,    95,   100,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     109,   110,   111,   112,   114,   106,   107,   108,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
     115,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,   124,     0,     0,   117,     0,     0,
      23,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,     0,   140,   142,     0,     0,   139,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -511,  -511,  -511,   511,  -511,   521,  -511,  -511,  -511,   -85,
    -511,  -511,   -61,  -511,  -511,  -511,  -511,  -511,  -178,  -511,
    -511,  -511,  -511,  -511,  -511,   -69,   -73,  -511,  -101,  -511,
    -511,   256,   263,   267,   271,   272,   277,   295,   320,   324,
     330,   334,   360,   362,   369,  -511,   371,  -511,  -511,  -511,
     376,  -161,  -511,  -511,  -511,  -510,  -372
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,     7,    16,    17,    18,   155,
      19,    64,    65,    66,    76,    67,    68,    69,   123,   124,
     125,   126,   127,   128,   129,   169,   170,   130,   185,   275,
     276,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    20,   145,   146,   147,   148,
     218,   149,    21,    22,    23,   500,   486
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     174,   219,    85,    89,    88,     1,   196,   197,   198,   199,
      71,   177,   175,   536,   171,   539,    72,   176,   370,   162,
     538,   545,   544,   243,    90,   249,   178,   179,   180,   181,
     182,   183,   484,     5,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     371,   202,   498,    86,   498,   244,   184,     8,    10,    11,
      12,    13,   220,   488,   485,   221,   292,   172,    25,   498,
     173,   204,    14,    26,   499,   372,   499,    94,   164,   165,
     166,   167,    98,    99,   219,   310,   216,    27,   216,   325,
     238,   499,   239,   177,   329,   164,   165,   166,   167,    28,
     247,   152,   153,   336,   251,    29,   154,    15,   178,   179,
     180,   181,   182,   183,    30,   164,   165,   166,   167,   216,
     508,   216,   168,   164,   165,   166,   167,   514,    57,   278,
      58,    37,   111,   112,   113,   114,   115,   116,   184,   215,
      91,    92,   527,   274,   121,   122,   153,   280,   273,    38,
     154,   381,   382,   383,   384,   385,   386,   387,   388,   217,
     389,   390,   391,   392,   399,   400,    59,   240,    60,    61,
      62,   153,    63,    31,    39,   154,   164,   165,   166,   167,
      60,    61,    62,    32,   327,    33,    70,    34,    35,    36,
      40,   404,   405,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   418,    53,   347,   420,    54,
      55,    56,    73,    74,    75,   427,    93,    81,    77,   150,
      78,    79,    80,    94,    95,    82,    96,    97,    98,    99,
      83,   156,    84,   157,    87,   151,   158,   205,   159,   160,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   161,
     163,   447,   109,   110,   111,   112,   113,   114,   115,   116,
     200,   117,   118,   119,   201,   120,   121,   122,   203,   206,
     207,   209,   248,   208,   214,   246,   331,   213,   210,   211,
     212,   222,    93,   223,   224,   225,   226,   227,   228,    94,
      95,   229,    96,    97,    98,    99,   230,   231,   232,   233,
     492,   234,   235,   236,   237,   497,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   241,   242,   245,   109,   110,
     111,   112,   113,   114,   115,   116,   250,   117,   118,   119,
     252,   120,   121,   122,   253,   254,   255,   256,   277,   443,
     279,   281,   286,   282,   284,   285,   287,   288,   289,   290,
     451,   291,   401,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   326,   308,   309,
     468,   328,   469,   330,   489,   332,   333,   334,   335,   337,
     338,   352,   339,   480,   340,   341,   342,   504,   487,   343,
     344,   345,   346,   348,   349,   350,   351,   394,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   523,
     364,   365,   366,   367,   528,   368,   369,   402,   373,   374,
     377,   376,   521,   375,   378,   379,   380,   393,   422,   395,
     396,   397,   398,   432,   403,   435,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   419,   421,
     424,   423,   425,   426,   437,   428,   429,   430,   431,   433,
     434,   436,   438,   439,   448,   440,   453,   441,   442,   444,
     445,   456,   449,   446,   450,   463,   452,   454,   455,   457,
     458,   460,   464,   459,   465,   461,   462,   483,   466,   467,
     505,   470,   471,   473,   472,   474,   475,   476,   477,   515,
     481,   478,   507,   516,     9,   479,   482,   522,   490,   491,
     493,   494,   512,   495,   496,   501,   502,    24,   503,   311,
     506,   509,   510,   511,   517,   513,   312,     0,   518,   519,
     313,   520,   524,   526,   314,   315,   525,   529,   530,   531,
     316,   532,   533,     0,   534,   535,     0,   537,     0,     0,
     540,   542,   541,     0,   543,   546,   547,     0,   317,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   318,     0,     0,     0,   319,     0,     0,
       0,     0,     0,   320,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   293,     0,   322,     0,   323,     0,     0,     0,     0,
       0,     0,   324
};

static const yytype_int16 yycheck[] =
{
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      95,   172,     9,    42,    75,    62,   117,   118,   119,   120,
       7,    11,    61,   533,    93,   535,    13,    66,     9,    90,
       9,   541,     9,     9,    63,   213,    26,    27,    28,    29,
      30,    31,     9,    63,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
      41,   130,    41,    60,    41,    41,    56,     0,     3,     4,
       5,     6,   173,    63,    41,   176,   254,    63,    61,    41,
      66,   150,    17,    61,    63,    66,    63,    15,    22,    23,
      24,    25,    20,    21,   255,   273,   169,    61,   171,   277,
     201,    63,   203,    11,   282,    22,    23,    24,    25,    61,
     211,    60,    61,   291,   215,    61,    65,    52,    26,    27,
      28,    29,    30,    31,    61,    22,    23,    24,    25,   202,
     502,   204,    66,    22,    23,    24,    25,   509,    61,   240,
      63,    61,    46,    47,    48,    49,    50,    51,    56,    66,
      18,    19,   524,   238,    58,    59,    61,   242,    63,    61,
      65,   339,   340,   341,   342,   343,   344,   345,   346,    66,
     348,   349,   350,   351,    60,    61,    10,    66,    12,    13,
      14,    61,    16,    64,    61,    65,    22,    23,    24,    25,
      12,    13,    14,    64,   279,    64,    13,    64,    64,    64,
      61,   379,   380,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,   393,    61,   302,   396,    63,
      63,    63,    63,     9,    63,   403,     8,    64,    63,    19,
      63,    63,    61,    15,    16,    63,    18,    19,    20,    21,
      63,    20,    63,    18,    64,    64,    19,    60,    64,    64,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    64,
      66,   439,    44,    45,    46,    47,    48,    49,    50,    51,
      64,    53,    54,    55,    66,    57,    58,    59,    66,    66,
      61,    64,    64,    63,    29,    28,     8,    63,    66,    66,
      64,    63,     8,    63,    63,    63,    63,    63,    63,    15,
      16,    63,    18,    19,    20,    21,    63,    63,    63,    63,
     488,    63,    63,    63,    63,   493,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    66,    61,    63,    44,    45,
      46,    47,    48,    49,    50,    51,    61,    53,    54,    55,
      27,    57,    58,    59,    64,    63,    63,    61,    63,   434,
      61,    64,    64,    63,    63,    61,    64,    64,    61,    63,
      43,    63,    27,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    61,    64,    64,
     465,    63,    27,    64,   485,    64,    64,    64,    60,    64,
      64,    64,    63,   478,    63,    63,    63,   498,   483,    63,
      63,    63,    63,    63,    63,    63,    63,     9,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,   520,
      64,    64,    64,    64,   525,    64,    63,     7,    64,    64,
      64,    63,   517,    66,    64,    63,    63,    63,     9,    64,
      63,    61,    63,     9,    63,     9,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    63,
      63,    66,    63,    63,    18,    64,    64,    64,    64,    64,
      61,    60,    64,    63,     9,    63,    28,    64,    64,    64,
      64,     9,    64,    66,    63,     8,    64,    64,    64,    61,
      64,    64,    43,    63,    16,    64,    63,    16,    66,    61,
      14,    64,    63,    60,    64,    60,    64,    66,    64,    14,
      63,    61,    60,    19,     3,    64,    63,    19,    64,    64,
      63,    63,    66,    64,    64,    64,    63,     6,    64,   273,
      64,    63,    63,    63,    61,    64,   273,    -1,    64,    63,
     273,    66,    63,    61,   273,   273,    66,    64,    64,    61,
     273,    64,    63,    -1,    64,    63,    -1,    64,    -1,    -1,
      64,    64,    63,    -1,    64,    64,    64,    -1,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   273,    -1,    -1,    -1,   273,    -1,    -1,
      -1,    -1,    -1,   273,    -1,    -1,    -1,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,   273,    -1,   273,    -1,    -1,    -1,    -1,
      -1,    -1,   273
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,    68,    69,    70,    63,    71,    72,     0,    70,
       3,     4,     5,     6,    17,    52,    73,    74,    75,    77,
     112,   119,   120,   121,    72,    61,    61,    61,    61,    61,
      61,    64,    64,    64,    64,    64,    64,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    63,    63,    63,    61,    63,    10,
      12,    13,    14,    16,    78,    79,    80,    82,    83,    84,
      13,     7,    13,    63,     9,    63,    81,    63,    63,    63,
      61,    64,    63,    63,    63,     9,    60,    64,    79,    42,
      63,    18,    19,     8,    15,    16,    18,    19,    20,    21,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      57,    58,    59,    85,    86,    87,    88,    89,    90,    91,
      94,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   113,   114,   115,   116,   118,
      19,    64,    60,    61,    65,    76,    20,    18,    19,    64,
      64,    64,    79,    66,    22,    23,    24,    25,    66,    92,
      93,    92,    63,    66,    76,    61,    66,    11,    26,    27,
      28,    29,    30,    31,    56,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      64,    66,    92,    66,    92,    60,    66,    61,    63,    64,
      66,    66,    64,    63,    29,    66,    93,    66,   117,   118,
      95,    95,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    95,    95,
      66,    66,    61,     9,    41,    63,    28,    95,    64,    85,
      61,    95,    27,    64,    63,    63,    61,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    63,    76,    96,    97,    63,    95,    61,
      76,    64,    63,   113,    63,    61,    64,    64,    64,    61,
      63,    63,    85,   117,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      85,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    85,    61,    76,    63,    85,
      64,     8,    64,    64,    64,    60,    85,    64,    64,    63,
      63,    63,    63,    63,    63,    63,    63,    76,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    63,
       9,    41,    66,    64,    64,    66,    63,    64,    64,    63,
      63,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    63,     9,    64,    63,    61,    63,    60,
      61,    27,     7,    63,    85,    85,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    85,    64,
      85,    63,     9,    66,    63,    63,    63,    85,    64,    64,
      64,    64,     9,    64,    61,     9,    60,    18,    64,    63,
      63,    64,    64,    76,    64,    64,    66,    85,     9,    64,
      63,    43,    64,    28,    64,    64,     9,    61,    64,    63,
      64,    64,    63,     8,    43,    16,    66,    61,    76,    27,
      64,    63,    64,    60,    60,    64,    66,    64,    61,    64,
      76,    63,    63,    16,     9,    41,   123,    76,    63,    95,
      64,    64,    85,    63,    63,    64,    64,    85,    41,    63,
     122,    64,    63,    64,    95,    14,    64,    60,   123,    63,
      63,    63,    66,    64,   123,    14,    19,    61,    64,    63,
      66,    76,    19,    95,    63,    66,    61,   123,    95,    64,
      64,    61,    64,    63,    64,    63,   122,    64,     9,   122,
      64,    63,    64,    64,     9,   122,    64,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    73,    73,    74,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    80,    81,    81,    82,    82,    82,    82,
      83,    84,    85,    85,    85,    85,    85,    85,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    90,    91,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   112,   113,   113,
     113,   114,   114,   115,   115,   116,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   121,   122,
     122,   122,   122,   123,   123,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     5,     4,     4,     9,     8,     9,
       2,     1,    15,    21,    18,    12,    16,    19,     1,     1,
       1,     1,     1,     3,     4,     3,     7,     8,     7,     8,
       7,     8,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     6,     7,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     6,     8,     9,    23,    20,     1,     1,
       1,     2,     4,    10,    12,     1,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,    44,    35,    14,
      12,    14,    12,     1,     7,     8
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
#line 145 "parser.y" /* yacc.c:1646  */
    { 
                                                    (yylsp[0]);
                                                    (yyval.program) = new Program((yyvsp[0].funcbodies));
                                                    if (ReportError::findNumErrors() == 0) {
                                                        (yyval.program)->Print(0);
                                                    }
                                                }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 154 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies)=(yyvsp[-1].funcbodies))->Append((yyvsp[0].funcbody)); }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 155 "parser.y" /* yacc.c:1646  */
    { ((yyval.funcbodies) = new List<FuncBody *>)->Append((yyvsp[0].funcbody)); }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval.funcbody) = new FuncBody((yyvsp[0].stmts), (yyvsp[-1].identifier)); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts)=(yyvsp[-1].stmts))->Append((yyvsp[0].stmt)); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 162 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts) = new List<Stmt *>)->Append((yyvsp[0].stmt)); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].note); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].barrier); }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].insn); }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].jumpinsn); }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].call); }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].codelabel); }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.note) = new Note(); }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.barrier) = new Barrier(); }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel(); }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel(); }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval.codelabel) = new CodeLabel(); }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer(-(yyvsp[0].integerConstant)); }
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.integer) = new Integer((yyvsp[0].integerConstant)); }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-8].maincmd)); }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-14].maincmd)); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-11].maincmd)); }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-5].maincmd)); }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn(NULL); }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.insn) = new Insn((yyvsp[-12].maincmd)); }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].plaincmd); }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.maincmd) = (yyvsp[0].parallelcmd); }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].clobbercmd); }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].setcmd); }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.plaincmd) = (yyvsp[0].usecmd); }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.parallelcmd) = new ParallelCmd((yyvsp[-1].cmds)); }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 220 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = (yyvsp[-3].cmds))->Append((yyvsp[-1].plaincmd)); }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 221 "parser.y" /* yacc.c:1646  */
    { ((yyval.cmds) = new List<PlainCmd *>)->Append((yyvsp[-1].plaincmd)); }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.clobbercmd) = new ClobberCmd(); }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.setcmd) = new SetCmd((yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.usecmd) = new UseCmd(); }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].intoperand); }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].exproperand); }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].extendoperand); }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].symbolrefoperand); }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].derefoperand); }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.operand) = (yyvsp[0].dest); }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.intoperand) = new IntOperand((yyvsp[0].integer)->getValue()); }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand((yyvsp[-3].locinfo),(yyvsp[-1].typeinfo),(yyvsp[0].expr)); }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftexpr)); }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftexpr)); }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].ashiftrtexpr)); }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].lshiftrtexpr)); }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].compareexpr)); }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].plusexpr)); }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].minusexpr)); }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].multexpr)); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].divexpr)); }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].udivexpr)); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].modexpr)); }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].umodexpr)); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].subregexpr)); }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.exproperand) = new ExprOperand(NULL,NULL,(yyvsp[0].conditionexpr)); }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.extendoperand) = new ExtendOperand((yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.derefoperand) = new DerefOperand((yyvsp[-5].locinfo),(yyvsp[-3].typeinfo),(yyvsp[-1].operand)); }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolrefoperand) = new SymbolRefOperand((yyvsp[-1].stringConstant)); }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[-1].memtype), (yyvsp[0].flags)); }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.locinfo) = new LocInfo((yyvsp[0].memtype),NULL); }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 278 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = (yyvsp[-1].flags))->Append((yyvsp[0].flag)); }
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 279 "parser.y" /* yacc.c:1646  */
    { ((yyval.flags) = new List<Flag *>)->Append((yyvsp[0].flag)); }
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("i"); }
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("v"); }
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("f"); }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 285 "parser.y" /* yacc.c:1646  */
    { (yyval.flag) = new Flag("c"); }
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("mem"); }
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.memtype) = new MemType("reg"); }
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("si"); }
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("di"); }
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("qi"); }
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ti"); }
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("cc"); }
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccz"); }
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgc"); }
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.typeinfo) = new TypeInfo("ccgoc"); }
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].integerexpr); }
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].plusexpr); }
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].minusexpr); }
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].multexpr); }
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftexpr); }
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftexpr); }
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].ashiftrtexpr); }
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].lshiftrtexpr); }
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].subregexpr); }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].compareexpr); }
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].divexpr); }
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].udivexpr); }
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].modexpr); }
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].umodexpr); }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].conditionexpr); }
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.integerexpr) = new IntegerExpr((yyvsp[0].integer)->getValue()); }
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.plusexpr) = new PlusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.minusexpr) = new MinusExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.multexpr) = new MultExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.divexpr) = new DivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.udivexpr) = new UDivExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.modexpr) = new ModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.umodexpr) = new UModExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftexpr) = new LshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftexpr) = new AshiftExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.lshiftrtexpr) = new LshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.ashiftrtexpr) = new AshiftRtExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.subregexpr) = new SubregExpr((yyvsp[-4].typeinfo),(yyvsp[-2].operand)); }
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.compareexpr) = new CompareExpr((yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.conditionexpr) = new ConditionExpr((yyvsp[-8].condition),(yyvsp[-6].typeinfo),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-11].dest)); }
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 368 "parser.y" /* yacc.c:1646  */
    { (yyval.jumpinsn) = new JumpInsn((yyvsp[-8].dest)); }
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].label); }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].ifthenelse); }
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 373 "parser.y" /* yacc.c:1646  */
    { (yyval.dest) = (yyvsp[0].pc); }
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.label) = new Label((yyvsp[0].integerConstant)); }
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 380 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.ifthenelse) = new IfThenElse((yyvsp[-7].comparison),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.pc) = new Pc(); }
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.comparison) = new Comparison((yyvsp[-6].condition),(yyvsp[-4].operand),(yyvsp[-1].operand)); }
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 390 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("lt"); }
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gt"); }
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("le"); }
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ge"); }
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("eq"); }
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ne"); }
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("gtu"); }
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 397 "parser.y" /* yacc.c:1646  */
    { (yyval.condition) = new Condition("ltu"); }
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].retcall); }
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = (yyvsp[0].noretcall); }
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.retcall) = new RetCall((yyvsp[-33].typeinfo),(yyvsp[-32].integerConstant),(yyvsp[-19].stringConstant)); }
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.noretcall) = new NoRetCall((yyvsp[-18].stringConstant)); }
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 419 "parser.y" /* yacc.c:1646  */
    {  }
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 421 "parser.y" /* yacc.c:1646  */
    {  }
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 423 "parser.y" /* yacc.c:1646  */
    {  }
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 425 "parser.y" /* yacc.c:1646  */
    {  }
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 428 "parser.y" /* yacc.c:1646  */
    { }
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 429 "parser.y" /* yacc.c:1646  */
    { }
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 430 "parser.y" /* yacc.c:1646  */
    { }
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2732 "y.tab.c" /* yacc.c:1646  */
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
#line 433 "parser.y" /* yacc.c:1906  */


void InitParser()
{
   printf("Initializing parser.\n\n");
   yydebug = false;
}
