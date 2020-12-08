#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

const char *c1 = "%d", *c2 = "%c\n";

char inttochar(int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(regs[20] + -20);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp2 = (long long int)(regs[20] + -20);
    int *temp3 = (int *)temp2;
    regs[89] = (int)(*temp3);
    long long int temp4 = (long long int)(regs[20] + -1);
    char *temp5 = (char *)temp4;
    char temp6 = (char)(regs[89] & 255);
    *temp5 = (char)(temp6);
    long long int temp7 = (long long int)(regs[20] + -1);
    char *temp8 = (char *)temp7;
    regs[87] = (char)(*temp8);
    regs[88] = (char)(regs[87]);
    regs[0] = (char)(regs[88]);
    return (char)(regs[0]);
}
int main(int argc, char **argv) {
    externSymbolTable["*.LC0"] = (long long int)c1;
    externSymbolTable["*.LC1"] = (long long int)c2;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp9 = (long long int)(regs[20] + -8);
    regs[91] = (long long int)(temp9);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[91]);
    long long int temp10 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp10);
    regs[0] = (char)(0);
    int temp11;
    scanf((char *)regs[5], &temp11);
    regs[0] = (long long int)temp11;
    long long int temp12 = (long long int)(regs[20] + -8);
    int *temp13 = (int *)temp12;
    regs[87] = (int)(*temp13);
    regs[5] = (int)(regs[87]);
    char temp14 = inttochar((int)regs[5]);
    regs[0] = (long long int)temp14;
    regs[92] = (char)(regs[0]);
    long long int temp15 = (long long int)(regs[20] + -1);
    char *temp16 = (char *)temp15;
    *temp16 = (char)(regs[92]);
    long long int temp17 = (long long int)(regs[20] + -1);
    char *temp18 = (char *)temp17;
    regs[88] = (int)(*temp18);
    regs[4] = (int)(regs[88]);
    long long int temp19 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp19);
    regs[0] = (char)(0);
    int temp20 = printf((char *)regs[5], (int)regs[4]);
    regs[0] = (long long int)temp20;
    regs[89] = (int)(0);
    regs[90] = (int)(regs[89]);
    regs[0] = (int)(regs[90]);
    return (int)(regs[0]);
}
