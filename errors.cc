#include "errors.h"
#include <iostream>
#include <sstream>
#include <stdarg.h>
#include <stdio.h>
using namespace std;

int ReportError::numErrors = 0;

void ReportError::UntermString(yyltype *loc, const char *ident) {
    numErrors++;
    cout << "Error: unterminated string" << endl;
    cout << "Line number " << loc->first_line << ":" << loc->first_column << " " << ident << endl;
}

void ReportError::UnrecogChar(yyltype *loc, char ch) {
    numErrors++;
    cout << "Error: unrecognized character" << endl;
    cout << "Line number " << loc->first_line << ":" << loc->first_column << " " << ch << endl;
}

void ReportError::LongIdentifier(yyltype *loc, const char *ident) {
    cout << "Error: Identifier too long: \"" << ident << "\"" << endl;
}

void ReportError::UntermBrack() {
    numErrors++;
    cout << "Error: unterminated brackets" << endl;
}

int ReportError::findNumErrors() {
    return numErrors;
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }