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
#include "parser.h"
#include "location.h"

/*--------------------------------------------------------*
 * Function: main()                                       *
 * Entry point to the program.                            *
 *--------------------------------------------------------*/
int main(int argc, char **argv) {
    InitScanner();
    InitParser();
    yyparse();
    return (ReportError::findNumErrors() == 0? 0 : -1);   // No error reporting yet
}