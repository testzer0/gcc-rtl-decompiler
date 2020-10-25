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

int yyparse();              // Defined in the generated y.tab.c file
void InitParser();          // Defined in parser.y

#endif