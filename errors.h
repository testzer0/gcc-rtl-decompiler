/*-------------------------------------------------------*
 | errors.h 											 |
 | ---------											 |
 | This file defines the common error reporting routines |
 | to be used by the scanner. All errors reported by the |
 | scanner should be via this error reporting class for  |
 | the sake of standardization. 						 |
 *-------------------------------------------------------*/

#ifndef ERRORS_H_

// We enclose the bulk of the header between an ifndef so that multiple
// inclusions of the header are avoided.

#define ERRORS_H_

#include "location.h"			// For error-reporting information such as line no. and column
#include <string>

class ReportError{
public:
	// Errors reported by scanner
private:
	// Some error printing routines I took from CS143's decaf compiler to make our life easier
	static void UnderlineErrorInLine(const char *line, yyltype *pos);
  	static void OutputError(yyltype *loc, string msg);
  	static int numErrors;
};

#endif