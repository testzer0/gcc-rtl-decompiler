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
const char *symbol0 = "Hey!";

int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    label4:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)symbol0;
    rdi = (long long int)(temp0);
    int temp1 = puts(rdi);
    rax = (long long int)temp1;
    goto label4;
    // THERE WAS A BARRIER HERE
    return (int)(rax);
}
