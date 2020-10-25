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
    if (location) 
        printf("%*d", 3, location->first_line);
    else 
        printf("%*s",3,"");
    printf("%*s%s%s", indentlevel*3, label? label:"",GetPrintNameForNode());
    PrintChildren(indentlevel);
}

Program::Program(List<FuncBody *> *bodylist) {
    Assert(bodylist != NULL);
    (funcbodylist = bodylist)->SetParentAll(this); // Set the parent pointers of the fn bodies
}

void Program::PrintChildren(int indentlevel) {
    funcbodylist->PrintAll(indentlevel+1);
    printf("\n");
}

FuncBody::FuncBody(List<Stmt *> *ss, const char *n) {
    Assert(ss != NULL && n != NULL);
    (stmts = ss)->SetParentAll(this);
    name = n;   
}

void FuncBody::PrintChildren(int indentlevel) {
    stmts->PrintAll(indentlevel+1);
    printf("%s\n",name);
} 

Integer::Integer(int val) {
    value = val;
}

void Integer::PrintChildren(int indentlevel) {
    printf("%d",value);
}

Insn::Insn(MainCmd *mc) {
    Assert(mc != NULL);
    (maincmd = mc)->SetParent(this);
}

void Insn::PrintChildren(int indentlevel) {
    maincmd->Print(indentlevel+1);
}

ParallelCmd::ParallelCmd(List<PlainCmd *> *cs) {
    Assert(cs != NULL);
    (cmds = cs)->SetParentAll(this);
}

void ParallelCmd::PrintChildren(int indentlevel) {
    cmds->PrintAll(indentlevel+1);
}

SetCmd::SetCmd(Operand *o1, Operand *o2) {
    Assert(o1 != NULL && o2 != NULL);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void SetCmd::PrintChildren(int indentlevel) {
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

IntOperand::IntOperand(int iv) {
    intvalue = iv;
}

void IntOperand::PrintChildren(int indentlevel) {
    printf("%d",intvalue);
}

ExprOperand::ExprOperand(LocInfo *li, TypeInfo *ti, Expr *e) {
    Assert(li != NULL && ti != NULL && e != NULL);
    (linfo = li)->SetParent(this);
    (tinfo = ti)->SetParent(this);
    (expr = e)->SetParent(this);
}

void ExprOperand::PrintChildren(int indentlevel) {
    linfo->Print(indentlevel+1);
    tinfo->Print(indentlevel+1);
    expr->Print(indentlevel+1);
}

ExtendOperand::ExtendOperand(TypeInfo *ti, Operand *o) {
    Assert(ti != NULL && o != NULL);
    (tinfo = ti)->SetParent(this);
    (op = o)->SetParent(this);
}

void ExtendOperand::PrintChildren(int indentlevel) {
    tinfo->Print(indentlevel+1);
    op->Print(indentlevel+1);
}

TypeInfo::TypeInfo(const char *t) {
    type = t;
}

void TypeInfo::PrintChildren(int indentlevel) {
    printf("%s",type);
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
    mtype->Print(indentlevel+1);
    if (flags)
        flags->PrintAll(indentlevel+1);
}

MemType::MemType(const char *t) {
    type = t;
}

void MemType::PrintChildren(int indentlevel) {
    printf("%s",type);
}

Flag::Flag(const char *f) {
    flag = f;
}

void Flag::PrintChildren(int indentlevel) {
    printf("%s",flag);
}

IntegerExpr::IntegerExpr(int v) {
    value = v;
}

void IntegerExpr::PrintChildren(int indentlevel) {
    printf("%d",value);
}

PlusExpr::PlusExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
} 

void PlusExpr::PrintChildren(int indentlevel) {
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
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

JumpInsn::JumpInsn(Dest *d) {
    Assert(d != NULL);
    (dest = d)->SetParent(this);
}

void JumpInsn::PrintChildren(int indentlevel) {
    dest->Print(indentlevel+1);
}

Label::Label(int lno) {
    labelno = lno;
}

void Label::PrintChildren(int indentlevel) {
    printf("%d", labelno);
}

IfThenElse::IfThenElse(Comparison *c, Dest *d1, Dest *d2) {
    Assert(c != NULL && d1 != NULL && d2 != NULL);
    (comp = c)->SetParent(this);
    (dest1 = d1)->SetParent(this);
    (dest2 = d2)->SetParent(this);
}

void IfThenElse::PrintChildren(int indentlevel) {
    comp->Print(indentlevel+1);
    dest1->Print(indentlevel+1);
    dest2->Print(indentlevel+1);
}

Comparison::Comparison(Condition *c, Operand *o1, Operand *o2) {
    Assert(c != NULL && o1 != NULL && o2 != NULL);
    (cond = c)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void Comparison::PrintChildren(int indentlevel) {
    cond->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

Condition::Condition(const char *c) {
    cond = c;
}

void Condition::PrintChildren(int indentlevel) {
    printf("%s",cond);
}

RetCall::RetCall(TypeInfo *ti, int rr, char *fn) {
    Assert(ti != NULL && fn != NULL);
    (tinfo = ti)->SetParent(this);
    returnreg = rr;
    strcpy(fnname, fn);
}

void RetCall::PrintChildren(int indentlevel) {
    printf("%s",fnname);
    // Return reg is always rax; type so far has always been SI.
    // Not too important for now for debugging.
}

NoRetCall::NoRetCall(char *fn) {
    Assert(fn != NULL);
    strcpy(fnname,fn);
}

void NoRetCall::PrintChildren(int indentlevel) {
    printf("%s",fnname);
}

