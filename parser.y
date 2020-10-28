/*------------------------------------------------------*
 * The parser.                                          *
 *------------------------------------------------------*/

%{
    #include "scanner.h"
    #include "parser.h"
    #include "errors.h"

    void yyerror(const char *msg);
%}
// %error-verbose

%union {
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

    int integerConstant;
    const char *stringConstant;
    char identifier[32];
}

%token T_Note T_Insn T_JumpInsn T_CallInsn T_Call T_SymbolRef T_Nil T_Parallel T_TIType
%token T_Clobber T_Set T_Use T_IfThenElse T_ConstInt T_Barrier T_Mem T_Reg T_Pc T_LabelRef
%token T_IFlag T_VFlag T_FFlag T_CFlag T_SIType T_DIType T_QIType T_CCType T_CCZType T_CCGCType
%token T_Plus T_Minus T_Mult T_Div T_Lshift T_Ashift T_LshiftRt T_AshiftRt T_Subreg T_ExprList 
%token T_EndPara T_RArrow T_SiExtend T_Compare T_Lt T_Gt T_Le T_Ge T_Eq T_Ne T_CodeLabel T_UDiv
%token T_Mod T_UMod T_CCGOCType T_ZeExtend T_Gtu T_Ltu T_Leu T_Geu T_Neg

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
%type <codelabel> CodeLabel
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
%type <intoperand> IntOperand
%type <exproperand> ExprOperand
%type <extendoperand> ExtendOperand
%type <derefoperand> DerefOperand;
%type <symbolrefoperand> SymbolRefOperand
%type <negoperand> NegOperand
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
%type <divexpr> DivExpr
%type <udivexpr> UDivExpr
%type <modexpr> ModExpr
%type <umodexpr> UModExpr
%type <lshiftexpr> LshiftExpr
%type <ashiftexpr> AshiftExpr
%type <lshiftrtexpr> LshiftRtExpr
%type <ashiftrtexpr> AshiftRtExpr
%type <subregexpr> SubregExpr
%type <compareexpr> CompareExpr
%type <conditionexpr> ConditionExpr
%type <symbolrefexpr> SymbolRefExpr
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

FuncBody        :   T_FunBegin Stmts            { $$ = new FuncBody($2, $1); }
                ;

Stmts           :   Stmts Stmt                  { ($$=$1)->Append($2); }
                |   Stmt                        { ($$ = new List<Stmt *>)->Append($1); }
                ;

Stmt            :   '(' Note ')'                { $$ = $2; }
                |   '(' Barrier ')'             { $$ = $2; }
                |   '(' Insn ')'                { $$ = $2; }
                |   '(' JumpInsn ')'            { $$ = $2; }
                |   '(' Call ')'                { $$ = $2; }
                |   '(' CodeLabel ')'           { $$ = $2; }
                ;

Note            :   T_Note T_IntConstant T_IntConstant T_IntConstant T_IntConstant { $$ = new Note(); }
                |   T_Note T_IntConstant T_IntConstant T_IntConstant  { $$ = new Note(); }
                ;

Barrier         :   T_Barrier T_IntConstant T_IntConstant T_IntConstant { $$ = new Barrier(); }
                ;

CodeLabel       :   T_CodeLabel T_IntConstant T_IntConstant T_IntConstant T_IntConstant T_IntConstant '(' T_Nil ')'
                                                { $$ = new CodeLabel(); }
                |   T_CodeLabel T_IntConstant T_IntConstant T_IntConstant T_IntConstant'(' T_Nil ')'
                                                { $$ = new CodeLabel(); }
                |   T_CodeLabel T_IntConstant T_IntConstant T_IntConstant T_IntConstant T_IntConstant '(' T_StringConstant ')'
                                                { $$ = new CodeLabel(); }
                ;

Integer         :   '-' T_IntConstant           { $$ = new Integer(-$2); }
                |   T_IntConstant               { $$ = new Integer($1); }
                ;

Insn            :   T_Insn T_IntConstant T_IntConstant T_IntConstant  T_IntConstant '(' MainCmd ')'   
                      T_StringConstant ':' T_IntConstant Integer '(' T_Nil ')'  { $$ = new Insn($7); }
                |   T_Insn T_IntConstant T_IntConstant T_IntConstant  T_IntConstant '(' MainCmd ')'   
                      T_StringConstant ':' T_IntConstant Integer '(' T_ExprList '(' Operand ')' '('
                      T_Nil ')' ')'                             { $$ = new Insn($7); }
                |   T_Insn T_IntConstant T_IntConstant T_IntConstant  T_IntConstant '(' MainCmd ')'   
                     Integer '(' T_ExprList '(' Operand ')' '(' T_Nil ')' ')'   { $$ = new Insn($7); } 
                |   T_Insn T_IntConstant T_IntConstant T_IntConstant  T_IntConstant '(' MainCmd ')'   
                      Integer '(' T_Nil ')'  { $$ = new Insn($7); }
                |   T_Insn T_IntConstant T_IntConstant T_IntConstant  T_IntConstant '(' T_ConstInt T_IntConstant ')'
                      T_StringConstant ':' T_IntConstant Integer '(' T_Nil ')' { $$ = new Insn(NULL); }
                |   T_Insn T_IntConstant T_IntConstant T_IntConstant  T_IntConstant '(' MainCmd ')'   
                      T_StringConstant ':' T_IntConstant Integer '(' ':' T_IntConstant '('
                      T_Nil ')' ')'                             { $$ = new Insn($7); }
                ;

MainCmd         :   PlainCmd                    { $$ = $1; }
                |   ParallelCmd                 { $$ = $1; }
                ;

PlainCmd        :   ClobberCmd                  { $$ = $1; }
                |   SetCmd                      { $$ = $1; }
                |   UseCmd                      { $$ = $1; }
                ;

ParallelCmd     :  T_Parallel Cmds T_EndPara    { $$ = new ParallelCmd($2); }
                ;

Cmds            :   Cmds '(' PlainCmd ')'              { ($$ = $1)->Append($3); }
                |   '(' PlainCmd ')'                   { ($$ = new List<PlainCmd *>)->Append($2); }
                ;

ClobberCmd      :   T_Clobber '(' T_Reg ':' T_CCType T_IntConstant ')' { $$ = new ClobberCmd(); }
                |   T_Clobber '(' T_Reg Flags ':' TypeInfo T_IntConstant ')' { $$ = new ClobberCmd(); }
                |   T_Clobber '(' T_Mem ':' '(' ')' ')' { $$ = new ClobberCmd(); }
                |   T_Clobber '(' T_Mem ':' '(' Operand ')' ')' { $$ = new ClobberCmd(); }
                ;

SetCmd          :   T_Set '(' Operand ')' '(' Operand ')'       { $$ = new SetCmd($3,$6); }
                ;

UseCmd          :   T_Use '(' T_Reg Flags ':' TypeInfo T_IntConstant ')'  { $$ = new UseCmd(); }
                ;

Operand         :   IntOperand                  { $$ = $1; }
                |   ExprOperand                 { $$ = $1; }
                |   ExtendOperand               { $$ = $1; }
                |   SymbolRefOperand            { $$ = $1; }
                |   DerefOperand                { $$ = $1; }
                |   NegOperand                  { $$ = $1; }
                |   Dest                        { $$ = $1; }
                ;

IntOperand      :  T_ConstInt Integer                     { $$ = new IntOperand($2->getValue()); }
                ;

ExprOperand     :   LocInfo ':' TypeInfo Expr   { $$ = new ExprOperand($1,$3,$4); }
                |   AshiftExpr                  { $$ = new ExprOperand(NULL,NULL,$1); }
                |   LshiftExpr                  { $$ = new ExprOperand(NULL,NULL,$1); }
                |   AshiftRtExpr                { $$ = new ExprOperand(NULL,NULL,$1); }
                |   LshiftRtExpr                { $$ = new ExprOperand(NULL,NULL,$1); }
                |   CompareExpr                 { $$ = new ExprOperand(NULL,NULL,$1); }
                |   PlusExpr                    { $$ = new ExprOperand(NULL,NULL,$1); }
                |   MinusExpr                   { $$ = new ExprOperand(NULL,NULL,$1); }
                |   MultExpr                    { $$ = new ExprOperand(NULL,NULL,$1); }
                |   DivExpr                     { $$ = new ExprOperand(NULL,NULL,$1); }
                |   UDivExpr                    { $$ = new ExprOperand(NULL,NULL,$1); }
                |   ModExpr                     { $$ = new ExprOperand(NULL,NULL,$1); }
                |   UModExpr                    { $$ = new ExprOperand(NULL,NULL,$1); }
                |   SubregExpr                  { $$ = new ExprOperand(NULL,NULL,$1); }
                |   ConditionExpr               { $$ = new ExprOperand(NULL,NULL,$1); }
                |   SymbolRefExpr               { $$ = new ExprOperand(NULL,NULL,$1); }
                ;

ExtendOperand   :   T_SiExtend TypeInfo '(' Operand ')' { $$ = new ExtendOperand($2,$4); }
                |   T_ZeExtend TypeInfo '(' Operand ')' { $$ = new ExtendOperand($2,$4); }
                ;

DerefOperand    :   LocInfo ':' TypeInfo '(' Operand ')' { $$ = new DerefOperand($1,$3,$5); }
                ;

SymbolRefOperand :  T_SymbolRef Flags ':' T_DIType '(' T_StringConstant ')' { $$ = new SymbolRefOperand($6); }
                ;

NegOperand      :  T_Neg ':' TypeInfo '(' Operand ')'       { $$ = new NegOperand($5); }
                |  T_Neg '(' Operand ')'                    { $$ = new NegOperand($3); }
                ;

LocInfo         :   MemType Flags               { $$ = new LocInfo($1, $2); }
                |   MemType                     { $$ = new LocInfo($1,NULL); }
                ;

Flags           :   Flags Flag                  { ($$ = $1)->Append($2); }
                |   Flag                        { ($$ = new List<Flag *>)->Append($1); }
                ;

Flag            :   T_IFlag                     { $$ = new Flag("i"); }
                |   T_VFlag                     { $$ = new Flag("v"); }
                |   T_FFlag                     { $$ = new Flag("f"); }
                |   T_CFlag                     { $$ = new Flag("c"); }
                ;

MemType         :   T_Mem                       { $$ = new MemType("mem"); }
                |   T_Reg                       { $$ = new MemType("reg"); }
                ;

TypeInfo        :   T_SIType                    { $$ = new TypeInfo("si"); }
                |   T_DIType                    { $$ = new TypeInfo("di"); }
                |   T_QIType                    { $$ = new TypeInfo("qi"); }
                |   T_TIType                    { $$ = new TypeInfo("ti"); }
                |   T_CCType                    { $$ = new TypeInfo("cc"); }
                |   T_CCZType                   { $$ = new TypeInfo("ccz"); }
                |   T_CCGCType                  { $$ = new TypeInfo("ccgc"); }
                |   T_CCGOCType                  { $$ = new TypeInfo("ccgoc"); }
                ;

Expr            :   IntegerExpr                 { $$ = $1; }
                |   '(' PlusExpr ')'            { $$ = $2; }
                |   '(' MinusExpr ')'           { $$ = $2; }
                |   '(' MultExpr ')'            { $$ = $2; }
                |   '(' AshiftExpr ')'          { $$ = $2; }
                |   '(' LshiftExpr ')'          { $$ = $2; }
                |   '(' AshiftRtExpr ')'        { $$ = $2; }
                |   '(' LshiftRtExpr ')'        { $$ = $2; }
                |   '(' SubregExpr ')'          { $$ = $2; }
                |   '(' CompareExpr ')'         { $$ = $2; }
                |   '(' DivExpr ')'             { $$ = $2; }
                |   '(' UDivExpr ')'            { $$ = $2; }
                |   '(' ModExpr ')'             { $$ = $2; }
                |   '(' UModExpr ')'            { $$ = $2; }
                |   '(' ConditionExpr ')'       { $$ = $2; }
                |   '(' SymbolRefExpr ')'       { $$ = $2; }
                ;

IntegerExpr     :   Integer                     { $$ = new IntegerExpr($1->getValue()); }
                ;

PlusExpr        :   T_Plus TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new PlusExpr($2,$4,$7); }
                ;

MinusExpr       :   T_Minus TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new MinusExpr($2,$4,$7); }
                ;
                
MultExpr        :   T_Mult TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new MultExpr($2,$4,$7); }
                ;

DivExpr         :   T_Div TypeInfo '(' Operand ')' '(' Operand ')'      { $$ = new DivExpr($2,$4,$7); }
                ;

UDivExpr        :   T_UDiv TypeInfo '(' Operand ')' '(' Operand ')'      { $$ = new UDivExpr($2,$4,$7); }
                ;

ModExpr         :   T_Mod TypeInfo '(' Operand ')' '(' Operand ')'      { $$ = new ModExpr($2,$4,$7); }
                ;

UModExpr        :   T_UMod TypeInfo '(' Operand ')' '(' Operand ')'      { $$ = new UModExpr($2,$4,$7); }
                ;

LshiftExpr      :   T_Lshift TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new LshiftExpr($2,$4,$7); }
                ;

AshiftExpr      :   T_Ashift TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new AshiftExpr($2,$4,$7); }
                ;

LshiftRtExpr    :   T_LshiftRt TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new LshiftRtExpr($2,$4,$7); }
                ;

AshiftRtExpr    :   T_AshiftRt TypeInfo '(' Operand ')' '(' Operand ')'     { $$ = new AshiftRtExpr($2,$4,$7); }
                ;

SubregExpr      :   T_Subreg TypeInfo '(' Operand ')' Integer           { $$ = new SubregExpr($2,$4); }
                ;

CompareExpr     :   T_Compare TypeInfo '(' Operand ')' '(' Operand ')'  { $$ = new CompareExpr($2,$4,$7); }
                ;

ConditionExpr   :   Condition ':' TypeInfo '(' Operand ')' '(' Operand ')' { $$ = new ConditionExpr($1,$3,$5,$8); }
                ;

SymbolRefExpr   :   T_SymbolRef ':' TypeInfo '(' T_StringConstant ')'  { $$ = new SymbolRefExpr($3,$5); }
                ;

JumpInsn        :   T_JumpInsn T_IntConstant T_IntConstant T_IntConstant T_IntConstant '(' T_Set
                      '(' T_Pc ')' '(' Dest ')' ')' T_StringConstant ':' T_IntConstant 
                      Integer '(' T_Nil ')' T_RArrow T_IntConstant      { $$ = new JumpInsn($12); }
                |   T_JumpInsn T_IntConstant T_IntConstant T_IntConstant T_IntConstant '(' T_Set
                      '(' T_Pc ')' '(' Dest ')' ')' T_IntConstant '(' T_Nil ')' T_RArrow T_IntConstant      { $$ = new JumpInsn($12); }
                ;

Dest            :   Label                         { $$ = $1; }
                |   IfThenElse                    { $$ = $1; }
                |   Pc                            { $$ = $1; }
                ;

Label           :   T_LabelRef T_IntConstant      { $$ = new Label($2); }
                |   T_LabelRef ':' TypeInfo T_IntConstant { $$ = new Label($4); }
                ;

IfThenElse      :   T_IfThenElse '(' Comparison ')' '(' Operand ')' '(' Operand ')'  { $$ = new IfThenElse($3,$6,$9); }
                |   T_IfThenElse ':' TypeInfo '(' Comparison ')' '(' Operand ')' '(' Operand ')'  { $$ = new IfThenElse($5,$8,$11); }
                ;

Pc              :   T_Pc                           { $$ = new Pc(); }       
                ;

Comparison      :   Condition '(' Operand ')' '(' Operand ')'   { $$ = new Comparison($1,$3,$6); }
                ;

Condition       :   T_Lt                           { $$ = new Condition("lt"); }
                |   T_Gt                           { $$ = new Condition("gt"); }
                |   T_Le                           { $$ = new Condition("le"); }
                |   T_Ge                           { $$ = new Condition("ge"); }
                |   T_Eq                           { $$ = new Condition("eq"); }
                |   T_Ne                           { $$ = new Condition("ne"); }
                |   T_Gtu                          { $$ = new Condition("gtu"); }
                |   T_Ltu                          { $$ = new Condition("ltu"); }
                |   T_Geu                          { $$ = new Condition("geu"); }
                |   T_Leu                          { $$ = new Condition("leu"); }
                ;

Call            :   RetCall                        { $$ = $1; }
                |   NoRetCall                      { $$ = $1; }
                ;

RetCall         :   T_CallInsn T_IntConstant T_IntConstant T_IntConstant T_IntConstant '(' T_Set '(' 
                        T_Reg ':' TypeInfo T_IntConstant ')' '(' T_Call '(' T_Mem ':' T_QIType '(' 
                        T_SymbolRef ':' T_DIType '(' T_StringConstant ')' ')' ')' '(' T_ConstInt Integer ')' 
                        ')' ')' T_StringConstant ':' T_IntConstant Integer '(' Junk2 ')' '(' Junk ')'
                                                    { $$ = new RetCall($11,$12,$25); }
                ;

NoRetCall       :   T_CallInsn T_IntConstant T_IntConstant T_IntConstant T_IntConstant '(' T_Call 
                        '(' T_Mem ':' T_QIType '(' T_SymbolRef ':' T_DIType '(' 
                        T_StringConstant ')' ')' ')' '(' T_ConstInt Integer ')' ')' T_StringConstant 
                        ':' T_IntConstant Integer '(' Junk2 ')' '(' Junk ')'
                                                    { $$ = new NoRetCall($17); }
                ;

Junk            :   T_ExprList TypeInfo '(' T_Use '(' T_Reg ':' TypeInfo T_IntConstant ')' ')' '(' T_Nil ')'
                                                    {  }
                |   '(' T_Use '(' T_Reg ':' TypeInfo T_IntConstant ')' ')' '(' T_Nil ')'
                                                    {  }
                |   T_ExprList TypeInfo '(' T_Use '(' T_Reg ':' TypeInfo T_IntConstant ')' ')' '(' Junk ')'
                                                    {  }
                |   '(' T_Use '(' T_Reg ':' TypeInfo T_IntConstant ')' ')' '(' Junk ')'
                                                    {  }
                ;

Junk2           :    T_Nil          { }
                |    T_ExprList '(' Operand ')' '(' Junk2 ')' { }
                |    T_ExprList TypeInfo '(' Operand ')' '(' Junk2 ')' { }
                ;

%%

void InitParser()
{
   printf("Initializing parser.\n\n");
   yydebug = false;
}
