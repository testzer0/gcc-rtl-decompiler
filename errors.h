/*-------------------------------------------------*
 * Defines some basic error reporting routines via *
 * a class.                                        *
 *-------------------------------------------------*/

#ifndef ERRORS_H_
#define ERRORS_H_

#include <string>
#include "location.h"

class ReportError{
    public:
        static void UntermString(yyltype *loc, const char *ident); // Only strings are for function calls
        static void UnrecogChar(yyltype *loc, char ch); // If no prod rules match
        static void LongIdentifier(yyltype *loc, const char *ident); // Name of function is too long
        static void UntermBrack(); // Unterms square brackets
        static int findNumErrors();
    private:
        static int numErrors;
};

#endif