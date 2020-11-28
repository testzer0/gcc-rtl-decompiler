#include "ast.h"
#include <string.h> // strdup
#include <stdio.h>  // printf
#include "list.h"

Node::Node(yyltype loc) {
    location = new yyltype(loc);
    parent = NULL;
}

Node::Node() {
    location = NULL;
    parent = NULL;
}

void Node::Print(int indentlevel, const char *label) {
    // int num = 3*indentlevel; 
    //printf("%*s%s",num,"",GetPrintNameForNode());
    if (indentlevel == 0)
        printf("%s",GetPrintNameForNode());
    else {
        for (int i = 0; i < indentlevel-1; i++) {
            printf("|   ");
        }
        printf("+==> %s",GetPrintNameForNode());
    }
    PrintChildren(indentlevel);
}

Program::Program(List<FuncBody *> *bodylist) {
    Assert(bodylist != NULL);
    (funcbodylist = bodylist)->SetParentAll(this); // Set the parent pointers of the fn bodies
}

void Program::PrintChildren(int indentlevel) {
    printf("\n");
    funcbodylist->PrintAll(indentlevel+1);
    printf("\n");
}

FuncBody::FuncBody(List<Stmt *> *ss, const char *n) {
    Assert(ss != NULL && n != NULL);
    (stmts = ss)->SetParentAll(this);
    name = strdup(n);   
}

void FuncBody::PrintChildren(int indentlevel) {
    printf(" %s\n",name);
    stmts->PrintAll(indentlevel+1);
} 

Integer::Integer(int val) {
    value = val;
}

void Integer::PrintChildren(int indentlevel) {
    printf(" %d\n",value);
}

void Note::PrintChildren(int indentlevel) {
    printf("\n");
}

void Barrier::PrintChildren(int indentlevel) {
    printf("\n");
}

void CodeLabel::PrintChildren(int indentlevel) {
    printf("\n");
}

Insn::Insn(MainCmd *mc) {
    maincmd = mc;
    if (maincmd)
        maincmd->SetParent(this);
}

void Insn::PrintChildren(int indentlevel) {
    printf("\n");
    if (maincmd)
        maincmd->Print(indentlevel+1);
}

ParallelCmd::ParallelCmd(List<PlainCmd *> *cs) {
    Assert(cs != NULL);
    (cmds = cs)->SetParentAll(this);
}

void ParallelCmd::PrintChildren(int indentlevel) {
    printf("\n");
    cmds->PrintAll(indentlevel+1);
}

void ClobberCmd::PrintChildren(int indentlevel) {
    printf("\n");
}

SetCmd::SetCmd(Operand *o1, Operand *o2) {
    Assert(o1 != NULL && o2 != NULL);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void SetCmd::PrintChildren(int indentlevel) {
    printf("\n");
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

void UseCmd::PrintChildren(int indentlevel) {
    printf("\n");
}

IntOperand::IntOperand(int iv) {
    intvalue = iv;
}

void IntOperand::PrintChildren(int indentlevel) {
    printf(" %d\n",intvalue);
}

ExprOperand::ExprOperand(LocInfo *li, TypeInfo *ti, Expr *e) {
    Assert(e != NULL);
    linfo = li;
    if (linfo) linfo->SetParent(this);
    tinfo = ti;
    if(tinfo) tinfo->SetParent(this);
    (expr = e)->SetParent(this);
}

void ExprOperand::PrintChildren(int indentlevel) {
    printf("\n");
    if (linfo)
        linfo->Print(indentlevel+1);
    if (tinfo)
        tinfo->Print(indentlevel+1);
    expr->Print(indentlevel+1);
}

ExtendOperand::ExtendOperand(TypeInfo *ti, Operand *o) {
    Assert(ti != NULL && o != NULL);
    (tinfo = ti)->SetParent(this);
    (op = o)->SetParent(this);
}

void ExtendOperand::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op->Print(indentlevel+1);
}

DerefOperand::DerefOperand(LocInfo *li, TypeInfo *ti, Operand *o) {
    Assert(li != NULL && ti != NULL && o != NULL);
    (linfo = li)->SetParent(this);
    (tinfo = ti)->SetParent(this);
    (op = o)->SetParent(this);
}

void DerefOperand::PrintChildren(int indentlevel) {
    printf("\n");
    linfo->Print(indentlevel+1);
    tinfo->Print(indentlevel+1);
    op->Print(indentlevel+1);
}

SymbolRefOperand::SymbolRefOperand(const char *s) {
    symbol = s;
}

void SymbolRefOperand::PrintChildren(int indentlevel) {
    printf(" %s\n",symbol);
}

TypeInfo::TypeInfo(const char *t) {
    type = t;
}

void TypeInfo::PrintChildren(int indentlevel) {
    printf(" %s\n",type);
}

LocInfo::LocInfo(MemType *mt, List<Flag *> *f) {
    Assert(mt != NULL);
    // NOTE that f can be null
    (mtype = mt)->SetParent(this);
    flags = f;
    if (flags)
        flags->SetParentAll(this);
}

void LocInfo::PrintChildren(int indentlevel) {
    printf("\n");
    mtype->Print(indentlevel+1);
    if (flags)
        flags->PrintAll(indentlevel+1);
}

MemType::MemType(const char *t) {
    type = t;
}

void MemType::PrintChildren(int indentlevel) {
    printf(" %s\n",type);
}

Flag::Flag(const char *f) {
    flag = f;
}

void Flag::PrintChildren(int indentlevel) {
    printf(" %s\n",flag);
}

IntegerExpr::IntegerExpr(int v) {
    value = v;
}

void IntegerExpr::PrintChildren(int indentlevel) {
    printf(" %d\n",value);
}

PlusExpr::PlusExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
} 

void PlusExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

MinusExpr::MinusExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void MinusExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

MultExpr::MultExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void MultExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

DivExpr::DivExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void DivExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

UDivExpr::UDivExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void UDivExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

ModExpr::ModExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void ModExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

UModExpr::UModExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void UModExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

LshiftExpr::LshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void LshiftExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

LshiftRtExpr::LshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void LshiftRtExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

AshiftExpr::AshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void AshiftExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

AshiftRtExpr::AshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void AshiftRtExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

SubregExpr::SubregExpr(TypeInfo *ti, Operand *o) {
    Assert(ti != NULL && o != NULL);
    (tinfo = ti)->SetParent(this);
    (op = o)->SetParent(this);
}

void SubregExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op->Print(indentlevel+1);
}

CompareExpr::CompareExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void CompareExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

ConditionExpr::ConditionExpr(Condition *c, TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(c != NULL && ti != NULL && o1 != NULL && o2 != NULL);
    (cond = c)->SetParent(this);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void ConditionExpr::PrintChildren(int indentlevel) {
    printf("\n");
    cond->Print(indentlevel+1);
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

SymbolRefExpr::SymbolRefExpr(TypeInfo *t, const char *s) {
    Assert(t != NULL && s != NULL);
    (ti = t)->SetParent(this);
    sym = strdup(s);
}

void SymbolRefExpr::PrintChildren(int indentlevel) {
    printf("\n");
    ti->Print(indentlevel+1);
}

JumpInsn::JumpInsn(Dest *d) {
    Assert(d != NULL);
    (dest = d)->SetParent(this);
}

void JumpInsn::PrintChildren(int indentlevel) {
    printf("\n");
    dest->Print(indentlevel+1);
}

NegOperand::NegOperand(Operand *o) {
    Assert(o != NULL);
    (op = o)->SetParent(this);
}

void NegOperand::PrintChildren(int indentlevel) {
    printf("\n");
    op->Print(indentlevel+1);
}

Label::Label(int lno) {
    labelno = lno;
}

void Label::PrintChildren(int indentlevel) {
    printf(" %d\n", labelno);
}

IfThenElse::IfThenElse(Comparison *c, Operand *o1, Operand *o2) {
    Assert(c != NULL && o1 != NULL && o2 != NULL);
    (comp = c)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void IfThenElse::PrintChildren(int indentlevel) {
    printf("\n");
    comp->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

Comparison::Comparison(Condition *c, Operand *o1, Operand *o2) {
    Assert(c != NULL && o1 != NULL && o2 != NULL);
    (cond = c)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void Comparison::PrintChildren(int indentlevel) {
    printf("\n");
    cond->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

Condition::Condition(const char *c) {
    cond = c;
}

void Condition::PrintChildren(int indentlevel) {
    printf(" %s\n",cond);
}

RetCall::RetCall(TypeInfo *ti, int rr, const char *fn, ExprList *el) {
    Assert(ti != NULL && fn != NULL && el != NULL);
    (tinfo = ti)->SetParent(this);
    returnreg = rr;
    fnname = fn;
    (elist = el)->SetParent(this);
}

void RetCall::PrintChildren(int indentlevel) {
    printf(" %s\n",fnname);
    elist->Print(indentlevel+1);
    // Return reg is always rax; type so far has always been SI.
    // Not too important for now for debugging.
}

NoRetCall::NoRetCall(const char *fn, ExprList *el) {
    Assert(fn != NULL && el != NULL);
    fnname = fn;
    (elist = el)->SetParent(this);
}

void NoRetCall::PrintChildren(int indentlevel) {
    printf(" %s\n",fnname);
    elist->Print(indentlevel+1);
}

ExprList::ExprList(List<int> *as) {
    args = as;
}

void ExprList::PrintChildren(int indentlevel) {
    for (int i = 0; i < args->NumElements(); i++) {
        printf(" %d", args->Nth(i));
    }
    printf("\n");
}