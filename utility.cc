#include "utility.h"
#include <stdarg.h>
#include <string.h>
#include <vector>
using std::vector;

static vector<const char*> debugKeys;
static const int BufferSize = 2048;

void Failure(const char *format, ...) {
    va_list args;
    char errbuf[BufferSize];

    va_start(args, format);
    vsprintf(errbuf, format, args);
    va_end(args);
    fflush(stdout);
    fprintf(stderr,"\n*** Failure: %s\n\n", errbuf);
    abort();
}

void PrintDebug(const char *key, const char *format, ...) {
  va_list args;
  char buf[BufferSize];

  if (!IsDebugOn(key))
     return;
  
  va_start(args, format);
  vsprintf(buf, format, args);
  va_end(args);
  printf("+++ (%s): %s%s", key, buf, buf[strlen(buf)-1] != '\n'? "\n" : "");
}

int IndexOf(const char *key) {
  for (unsigned int i = 0; i < debugKeys.size(); i++)
    if (!strcmp(debugKeys[i], key)) 
      return i;

  return -1;
}

bool IsDebugOn(const char *key) {
  return (IndexOf(key) != -1);
}
