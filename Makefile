# Makefile for the lexer

# PHONY: tells bash to not use same named file instead of command if exists
.PHONY: clean strip

DECOMPILER = rcc
PRODUCTS = $(DECOMPILER) $(PREPROCESSOR)
default: $(PRODUCTS)

# Set up sources
SRCS = errors.cc utility.cc main.cc
# patsubst a,b,X replaces all occurences of a with b in X
# filter a,X filters all words from X matching a.
# The line below defines objects as .o files from all .c and .cc files
OBJS = lex.yy.o $(patsubst %.cc, %.o, $(filter %.cc,$(SRCS))) $(patsubst %.c, %.o, $(filter %.c, $(SRCS)))

# Files we don't care about
JUNK = *.log *~ *.o lex.yy.c dpp.yy.c y.tab.c y.tab.h *.core core

# Compilers being used. 
CC = g++
LD = g++
LEX = flex
YACC = bison

# Flags for compilation
CFLAGS = -g -Wall -Wno-unused -Wno-sign-compare
# The -d flag tells lex to set up for debugging.
LEXFLAGS = -d
# The -d flag tells yacc to generate header with token types
# The -v flag writes out a verbose description of the states and conflicts
# The -t flag turns on debugging capability
# The -y flag means imitate yacc's output file naming conventions
YACCFLAGS = -dvty

# Link with standard C library, math library, and lex library
LIBS = -lc -lm -ll

# Rules for various parts of the target
# Rules start with "results : inputs"
.yy.o: $*.yy.c
	$(CC) $(CFLAGS) -c -o $@ $*.cc

lex.yy.c: scanner.l 
	$(LEX) $(LEXFLAGS) scanner.l

.cc.o: $*.cc
	$(CC) $(CFLAGS) -c -o $@ $*.cc

# rules to build decompiler (rcc)

$(DECOMPILER) : $(PREPROCESSOR) $(OBJS)
	$(LD) -o $@ $(OBJS) $(LIBS)


# This target is to build small for testing (no debugging info), removes
# all intermediate products, too
strip : $(PRODUCTS)
	strip $(PRODUCTS)
	rm -rf $(JUNK)


# make depend will set up the header file dependencies for the 
# assignment.  You should make depend whenever you add a new header
# file to the project or move the project between machines
#
depend:
	makedepend -- $(CFLAGS) -- $(SRCS)

clean:
	@rm -rf $(JUNK) y.output $(PRODUCTS) $(TEST)