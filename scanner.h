#ifndef _H_scanner
#define _H_scanner

#include <stdio.h>

extern char *yytext;    

#define MaxIdentLen 31
#define T_NumTokenTypes 36

typedef enum { 
    T_Note = 256, T_Insn, T_JumpInsn, T_CallInsn, T_Call, T_SymbolRef, T_Flags, T_Nil, T_Parallel, T_Clobber, 
    T_Set, T_Use, T_IfThenElse, T_ConstInt, T_Barrier, T_Mem, T_Reg, T_Pc, T_LabelRef, T_IFlag, T_VFlag, 
    T_FFlag, T_CFlag, T_SIType, T_DIType, T_QIType, T_CCZType, T_CCGCType, T_Plus, T_Minus, T_Mult, T_Ashift, 
    T_Subreg, T_FunBegin, T_StringConstant, T_IntConstant
} TokenType;

static const char *gTokenNames[T_NumTokenTypes] = {
  "T_Note", "T_Insn", "T_JumpInsn", "T_CallInsn", "T_Call", "T_SymbolRef", "T_Flags", "T_Nil", "T_Parallel", 
  "T_Clobber", "T_Set", "T_Use", "T_IfThenElse", "T_ConstInt", "T_Barrier", "T_Mem", "T_Reg", "T_Pc", 
  "T_LabelRef", "T_IFlag", "T_VFlag", "T_FFlag", "T_CFlag", "T_SIType", "T_DIType", "T_QIType", "T_CCZType", 
  "T_CCGCType", "T_Plus", "T_Minus", "T_Mult", "T_Ashift", "T_Subreg", "T_FunBegin", "T_StringConstant", "T_IntConstant"
};

typedef union {
    int integerConstant;
    char *stringConstant;
    char identifier[1+MaxIdentLen];
} YYSTYPE;

extern YYSTYPE yylval;

extern char *yytext; 

int yylex();
void InitScanner();
const char *GetLineNumbered(int n);

#endif