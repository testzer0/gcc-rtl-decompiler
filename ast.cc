#include "ast.h"
#include <string.h> // strdup
#include <stdio.h>  // printf
#include "list.h"
#include <bits/stdc++.h>  // later replace by specific header

#define out cout<<indentation

int tempcounter = 0, argcounter;
int genCodeReg, genCodeVal, genCodeTempNum;
string genCodeType, genCodeSymbol, genCodeFunName;
string jumpAddr;
bool genCodeSignal;
ofstream symbols("results/symbols");

map<string,void *> gSymbolTable;

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

void Program::Analyze() {
    for (int i = 0; i < funcbodylist->NumElements(); i++) 
        funcbodylist->Nth(i)->Analyze();   
}

string Program::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    out << "#include <stdio.h>\n";
    out << "#include <stdbool.h>\n";
    out << "#include <stdlib.h>\n";
    out << "long long int regs[512];\n\n";
    for (int i = 0; i < funcbodylist->NumElements(); i++) {
        funcbodylist->Nth(i)->GenerateCode(indentlevel);
    }
    return "";
}

FuncBody::FuncBody(List<Stmt *> *ss, const char *n) {
    Assert(ss != NULL && n != NULL);
    (stmts = ss)->SetParentAll(this);
    name = strdup(n);   
    numArgs = -1;
    types = NULL;
}

void FuncBody::PrintChildren(int indentlevel) {
    printf(" %s\n",name);
    stmts->PrintAll(indentlevel+1);
} 

void FuncBody::Analyze() {
    gSymbolTable[string(name)] = (void *)this;
    if (string(name) == "main") {
        numArgs = 2;
        retType = "int";
    }
    for (int i = 0; i < stmts->NumElements(); i++)
        stmts->Nth(i)->Analyze();
}

string FuncBody::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string fname(name);
    if (fname == "main") {
        out << "int main(int argc, char **argv) {\n";
        out << "    regs[20] = (long long int)malloc(0x1000000) + 0x1000000;\n";
        out << "    regs[7] = regs[20] - 0x50;\n";
    }
    else if (numArgs == -1)
        return ""; // Function is never called
    else {
        out << retType << ' ' << fname << '(';
        string arg;
        argcounter = 0;
        for (int i = numArgs-1; i >= 1; i--) {
            arg = "arg"+to_string(argcounter);
            argcounter++;
            cout << types->Nth(i) << ' ' << arg << ", ";
        }
        if (numArgs) {
            arg = "arg"+to_string(argcounter);
            cout << types->Nth(0) << ' ' << arg << ") {\n";
        }
        else cout << ") {\n";
        for (int i = numArgs-1; i >= 0; i--) {
            int reg = regs->Nth(i);
            arg = "arg"+to_string(numArgs-1-i);
            out << "    regs[" << to_string(reg) << "] = (long long int)" << arg << ";\n";
        }
        out << "    regs[20] -= 0x100;\n";
        out << "    regs[7] -= 0x100;\n";
    }
    for (int i = 0; i < stmts->NumElements(); i++) {
        stmts->Nth(i)->GenerateCode(indentlevel+1);
    }
    if (fname != "main") { 
        out << "    regs[20] += 0x100;\n";
        out << "    regs[7] += 0x100;\n";
    }
    if (retType != "void") {
        out << "    return (" << retType << ")(regs[0]);\n"; 
    }
    out << "}\n";
    return "";
}

void FuncBody::setTypes(List<string> *ts, List<int> *rs, string rtype) {
    if (numArgs != -1)
        return;
    numArgs = ts->NumElements();
    types = ts;
    regs = rs;
    retType = rtype;
    sz = genCodeTempNum;
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

string Note::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    out << "// THERE WAS A NOTE HERE\n";
    return "";
}

void Barrier::PrintChildren(int indentlevel) {
    printf("\n");
}

string Barrier::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    out << "// THERE WAS A BARRIER HERE\n";
    return "";
}

void CodeLabel::PrintChildren(int indentlevel) {
    printf("\n");
}

string CodeLabel::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string lbl = "label"+to_string(labelno)+":";
    out << lbl << "\n";
    out << "0; // NO-OP to keep gcc happy\n";
    return "";
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

string Insn::GenerateCode(int indentlevel) {
    if (maincmd)
        maincmd->GenerateCode(indentlevel);
    return "";
}

ParallelCmd::ParallelCmd(List<PlainCmd *> *cs) {
    Assert(cs != NULL);
    (cmds = cs)->SetParentAll(this);
}

void ParallelCmd::PrintChildren(int indentlevel) {
    printf("\n");
    cmds->PrintAll(indentlevel+1);
}

string ParallelCmd::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    out << "// PARALLEL COMMAND BEGIN\n";
    for (int i = 0; i < cmds->NumElements(); i++)
        cmds->Nth(i)->GenerateCode(indentlevel);
    out << "// PARALLEL COMMAND END\n";
    return "";
}

void ClobberCmd::PrintChildren(int indentlevel) {
    printf("\n");
}

string ClobberCmd::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    out << "// CLOBBER COMMAND\n";
    return "";
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

string SetCmd::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string lop = op1->GenerateCode(indentlevel);
    string tp = genCodeType;
    string rop = op2->GenerateCode(indentlevel);
    out << lop << " = (" << tp << ")(" << rop << ");\n";
    return "";
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

string ExprOperand::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string retstr = expr->GenerateCode(indentlevel);
    string t;
    if (!tinfo)
     t = "";
    else t = string(tinfo->getType());
    if (t == "qi")
        genCodeType =  "char";
    else if (t == "si")
        genCodeType = "int";
    else if (t == "sf")
        genCodeType = "float";
    else genCodeType = "long long int";
    if (linfo && linfo->getMemType() == "reg") {
        retstr = "regs[" + retstr + "]";
    }
    else if (linfo) {
        string tempname = "temp" + to_string(tempcounter++);
        out << genCodeType << " *" << tempname << " = (" << genCodeType << " *)" << retstr << ";\n"; 
        retstr = "*"+tempname;
    }
    return retstr;
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

string ExtendOperand::GenerateCode(int indentlevel) {
    string retstring = op->GenerateCode(indentlevel);
    string t(tinfo->getType());
    if (t == "qi")
        genCodeType = "char";
    else if (t == "si")
        genCodeType = "int";
    else if (t == "sf")
        genCodeType = "float";
    else genCodeType = "long long int";
    return retstring;
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

string DerefOperand::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string retstr = op->GenerateCode(indentlevel);
    string t(tinfo->getType());
    if (t == "qi")
        genCodeType = "char";
    else if (t == "si")
        genCodeType = "int";
    else if (t == "sf")
        genCodeType = "float";
    else if (t == "di")
        genCodeType = "long long int";
    if (linfo) {
        string tempname = "temp" + to_string(tempcounter++);
        out << genCodeType << " *" << tempname << " = (" << genCodeType << " *)" << retstr << ";\n"; 
        retstr = "*"+tempname;
    }
    return retstr;
}

SymbolRefOperand::SymbolRefOperand(const char *s) {
    symbol = s;
}

void SymbolRefOperand::PrintChildren(int indentlevel) {
    printf(" %s\n",symbol);
}

string SymbolRefOperand::GenerateCode(int indentlevel) {
    string name = string(symbol);
    string indentation = string(indentlevel*4, ' ');
    string tempname = "temp"+to_string(tempcounter++);
    out << "long long int " << tempname << " = (long long int)externSymbolTable[" << name << "];\n";
    symbols << name << ' ';
    return tempname;
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

bool LocInfo::checkForFlag(string flag) {
    bool a = false;
    if (!flags)
        return a;
    for (int i = 0; i < flags->NumElements(); i++) {
        if (flags->Nth(i)->getFlag() == flag)
            a = true;
    }
    return a;
}

string LocInfo::getMemType() {
    return mtype->getType();
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

string IntegerExpr::GenerateCode(int indentlevel) {
    genCodeVal = value;
    genCodeType = "int";
    return to_string(value);
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

string PlusExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " + " << optwo << ");\n";
    return tempname;
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

string MinusExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " - " << optwo << ");\n";
    return tempname;
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

string MultExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " * " << optwo << ");\n";
    return tempname;
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

string DivExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "si")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " / " << optwo << ");\n";
    return tempname;
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

string UDivExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " / " << optwo << ");\n";
    return tempname;
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

string ModExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " % " << optwo << ");\n";
    return tempname;
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

string UModExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " % " << optwo << ");\n";
    return tempname;
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

string LshiftExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " << " << optwo << ");\n";
    return tempname;
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

string LshiftRtExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " >> " << optwo << ");\n";
    return tempname;
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

string AshiftExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " << " << optwo << ");\n";
    return tempname;
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

string AshiftRtExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " >> " << optwo << ");\n";
    return tempname;
}

XorExpr::XorExpr(TypeInfo *ti, Operand *o1, Operand *o2) {
    Assert(ti != NULL && o1 != NULL && o2 != NULL);
    (tinfo = ti)->SetParent(this);
    (op1 = o1)->SetParent(this);
    (op2 = o2)->SetParent(this);
}

void XorExpr::PrintChildren(int indentlevel) {
    printf("\n");
    tinfo->Print(indentlevel+1);
    op1->Print(indentlevel+1);
    op2->Print(indentlevel+1);
}

string XorExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << ' ' << tempname << " = (" << type << ")(" << opone << " ^ " << optwo << ");\n";
    return tempname;
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

string SubregExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string retstring = op->GenerateCode(indentlevel);
    string oldtype = genCodeType;
    string newtype(tinfo->getType());
    string tempname = "temp" + to_string(tempcounter++);
    if (newtype == "qi") {
        out << "char " << tempname << " = (char)(" << retstring << " & 255);\n";
        genCodeType = "char";
    }
    else if (newtype == "sf") {
        out << "float " << tempname << " = (float)(" << retstring << ");\n";
        genCodeType = "float";
    }    
    else if (newtype == "si") {
        out << "int " << tempname << " = (int)(" << retstring << " & 4294967295ll);\n";
        genCodeType = "int";
    }
    else {
        out << "long long int " << tempname << " = " << retstring << ";\n";
        genCodeType = "long long int";
        // TODO: This is actually from a __int128 to a long long, for now have assumed that
        // max width on machine is 64 bit so __int128 does not exist
    }
    return tempname;
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

string CompareExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string temp1, temp2, temp3, t(tinfo->getType()), type;
    if (t == "QI")
        type = "char";
    else if (t == "SI")
        type = "int";
    else type = "long long int";
    temp1 = "temp" + to_string(tempcounter++);
    temp2 = "temp" + to_string(tempcounter++);
    temp3 = "temp" + to_string(tempcounter++);
    out << type << " " << temp1 << " = (" << type << ")" << opone << ";\n";
    out << type << " " << temp2 << " = (" << type << ")" << optwo << ";\n";
    out << "int " << temp3 << ";\n";
    out << "if (" << temp1 << " == " << temp2 << ") " << temp3 << " = 0;\n";
    out << "else if (" << temp1 << " < " << temp2 << ") " << temp3 << " = -1;\n";
    out << "else " << temp3 << " = 1;\n";
    return temp3;
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

string ConditionExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string opone = op1->GenerateCode(indentlevel), optwo = op2->GenerateCode(indentlevel);
    string temp1, t(tinfo->getType()), type;
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    temp1 = "temp" + to_string(tempcounter++);
    out << type << " " << temp1 << " = (" << type << ")(" << opone << " == " << optwo << ");\n";
    return temp1;
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

string SymbolRefExpr::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(ti->getType());
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << " " << tempname << " = (" << type << ")externSymbolTable[" << string(sym) << "];\n";
    symbols << string(sym) << ' ';
    return tempname;
}

JumpInsn::JumpInsn(Dest *d) {
    Assert(d != NULL);
    (dest = d)->SetParent(this);
}

void JumpInsn::PrintChildren(int indentlevel) {
    printf("\n");
    dest->Print(indentlevel+1);
}

string JumpInsn::GenerateCode(int indentlevel) {
    genCodeSignal = true;
    dest->GenerateCode(indentlevel);
    return "";
}

NegOperand::NegOperand(Operand *o) {
    Assert(o != NULL);
    (op = o)->SetParent(this);
}

void NegOperand::PrintChildren(int indentlevel) {
    printf("\n");
    op->Print(indentlevel+1);
}

string NegOperand::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string retstring = op->GenerateCode(indentlevel);
    string tp = genCodeType;
    string tempname = "temp" + to_string(tempcounter++);
    out << tp << " " << tempname << " = -" << retstring << ";\n";
    return tempname;
}

FixOperand::FixOperand(Operand *o) {
    Assert(o != NULL);
    (op = o)->SetParent(this);
}

void FixOperand::PrintChildren(int indentlevel) {
    printf("\n");
    op->Print(indentlevel+1);
}

string FixOperand::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string retstring = op->GenerateCode(indentlevel);
    string tp = genCodeType;
    string tempname = "temp" + to_string(tempcounter++);
    out << tp << " " << tempname << " = (float)(" << retstring << ");\n";
    return tempname;
}

Label::Label(int lno) {
    labelno = lno;
}

void Label::PrintChildren(int indentlevel) {
    printf(" %d\n", labelno);
}

string Label::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    if (genCodeSignal) {
        string dest = "label" + to_string(labelno);
        out << "goto " << dest << ";\n";
        return "";
    }
    else {
        return "label"+to_string(labelno);
    }
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

string IfThenElse::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string comparison = comp->GenerateCode(indentlevel);
    genCodeSignal = false;
    string dest1 = op1->GenerateCode(indentlevel);
    genCodeSignal = false;
    string dest2 = op2->GenerateCode(indentlevel);
    if (dest1 == "Pc") {
        out << "if (!" << comparison << ") goto " << dest2 << ";\n";
    }
    else if (dest2 == "Pc") {
        out << "if (" << comparison << ") goto " << dest1 << ";\n";
    }
    else {
        out << "if (" << comparison << ") goto " << dest1 << ";\n";
        out << "else goto " << dest2 << ";\n";
    }
    return "";
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

string Comparison::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string lop = op1->GenerateCode(indentlevel), rop = op2->GenerateCode(indentlevel);
    string condition = cond->getCondition();
    string tempname = "temp" + to_string(tempcounter++);
    if (condition == "lt" || condition == "ltu") {
        out << "bool " << tempname << " = (" << lop << " < " << rop << ");\n";
    }
    else if (condition == "gt" || condition == "gtu") {
        out << "bool " << tempname << " = (" << lop << " > " << rop << ");\n";
    }
    else if (condition == "le" || condition == "leu") {
        out << "bool " << tempname << " = (" << lop << " <= " << rop << ");\n";
    }
    else if (condition == "ge" || condition == "geu") {
        out << "bool " << tempname << " = (" << lop << " >= " << rop << ");\n";
    }
    else if (condition == "eq") {
        out << "bool " << tempname << " = (" << lop << " == " << rop << ");\n";
    }
    else {
        out << "bool " << tempname << " = (" << lop << " != " << rop << ");\n";
    }
    return tempname;
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

void RetCall::Analyze() {
    elist->SetArgs(string(fnname), string(tinfo->getType()));
}

string RetCall::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string tempname = "temp" + to_string(tempcounter++);
    string type, t(tinfo->getType());
    string fname(fnname);
    fname = fname.substr(1,fname.size()-2);
    if (fname == "*__isoc99_scanf")
        fname = "scanf";
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    out << type << " " << tempname << " = " << fname << "(";
    if (fname == "scanf")
        elist->GenScanfCode(indentlevel);
    else if (fname == "printf")
        elist->GenPrintfCode(indentlevel);
    else elist->GenerateCode(indentlevel);
    cout << ");\n";
    out << "regs[0] = (long long int)" << tempname << ";\n";
    return "";
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

void NoRetCall::Analyze() {
    elist->SetArgs(string(fnname),"");
}

string NoRetCall::GenerateCode(int indentlevel) {
    string indentation = string(indentlevel*4, ' ');
    string fname(fnname);
    fname = fname.substr(1,fname.size()-2);
    out << fname << "(";
    genCodeFunName = fname;
    elist->GenerateCode(indentlevel);
    cout << ");\n";
    return "";
}

ExprList::ExprList(List<pair<int,const char*>> *as) {
    args = as;
}

void ExprList::PrintChildren(int indentlevel) {
    for (int i = 0; i < args->NumElements(); i++) {
        printf(" (%s,%d)", args->Nth(i).second, args->Nth(i).first);
    }
    printf("\n");
}

void ExprList::SetArgs(string sname, string rettype) {
    string name = sname.substr(1,sname.size()-2);
    FuncBody *fb = (FuncBody *)gSymbolTable[name];
    if (!fb) // imported fn
        return;
    List<string> *types = new List<string>;
    List<int> *regs = new List<int>;
    genCodeTempNum = 0;
    for (int i = 0; i < args->NumElements(); i++) {
        regs->Append(args->Nth(i).first);
        string temp = args->Nth(i).second;
        if (temp == "qi") {
            types->Append("char");
            genCodeTempNum++;
        }
        else if (temp == "si") {
            types->Append("int");
            genCodeTempNum += 4;
        }
        else {
            types->Append("long long int");
            genCodeTempNum += 8;
        }
    }
    string rtype = "void";
    if (rettype == "qi")
        rtype = "char";
    else if (rettype == "si")
        rtype = "int";
    else if (rettype == "di")
        rtype = "long long int";
    fb->setTypes(types, regs, rtype);
}

string ExprList::GenerateCode(int indentlevel) {
    int n = args->NumElements();
    string type, t;
    if (!n)
        return "";
    for (int i = n-1; i > 0; i--) {
        int reg = args->Nth(i).first;
        t = string(args->Nth(i).second);
        if (t == "qi")
            type = "char";
        else if (t == "si")
            type = "int";
        else type = "long long int";
        if (type != "long long int")
            cout << "(" << type << ")" << "regs[" << reg << "], ";
        else cout << "regs[" << reg << "], "; 
    }
    int reg = args->Nth(0).first;
    t = string(args->Nth(0).second);
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    if (type == "long long int")
        cout << "regs[" << reg << "]";
    else cout << "(" << type << ")regs[" << reg << "]";
    return "";
}

string ExprList::GenScanfCode(int indentlevel) {
    int n = args->NumElements();
    string type, t;
    for (int i = n-2; i > 0; i--) {
        int reg = args->Nth(i).first;
        t = string(args->Nth(i).second);
        if (t == "qi")
            type = "char";
        else if (t == "si")
            type = "int";
        else type = "long long int";
        if (i == n-2)
            type = "const char *";
        if (type != "long long int")
            cout << "(" << type << ")" << "regs[" << reg << "], ";
        else cout << "regs[" << reg << "], "; 
    }
    int reg = args->Nth(0).first;
    t = string(args->Nth(0).second);
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    if (n == 2)
        type = "const char *";
    if (type == "long long int")
        cout << "regs[" << reg << "]";
    else cout << "(" << type << ")regs[" << reg << "]";
    return "";
}

string ExprList::GenPrintfCode(int indentlevel) {
    int n = args->NumElements();
    string type, t;
    for (int i = n-2; i > 0; i--) {
        int reg = args->Nth(i).first;
        t = string(args->Nth(i).second);
        if (t == "qi")
            type = "char";
        else if (t == "si")
            type = "int";
        else type = "long long int";
        if (i == n-2)
            type = "const char *";
        if (type != "long long int")
            cout << "(" << type << ")" << "regs[" << reg << "], ";
        else cout << "regs[" << reg << "], "; 
    }
    int reg = args->Nth(0).first;
    t = string(args->Nth(0).second);
    if (t == "qi")
        type = "char";
    else if (t == "si")
        type = "int";
    else type = "long long int";
    if (n == 2)
        type = "const char *";
    if (type == "long long int")
        cout << "regs[" << reg << "]";
    else cout << "(" << type << ")regs[" << reg << "]";
    return "";
}