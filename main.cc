/*-------------------------------------------------------*
 * main.cc                                               *
 *                                                       *
 * Defines the main() function so that the compilation   *
 * can proceed. Also defines PrintOneToken() which can be*
 * used to simplify debugging by printing the scanned    *
 * tokens.                                               *
 *-------------------------------------------------------*/

#include <string.h>
#include <stdio.h>
#include "utility.h"
#include "errors.h"
#include "scanner.h"
#include "location.h"

/*--------------------------------------------------------*
 * Function: PrintOneToken()                              *
 *                                                        *
 * Does exactly what the name says.                       *
 *--------------------------------------------------------*/
static void PrintOneToken(TokenType token, const char *text, YYSTYPE value, yyltype loc) {
    // For now doesn't print the attributes of, say, T_StringContant, i.e. prints
    // only the token type. Should suffice for debugging purposes.
    printf("%s ", gTokenNames[token - T_Note]);
}

/*--------------------------------------------------------*
 * Function: main()                                       *
 * Entry point to the program. For now just retrieves     *
 * tokens from the yylex token stream and prints its type.*
 *--------------------------------------------------------*/
int main(int argc, char **argv) {
    // There was a ParseCommandLine here for the decaf scanner, but it seems
    // we don't need it just yet.
    InitScanner();
    TokenType token;
    while ((token = (TokenType)yylex()) != 0) {
        PrintOneToken(token, yytext, yylval, yylloc);
    }
    return (ReportError::findNumErrors() == 0? 0 : -1);   // No error reporting yet
}