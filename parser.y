/*------------------------------------------------------*
 * The parser.                                          *
 *------------------------------------------------------*/

%{
    #include "scanner.h"
    #include "parser.h"
    #include "errors.h"

    void yyerror(const char *msg);
%}

%union {
    Program *program;
    FuncBody *funcbody;
    List<FuncBody *> *funcbodies;
    Stmt *stmt;
    List<Stmt *> *stmts;
    Note *note;
    Barrier *barrier;
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
    ExprOperand *exproperand;
    ExtendOperand *extendoperand;
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
    AshiftExpr *ashiftexpr;
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
    RetCall *RetCall;
    NoRetCall *NoRetCall;

    int integerConstant;
    char *stringConstant;
    char identifier[32];
}

%token T_Note T_Insn T_JumpInsn T_CallInsn T_Call T_SymbolRef T_Flags T_Nil T_Parallel
%token T_Clobber T_Set T_Use T_IfThenElse T_ConstInt T_Barrier T_Mem T_Reg T_Pc T_LabelRef
%token T_IFlag T_VFlag T_FFlag T_CFlag T_SIType T_DIType T_QIType T_CCType T_CCZType T_CCGCType
%token T_Plus T_Minus T_Mult T_Ashift T_Subreg T_ExprList T_EndPara T_RArrow T_SiExtend
%token T_Compare T_Lt T_Gt T_Le T_Eq T_Ne

%token <stringConstant> T_StringConstant
%token <integerConstant> T_IntConstant
%token <identifier> T_FunBegin