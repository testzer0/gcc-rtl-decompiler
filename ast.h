/*-----------------------------------------------------------------*
 * Defines the class Node for the Abstract Syntax Tree. Other,     *
 * special types of nodes will inherit from this class. All nodes  *
 * have a pointer to their Parent, their lexical location and      *
 * a function to print the subtree rooted at them in-order, along  *
 * with other members.                                             *
 *-----------------------------------------------------------------*/

#ifndef AST_H_
#define AST_H_

#include <stdlib.h>   // for NULL
#include "location.h"
#include "list.h"
#include <bits/stdc++.h>    // later replace by specific header

// TODO: For now the unsigned versions of operators are same as the signed versions.
// Fix this later.

class Node{
    protected:
        yyltype *location;
        Node *parent;
    public:
        Node(yyltype loc);
        Node();
        virtual ~Node() {}

        yyltype *GetLocation() {
            return this->location;
        }
        void SetParent(Node *p) {
            this->parent = p;
        }
        Node *GetParent() {
            return this->parent;
        }

        virtual const char *GetPrintNameForNode() = 0;
        // Returns the name to be printed for the node. virtual since will be
        // redefined in derived classes.

        void Print(int indentlevel, const char *label = NULL);
        // Prints the in-order traversal of subtree rooted at this. Not virtual,
        // should not be overriden.

        virtual void PrintChildren(int indentlevel) {}
        // void PrintCode(int indentlevel)
        // virtual const char *PrintCodeChilfren(int indentlevel)
        virtual void Analyze() {}
        virtual string GenerateCode(int indentlevel) { return ""; }
};

class Error : public Node
{
  public:
    Error() : Node() {}
    const char *GetPrintNameForNode()   { return "Error"; }
};

class FuncBodyList;
class FuncBody;
class StmtList;
class Stmt;
class MainCmd;
class Operand;
class LocInfo;
class TypeInfo;
class Expr;
class MemType;
class Flags;
class Flag;
class Dest;
class Comparison;
class Condition;
class ExprList;

class Program : public Node {
    protected:
        List<FuncBody *> *funcbodylist;
    public:
        Program(List<FuncBody *> *bodylist);
        const char *GetPrintNameForNode() {
            return "Program";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        string GenerateCode(int indentlevel);
};

class FuncBody : public Node {
    protected:
        List<Stmt *> *stmts;
        List<string> *types;
        List<int> *regs;
        const char *name;
        int numArgs;
        string retType;
    public :
        FuncBody(List<Stmt *> *ss, const char *n);
        const char *GetPrintNameForNode() {
            return "FuncBody";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        void setTypes(List<string> *types, List<int> *regs, string rtype);
        string GenerateCode(int indentlevel);
};

// StmtList not needed to be declared as a separate class
// can create intermediate var in parser.y

class Stmt : public Node {
    public:
        Stmt() : Node() {}
        Stmt(yyltype loc) : Node(loc) {}
};

class Note : public Stmt {
    public :
        Note() : Stmt() {}
        Note(yyltype loc) : Stmt(loc) {}        // We don't care about the notes
        const char *GetPrintNameForNode() {
            return "Note";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class Barrier : public Stmt {
    public:
        Barrier() : Stmt() {}
        Barrier(yyltype loc) : Stmt() {}
        const char *GetPrintNameForNode() {
            return "Barrier";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class CodeLabel : public Stmt {
    protected:
        int labelno;
    public:
        CodeLabel(int lno) { labelno = lno; }
        const char *GetPrintNameForNode() {
            return "CodeLabel";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class Integer : public Node {
    protected:
        int value;
    public:
        Integer(int val);   
        const char *GetPrintNameForNode() {
            return "Integer";
        }
        // The difference of Integer from T_IntConstant is that Integer also allows negative integers
        // If the integer is negative then remember to pass -yylval.intconstant instead of +
        void PrintChildren(int indentlevel);
        int getValue() { return value; }
        void Analyze() { }
};


class Insn : public Stmt {
    protected:
        MainCmd *maincmd;
    public:
        Insn(MainCmd *mc);
        const char *GetPrintNameForNode() {
            return "Insn";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class MainCmd : public Node {
    public:
        MainCmd() : Node() {}
        MainCmd(yyltype loc) : Node(loc) {}
        // MainCmd is of two types so we define nothing here
};

class PlainCmd : public MainCmd {
    public:
        PlainCmd() : MainCmd() {}
        PlainCmd(yyltype loc) : MainCmd(loc) {}
        // Again, PlainCmd is of three types so we define nothing here
};

class ParallelCmd : public MainCmd {
    protected:
        List<PlainCmd *> *cmds;
    public:
        ParallelCmd(List<PlainCmd *> *cs);
        const char *GetPrintNameForNode() {
            return "ParallelCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class ClobberCmd : public PlainCmd {
    public:
        ClobberCmd() : PlainCmd() {}
        ClobberCmd(yyltype loc) : PlainCmd(loc) {}
        // Don't care
        const char *GetPrintNameForNode() {
            return "ClobberCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class SetCmd : public PlainCmd {
    protected:
        Operand *op1, *op2;
    public:
        SetCmd(Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "SetCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class UseCmd : public PlainCmd {
    public:
        UseCmd() : PlainCmd() {}
        UseCmd(yyltype loc) : PlainCmd(loc) {}
        const char *GetPrintNameForNode() {
            return "UseCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel) { return ""; }
};

class Operand : public Node {
    public:
        Operand() : Node() {}
        Operand(yyltype loc) : Node(loc) {}
        // There are 3 possibilities for operand, as below
};

class IntOperand : public Operand {
    protected:
        int intvalue;
    public:
        IntOperand(int iv);
        const char *GetPrintNameForNode() {
            return "IntOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel) { return to_string(intvalue); }
};

class ExprOperand : public Operand {
    protected:
        LocInfo *linfo;
        TypeInfo *tinfo;
        Expr *expr;
    public:
        ExprOperand(LocInfo *li, TypeInfo *ti, Expr *e);
        const char *GetPrintNameForNode() {
            return "ExprOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class ExtendOperand : public Operand {
    protected:
        TypeInfo *tinfo;
        Operand *op;
    public:
        ExtendOperand(TypeInfo *ti, Operand *o);
        const char *GetPrintNameForNode() {
            return "ExtendOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class DerefOperand : public Operand {
    protected:
        LocInfo *linfo;
        TypeInfo *tinfo;
        Operand *op;
    public:
        DerefOperand(LocInfo *li, TypeInfo *ti, Operand *o);
        const char *GetPrintNameForNode() {
            return "DerefOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class SymbolRefOperand : public Operand {
    protected:
        const char *symbol;
    public:
        SymbolRefOperand(const char *s);
        const char *GetPrintNameForNode() {
            return "SymbolRefOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class TypeInfo : public Node {
    protected:
        const char *type;
    public:
        TypeInfo(const char *t);
        const char *GetPrintNameForNode() {
            return "TypeInfo";
        }
        void PrintChildren(int indentlevel);
        const char *getType() { 
            return (type? type : (const char *)""); 
        }
        void Analyze() { }
};

class LocInfo : public Node {
    protected:
        MemType *mtype;
        List<Flag *> *flags;
    public:
        LocInfo(MemType *mt, List<Flag *> *f);
        const char *GetPrintNameForNode() {
            return "LocInfo";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        bool checkForFlag(string flag);
        string getMemType();
};

class MemType : public Node {
    protected:
        const char *type;
    public:
        MemType(const char *t);
        const char *GetPrintNameForNode() {
            return "MemType";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string getType() { return string(type); }
};

// There is no need to declare a class for flags
// An intermediate bison variable of List<Flag *> * type will suffice.

class Flag : public Node {
    protected:
        const char *flag;
    public:
        Flag(const char *f);
        const char *GetPrintNameForNode() {
            return "Flag";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string getFlag() { return string(flag); }
};

class Expr : public Node {
    public:
        Expr() : Node() {}
        Expr(yyltype loc) : Node(loc) {}
        // Expr is of 7 types
};

class IntegerExpr : public Expr {
    protected:
        int value;
    public:
        IntegerExpr(int v);
        const char *GetPrintNameForNode() {
            return "IntegerExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class PlusExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        PlusExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "PlusExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class MinusExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        MinusExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "MinusExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class MultExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        MultExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "MultExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class DivExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        DivExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "DivExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class UDivExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        UDivExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "UDivExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class ModExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        ModExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "ModExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class UModExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        UModExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "UModExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class LshiftExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        LshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "LshiftExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class LshiftRtExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        LshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "LshiftRtExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class AshiftExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        AshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "AshiftExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class AshiftRtExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        AshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "AshiftRtExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class SubregExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op;
    public:
        SubregExpr(TypeInfo *ti, Operand *o);
        const char *GetPrintNameForNode() {
            return "SubregExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class CompareExpr : public Expr {
    protected:
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;;
    public:
        CompareExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "CompareExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class ConditionExpr : public Expr {
    protected:
        Condition *cond;
        TypeInfo *tinfo;
        Operand *op1;
        Operand *op2;
    public:
        ConditionExpr(Condition *c, TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "ConditionExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class SymbolRefExpr : public Expr {
     protected:
        TypeInfo *ti;
        const char *sym;
    public:
        SymbolRefExpr(TypeInfo *t, const char *s);
        const char *GetPrintNameForNode() {
            return "SymbolRefExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class JumpInsn : public Stmt {
    protected:
        Dest *dest;
    public:
        JumpInsn(Dest *d);
        const char *GetPrintNameForNode() {
            return "JumpInsn";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class Dest : public Operand {
    public:
        Dest() : Operand() {}
        Dest(yyltype loc) : Operand(loc) {}
        // Dest is also of two types, label or if_then_else
};

class NegOperand : public Operand {
    protected:
        Operand *op;
    public:
        NegOperand(Operand *o);
        const char *GetPrintNameForNode() {
            return "NegOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
};

class Label : public Dest {
    protected:
        int labelno;
    public:
        Label(int lno);
        const char *GetPrintNameForNode() {
            return "Label";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class Pc : public Dest {
    // Not actually a possible production. However since we need Dest
    // to double up as InDest as well, we will let Pc derive from Dest.
    public:
        Pc() : Dest() {}
        Pc(yyltype loc) : Dest(loc) {}
        const char *GetPrintNameForNode() {
            return "Pc";
        }
        void PrintChildren(int indentlevel) {}
        void Analyze() { }
        string GenerateCode(int indentlevel) { return "Pc"; }
};

class IfThenElse : public Dest {
    protected:
        Comparison *comp;
        Operand *op1;
        Operand *op2; // these should be InDests actually, but Dest will do.
    public:
        IfThenElse(Comparison *c, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "IfThenElse";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class Comparison : public Node {
    protected:
        Condition *cond;
        Operand *op1;
        Operand *op2;
    public:
        Comparison(Condition *c, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "Comparison";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

class Condition : public Node {
    protected:
        const char *cond;
    public:
        Condition(const char *c);
        const char *GetPrintNameForNode() {
            return "Condition";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string getCondition() { return string(cond); }
};

class Call : public Stmt {
    public:
        Call() : Stmt() {}
        Call(yyltype loc) : Stmt(loc) {}
        // Call is of two types
};

class RetCall : public Call {
    protected:
        TypeInfo *tinfo;
        int returnreg;
        const char *fnname;
        ExprList *elist;
    public:
        RetCall(TypeInfo *ti, int rr, const char *fn, ExprList *el);
        const char *GetPrintNameForNode() {
            return "RetCall";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        string GenerateCode(int indentlevel);
};

class NoRetCall : public Call {
    protected:
        const char *fnname;
        ExprList *elist;
    public:
        NoRetCall(const char *fn, ExprList *el);
        const char *GetPrintNameForNode() {
            return "NoRetCall";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        string GenerateCode(int indentlevel);
};

class ExprList : public Node{
    protected:
        List<pair<int,const char*>> *args;
    public:
        ExprList(List<pair<int,const char*>> *as);
        const char *GetPrintNameForNode() {
            return "ExprList";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        void SetArgs(string name, string rettype);
        string GenerateCode(int indentlevel);
};

#endif