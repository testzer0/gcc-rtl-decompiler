/*---------------------------------------------------------*
 * This file just defines some basic structs and functions *
 * to handle location-information, i.e. line no. and       *
 * column number in line.                                  *
 *---------------------------------------------------------*/

#ifndef YYLTYPE

/**
 *  a struct to represent lexical locations in the program.
 */
typedef struct yyltype {
    int first_line, first_column; /**< beginning position */
    int last_line, last_column; /**< ending position */
    char *text; /**< the content at that location */
} yyltype;

#define YYLTYPE yyltype

extern struct yyltype yylloc;

/**
 *  Takes two locations and combines their span into one.
 *  @param first first location
 *  @param second second location
 *  @return combined location
 */
inline yyltype Join(yyltype first, yyltype second) {
    yyltype combined;
    combined.first_line = first.first_line;
    combined.first_column = first.first_column;
    combined.last_line = second.last_line;
    combined.last_column = second.last_column;
    return combined;
}

/**
 *  Combines two locations using pointers.
 *  @param first pointer to first location
 *  @param second pointer to second location
 *  @param combined location
 */
inline yyltype Join(yyltype *first, yyltype *second) {
    return Join(*first,*second);
}

#endif