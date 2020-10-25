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

class Program : public Node {
    protected:
        List<FuncBodyList *> *funcbodylist;
    public:
        Program(List<FuncBodyList *> *bodylist);
        const char *GetPrintNameForNode() {
            return "Program";
        }
        void PrintChildren(int indentlevel);
};

class FuncBody : public Node {
    protected:
        StmtList *stmtlist;
        char *name;
    public :
        FuncBody(StmtList *slist, char *n);
        const char *GetPrintNameForNode() {
            return "FuncBody";
        }
        void PrintChildren(int indentlevel);
};

class StmtList : public Node {
    protected:
        List<Stmt *> *stmts;
    public:
        StmtList(List<Stmt *> *ss);
        const char *GetPrintNameForNode() {
            return "StmtList";
        }
        void PrintChildren(int indentlevel);
};

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
        void PrintChildren(int indentlevel) {}
};

class Barrier : public Stmt {
    public:
        Barrier() : Stmt() {}
        Barrier(yyltype loc) : Stmt() {}
        const char *GetPrintNameForNode() {
            return "Barrier";
        }
        void PrintChildren(int indentlevel) {}
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

class CmdList : public MainCmd {
    protected:
        List<PlainCmd *> *cmds;
    public:
        CmdList(List<PlainCmd *> *cs);
        const char *GetPrintNameForNode() {
            return "CmdList";
        }
        void PrintChildren(int indentlevel);
};

class ClobberCmd : public PlainCmd {
    public:
        ClobberCmd() : PlainCmd() {}
        ClobberCmd(yyltype loc) : PlainCmd(loc) {}
        // Don't care
        const char *GetPrintNameForNode() {
            return "ClobberCmd";
        }
        void PrintChildren(int indentlevel) {}
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
};

class UseCmd : public PlainCmd {
    public:
        UseCmd() : PlainCmd() {}
        UseCmd(yyltype loc) : PlainCmd(loc) {}
        const char *GetPrintNameForNode() {
            return "UseCmd";
        }
        void PrintChildren(int indentlevel) {}
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
};

class LocInfo : public Node {
    protected:
        MemType *mtype;
        Flags *flags;
    public:
        LocInfo(MemType *mt, Flags *f);
        const char *GetPrintNameForNode() {
            return "LocInfo";
        }
        void PrintChildren(int indentlevel);
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
};

class Flags : public Node {
    protected:
        List<Flag *> *flags;
    public:
        Flags(List<Flag *> *f);
        const char *GetPrintNameForNode() {
            return "Flags";
        }
        void PrintChildren(int indentlevel);
};

class Flag : public Node {
    protected:
        const char *flag;
    public:
        Flag(const char *f);
        const char *GetPrintNameForNode() {
            return "Flag";
        }
        void PrintChildren(int indentlevel);
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
};

class Dest : public Node {
    public:
        Dest() : Node() {}
        Dest(yyltype loc) : Node(loc) {}
        // Dest is also of two types, label or if_then_else
};

class Label : Dest {
    protected:
        int labelno;
    public:
        Label(int lno);
        const char *GetPrintNameForNode() {
            return "Label";
        }
        void PrintChildren(int indentlevel);
};

class Pc : Dest {
    // Not actually a possible production. However since we need Dest
    // to double up as InDest as well, we will let Pc derive from Dest.
    public:
        Pc() : Dest() {}
        Pc(yyltype loc) : Dest(loc) {}
        const char *GetPrintNameForNode() {
            return "Pc";
        }
        void PrintChildren() {}
};

class IfThenElse : Dest {
    protected:
        Comparison *comp;
        Dest *dest1;
        Dest *dest2; // these should be InDests actually, but Dest will do.
    public:
        IfThenElse(Comparison *c, Dest *d1, Dest *d2);
        const char *GetPrintNameForNode() {
            return "IfThenElse";
        }
        void PrintChildren(int indentlevel);
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
        char *fnname;
    public:
        RetCall(TypeInfo *ti, int rr, char *fn);
        const char *GetPrintNameForNode() {
            return "RetCall";
        }
        void PrintChildren(int indentlevel);
};

class NoRetCall : public Call {
    protected:
        char *fnname;
    public:
        NoRetCall(char *fn);
        const char *GetPrintNameForNode() {
            return "NoRetCall";
        }
        void PrintChildren(int indentlevel);
};

#endif