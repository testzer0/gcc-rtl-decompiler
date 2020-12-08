#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
long long int regs[512];

long long int r9;
long long int r8;
long long int rbp;
long long int rflags;
long long int rsp;
long long int rdi;
long long int rsi;
long long int rcx;
long long int rdx;
long long int rax;
const char *symbol1 = "%c\n";
const char *symbol0 = "%d";

char inttochar(int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -20);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp2 = (long long int)(rbp + -20);
    int *temp3 = (int *)temp2;
    regs[91] = (int)(*temp3);
    char temp4 = (char)(regs[91] & 255);
    regs[87] = (char)(temp4);
    // PARALLEL COMMAND BEGIN
    char temp5 = (char)(regs[87] + 97);
    regs[88] = (char)(temp5);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp6 = (long long int)(rbp + -1);
    char *temp7 = (char *)temp6;
    *temp7 = (char)(regs[88]);
    long long int temp8 = (long long int)(rbp + -1);
    char *temp9 = (char *)temp8;
    regs[89] = (char)(*temp9);
    regs[90] = (char)(regs[89]);
    rax = (char)(regs[90]);
    rbp += 0x100;
    rsp += 0x100;
    return (char)(rax);
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp10 = (long long int)(rbp + -8);
    regs[91] = (long long int)(temp10);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[91]);
    long long int temp11 = (long long int)symbol0;
    rdi = (long long int)(temp11);
    rax = (char)(0);
    int temp12 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp12;
    long long int temp13 = (long long int)(rbp + -8);
    int *temp14 = (int *)temp13;
    regs[87] = (int)(*temp14);
    rdi = (int)(regs[87]);
    char temp15 = inttochar((int)rdi);
    rax = (long long int)temp15;
    regs[92] = (char)(rax);
    long long int temp16 = (long long int)(rbp + -1);
    char *temp17 = (char *)temp16;
    *temp17 = (char)(regs[92]);
    long long int temp18 = (long long int)(rbp + -1);
    char *temp19 = (char *)temp18;
    regs[88] = (int)(*temp19);
    rsi = (int)(regs[88]);
    long long int temp20 = (long long int)symbol1;
    rdi = (long long int)(temp20);
    rax = (char)(0);
    int temp21 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp21;
    regs[89] = (int)(0);
    regs[90] = (int)(regs[89]);
    rax = (int)(regs[90]);
    return (int)(rax);
}
