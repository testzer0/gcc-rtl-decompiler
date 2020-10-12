/*-------------------------------------------------------*
 | errors.cc 											 |
 | ---------											 |
 | Implementation of the functions in errors.h 			 |
 *-------------------------------------------------------*/

#include "errors.h"
#include <iostream>
#include <sstream>
#include <stdarg.h>
#include <stdio.h>
using namespace std;


int ReportError::numErrors = 0;

void ReportError::OutputError(yyltype *loc, string msg) {
	numErrors++;
	fflush(stdout);
	if(loc) {
		cout << endl << "[!] ERROR in line " << loc->first_line << "." << endl;
	}
	else {
		cout << endl << "[!] ERROR." << endl;
	}
	cout << " ==> " << msg << endl;
}