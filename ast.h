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

/**
*  The base class from which all other classes inherit.
*  Defines some (virtual) functions common to every class.
*/
class Node{
    protected:
        yyltype *location; /**< Holds the lineno and colno of the starting of the class in-code. */
        Node *parent; /**< A pointer to the parent of this node in the AST. */
    public:
        /**
         * A plain constructor. Nothing to see here.
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Node(yyltype loc);

        /**
         * Another plain constructor. Nothing to see here.
         */
        Node();
        virtual ~Node() {}

        /**
         * Returns the location of (the beginning of) this class.
         */
        yyltype *GetLocation() {
            return this->location;
        }

        /**
         * A helper function to set the parent of the class.
         * @param p The class which must be set as parent.
         */
        void SetParent(Node *p) {
            this->parent = p;
        }

        /**
         * Returns the parent of the class.
         */
        Node *GetParent() {
            return this->parent;
        }

        /**
         * Returns the name to be printed for the node. Should
         * be overriden by inheriting classes to their respective
         * names.
         */
        virtual const char *GetPrintNameForNode() = 0;

        /**
         * Prints the preorder traversal of the abstract syntax (sub)tree
         * rooted at this node. Must _not_ be overriden by inheriting
         * classes: they must override PrintChildren instead. Prints 
         * only the name of the node (rest is printed in PrintChildren)
         * @param indentlevel The indentation level for printing the name, 
         *  determined by the depth of the node in the AST.
         * @param label A label that must be prepened before the class name.
         *  Not used for now.
         */
        void Print(int indentlevel, const char *label = NULL);

        /**
         * Prints the extra information about the specific class and then calls
         * Print() on its children. This function _must_ be overriden by inheriting classes.
         * @param indentlevel The indentation level for printing the name, 
         *  determined by the depth of the node in the AST.
         */
        virtual void PrintChildren(int indentlevel) {}
        
        /**
         * Performs some basic analysis of the class, such as listing
         * the functional calls and updating the parameter types for the function calls.
         * Also adds entries to the global symbol table when called for functions.
         * Must be overriden by inheriting classes.
         */
        virtual void Analyze() {}

        /**
         * Performs the code generation of the decompiled c code. Then proceeds
         * to call GenerateCode() on the child classes recursively. Must be 
         * overriden by inheriting classes
         * @param indentlevel The indentation level for printing the name, 
         *  determined by the depth of the node in the AST.
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
 * The root node of the entire AST. Represents the whole program. Composed of 
 * function bodies, of which the last one is (unless there is no main()) the
 * main() function.
 */
class Program : public Node {
    protected:
        /**
         * The list of function bodies in the program.
         */
        List<FuncBody *> *funcbodylist;
    public:
        /**
         * A simple constructor.
         * @param bodylist The list of function bodies to be assigned to funcbodylist
         */
        Program(List<FuncBody *> *bodylist);

        /**
         * Returns the name of the (type of) node.
         */
        const char *GetPrintNameForNode() {
            return "Program";
        }
        /**
         * Calls Print() on the children of this node.
         * @param indentlevel indentation level of the current node in accordance with
         *  depth in the AST.
         */
        void PrintChildren(int indentlevel);
        /**
         * There is no analysis to be done at this stage, so just calls Analyze()
         * on the children.
         */
        void Analyze();
        /**
         * Generates code for the whole program. Prints the preamble code and then
         * proceeds to call GenerateCode() for the function bodies in turn.
         * @param indentlevel The indentation level of the code to be printed. Is
         *  typically 0 at the program level.
         */
        string GenerateCode(int indentlevel);
};

/**
 * The class representing a function and its body (not only the body, despite
 * the confusing name). Holds information about the name of the function, the
 * number and types of parameters, the return value and its type; and has pointers
 * to the statements of its body which constitute the node's children.
 */
class FuncBody : public Node {
    protected:
        /**
         * The statements that form the body of the function.
         */
        List<Stmt *> *stmts;

        /**
         * A list of types, where the n-th type is the type of the n-th argument
         * that is passed to the function.
         */
        List<string> *types;

        /**
         * The list of register names that the function expects to be passed as
         * parameters, in the order of being passed (in the reverse order of the
         * declaration in the source file). 
         */
        List<int> *regs;

        /**
         * The name with which the function was declared in the source file, which
         * will be subsequently used when calling the function.
         */
        const char *name;

        /**
         * The number of arguments that are to be passed to the function.
         */
        int numArgs;

        /**
         * The size on the stack that must be reserved for the parameters and temporary
         * variables before executing member statements.
         */
        int sz;

        /**
         * The return type of the function.
         */
        string retType;
    public :

        /**
         * A simple constructor.
         * @param ss The list of statements to be assigned to the function
         * @param n The name to be assigned to the function.
         */
        FuncBody(List<Stmt *> *ss, const char *n);

        /**
         * Returns the name of (the type of) class, i.e. FuncBody.
         */
        const char *GetPrintNameForNode() {
            return "FuncBody";
        }

        /**
         * Prints class-specific information and then calls Print()
         * on the children of this node in the AST.
         * * @param indentlevel indentation level of the current node in accordance with
         *  depth in the AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * Adds an entry to the global symbol table for this function, and then
         * calls Analyze() on the children. Note that the number and types of
         * args can only be inferred upon finding a call to this function
         * which we facilitate using the global symbol table.
         */
        void Analyze();

        /**
         * Called by the body of Analyze() in call statements. Used to set the
         * number, types and the registers of the arguments to this function, 
         * along with the return type.
         * @param types A list of types of arguments to the function, in the same
         *  order as regs (i.e. the order or passing and the reverse order of declaration)
         * @param regs The registers in which the respective arguments are passed.
         * @param rtype The return type that should be assigned to the function.
         */
        void setTypes(List<string> *types, List<int> *regs, string rtype);

        /**
         * Generates code for the function. Prints the part such as void f(int a, ...) {
         * and also the return x; } part. Also checks for special names of functions
         * such as main(), printf() and scanf() and takes special actions for them. Then
         * calls GenerateCode() on the children.
         * @param indentlevel The level of indentation of the printed code.
         */
        string GenerateCode(int indentlevel);
};


/**
 * The basic class defining a statement of code. The subsequent types of statements
 * derive from this class. Since the only function of the class is to act as an
 * umbrella for the deriving classes, no new functions are defined here.
 */
class Stmt : public Node {
    public:
        /**
         * For the constructors we can just call the super's constructor.
         */
        Stmt() : Node() {}
        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Stmt(yyltype loc) : Node(loc) {}
};

/**
 * A note is a type of statement in GCC RTL which marks specific boundaries,
 * such as the beginning or end of a code block, and holds the numbers of
 * the next and previous code block. However, it has no impact
 * on the decompiled code.
 */
class Note : public Stmt {
    public :
        /**
         * A simple constructor: just call the one from super()
         */
        Note() : Stmt() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Note(yyltype loc) : Stmt(loc) {}        // We don't care about the notes

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "Note";
        }

        /**
         * Calls Print() over the node's children.
         * @param indentlevel The level of indentation at which the name of the node
         *  is to be printed, in accordance with the depth in the AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * Analyze does not do anything for a note, since anyway we will print it as
         * a comment.
         */
        void Analyze() { }

        /**
         * The generated code for a note is a just a comment saying that there was 
         * a note here.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A barrier is another type of statement in RTL. Once again
 * it has little of interest to us, since it primarily acts as a 
 * marker to tell GCC to not (re)order statements between the two
 * portions separated by the barrier.
 */
class Barrier : public Stmt {
    public:
        /**
         * We simply call the super's constructor.
         */
        Barrier() : Stmt() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Barrier(yyltype loc) : Stmt() {}

        /**
         * Returns the name to be printed for this node in the
         * AST.
         */
        const char *GetPrintNameForNode() {
            return "Barrier";
        }

        /**
         * Does nothing, since a barrier does not have any 
         * children in the AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * Again, does nothing since a barrier will also be printed
         * only as a comment in the decompiled code.
         */
        void Analyze() { }

        /**
         * Generates a comment saying that there existed a barrier here.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A code label in RTL acts like a label in assembly: it gives the
 * program a place to jump to. 
 */
class CodeLabel : public Stmt {
    protected:
        /**
         * In our decompiled code we just print labelxyz for label
         * number xyz where the xyz is the number of the label.
         * This value is stored in labelno.
         */
        int labelno;
    public:
        /**
         * The constructor just copies the label number from the
         * argument to the class member.
         * @param lno The label number to assign to the code label.
         */
        CodeLabel(int lno) { labelno = lno; }

        /**
         * Returns the name to be printed for this node
         * in the AST.
         */
        const char *GetPrintNameForNode() {
            return "CodeLabel";
        }

        /**
         * Does nothing since a code label does not have children
         * in the AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * Does nothing since there is no information to be
         * extracted from a code label which will be used in the
         * code generation phase.
         */
        void Analyze() { }

        /**
         * Generates the c code for the label. Typically label number x
         * becomes the (properly indented) statement "labelx:\n"
         * @param indentlevel The level of indentation at which the code
         *  must be printed.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A common umbrella class for both 'IntConstant' and '-IntConstant' types
 * of operands. Represents an integer.
 */
class Integer : public Node {
    protected:
        /**
         * The value of the represented integer.
         */
        int value;
    public:
        /**
         * Set's value to val.
         * @param val the value to be assigned to the integer.
         */
        Integer(int val);   

        /**
         * Returns the name to be printed for the class.
         */
        const char *GetPrintNameForNode() {
            return "Integer";
        }
        // The difference of Integer from T_IntConstant is that Integer also allows negative integers
        // If the integer is negative then remember to pass -yylval.intconstant instead of +

        /**
         * Does nothing since an Integer does not have children in the
         * AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * A helper function which returns the value of the
         * represented integer.
         */
        int getValue() { return value; }

        /**
         * There is no analysis to be done for an integer.
         */
        void Analyze() { }
};

/**
 * An instruction is the basic unit of code in GCC RTL along with jump_insn.
 * It is further divided into types of statements which are collected under
 * the umbrella of a main command.
 */
class Insn : public Stmt {
    protected:
        /**
         * The command represented by the statement.
         */
        MainCmd *maincmd;
    public:
        /**
         * A simple constructor.
         * @param mc the main command of this statement.
         */
        Insn(MainCmd *mc);

        /**
         * Returns the name to print for this node when
         * printing the AST.
         */
        const char *GetPrintNameForNode() {
            return "Insn";
        }

        /**
         * Calls Print() on the main command of the statement.
         */
        void PrintChildren(int indentlevel);

        /**
         * Simply calls Analyze() on the main command.
         */
        void Analyze() { }

        /**
         * Again, simply calls GenerateCode(indentlevel) on the
         * main command.
         */
        string GenerateCode(int indentlevel);
};

/**
 * The main command in a statement. It is just an umbrella over the various
 * types of commands, which each inherit from it. Subsequently, no extra
 * function is defined in this class.
 */
class MainCmd : public Node {
    public:
        /**
         * A simple constructor.
         */
        MainCmd() : Node() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        MainCmd(yyltype loc) : Node(loc) {}
        // MainCmd is of two types so we define nothing here
};

/**
 * A plain command is the first type of main command. It consists of
 * simply a single command (in contrast with the parallel command which
 * has multiple commands to be executed in paralllel). Since the PlainCmd
 * once again is of many types, we create a class for each type that inherit
 * from it.
 */
class PlainCmd : public MainCmd {
    public:
        /**
         * We just call the constructor of the super class.
         */
        PlainCmd() : MainCmd() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        PlainCmd(yyltype loc) : MainCmd(loc) {}
        // Again, PlainCmd is of three types so we define nothing here
};

/**
 * A parallel command is the other type of a main command. It consists of many
 * individual commands to be executed in parallel, of which the last is usually
 * (but not always) a clobber command.
 */
class ParallelCmd : public MainCmd {
    protected:
        /**
         * The list of commands to be executed in parallel.
         */
        List<PlainCmd *> *cmds;
    public:
        /**
         * A simple constructor.
         * @param cs The list of commands to be assigned to cmds.
         */
        ParallelCmd(List<PlainCmd *> *cs);

        /**
         * Returns the name to be printed for this class while
         * printing the AST.
         */
        const char *GetPrintNameForNode() {
            return "ParallelCmd";
        }

        /**
         * Calls print on each of the commands in cmds in turn.
         * @param indentlevel The indentation level at which the current class (not
         *  the children) must be printed, in accordance with the depth in the AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * Simply calls Analyze() on each of the commands in cmds in turn.
         */
        void Analyze() { }

        /**
         * Generates code for each of the commands in cmds, in turn.
         */
        string GenerateCode(int indentlevel);
};


/**
 * A command used in RTL to clobber the contents of a register,
 * i.e. to indicate that the value in the register is no
 * longer safe to use. Does not impact the decompilation process.
 */
class ClobberCmd : public PlainCmd {
    public:
        /**
         * We just call the constructor of the super.
         */
        ClobberCmd() : PlainCmd() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        ClobberCmd(yyltype loc) : PlainCmd(loc) {}
        
        /**
         * Returns the name to be printed for this class.
         */
        const char *GetPrintNameForNode() {
            return "ClobberCmd";
        }

        /**
         * Does nothing since a clobber command does not have children
         * in the AST.
         * @param indentlevel The level of indentation at which this particular
         *  class (not its children) must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * Does nothing since there is no analysis to be
         * done in a clobber command.
         */
        void Analyze() { }

        /**
         * Generates a comment indicating that there was a clobber command
         * here.
         * @param indentlevel The level of indentation at which the comment
         *  must be printed.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A set command sets the value of the left operand to the value
 * of the right operand.
 */
class SetCmd : public PlainCmd {
    protected:
        /**
         * The operands
         */
        Operand *op1, *op2;
    public:
        /**
         * @param o1 The left operand.
         * @param o2 The right operand.
         */
        SetCmd(Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "SetCmd";
        }

        /**
         * Calls Print() on the children of this node, i.e.
         * the left and right operands.
         * @param indentlevel The level of indentation at which the
         *  current node's name must be printed.
         */
        void PrintChildren(int indentlevel);

        void Analyze() { }

        /**
         * Generates code for the set command. First calls GenerateCommand()
         * on the two operands, and then takes the returned names of the respective
         * "addresses" (which may be temporaries such as "temp1" or registers such
         * as "regs[24]") and sets the first to the second.
         */
        string GenerateCode(int indentlevel);
};


/**
 * A use command denotes the end of the current function.
 */
class UseCmd : public PlainCmd {
    public:
        /**
         * A simple constructor.
         */
        UseCmd() : PlainCmd() {}
        
        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        UseCmd(yyltype loc) : PlainCmd(loc) {}

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "UseCmd";
        }

        /**
         * Doesn't do anything since a use command has no children
         * in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node's name must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for use commands.
         */
        void Analyze() { }

        /**
         * Since use commands are primarily markers, no code
         * needs to be generated for them.
         */
        string GenerateCode(int indentlevel) { return ""; }
};

/**
 * A operand to be used in a statement. It can be of various types,
 * so the current class is just an umbrella class from which
 * other classes inherit.
 */
class Operand : public Node {
    public:
        /**
         * We just call the constructor of the super class.
         */
        Operand() : Node() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Operand(yyltype loc) : Node(loc) {}
        // There are 3 possibilities for operand, as below
};

/**
 * The most basic type of operand: just an integer constant.
 */
class IntOperand : public Operand {
    protected:
        /**
         * The value of the integer.
         */
        int intvalue;
    public:
        /**
         * A simple constructor.
         * @param iv The value to be assigned to the integer,
         */
        IntOperand(int iv);

        /**
         * Returns the name to be printed for the current node.
         */
        const char *GetPrintNameForNode() {
            return "IntOperand";
        }

        /**
         * Does nothing since an integer operand has no children in the
         * AST.
         * @param indentlevel The level of indentation at which to print
         *  the current node.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for an integer expression.
         */
        void Analyze() { }

        /**
         * The code generated for an integer expression is just the value
         * of the expression, which is passed upward to be used in the 
         * parent statements/expressions.
         * @param indentlevel The level of indentation at which to print
         *  the code for the current class.
         */
        string GenerateCode(int indentlevel) { return to_string(intvalue); }
};

/**
 * An expression operand consists of an expression (which could be of
 * various types as below) and location and type information which decide
 * the width and hence the type into which the resultant value of the
 * expression must be cast.
 */
class ExprOperand : public Operand {
    protected:
        /**
         * Information about the location, i.e. memory/register
         * and flags.
         */
        LocInfo *linfo;
        /**
         * Type information (i.e. width), i.e. single integer, double integer
         * etc. 
         */
        TypeInfo *tinfo;
        /**
         * The expression itself.
         */
        Expr *expr;
    public:
        /**
         * A simple constructor.
         * @param li The location information to be assigned to linfo.
         * @param ti The type information to be assigned to tinfo.
         * @param e The expression.
         */
        ExprOperand(LocInfo *li, TypeInfo *ti, Expr *e);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "ExprOperand";
        }

        /**
         * Calls Print() on the children of this node.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for an expression operand.
         */
        void Analyze() { }

        /**
         * Generates code for the expression operand, such that the value is
         * stored in a new temporary variable. Returns the name of the temporary
         * variable.
         * @param indentlevel The level of indentation for the generated code.
         */
        string GenerateCode(int indentlevel);
};


/**
 * An operand which extends the result of another operand to
 * a higher width (which is given by typeinfo)
 */
class ExtendOperand : public Operand {
    protected:
        /**
         * The width to which the inner operand is extended.
         */
        TypeInfo *tinfo;

        /**
         * The inner operand.
         */
        Operand *op;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo.
         * @param o The inner operand.
         */
        ExtendOperand(TypeInfo *ti, Operand *o);

        /**
         * The name to be printed for the current node.
         */
        const char *GetPrintNameForNode() {
            return "ExtendOperand";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the
         *  current node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for ExtendOperand.
         */
        void Analyze() { }

        /**
         * Generates code to extend the value of the inner operand
         * to the specified width, and returns the name of the temporary
         * variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code
         *  is generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * A dereference operand dereferences the address depicted by the inner operand
 * and reads a value of the specified width from it.
 */
class DerefOperand : public Operand {
    protected:
        /**
         * Information about location, i.e. reg or mem.
         */
        LocInfo *linfo;
        /**
         * Type information, i.e. width: single integer, double integer etc.
         */
        TypeInfo *tinfo;
        /**
         * The inner operand.
         */
        Operand *op;
    public:
        /**
         * A simple constructor.
         * @param li The location information.
         * @param ti The type information.
         * @param o The inner operand.
         */
        DerefOperand(LocInfo *li, TypeInfo *ti, Operand *o);

        /**
         * Returns the name to be printed for the current node.
         */
        const char *GetPrintNameForNode() {
            return "DerefOperand";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for a DerefOperand.
         */
        void Analyze() { }

        /**
         * Generates code for dereferencing the address pointed to by
         * the inner operand, and returns the value of the temporary variable
         * in which the result is stored.
         * @param indentlevel The level of indentation at which the code is generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * An operand which denotes the variable which has the 
 * specified symbol associated with it.
 */
class SymbolRefOperand : public Operand {
    protected:
        /**
         * The symbol which specifies the variable/value.
         */
        const char *symbol;
    public:
        /**
         * A simple constructor.
         * @param s The name of the symbol.
         */
        SymbolRefOperand(const char *s);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "SymbolRefOperand";
        }

        /**
         * Prints the name of the symbol.
         * @param indentlevel The level of indentation at which the current
         *  node is to be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for SymbolRefOperand.
         */
        void Analyze() { }

        /**
         * Generates code to read the value of the symbol-reference into a 
         * temporary variable and returns the name of the variable.
         */
        string GenerateCode(int indentlevel);
};


/**
 * This class holds the type information of an operand or result.
 */
class TypeInfo : public Node {
    protected:
        /**
         * The type (width) of what this is the information about.
         */
        const char *type;
    public:
        /**
         * A simple constructor.
         * @param t The type to be assigned to type.
         */
        TypeInfo(const char *t);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "TypeInfo";
        }

        /**
         * Prints the type associated with this class whe printing
         * the AST.
         * @param indentlevel The level of indentation at which this node
         *  must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * A helper function to return the type.
         */
        const char *getType() { 
            return (type? type : (const char *)""); 
        }

        /**
         * No analysis (or code generation) to be done for this class.
         */
        void Analyze() { }
};

/**
 * The location information associated with an operand or result.
 */
class LocInfo : public Node {
    protected:
        /**
         * The type of memory, i.e. memory or register.
         */
        MemType *mtype;
        /**
         * The flags associated with the operand or result, each 
         * denoted by a character.
         */
        List<Flag *> *flags;
    public:
        /**
         * A simple constructor.
         * @param mt The memory type
         * @param f The list of flags
         */
        LocInfo(MemType *mt, List<Flag *> *f);

        /**
         * Returns the name to be printed for this class.
         */
        const char *GetPrintNameForNode() {
            return "LocInfo";
        }

        /**
         * Calls Print() on the children of this class in the AST.
         * @param indentlevel The level of indentation at which this node
         *  must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for LocInfo.
         */
        void Analyze() { }

        /**
         * Checks if the specified flag is set in the location information.
         * @param flag The flag to be checked for
         */
        bool checkForFlag(string flag);

        /**
         * Helper function for getting the type of memory, i.e.  
         * mem or reg.
         */
        string getMemType();
};


/**
 * The type of memory associated with a LocInfo.
 */
class MemType : public Node {
    protected:
        /**
         * The type of memory. One of "mem", "reg", "symbol_ref" etc.
         */
        const char *type;
    public:
        /**
         * A simple constructor.
         * @param t The value to be assigned to type.
         */
        MemType(const char *t);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "MemType";
        }

        /**
         * Prints the type associated with this class.
         * @param indentlevel The level of indentation at which this class
         *  must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for MemType.
         */
        void Analyze() { }

        /**
         * A helper function to get the type associated with this class.
         */
        string getType() { return string(type); }
};

// There is no need to declare a class for flags
// An intermediate bison variable of List<Flag *> * type will suffice.

/**
 * A single flag associated with the type information of a result/operand.
 */
class Flag : public Node {
    protected:
        /**
         * The flag.
         */
        const char *flag;
    public:
        /**
         * A simple constructor.
         * @param f The flag to be assigned to flag.
         */
        Flag(const char *f);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "Flag";
        }

        /**
         * Prints the "name" of the flag.
         * @param indentlevel The level of indentation at which this class
         *  must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for Flag.
         */
        void Analyze() { }

        /**
         * A helper function to get the flag in string form.
         */
        string getFlag() { return string(flag); }
};

/**
 * A expression. Is of many types. This class acts as an umbrella class from which
 * the specific types of expressions' classes inherit.
 */
class Expr : public Node {
    public:
        /**
         * We just call the super class's constructor.
         */
        Expr() : Node() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Expr(yyltype loc) : Node(loc) {}
        // Expr is of 7 types
};

/**
 * The most basic type of expression - just an integer.
 */
class IntegerExpr : public Expr {
    protected:
        /**
         * The value of the integer.
         */
        int value;
    public:
        /**
         * A simple constructor.
         * @param v The value to be assigned to the integer.
         */
        IntegerExpr(int v);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "IntegerExpr";
        }

        /**
         * Prints the value of the integer.
         * @param indentlevel The level of indentation at which this class
         *  must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for IntegerExpr.
         */
        void Analyze() { }

        /**
         * Generates code for assigning the integer to a temporary variable and returns
         * the name of the temporary variable.
         * @param indentlevel The level of indentation at which the code must be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A plus expression denotes the addition of two operands and the possibly
 * a type-cast into a type of another (or same) width.
 */
class PlusExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        PlusExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "PlusExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for PlusExpr.
         */
        void Analyze() { }

        /**
         * Generates code to add the two operands and then returns the name
         * of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code is
         *  generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A MinusExpr represents subtraction of the value of the right operand from 
 * the left operand, and is followed by a possible type-cast into the specified type.
 */
class MinusExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;
        
        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        MinusExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "MinusExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for MinusExpr
         */
        void Analyze() { }

        /**
         * Generates code to subtract the value of the right operand from that of
         * the left operand and then returs the name of the temporary variable in
         * which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A multiplication expression denotes the multiplication of the left and right
 * operands followed by a possible typecast into the specified type (width).
 */
class MultExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;
        
        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        MultExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "MultExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for MultExpr.
         */
        void Analyze() { }

        /**
         * Generates code for multiplying the two operands together, and returns the 
         * name of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * Represents the division of the left operand by the right operand, followed by 
 * a possible type-cast into the desired type (width).
 */
class DivExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        DivExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "DivExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for DivExpr.
         */
        void Analyze() { }

        /**
         * Generates code to divide the left operand by the right operand, and
         * returns the name of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * An unsigned division expression denotes the unsigned division
 * of the left operand by the right operand followed by a possible
 * type-cast into the specified type (width).
 */
class UDivExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        UDivExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "UDivExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for UDivExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the unsigned division of the left
         * operand by the right operand, and returns the name of
         * the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * A modulus expression denotes the remainder of the left operand
 * when divided by the right operand, followed by a possible type
 * cast into the specified type (width).
 */
class ModExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        ModExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "ModExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for ModExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the mod operation of the left operand by the
         * right operand, and returns the name of the temporary varible in which the
         * result is stored.
         * @param indentlevel The level of indentation at which the code is to be
         *  generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * Represents the unsigned modulus of the left operand with respect to 
 * the right operand followed by a possible type cast into the 
 * specified type (width).
 */
class UModExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        UModExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "UModExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for UModExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the unsigned modulus of the
         * left operand w.r.t the right operand, and returns the name of
         * the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * Represents the left shift of the left operand by an amount of spaces
 * specified by the right operand, followed by a possible type cast of the
 * result into the specified type (width).
 */
class LshiftExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        LshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "LshiftExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for LshiftExpr.
         */
        void Analyze() { }

        /**
         * Generates code for performing the left shift, and then returns the 
         * name of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * Represents the right shift of the left operand by an amount of
 * spaces equal to the right operand, followed by a possible type cast
 * into the specified type (width).
 */
class LshiftRtExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        LshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "LshiftRtExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for LshiftRtExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the right shift, and then returns 
         * the name of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * Like LShift, but the behaviour differs in older machines where the maximum
 * supported width is less than 64 bits. This difference is not handled
 * here, and for our purposes Ashift and Lshift are identical.
 */
class AshiftExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        AshiftExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "AshiftExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for AshiftExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the left shift, and then returns the name 
         * of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * Like LshiftRt, but the behaviour differs on machines in which
 * the maximum supported width is < 64 bit. This difference is not handled here.
 * For our purposes, AshiftRt and LshiftRt are identical.
 */
class AshiftRtExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        AshiftRtExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "AshiftRtExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for AshiftRtExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the right shift, and then returns
         * the name of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A xor expression performs the xor of the left and right operands followed
 * by a possible cast into the specified type (width).
 */
class XorExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        XorExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "XorExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for XorExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the xor of the two operands, and
         * then returns the name of the temporary variable in which the
         * result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A sub-register expression evaluates the value of a sub-register of
 * a register. In C this is eqivalent to typecasting to a shorter 
 * width type.
 */
class SubregExpr : public Expr {
    protected:
        /**
         * The type (width) of the sub-register.
         */
        TypeInfo *tinfo;

        /**
         * The inner operand.
         */
        Operand *op;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o The inner operand.
         */
        SubregExpr(TypeInfo *ti, Operand *o);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "SubregExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for SubRegExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the type casting and then returns the
         * name of the temporary variable where the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * Compares the left and right operands of the expression.
 * Typically this should set some bits in the flag register, however
 * it is harder to track flags than simple variables. As a result,
 * we just create a new temporary variable, with the value as -1 if
 * the left operand is less than the right operand, 0 if both are equal,
 * and 1 otherwise. This is also followed by a possible type cast into
 * the specified type (width).
 */
class CompareExpr : public Expr {
    protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        CompareExpr(TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "CompareExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for CompareExpr.
         */
        void Analyze() { }

        /**
         * Generates code to perform the comparison and as discussed above,
         * store it in a temporary variable. Then returns the name of the
         * temporary variable.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * Evaluates whether the specified condition is true. Like for 
 * CompareExpr, stores the value in a temporary variable (0 or
 * 1), instead of setting bits in the flags register. This is
 * followed by a possible typecast into the specified type.
 */
class ConditionExpr : public Expr {
    protected:
        Condition *cond;
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *tinfo;

        /**
         * The left operand.
         */
        Operand *op1;

        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param ti The type information to be assigned to tinfo
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        ConditionExpr(Condition *c, TypeInfo *ti, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "ConditionExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for ConditionExpr.
         */
        void Analyze() { }

        /**
         * Generates code to evaluate the condition, and then returns the
         * name of the temporary variable in which the result is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A symbol references expression reads in the value associated
 * with a symbol into a temporary variable for further use, after
 * a possible type cast.
 */
class SymbolRefExpr : public Expr {
     protected:
        /**
         * The type (width) into which the result is cast.
         */
        TypeInfo *ti;
        const char *sym;
    public:
        /**
         * A simple constructor.
         * @param t The type information
         * @param s The name of the symbol associated with the value/variable.
         */
        SymbolRefExpr(TypeInfo *t, const char *s);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "SymbolRefExpr";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the current
         *  node must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for SymbolRefExpr.
         */
        void Analyze() { }

        /**
         * Generates code to read in the value of the symbol, and then returns 
         * the name of the temporary variable in which the result is stored.
         * At this stage a placeholder "gSymbolTable[<symbol>]" is used, which
         * is later replaced using the symbols read from the assembly output.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A jump instruction redirects code to the specified location,
 * which may be a code label. The jump may further be conditional
 * or unconditional, but that distinction is made at the level
 * of destination by RTL.
 */
class JumpInsn : public Stmt {
    protected:
        /**
         * The destination of the jump.
         */
        Dest *dest;
    public:
        /**
         * A simple constructor.
         * @param d The destination to be assigned to dest
         */
        JumpInsn(Dest *d);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "JumpInsn";
        }

        /**
         * Calls Print(indentlevel+1) on dest.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for JumpInsn.
         */
        void Analyze() { }

        /**
         * Generates code to perform the (possibly conditional)
         * redirection of execution.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * The destination of a jump instruction. A dest is of two further
 * types, so this class is just an umbrella class for the two.
 */
class Dest : public Operand {
    public:
        /**
         * We just call the constructor of the super class.
         */
        Dest() : Operand() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Dest(yyltype loc) : Operand(loc) {}
        // Dest is also of two types, label or if_then_else
};

/**
 * A negation operand denotes the negated value of the inner operand.
 */
class NegOperand : public Operand {
    protected:
        /**
         * The inner operand.
         */
        Operand *op;
    public:
        /**
         * A simple constructor.
         * @param o The operand to be assigned to op.
         */
        NegOperand(Operand *o);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "NegOperand";
        }

        /**
         * Calls Print() on op.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be performed on NegOperand.
         */
        void Analyze() { }

        /**
         * Just returns '-' + the string returned by GenerateCode()
         * of op.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A fix operand denotes the truncated integral value of a floating point.
 */
class FixOperand : public Operand {
    protected:
        /**
         * The inner operand.
         */
        Operand *op;
    public:
        /**
         * A simple constructor.
         * @param o The operand to be assigned to op.
         */
        FixOperand(Operand *o);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "FixOperand";
        }

        /**
         * Calls Print() on op.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

         /**
         * No analysis to be performed on FixOperand.
         */
        void Analyze() { }


        /**
         * Just returns '(float)' + the string returned by GenerateCode()
         * of op.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};


/**
 * One of the possible destinations of a jump: a label.
 */
class Label : public Dest {
    protected:
        /**
         * The label number to jump to.
         */
        int labelno;
    public:
        /**
         * A simple constructor.
         * @param lno The label number.
         */
        Label(int lno);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "Label";
        }

        /**
         * Prints the label number.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be performed on labels.
         */
        void Analyze() { }

        /**
         * Just returns "label"+string(labelno)
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A Pc (i.e. program counter - destination) cannot be the direct destination
 * for a jump. However, it does come up as part of an If-Then-Else kind of
 * jump statement. It simply means that for the specific truth value of the
 * If-Then-Else, no jump is to be performed.
 */
class Pc : public Dest {
    // Not actually a possible production. However since we need Dest
    // to double up as InDest as well, we will let Pc derive from Dest.
    public:
        /**
         * We just call the constructor of the super class.
         */
        Pc() : Dest() {}

        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Pc(yyltype loc) : Dest(loc) {}

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "Pc";
        }

        /**
         * Does nothing since Pc has no children in the AST.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel) {}

        /**
         * No analysis to be done for Pc.
         */
        void Analyze() { }

        /**
         * Just returns "Pc" which will be likely discarded by the parent.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel) { return "Pc"; }
};

/**
 * An IfThenElse is the other kind of destination for a jump instruction.
 * It represents a conditional jump.
 */
class IfThenElse : public Dest {
    protected:
        /**
         * The comparison which determines which destination is chosen.
         */
        Comparison *comp;
        /**
         * The destination if comp is true.
         */
        Operand *op1;
        /**
         * The destination if comp is false.
         */
        Operand *op2; // these should be InDests actually, but Dest will do.
    public:
        /**
         * A simple constructor.
         * @param c The comparison
         * @param o1 The destination if c is true.
         * @param o2 The destination if c is false.
         */
        IfThenElse(Comparison *c, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "IfThenElse";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         *  @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for IfThenElse.
         */
        void Analyze() { }

        /**
         * Generates code for performing the conditional jump.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * A comparison checks if the two operands satisfy the condition. RTL actually sets
 * a flag in the RFLAGS register if the result is true, however it is 
 * easier for us to handle temporaries than flags. Hence we store the result
 * in a temporary variable (1 - true, 0 - false).
 */
class Comparison : public Node {
    protected:
        /**
         * The condition to be checked.
         */
        Condition *cond;
        /**
         * The left operand.
         */
        Operand *op1;
        /**
         * The right operand.
         */
        Operand *op2;
    public:
        /**
         * A simple constructor.
         * @param c The condition to be checked
         * @param o1 The left operand
         * @param o2 The right operand.
         */
        Comparison(Condition *c, Operand *o1, Operand *o2);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "Comparison";
        }

        /**
         * Calls Print() on the children of this node in the AST.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be done for Comparison.
         */
        void Analyze() { }

        /**
         * Generates code to perform the specified comparison, and then
         * returns the name of the temporary variable in which the result
         * is stored.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * Specifies a condition, such as less than (lt), less than or equal to
 * (le), equal to (eq) etc.
 */
class Condition : public Node {
    protected:
        /**
         * The condition in short form (lt, eq, le etc)
         */
        const char *cond;
    public:
        /**
         * A simple constructor.
         * @param c The condition in short form.
         */
        Condition(const char *c);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "Condition";
        }

        /**
         * Prints the condition in short form.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * No analysis to be performed for condition.
         */
        void Analyze() { }

        /**
         * A helper function to get the short form of the
         * condition as a string.
         */
        string getCondition() { return string(cond); }
};

/**
 * A function. Call. This has two types depending on whether there is
 * a return value or not (i.e. return type void)
 */
class Call : public Stmt {
    public:
        /**
         * We just call the constructor of the super class.
         */
        Call() : Stmt() {}
        /**
         * @param loc the location of the first token which
         *  is part of this class.
         */
        Call(yyltype loc) : Stmt(loc) {}
        // Call is of two types
};

/**
 * This type of call has an associated return value, and hence non void
 * return type.
 */
class RetCall : public Call {
    protected:
        /**
         * The type into which the return value must be cast.
         */
        TypeInfo *tinfo;
        /**
         * The register into which the return value must be put for subsequent use.
         */
        int returnreg;
        /**
         * The name of the function being called.
         */
        const char *fnname;
        /**
         * The list of arguments to the function, in the form of expressions.
         */
        ExprList *elist;
    public:
        /**
         * A simple constructor.
         * @param ti The value to be assigned to tinfo.
         * @param rr The return register.
         * @param fn The function name to call.
         * @param el The expression list to assign to elist.
         */
        RetCall(TypeInfo *ti, int rr, const char *fn, ExprList *el);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "RetCall";
        }

        /**
         * Calls Print() on the children of this node.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */ 
        void PrintChildren(int indentlevel);

        /**
         * First checks if the name of the function is in the global symbol table.
         * If so, uses the expression list and their types to deduce the number and
         * types of arguments to the function. Then via Analyze() of ExprList, stores
         * this information in the FuncBody class associated with the function.
         * If the function is not in the global symbol table, it must be imported
         * from one of the header files.
         */
        void Analyze();

        /**
         * Generates code for the function call. If the function name is not found
         * in the global symbol table, checks it against some standard library functions.
         * If a match is found, uses the match to typecast the variables accurately (among
         * same width, e.g. long long int and int* both have a 64 bit width). If not,
         * maps 8 bit to char, 32 bit to int and 64 bit to long long int. This generates warnings 
         * but not errors. Finally generates code to store the result in a temporary variable and returns
         * the name of the variable.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * This type of call has no associated return value, and hence a void
 * return type.
 */
class NoRetCall : public Call {
    protected:
        /**
         * The name of the function being called.
         */
        const char *fnname;
        /**
         * The list of arguments to the function, in the form of expressions.
         */
        ExprList *elist;
    public:
        /**
         * A simple constructor.
         * @param fn The function name to call.
         * @param el The expression list to assign to elist.
         */
        NoRetCall(const char *fn, ExprList *el);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "NoRetCall";
        }

        /**
         * Calls Print() on the children of this node.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */ 
        void PrintChildren(int indentlevel);

        /**
         * First checks if the name of the function is in the global symbol table.
         * If so, uses the expression list and their types to deduce the number and
         * types of arguments to the function. Then via Analyze() of ExprList, stores
         * this information in the FuncBody class associated with the function.
         * If the function is not in the global symbol table, it must be imported
         * from one of the header files.
         */
        void Analyze();

        /**
         * Generates code for the function call. If the function name is not found
         * in the global symbol table, checks it against some standard library functions.
         * If a match is found, uses the match to typecast the variables accurately (among
         * same width, e.g. long long int and int* both have a 64 bit width). If not,
         * maps 8 bit to char, 32 bit to int and 64 bit to long long int. This generates warnings 
         * but not errors. Finally generates code to store the result in a temporary variable and returns
         * the name of the variable.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);
};

/**
 * The list of parameters associated with a function call.
 */
class ExprList : public Node{
    protected:
        /**
         * The list of arguments to the function call. Each pair
         * consists of the register in which the argument is passed
         * along with the width of the argument in short form ("si",
         * "di" etc.) as a const char *.
         */
        List<pair<int,const char*>> *args;
    public:
        /**
         * A simple constructor.
         * @param as The list of arguments to be assigned to args.
         */
        ExprList(List<pair<int,const char*>> *as);

        /**
         * Returns the name to be printed for this node.
         */
        const char *GetPrintNameForNode() {
            return "ExprList";
        }

        /**
         * Prints each argument in order.
         * @param indentlevel The level of indentation at which the
         *  current class must be printed.
         */
        void PrintChildren(int indentlevel);

        /**
         * The analysis assocated with the class is via SetArgs.
         */
        void Analyze() { }

        /**
         * Called by a call instruction to set the argument types
         * and number, along with total width and return type for 
         * a function, if found in the global symbol table.
         * @param name The name of the function.
         * @param rettype The return type to be assigned to the function.
         */
        void SetArgs(string name, string rettype);

        /**
         * Generates code for the arguments of a function call.
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenerateCode(int indentlevel);

        /**
         * Generates code for the arguments of a function call to scanf().
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenScanfCode(int indentlevel);

        /**
         * Generates code for the arguments of a function call to printf().
         * @param indentlevel The level of indentation at which the code 
         * is to be generated.
         */
        string GenPrintfCode(int indentlevel);
};

#endif