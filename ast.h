/*-----------------------------------------------------------------*
 * Defines the class Node for the Abstract Syntax Tree. Other,     *
 * special types of nodes will inherit from this class. All nodes  *
 * have a pointer to their Parent, their lexical location and      *
 * a function to print the subtree rooted at them in-order, along  *
 * with other members.                                             *
 *-----------------------------------------------------------------*/

#ifndef AST_H_
#define AST_H_

#include <stdlib.h>
#include "location.h"
#include "list.h"
#include <bits/stdc++.h>

/**
 *  A class representing nodes in the abstract syntax tree.
 *  This class acts as a superclass for all token classes that are used in the AST; i.e., each token class inherits from this class.
 *  All nodes have a pointer to their parent in the AST, their lexical location, and a function to print the subtree rooted at them in-order, along with other members.
 */
class Node{
    protected:
        yyltype *location; /**< pointer to an object containing the lexical location of the current node */
        Node *parent; /**< pointer to parent node of the current node */
    public:
        /**
         *  constructor
         *  @param loc lexical location of the node.
         */
        Node(yyltype loc);
        /**
         *  constructor
         */
        Node();
        /**
         *  destructor
         */
        virtual ~Node() {}

        /**
         *  returns the lexical location of the current node
         *  @return pointer to yyltype object containing location of current node
         */
        yyltype *GetLocation() {
            return this->location;
        }
        /**
         *  sets the parent of the current node
         *  @param p pointer to new parent node
         */
        void SetParent(Node *p) {
            this->parent = p;
        }
        /**
         *  returns the parent of the current node
         *  @return pointer to parent node
         */
        Node *GetParent() {
            return this->parent;
        }

        /**
         *  returns the name to be printed for the current node. It is a virtual function since it will be redefined in derived classes.
         *  @return name of the current node
         */
        virtual const char *GetPrintNameForNode() = 0;

        /**
         *  prints the in-order traversal of the subtree rooted at the current node. It is not a virtual function, and thus not overridden.
         *  @param indentlevel indentation level of the current node
         *  @param label 
         */
        void Print(int indentlevel, const char *label = NULL);

        /**
         *  prints the subtree rooted at the current node. It is a virtual function, and is redefined for individual token classes.
         *  @param indentlevel desired indentation level for the current node
         */
        virtual void PrintChildren(int indentlevel) {}
        /**
         *  analyzes statements in the program for useful information and stores them into relevant member variables.
         */
        virtual void Analyze() {}
        /**
         *  generates the equivalent pseudo-C code for that node. It is a virtual function, and is redefined for individual token classes.
         *  @param indentlevel desired indentation level for the current node
         */
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

/**
 *  A class representing the entire program.
 */
class Program : public Node {
    protected:
        List<FuncBody *> *funcbodylist; /**< pointer to a list of FuncBody pointers. Each FuncBody object contains the body of one function. */
    public:
        /**
         *  constructor
         *  @param bodylist pointer to list of all function bodies in the program
         */
        Program(List<FuncBody *> *bodylist);
        const char *GetPrintNameForNode() {
            return "Program";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing the body of one function in the program.
 */
class FuncBody : public Node {
    protected:
        List<Stmt *> *stmts; /**< pointer to a list of statements within the function */
        List<string> *types; /**< pointer to a list of strings which represent statement types */
        List<int> *regs; /**< pointer to a list of the registers used */
        const char *name; /**< name of the function */
        int numArgs; /**< number of arguments in the function */
        string retType; /**< return type of the function */
    public:
        /**
         *  constructor
         *  @param ss pointer to list of statements in the function body
         *  @param n name of the function
         */
        FuncBody(List<Stmt *> *ss, const char *n);
        const char *GetPrintNameForNode() {
            return "FuncBody";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        /**
         *  sets types, registers, and return type for the FuncBody object.
         *  @param types list of strings representing types
         *  @param regs list of registers for the function
         *  @param rtype return type of the function
         */
        void setTypes(List<string> *types, List<int> *regs, string rtype);
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing a single statement in the program.
 */
class Stmt : public Node {
    public:
        /**
         *  default constructor
         */
        Stmt() : Node() {}
        /**
         *  constructor
         *  @param loc lexical location of the statement
         */
        Stmt(yyltype loc) : Node(loc) {}
};

/**
 *  A class representing note statements in the program.
 */
class Note : public Stmt {
    public :
        /**
         *  default constructor
         */
        Note() : Stmt() {}
        /**
         *  constructor
         *  @param loc lexical location of note statement
         */
        Note(yyltype loc) : Stmt(loc) {}
        const char *GetPrintNameForNode() {
            return "Note";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing barrier statements in the program.
 */
class Barrier : public Stmt {
    public:
        /**
         *  default constructor
         */
        Barrier() : Stmt() {}
        /**
         *  constructor
         *  @param loc lexical location of barrier statement
         */
        Barrier(yyltype loc) : Stmt() {}
        const char *GetPrintNameForNode() {
            return "Barrier";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing code_label statements in the program.
 */
class CodeLabel : public Stmt {
    protected:
        int labelno; /**< the label number of that code label */
    public:
        /**
         *  constructor
         *  @param lno the label number of the code label
         */
        CodeLabel(int lno) { labelno = lno; }
        const char *GetPrintNameForNode() {
            return "CodeLabel";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing integer variables in the program.
 *  The difference of Integer from T_IntConstant is that Integer also allows negative integers.
 *  If the integer is negative then remember to pass -yylval.intconstant instead of positive.
 */
class Integer : public Node {
    protected:
        int value; /**< the value stored in the integer variable */
    public:
        /**
         *  constructor
         *  @param val value to be initialized in the integer variable
         */
        Integer(int val);
        const char *GetPrintNameForNode() {
            return "Integer";
        }
        void PrintChildren(int indentlevel);
        /**
         *  get value stored in integer variable
         *  @return value of integer variable
         */
        int getValue() { return value; }
        void Analyze() { }
};

/**
 *  A class representing a general instruction (insn in RTL).
 */
class Insn : public Stmt {
    protected:
        MainCmd *maincmd; /**< pointer to the main command in the instruction */
    public:
        /**
         *  constructor
         *  @param mc main command for the instruction
         */
        Insn(MainCmd *mc);
        const char *GetPrintNameForNode() {
            return "Insn";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing the main command in an instruction
 */
class MainCmd : public Node {
    public:
        /**
         *  default constructor
         */
        MainCmd() : Node() {}
        /**
         *  constructor
         *  @param loc lexical location of the command
         */
        MainCmd(yyltype loc) : Node(loc) {}
};

/**
 *  A class representing a plain (non-parallel) command.
 *  Plain commands include clobber, set, and use commands.
 */
class PlainCmd : public MainCmd {
    public:
        /**
         *  default constructor
         */
        PlainCmd() : MainCmd() {}
        /**
         *  constructor
         *  @param loc lexical location of the command
         */
        PlainCmd(yyltype loc) : MainCmd(loc) {}
};

/**
 *  A class representing a parallel command.
 *  A parallel command is basically a collection of plain commands, to be executed parallelly.
 */
class ParallelCmd : public MainCmd {
    protected:
        List<PlainCmd *> *cmds; /**< pointer to a list of plain commands for parallel execution */
    public:
        /**
         *  constructor
         *  @param cs list of plain commands to initialize the parallel command with
         */
        ParallelCmd(List<PlainCmd *> *cs);
        const char *GetPrintNameForNode() {
            return "ParallelCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing a clobber command in the program.
 *  Clobber commands are not useful in conversion to pseudo-C code, so we ignore these.
 */
class ClobberCmd : public PlainCmd {
    public:
        /**
         *  default constructor
         */
        ClobberCmd() : PlainCmd() {}
        /**
         *  constructor
         *  @param loc lexical location of the command
         */
        ClobberCmd(yyltype loc) : PlainCmd(loc) {}
        const char *GetPrintNameForNode() {
            return "ClobberCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing a set command in the program.
 *  The set command is basically used for assignment.
 */ 
class SetCmd : public PlainCmd {
    protected:
        Operand *op1; /**< first operand of set command; i.e., operand into which value is to be stored */
        Operand *op2; /**< second operand of set command; i.e., operand from which value is to be taken */
    public:
        /**
         *  constructor
         *  @param o1 first operand of set command
         *  @param o2 second operand of set command
         */
        SetCmd(Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "SetCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing a use command in the program.
 *  The use command is used to convey which register is finally to be used for the return value of a function.
 */ 
class UseCmd : public PlainCmd {
    public:
        /**
         *  default constructor
         */
        UseCmd() : PlainCmd() {}
        /**
         *  constructor
         *  @param loc lexical location of the use command
         */
        UseCmd(yyltype loc) : PlainCmd(loc) {}
        const char *GetPrintNameForNode() {
            return "UseCmd";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel) { return ""; }
};

/**
 *  A class representing operands for commands in the program.
 */
class Operand : public Node {
    public:
        /**
         *  default constructor
         */
        Operand() : Node() {}
        /**
         *  constructor
         *  @param loc lexical location of the operand
         */
        Operand(yyltype loc) : Node(loc) {}
};

/**
 *  A class representing integer type operands
 */
class IntOperand : public Operand {
    protected:
        int intvalue; /**< value of the integer operand */
    public:
        /**
         *  constructor
         *  @param iv value of the integer operand
         */
        IntOperand(int iv);
        const char *GetPrintNameForNode() {
            return "IntOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel) { return to_string(intvalue); }
};

/**
 *  A class representing register-type operands.
 */
class ExprOperand : public Operand {
    protected:
        LocInfo *linfo; /**< location information for the operand. This includes memory type, and the flags involved. */
        TypeInfo *tinfo; /**< type information for the operand */
        Expr *expr; /**< the actual expression in the operand. Expressions can be of 7 types. */
    public:
        /**
         *  constructor
         *  @param li location info
         *  @param ti type info
         *  @param e expression
         */
        ExprOperand(LocInfo *li, TypeInfo *ti, Expr *e);
        const char *GetPrintNameForNode() {
            return "ExprOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing extended register operands.
 */
class ExtendOperand : public Operand {
    protected:
        TypeInfo *tinfo; /**< type information of the operand */
        Operand *op; /**< the operand which is extended */
    public:
        /**
         *  constructor
         *  @param ti value to initialize type info
         *  @param o value to initialize operand
         */
        ExtendOperand(TypeInfo *ti, Operand *o);
        const char *GetPrintNameForNode() {
            return "ExtendOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing dereferenced operands.
 */
class DerefOperand : public Operand {
    protected:
        LocInfo *linfo; /**< location information for the operand. This includes memory type, and the flags involved. */
        TypeInfo *tinfo; /**< type information for the operand */
        Operand *op; /**< the operand which is dereferenced */
    public:
        /**
         *  constructor
         *  @param li location info
         *  @param ti type info
         *  @param o operand
         */
        DerefOperand(LocInfo *li, TypeInfo *ti, Operand *o);
        const char *GetPrintNameForNode() {
            return "DerefOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing symbol_ref operands.
 */
class SymbolRefOperand : public Operand {
    protected:
        const char *symbol; /**< string denoting the address to be used */
    public:
        /**
         *  constructor
         *  @param s initialization string
         */
        SymbolRefOperand(const char *s);
        const char *GetPrintNameForNode() {
            return "SymbolRefOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing type information of operands.
 */
class TypeInfo : public Node {
    protected:
        const char *type; /**< string representing operand type */
    public:
        /**
         *  constructor
         *  @param t type for initialization
         */
        TypeInfo(const char *t);
        const char *GetPrintNameForNode() {
            return "TypeInfo";
        }
        void PrintChildren(int indentlevel);
        /**
         *  returns the type of the operand
         *  @return operand type, if it exists
         */
        const char *getType() { 
            return (type? type : (const char *)""); 
        }
        void Analyze() { }
};

/**
 *  A class representing location information of operands.
 */
class LocInfo : public Node {
    protected:
        MemType *mtype; /**< the memory type of the operand */
        List<Flag *> *flags; /**< flags involved in the operand */
    public:
        /**
         *  constructor
         *  @param mt memory type
         *  @param f pointer to the list of operand flags
         */
        LocInfo(MemType *mt, List<Flag *> *f);
        const char *GetPrintNameForNode() {
            return "LocInfo";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        /**
         *  checks for a particular flag in the operand
         *  @param flag flag to be checked
         *  @return true if flag is set, false otherwise
         */
        bool checkForFlag(string flag);
        /**
         *  returns the memory type of the operand
         *  @return memory type
         */
        string getMemType();
};

/**
 *  A class representing the type of memory used in an operand.
 */
class MemType : public Node {
    protected:
        const char *type; /**< string denoting memory type */
    public:
        /**
         *  constructor
         *  @param t initialization string for memory type
         */
        MemType(const char *t);
        const char *GetPrintNameForNode() {
            return "MemType";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        /**
         *  returns the memory type of the operand
         *  @return memory type
         */
        string getType() { return string(type); }
};

/**
 *  A class representing each of the flags involved in an operand.
 */
class Flag : public Node {
    protected:
        const char *flag; /**< string denoting the flag */
    public:
        /**
         *  constructor
         *  @param f name of the flag
         */
        Flag(const char *f);
        const char *GetPrintNameForNode() {
            return "Flag";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        /**
         *  returns the name of the flag
         *  @return string denoting the flag
         */
        string getFlag() { return string(flag); }
};

/**
 *  A class denoting expressions in the program.
 *  There are several different kinds of expressions, each of which inherits from this class.  
 */
class Expr : public Node {
    public:
        /**
         *  default constructor
         */
        Expr() : Node() {}
        /**
         *  constructor
         *  @param loc lexical location of the expression
         */
        Expr(yyltype loc) : Node(loc) {}
};

/**
 *  A class denoting integer type expressions in the program.
 */
class IntegerExpr : public Expr {
    protected:
        int value; /**< value of the integer expression */
    public:
        /**
         *  constructor
         *  @param v value to be initialized
         */
        IntegerExpr(int v);
        const char *GetPrintNameForNode() {
            return "IntegerExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting addition expressions in the program.
 */
class PlusExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in addition */
        Operand *op2; /**< second operand in addition */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        PlusExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "PlusExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting subtraction expressions in the program.
 */
class MinusExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in subtraction */
        Operand *op2; /**< second operand in subtraction */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        MinusExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "MinusExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting multiplication expressions in the program.
 */
class MultExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in multiplication */
        Operand *op2; /**< second operand in multiplication */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        MultExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "MultExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting division expressions in the program.
 */
class DivExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in division */
        Operand *op2; /**< second operand in division */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        DivExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "DivExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting unsigned division expressions in the program.
 */
class UDivExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in division */
        Operand *op2; /**< second operand in division */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        UDivExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "UDivExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting modulo expressions in the program.
 */
class ModExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        ModExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "ModExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting unsigned modulo expressions in the program.
 */
class UModExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        UModExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "UModExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting logical left shift expressions in the program.
 */
class LshiftExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        LshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "LshiftExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting logical right shift expressions in the program.
 */
class LshiftRtExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        LshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "LshiftRtExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting arithmetic left shift expressions in the program.
 */
class AshiftExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        AshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "AshiftExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting arithmetic right shift expressions in the program.
 */
class AshiftRtExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        AshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "AshiftRtExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting subreg expressions in the program.
 */
class SubregExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< type of the operand */
        Operand *op; /**< the actual operand itself */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o operand
         */
        SubregExpr(TypeInfo *ti, Operand *o);
        const char *GetPrintNameForNode() {
            return "SubregExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting comparison expressions in the program.
 */
class CompareExpr : public Expr {
    protected:
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        CompareExpr(TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "CompareExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting conditional expressions in the program.
 */
class ConditionExpr : public Expr {
    protected:
        Condition *cond; /**< the condition (relational operator) */
        TypeInfo *tinfo; /**< types of the operands */
        Operand *op1; /**< first operand in expression */
        Operand *op2; /**< second operand in expression */
    public:
        /**
         *  constructor
         *  @param c condition (relational operator)
         *  @param ti type information
         *  @param o1 first operand
         *  @param o2 second operand
         */
        ConditionExpr(Condition *c, TypeInfo *ti, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "ConditionExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting symbol_ref expressions in the program.
 */
class SymbolRefExpr : public Expr {
     protected:
        TypeInfo *ti; /**< type information */
        const char *sym; /**< string */
    public:
        /**
         *  constructor
         *  @param ti type information
         *  @param s symbol
         */
        SymbolRefExpr(TypeInfo *t, const char *s);
        const char *GetPrintNameForNode() {
            return "SymbolRefExpr";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting jump statements in the program.
 *  These statements are used to jump the control flow of execution from one point to another.
 */
class JumpInsn : public Stmt {
    protected:
        Dest *dest; /**< destination address of jump instruction */
    public:
        /**
         *  constructor
         *  @param d destination of jump
         */
        JumpInsn(Dest *d);
        const char *GetPrintNameForNode() {
            return "JumpInsn";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class denoting destinations in the program.
 *  Destinations are operands, and hence derived from the Operand class.
 *  There are two types of destinations; label and if_then_else.
 */
class Dest : public Operand {
    public:
        /**
         *  default constructor
         */
        Dest() : Operand() {}
        /**
         *  constructor
         *  @param loc lexical location
         */
        Dest(yyltype loc) : Operand(loc) {}
};

/**
 *  A class denoting "neg" operands in the program.
 */
class NegOperand : public Operand {
    protected:
        Operand *op; /**< operand to be negated */
    public:
        /**
         *  constructor
         *  @param o operand
         */
        NegOperand(Operand *o);
        const char *GetPrintNameForNode() {
            return "NegOperand";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
};

/**
 *  A class denoting labels in the program.
 *  A label is a type of destination to which the control flow can jump using a jump_insn.
 *  Analogous to labels in C that are used along with goto statements.
 */
class Label : public Dest {
    protected:
        int labelno; /**< a number to identify the label */
    public:
        /**
         *  constructor
         *  @param lno label number
         */
        Label(int lno);
        const char *GetPrintNameForNode() {
            return "Label";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/** 
 *  Not actually a possible production. However, since we need Dest
 *  to double up as InDest as well, we will let Pc derive from Dest.
 */
class Pc : public Dest {
    public:
        /**
         *  default constructor
         */
        Pc() : Dest() {}
        /**
         *  constructor
         *  @param loc lexical location
         */
        Pc(yyltype loc) : Dest(loc) {}
        const char *GetPrintNameForNode() {
            return "Pc";
        }
        void PrintChildren(int indentlevel) {}
        void Analyze() { }
        string GenerateCode(int indentlevel) { return "Pc"; }
};

/**
 *  A class representing an if-then-else construct in the program.
 */
class IfThenElse : public Dest {
    protected:
        Comparison *comp; /**< comparison expression which decides the flow of execution */
        Operand *op1; /**< operand to be evaluated if comp is true */
        Operand *op2; /**< operand to be evaluated if comp is false */
    public:
        /**
         *  constructor
         *  @param c comparison expression
         *  @param o1 first operand of comparison
         *  @param o2 second operand of comparison
         */
        IfThenElse(Comparison *c, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "IfThenElse";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing expressions involving relational operators.
 *  Comparison may use conditions such as lt, gt, ltu, gtu, le, ge, leu, geu, eq, ne.
 */
class Comparison : public Node {
    protected:
        Condition *cond; /**< the condition, i.e., the relational operator */
        Operand *op1; /**< first operand of the relational operator */
        Operand *op2; /**< second operand of the relational operator */
    public:
        /**
         *  constructor
         *  @param c relational operator used
         *  @param o1 first operand of comparison
         *  @param o2 second operand of comparison
         */
        Comparison(Condition *c, Operand *o1, Operand *o2);
        const char *GetPrintNameForNode() {
            return "Comparison";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing conditions, i.e., relational operators.
 *  Conditions may be lt, gt, ltu, gtu, le, ge, leu, geu, eq, ne.
 */
class Condition : public Node {
    protected:
        const char *cond; /**< string denoting the relational operator involved */
    public:
        /**
         *  constructor
         *  @param c string denoting relational operator
         */
        Condition(const char *c);
        const char *GetPrintNameForNode() {
            return "Condition";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        /**
         *  returns the relational operator involved here
         *  @return string representing relational operator
         */
        string getCondition() { return string(cond); }
};

/**
 *  A class representing call commands in the program.
 *  These are used to call other functions/subroutines.
 *  There are two kinds of calls, RetCall and NoRetCall.
 */
class Call : public Stmt {
    public:
        /**
         *  default constructor
         */
        Call() : Stmt() {}
        /**
         *  constructor
         *  @param loc lexical location of call statement
         */
        Call(yyltype loc) : Stmt(loc) {}
};

/**
 *  A class representing a call that involves returning a value.
 */
class RetCall : public Call {
    protected:
        TypeInfo *tinfo; /**< return type */
        int returnreg; /**< register containing the returned value */
        const char *fnname; /**< name of function to be called */
        ExprList *elist; /**< list of expressions involved in the call_insn block */
    public:
        /**
         *  constructor
         *  @param ti return type information
         *  @param rr name of return register
         *  @param fn name of function to be called
         *  @param el expression list
         */
        RetCall(TypeInfo *ti, int rr, const char *fn, ExprList *el);
        const char *GetPrintNameForNode() {
            return "RetCall";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing a call that does not return a value.
 */
class NoRetCall : public Call {
    protected:
        const char *fnname; /**< name of function to be called */
        ExprList *elist; /**< list of expressions in the call_insn block */
    public:
        /**
         *  constructor
         *  @param fn name of function to be called
         *  @param el expression list
         */
        NoRetCall(const char *fn, ExprList *el);
        const char *GetPrintNameForNode() {
            return "NoRetCall";
        }
        void PrintChildren(int indentlevel);
        void Analyze();
        string GenerateCode(int indentlevel);
};

/**
 *  A class representing an expression list (expr_list) in the program.
 */
class ExprList : public Node{
    protected:
        List<pair<int,const char*>> *args; /**< list of expressions */
    public:
        /**
         *  constructor
         *  @param as initial value of args
         */
        ExprList(List<pair<int,const char*>> *as);
        const char *GetPrintNameForNode() {
            return "ExprList";
        }
        void PrintChildren(int indentlevel);
        void Analyze() { }
        /**
         *  modifies the args variable to contain new name and new return type.
         *  @param name name string
         *  @param return type string
         */
        void SetArgs(string name, string rettype);
        string GenerateCode(int indentlevel);
};

#endif