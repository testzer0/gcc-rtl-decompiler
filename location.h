/*---------------------------------------------------------*
 * This file just defines some basic structs and functions *
 * to handle location-information, i.e. line no. and       *
 * column number in line.                                  *
 *---------------------------------------------------------*/

#ifndef YYLTYPE

typedef struct yyltype {
    int first_line, first_column;
    int last_line, last_column;
    char *text;
} yyltype;

#define YYLTYPE yyltype

extern struct yyltype yylloc;

/*-----------------------------------------------------------*
 * Function: Join()                                          *
 *                                                           * 
 * Takes two locations and combines their span into one.     *
 *-----------------------------------------------------------*/

inline yyltype Join(yyltype first, yyltype second) {
    yyltype combined;
    combined.first_line = first.first_line;
    combined.first_column = first.first_column;
    combined.last_line = second.last_line;
    combined.last_column = second.last_column;
    return combined;
}

inline yyltype Join(yyltype *first, yyltype *second) {
    return Join(*first,*second);
}

#endif