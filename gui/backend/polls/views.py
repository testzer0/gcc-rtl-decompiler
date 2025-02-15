from django.shortcuts import render
import json
import subprocess

# Create your views here.
import os
from django.http import HttpResponse, JsonResponse

from django.views.decorators.csrf import csrf_exempt

@csrf_exempt
def index(request):
    if request.method == 'POST':
        print(os.getcwd())
        # print(request.body)
        # return HttpResponse(request.POST)
        data = json.loads(request.body)
        with open('./tempin.c','w+') as file:
            file.write(data['code'])
        os.system("gcc -fno-stack-protector -fdump-rtl-vregs tempin.c ")
        os.system("gcc tempin.c -S")
        os.system("./rcc <./tempin.c.230r.vregs >./tempout")
        lookfor = "results/symbols"
        symbolsname = "tempin.s"
        fullname = "tempin.c.230r.vregs"
        outname = "tempout"
        subprocess.run("./rcc < %s > %s" % (fullname,outname), shell=True)
        pycmd = "python3 symbols.py --lookfor \"" + lookfor + "\" --symbols \"" + symbolsname +"\" --outfile \"" + outname + "\""
        subprocess.run(pycmd,shell=True)
        with open('./tempout') as file:
            cpp = file.read()
        with open('./tempin.c.230r.vregs') as file:
            rtl = file.read()
        # ans=bytes(ans,'utf-8')
        response = JsonResponse({'code':data['code'],'rtl':rtl, 'cpp':cpp})
        # response = HttpResponse("not my problem")
    else :
        response = HttpResponse("Please place a POST request")
    return response
