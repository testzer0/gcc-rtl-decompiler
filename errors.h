/*-------------------------------------------------*
 * Defines some basic error reporting routines via *
 * a class.                                        *
 *-------------------------------------------------*/

#ifndef ERRORS_H_
#define ERRORS_H_

#include <string>
#include "location.h"

/**
 *  A custom class for handling different kinds of errors in the RTL code.
 */
class ReportError{
    public:
    	/**
    	 *  Unterminated string error.
    	 *  @param loc location of error
    	 *  @param ident the string itself
    	 */
        static void UntermString(yyltype *loc, const char *ident);
        /**
         *  Unrecognized character error.
         *  @param loc location of error
         *  @param the character itself
         */
        static void UnrecogChar(yyltype *loc, char ch);
        /**
         *  Name of function too long.
         *  @param loc location of error
         *  @param ident the name of the function
         */
        static void LongIdentifier(yyltype *loc, const char *ident);
        /**
         *  Unterms square brackets
         */
        static void UntermBrack();
        /**
         *  calculates the total number of errors.
         *  @return number of errors
         */
        static int findNumErrors();
    private:
        static int numErrors; /**< the number of errors */
};

#endif