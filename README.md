# rtl2C decompiler

A decompiler written for the conversion of gcc rtl (230r, vregs) into corresponding C code.

## Scanning

We use flex to create a scanner. The file scanner.l, used with flex, generates the lexical scanner in lex.yy.c.

## Parsing

We use GNU Bison to create a parser. The file parser.y, used with bison, generates the parser in parser.tab.c.

## Code Generation

The files ast.h and ast.cc define the necessary classes and methods to carry out some minor data flow analysis and the final code generation
using the abstract syntax tree obtained from parsing. Code generation is done recursively.

## Documentation

All C++ code involved has been documented, using Doxygen. The documentation is present in the 'doxyout' directory. To view it, simply clone
the repository, and then either open the HTML documentation in an internet browser, or compile the LaTeX files and view the resulting PDF documentation.

## Graphical User Interface

We have also included a GUI for easier utilization of this decompiler tool. It is present under the 'gui' directory, which further contains
the frontend and the backend.
