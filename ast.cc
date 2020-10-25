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

Program::Program(List<FuncBodyList *> *bodylist) {
    Assert(bodylist != NULL);
    (funcbodylist = bodylist)->SetParentAll(this); // Set the parent pointers of the fn bodies
}

void Program::PrintChildren(int indentlevel) {
    funcbodylist->PrintAll(indentlevel+1);
    printf("\n");
}

void Node::Print(int indentlevel, const char *label) {
    if (location) 
        printf("%*d", 3, location->first_line);
    else 
        printf("%*s",3,"");
    printf("%*s%s%s", indentlevel*3, label? label:"",GetPrintNameForNode());
    PrintChildren(indentlevel);
}