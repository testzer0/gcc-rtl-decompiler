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
    
}

#endif