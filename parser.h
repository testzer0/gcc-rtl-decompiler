/*-------------------------------------------------------------*
 * Provides some definitions that are used by/exported by the  *
 * the parser.                                                 *
 *-------------------------------------------------------------*/

#ifndef PARSER_H_
#define PARSER_H_

#include "scanner.h"            // for MaxIdentLen
#include "list.h"       	// because we use all these types
#include "ast.h"	

#ifndef YYBISON                 
#include "y.tab.h"              
#endif

/**
 *  the main function responsible for parsing.
 *  It is generated in y.tab.c, using bison.
 */
int yyparse();

/**
 *  initializes the parser. Debug mode is turned off.
 *  The function is defined in parser.y
 */
void InitParser();

#endif