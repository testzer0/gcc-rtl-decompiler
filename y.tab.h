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
    T_Clobber = 266,
    T_Set = 267,
    T_Use = 268,
    T_IfThenElse = 269,
    T_ConstInt = 270,
    T_Barrier = 271,
    T_Mem = 272,
    T_Reg = 273,
    T_Pc = 274,
    T_LabelRef = 275,
    T_IFlag = 276,
    T_VFlag = 277,
    T_FFlag = 278,
    T_CFlag = 279,
    T_SIType = 280,
    T_DIType = 281,
    T_QIType = 282,
    T_CCType = 283,
    T_CCZType = 284,
    T_CCGCType = 285,
    T_Plus = 286,
    T_Minus = 287,
    T_Mult = 288,
    T_Div = 289,
    T_Lshift = 290,
    T_Ashift = 291,
    T_LshiftRt = 292,
    T_AshiftRt = 293,
    T_Subreg = 294,
    T_ExprList = 295,
    T_EndPara = 296,
    T_RArrow = 297,
    T_SiExtend = 298,
    T_Compare = 299,
    T_Lt = 300,
    T_Gt = 301,
    T_Le = 302,
    T_Ge = 303,
    T_Eq = 304,
    T_Ne = 305,
    T_CodeLabel = 306,
    T_StringConstant = 307,
    T_IntConstant = 308,
    T_FunBegin = 309
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
#define T_Clobber 266
#define T_Set 267
#define T_Use 268
#define T_IfThenElse 269
#define T_ConstInt 270
#define T_Barrier 271
#define T_Mem 272
#define T_Reg 273
#define T_Pc 274
#define T_LabelRef 275
#define T_IFlag 276
#define T_VFlag 277
#define T_FFlag 278
#define T_CFlag 279
#define T_SIType 280
#define T_DIType 281
#define T_QIType 282
#define T_CCType 283
#define T_CCZType 284
#define T_CCGCType 285
#define T_Plus 286
#define T_Minus 287
#define T_Mult 288
#define T_Div 289
#define T_Lshift 290
#define T_Ashift 291
#define T_LshiftRt 292
#define T_AshiftRt 293
#define T_Subreg 294
#define T_ExprList 295
#define T_EndPara 296
#define T_RArrow 297
#define T_SiExtend 298
#define T_Compare 299
#define T_Lt 300
#define T_Gt 301
#define T_Le 302
#define T_Ge 303
#define T_Eq 304
#define T_Ne 305
#define T_CodeLabel 306
#define T_StringConstant 307
#define T_IntConstant 308
#define T_FunBegin 309

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
    LshiftExpr *lshiftexpr;
    AshiftExpr *ashiftexpr;
    LshiftRtExpr *lshiftrtexpr;
    AshiftRtExpr *ashiftrtexpr;
    SubregExpr *subregexpr;
    CompareExpr *compareexpr;
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

#line 219 "y.tab.h" /* yacc.c:1909  */
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
