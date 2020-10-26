#ifndef _H_scanner
#define _H_scanner

#include <stdio.h>

extern char *yytext;    

#define MaxIdentLen 31
#define T_NumTokenTypes 48

extern char *yytext; 

int yylex();
void InitScanner();
const char *GetLineNumbered(int n);

#endif