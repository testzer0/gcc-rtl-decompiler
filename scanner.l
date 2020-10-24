%{
	/*-----------------------------------------------------*
	 * This part is copied verbatim to the lex.yy.c file.  *
	 *-----------------------------------------------------*/
	#include <string.h>
	#include <ctype.h>
	#include "scanner.h"
	#include "errors.h"
	#include "list.h"
	#include <stdio.h>

	YYSTYPE yylval; // Later bison will provide, remove then
	struct yyltype yylloc; // Again, later bison will provide. Remove then

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
STRING 			(\"[^"\n]*\")
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
<IGNORE><<EOF>>		{ ReportError::UntermBrack();
					  BEGIN INITIAL; }
<EXPECT>" "			;
<EXPECT>"Function"	{ BEGIN CATCH; }		
<EXPECT>.			;
<EXPECT>"\n"		{ BEGIN INITIAL;
					  lineno++; colno = 1; }
<CATCH>" "			;
<CATCH>{IDENTIFIER} { if (yyleng > MaxIdentLen)
						ReportError::LongIdentifier(&yylloc, yytext);
					  strncpy(yylval.identifier,yytext,MaxIdentLen); 
					  BEGIN COMMENT; 
					  return T_FunBegin; }
<COMMENT>.			;
<COMMENT>"\n"		{ BEGIN INITIAL; 
					  lineno++; colno = 1; }
<COMMENT><<EOF>> 	{ BEGIN INITIAL; }

\"[^\"\n]*\n 		{ ReportError::UntermString(&yylloc, yytext);
					  lineno++; colno = 1; }

. 					{ ReportError::UnrecogChar(&yylloc, yytext[0]); }

%%
void InitScanner()
{
	printf("Initializing scanner.\n");
    yy_flex_debug = false;
    lineno = 1;
    colno = 1;
}

static void DoBeforeEachAction()
{
	yylloc.first_line = yylloc.last_line = lineno;
	yylloc.first_column = colno;
	yylloc.last_column = colno + yyleng + 1;
	colno = colno + yyleng;
}