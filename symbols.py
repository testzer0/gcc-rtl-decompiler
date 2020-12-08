import argparse
import shlex

parser = argparse.ArgumentParser()
parser.add_argument('--lookfor',dest='lookfor')
parser.add_argument('--symbols',dest='symbols')
parser.add_argument('--outfile',dest='outfile')
parser.add_argument('-r', action='store_true')
args = parser.parse_args()

words = []
otherwords = set()
filecontents = []

worddict = {}
prependlines = []

with open(args.lookfor) as f:
    contents = f.readlines()
    for line in contents:
        for string in line.split():
            if string.startswith("\"*.LC"):
                words.append(string[2:-1]+":")
            else:
                otherwords.add(string[1:-1])

with open(args.symbols) as f:
    contents = f.readlines()
    for line in contents:
        for string in shlex.split(line):
            filecontents.append(string)

i = 0
symcount = 0
while i < len(filecontents):
    if filecontents[i] in words:
        name = "externSymbolTable[\"*" + filecontents[i][:-1] + "\"]" 
        i += 2
        value = filecontents[i]
        line = "const char *symbol" + str(symcount) + " = \"" + value + "\";\n"
        worddict[name] = "symbol"+str(symcount)
        symcount += 1
        prependlines.append(line)
    i += 1
x = 0
for word in otherwords:
    line = "long long int symbol" + word + " = (long long int)&othersymbols["+str(x)+"];\n"
    x += 1
    prependlines.append(line)
    name = "externSymbolTable[\"" + word + "\"]"
    worddict[name] = "symbol"+word

if len(otherwords) != 0:
    line = "long long int othersymbols[" + str(len(otherwords)) + "];\n"
    prependlines.append(line)

if not args.r:
    worddict["regs[0]"] = "rax"
    worddict["regs[1]"] = "rdx"
    worddict["regs[2]"] = "rcx"
    worddict["regs[4]"] = "rsi"
    worddict["regs[5]"] = "rdi"
    worddict["regs[7]"] = "rsp"
    worddict["regs[17]"] = "rflags"
    worddict["regs[20]"] = "rbp"
    worddict["regs[37]"] = "r8"
    worddict["regs[38]"] = "r9"
    prependlines.append("long long int rax;\n")
    prependlines.append("long long int rdx;\n")
    prependlines.append("long long int rcx;\n")
    prependlines.append("long long int rsi;\n")
    prependlines.append("long long int rdi;\n")
    prependlines.append("long long int rsp;\n")
    prependlines.append("long long int rflags;\n")
    prependlines.append("long long int rbp;\n")
    prependlines.append("long long int r8;\n")
    prependlines.append("long long int r9;\n") 

with open(args.outfile) as f:
    newcontents = f.read()
    splitcontents = newcontents.split("\n",4)
    newcontents = splitcontents[4]
    for line in prependlines:
        newcontents = line + newcontents
    newcontents = splitcontents[0] + "\n" + splitcontents[1] + "\n" + splitcontents[2] + \
     "\n" + splitcontents[3] + "\n\n" + newcontents
    for key,value in worddict.items():
        newcontents = newcontents.replace(key,value)

with open(args.outfile,"w") as f:
    f.write(newcontents)