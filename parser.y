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
    RetCall *retcall;
    NoRetCall *noretcall;

    int integerconstant;
    const char *stringconstant;
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

%type <program> Program
%type <funcbody> FuncBody
%type <funcbodies> FuncBodies
%type <stmt> Stmt
%type <stmts> Stmts 
%type <note> Note
%type <barrier> Barrier
%type <integer> Integer
%type <insn> Insn
%type <maincmd> MainCmd
%type <plaincmd> PlainCmd
%type <parallelcmd> ParallelCmd
%type <cmds> Cmds
%type <clobbercmd> ClobberCmd
%type <setcmd> SetCmd
%type <usecmd> UseCmd
%type <operand> Operand
%type <exproperand> ExprOperand
%type <typeinfo> TypeInfo
%type <locinfo> LocInfo
%type <memtype> MemType
%type <flags> Flags
%type <flag> Flag
%type <expr> Expr
%type <integerexpr> IntegerExpr
%type <plusexpr> PlusExpr
%type <minusexpr> MinusExpr
%type <multexpr> MultExpr
%type <ashiftexpr> AshiftExpr
%type <subregexpr> SubregExpr
%type <compareexpr> CompareExpr
%type <jumpinsn> JumpInsn
%type <dest> Dest
%type <label> Label
%type <pc> Pc
%type <ifthenelse> IfThenElse
%type <comparison> Comparison
%type <condition> Condition
%type <call> Call
%type <retcall> RetCall
%type <noretcall> NoRetCall
%type <integerconstant> IntConstant
%type <stringconstant> stringConstant
%type <identifier> Identifier

%%

/* Rules begin */

Program         :   FuncBodies                  { 
                                                    @1;
                                                    $$ = new Program($1);
                                                    if (ReportError::findNumErrors() == 0) {
                                                        $$->Print(0);
                                                    }
                                                }
                ;

FuncBodies      :   FuncBodies FuncBody         { ($$=$1)->Append($2); }
                |   FuncBody                    { ($$ = new List<FuncBody *>)->Append($1); }
                ;

FuncBody        :   T_FunBegin StmtList         { $$ = new FuncBody($2, $1); }
                ;

Stmtlist        :   StmtList Stmt               { ($$=$1)->Append($2); }
                |   Stmt                        { ($$ = new List<Stmt *>)->Append($1); }
                ;

Stmt            :   "(" Note ")"
                |   "( Barrier ")"
                |   "(" Insn ")"
                |   "(" JumpInsn ")"
                |   "(" Call ")"
                ;

Note            :   T_Note T_IntConstant T_IntConstant T_IntConstant T_IntConstant { $$ = new Note(); }
                |   T_Note T_IntConstant T_IntConstant T_IntConstant  { $$ = new Note(); }
                ;

Barrier         :   T_Barrier T_IntConstant T_IntConstant T_IntConstant { $$ = new Barrier(); }
                ;

Integer         :   "-" T_IntConstant           { $$ = new Integer(-$2); }
                |   T_IntConstant               { $$ = new Integer($1); }
                ;

Insn            :   T_Insn T_IntConstant T_IntConstant T_IntConstant "(" MainCmd ")"   
                      T_StringConstant ":" T_IntConstant Integer "(" T_Nil ")"  { $$ = new Insn($6); }
                ;

MainCmd         :   PlainCmd 
                |   ParallelCmd
                ;

PlainCmd        :   

%%

void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}
