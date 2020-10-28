%{
	/*-----------------------------------------------------*
	 * This part is copied verbatim to the lex.yy.c file.  *
	 *-----------------------------------------------------*/
	#include <string.h>
	#include <ctype.h>
	#include "scanner.h"
	#include "utility.h"
	#include "errors.h"
	#include "parser.h"
	#include "list.h"
	#include <stdio.h>

	#define TAB_SIZE 8
	
	int lineno, colno;
	List<const char*> savedlines;
	// Note that {} arent in punctuation. If needed add later
	// Also, '-' is in punctuation, but instead should be taken later as part of a number, e.g. -2.
	// Add this when doing parsing.
%}

PUNCTUATION   	([!:,.()*-])
DECIMAL         ([0-9]+)
HEXADECIMAL     (0[xX][0-9a-fA-F]+)
INTEGER         ({DECIMAL}|{HEXADECIMAL})
IDENTIFIER      ([a-zA-Z][a-zA-Z0-9_]*)
STRING 			(\"[^"\n]*\")
BEG_IGNORE 		("\[")
END_IGNORE 		("\]")
BEG_IGNORE2     ("{")
END_IGNORE2     ("}")
BEG_IGNORE3     ("<")
END_IGNORE3     (">")

%x EXPECT CATCH COMMENT IGNORE IGNORE2 IGNORE3
%%			/* BEGIN RULES SECTION */
"note" 				{ return T_Note; }		
"insn"				{ return T_Insn; }
"jump\_insn"		{ return T_JumpInsn; }
"call\_insn" 		{ return T_CallInsn; }
"call"				{ return T_Call; }
"symbol\_ref"		{ return T_SymbolRef; }
"nil" 				{ return T_Nil; }
"parallel \[" 			{ return T_Parallel; }
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
"code\_label"		{ return T_CodeLabel; }
"/i" 				{ return T_IFlag; }
"/v" 				{ return T_VFlag; }
"/f" 				{ return T_FFlag; }
"/c" 				{ return T_CFlag; }
"SI" 				{ return T_SIType; }
"DI" 				{ return T_DIType; }
"QI" 				{ return T_QIType; }
"TI"				{ return T_TIType; }
"CCZ" 				{ return T_CCZType; }
"CCGC" 				{ return T_CCGCType; }
"CCGOC"				{ return T_CCGOCType; }
"CC"				{ return T_CCType;}
"plus:" 			{ return T_Plus; }
"minus:" 			{ return T_Minus; }
"mult:"				{ return T_Mult; }
"div:"				{ return T_Div; }
"udiv:"				{ return T_UDiv; }
"mod:"				{ return T_Mod; }
"umod:"				{ return T_UMod; }
"ashiftrt:"			{ return T_AshiftRt; }
"lshiftrt:"			{ return T_LshiftRt; }
"ashift:"			{ return T_Ashift; }
"lshift:"			{ return T_Lshift; }
"subreg:"			{ return T_Subreg; }
"expr_list:"		{ return T_ExprList; }
"sign_extend:"		{ return T_SiExtend; }
"zero_extend:"		{ return T_ZeExtend; }
"compare:"			{ return T_Compare; }
"neg"				{ return T_Neg; }
"ltu"				{ return T_Ltu; }
"gtu"				{ return T_Gtu; }
"lt" 				{ return T_Lt; }
"gt" 				{ return T_Gt; }
"leu"				{ return T_Leu; }
"geu"				{ return T_Geu; }
"le" 				{ return T_Le; }
"ge"				{ return T_Ge; }
"eq"				{ return T_Eq; }
"ne"				{ return T_Ne; }

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
{BEG_IGNORE2} 		{ BEGIN IGNORE2; }
<IGNORE2>{END_IGNORE2}		{ BEGIN INITIAL; }
<IGNORE2>.			;
<IGNORE2><<EOF>>		{ ReportError::UntermBrack();
					  BEGIN INITIAL; }
{BEG_IGNORE3} 		{ BEGIN IGNORE3; }
<IGNORE3>{END_IGNORE3}		{ BEGIN INITIAL; }
<IGNORE3>.			;
<IGNORE3><<EOF>>		{ ReportError::UntermBrack();
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
{IDENTIFIER} 		;
\"[^\"\n]*\n 		{ ReportError::UntermString(&yylloc, yytext);
					  lineno++; colno = 1; }
[ \r\n_A-Z]				;
"\]"				{ return T_EndPara;}
"->"				{ return T_RArrow; }
. 					{ ReportError::UnrecogChar(&yylloc, yytext[0]); }

%%
void InitScanner()
{
	printf("Initializing scanner.\n\n");
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