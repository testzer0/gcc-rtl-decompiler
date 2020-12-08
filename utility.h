/*-------------------------------------------------*
 * This file will contain helper functions to help *
 * us do stuff. For now just has PrintDebug().     *
 *-------------------------------------------------*/

#ifndef _H_utility
#define _H_utility

#include <stdlib.h>
#include <stdio.h>

/**
 *  handles program failure by printing the error and aborting execution.
 *  @param format C string containing a format string
 */
void Failure(const char *format, ...);

#define Assert(expr) \
 ((expr)? (void)0: Failure("Assertion failed: %s, line %d:\n      %s",__FILE__,__LINE__,#expr))

/**
 *  prints debugging info for the given key
 */
void PrintDebug(const char *key, const char *format, ...);

/**
 *  checks whether debug mode is on
 *  @return true if on, false otherwise
 */
bool IsDebugOn(const char *key);

#endif