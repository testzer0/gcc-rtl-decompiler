/*-------------------------------------------------------*
 | utility.h 											 |
 | ---------- 											 |
 | This file defines functions helpful for printing errs.|
 *-------------------------------------------------------*/

#ifndef UTILITY_H_
#define UTILITY_H_

void Failure(const char *format, ...);

#define Assert(expr) ((expr) ? (void)0 : Failure("Assertion failed: %s, line %d:\n    %s", __FILE__, __LINE__, #expr))

void PrintDebug(const char *key, const char *format, ...);

void SetDebugForKey(const char *key, bool val);

bool IsDebugOn(const char *key);

void ParseCommandLine(int argc, char *argv[]);

#endif