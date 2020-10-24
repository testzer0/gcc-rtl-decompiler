/*-------------------------------------------------*
 * This file will contain helper functions to help *
 * us do stuff. For now just has PrintDebug().     *
 *-------------------------------------------------*/

#ifndef _H_utility
#define _H_utility

#include <stdlib.h>
#include <stdio.h>

void Failure(const char *format, ...);

#define Assert(expr) \
 ((expr)? (void)0: Failure("Assertion failed: %s, line %d:\n      %s",__FILE__,__LINE__,#expr))

void PrintDebug(const char *key, const char *format, ...);

bool IsDebugOn(const char *key);

#endif