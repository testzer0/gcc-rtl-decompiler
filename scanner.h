#ifndef _H_scanner
#define _H_scanner

#include <stdio.h>

extern char *yytext;    

#define MaxIdentLen 31
#define T_NumTokenTypes 48

extern char *yytext; 

/**
 *  the function responsible for the main lexical analysis.
 */
int yylex();

/**
 *  initializes the scanner.
 */
void InitScanner();

/**
 *  gets a particular line of code using the line number.
 */
const char *GetLineNumbered(int n);

#endif