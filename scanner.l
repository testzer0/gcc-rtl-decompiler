%{
	/*-----------------------------------------------------*
	 * This part is copied verbatim to the lex.yy.c file.  *
	 *-----------------------------------------------------*/
	#include <string.h>
	#include <ctype.h>
	#include "scanner.h"
	#include "errors.h"
	#include "list.h"

	static void DoBeforeEachAction(); 
	#define YY_USER_ACTION DoBeforeEachAction();

	#define TAB_SIZE 8

	int lineno, colno;
	List<const char*> savedlines;
%}

PUNCTUATION   	([!:,.{}()])
DECIMAL         ([0-9]+)
HEXADECIMAL     (0[xX][0-9a-fA-F]+)
INTEGER         ({DECIMAL}|{HEXADECIMAL})
IDENTIFIER      ([a-zA-Z][a-zA-Z0-9_]*)
BEG_STRING      (\"[^"\n]*)
STRING 			({BEG_STRING}\")
BEG_IGNORE 		("\[")
END_IGNORE 		("\]")

%x EXPECT CATCH COMMENT IGNORE
%%			/* BEGIN RULES SECTION */
"note" 				{ return T_Note; }		
"insn"				{ return T_Insn; }
"jump\_insn"		{ return T_JumpInsn; }
"call\_insn" 		{ return T_CallInsn; }
"call"				{ return T_Call; }
"symbol\_ref"		{ return T_SymbolRef; }
"flags"				{ return T_Flags; }
"nil" 				{ return T_Nil; }
"parallel" 			{ return T_Parallel; }
"clobber" 			{ return T_Clobber; }
"set" 				{ return T_Set; }
"use" 				{ return T_Use; }
"if\_then\_else" 	{ return T_IfThenElse; }
"const\_int" 		{ return T_ConstInt; }
"barrier"			{ return T_Barrier; }
"mem" 				{ return T_Mem; }
"reg" 				{ return T_Reg; }
"pc" 				{ return T_Pc; }
"label\_ref"		{ return T_LabelRef; }
"/i" 				{ return T_IFlag; }
"/v" 				{ return T_VFlag; }
"/f" 				{ return T_FFlag; }
"/c" 				{ return T_CFlag; }
"SI" 				{ return T_SIType; }
"DI" 				{ return T_DIType; }
"QI" 				{ return T_QIType; }
"CCZ" 				{ return T_CCZType; }
"CCGC" 				{ return T_CCGCType; }
"plus:" 			{ return T_Plus; }
"minus:" 			{ return T_Minus; }
"mult:"				{ return T_Mult; }
"ashift:"			{ return T_Ashift; }
"subreg:"			{ return T_Subreg; }

{PUNCTUATION}		{ return yytext[0]; }
{STRING} 			{ yylval.stringConstant = strdup(yytext); 
					  return T_StringConstant; }
{DECIMAL} 			{ yylval.integerConstant = strtol(yytext, NULL, 10); 
					  return T_IntConstant; }
{HEXADECIMAL}		{ yylval.integerConstant = strtol(yytext, NULL, 16); 
					  return T_IntConstant; }
";;" 				{ BEGIN EXPECT; }
{BEG_IGNORE} 		{ BEGIN IGNORE; }
<IGNORE>{END_IGNORE}		{ BEGIN INITIAL; }
<IGNORE>.			;
<EXPECT>" "			;
<EXPECT>"Function"	{ BEGIN CATCH; }		
<EXPECT>.			;
<EXPECT>"\n"		{ BEGIN INITIAL; }
<CATCH>" "			;
<CATCH>{IDENTIFIER} { strncpy(yylval.identifier,yytext,MaxIdentLen); 
					  BEGIN COMMENT; 
					  return T_FunBegin; }
<COMMENT>.			;
<COMMENT>"\n"		{ BEGIN INITIAL; }

%%
void InitScanner()
{
    yy_flex_debug = false;
    yy_push_state(INITIAL);
    lineno = 1;
    colno = 1;
}
/* Function: DoBeforeEachAction()
 * ------------------------------
 * This function is installed as the YY_USER_ACTION. This is a place
 * to group code common to all actions.
 */
static void DoBeforeEachAction()
{

}