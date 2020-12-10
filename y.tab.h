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
    T_Truncate = 323,
    T_Scratch = 324,
    T_StringConstant = 325,
    T_IntConstant = 326,
    T_FunBegin = 327,
    TWO = 328
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
#define T_Truncate 323
#define T_Scratch 324
#define T_StringConstant 325
#define T_IntConstant 326
#define T_FunBegin 327
#define TWO 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "parser.y" /* yacc.c:1909  */

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
    TruncateOperand *truncateoperand;

    int integerConstant;
    const char *stringConstant;
    char identifier[32];

#line 268 "y.tab.h" /* yacc.c:1909  */
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
