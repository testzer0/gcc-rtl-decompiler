import os
import subprocess
rootdir = "results"
lookfor = rootdir + "/symbols"

for root, dirs, files in os.walk(rootdir):
    for file in files:
        name = os.path.splitext(file)[-2]
        ext = os.path.splitext(file)[-1]
        if ext == ".rtl":
            fullname = rootdir + "/" + name + ".rtl"
            outname = rootdir + "/" + name + ".out.c"
            symbolsname = rootdir + "/" + name + ".s"
            pycmd = "python3 symbols.py --lookfor \"" + lookfor + "\" --symbols \"" + symbolsname +"\" --outfile \"" + outname + "\""
            subprocess.run("./rcc < %s > %s" % (fullname,outname), shell=True)
            subprocess.run(pycmd,shell=True)
