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

int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    rax = (int)(regs[88]);
    return (int)(rax);
}
