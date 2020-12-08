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
const char *symbol0 = "%d\n";

int f(int arg0, long long int arg1) {
    rsi = (long long int)arg0;
    rdi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    regs[91] = (long long int)(rdi);
    regs[92] = (int)(rsi);
    long long int temp0 = (long long int)(rbp + -16);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(regs[91]);
    long long int temp2 = (long long int)(rbp + -8);
    int *temp3 = (int *)temp2;
    *temp3 = (int)(regs[92]);
    // THERE WAS A NOTE HERE
    long long int temp4 = (long long int)(rbp + -16);
    int *temp5 = (int *)temp4;
    regs[87] = (int)(*temp5);
    long long int temp6 = (long long int)(rbp + -12);
    int *temp7 = (int *)temp6;
    regs[88] = (int)(*temp7);
    // PARALLEL COMMAND BEGIN
    int temp8 = (int)(regs[87] + regs[88]);
    regs[89] = (int)(temp8);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[90] = (int)(regs[89]);
    rax = (int)(regs[90]);
    rbp += 0x100;
    rsp += 0x100;
    return (int)(rax);
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp9 = (long long int)(rbp + -16);
    int *temp10 = (int *)temp9;
    *temp10 = (int)(2);
    long long int temp11 = (long long int)(rbp + -12);
    int *temp12 = (int *)temp11;
    *temp12 = (int)(3);
    long long int temp13 = (long long int)(rbp + -16);
    long long int *temp14 = (long long int *)temp13;
    regs[89] = (long long int)(*temp14);
    long long int temp15 = (long long int)(rbp + -8);
    int *temp16 = (int *)temp15;
    regs[90] = (int)(*temp16);
    rdi = (long long int)(regs[89]);
    rsi = (int)(regs[90]);
    int temp17 = f((int)rsi, rdi);
    rax = (long long int)temp17;
    regs[91] = (int)(rax);
    long long int temp18 = (long long int)(rbp + -4);
    int *temp19 = (int *)temp18;
    *temp19 = (int)(regs[91]);
    long long int temp20 = (long long int)(rbp + -4);
    int *temp21 = (int *)temp20;
    regs[92] = (int)(*temp21);
    rsi = (int)(regs[92]);
    long long int temp22 = (long long int)symbol0;
    rdi = (long long int)(temp22);
    rax = (char)(0);
    int temp23 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp23;
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    rax = (int)(regs[88]);
    return (int)(rax);
}
