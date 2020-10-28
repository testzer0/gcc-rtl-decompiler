import os
import subprocess
rootdir = "results"

for root, dirs, files in os.walk(rootdir):
    for file in files:
        name = os.path.splitext(file)[-2]
        ext = os.path.splitext(file)[-1]
        if ext == ".rtl":
            fullname = rootdir + "/" + name + ".rtl"
            outname = rootdir + "/" + name + ".out"
            print("./rcc < %s > %s" % (fullname,outname))
            subprocess.run("./rcc < %s > %s" % (fullname,outname), shell=True)