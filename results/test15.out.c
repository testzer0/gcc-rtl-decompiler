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
const char *symbol3 = "%d is not an Armstrong number.";
const char *symbol2 = "%d is an Armstrong number.";
const char *symbol1 = "%d";
const char *symbol0 = "Enter a three-digit integer: ";

int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -8);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(0);
    long long int temp2 = (long long int)symbol0;
    rdi = (long long int)(temp2);
    rax = (char)(0);
    int temp3 = printf((const char *)rdi);
    rax = (long long int)temp3;
    // PARALLEL COMMAND BEGIN
    long long int temp4 = (long long int)(rbp + -16);
    regs[94] = (long long int)(temp4);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[94]);
    long long int temp5 = (long long int)symbol1;
    rdi = (long long int)(temp5);
    rax = (char)(0);
    int temp6 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp6;
    long long int temp7 = (long long int)(rbp + -16);
    int *temp8 = (int *)temp7;
    regs[95] = (int)(*temp8);
    long long int temp9 = (long long int)(rbp + -4);
    int *temp10 = (int *)temp9;
    *temp10 = (int)(regs[95]);
    goto label43;
    // THERE WAS A BARRIER HERE
    label45:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp11 = (long long int)(rbp + -4);
    int *temp12 = (int *)temp11;
    regs[97] = (int)(*temp12);
    regs[99] = (int)(1717986919);
    // PARALLEL COMMAND BEGIN
    long long int temp13 = (long long int)(regs[97] * regs[99]);
    long long int temp14 = (long long int)(temp13 >> 32);
    regs[98] = (int)(temp14);
    // CLOBBER COMMAND
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp15 = (int)(regs[98] >> 2);
    regs[100] = (int)(temp15);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp16 = (int)(regs[97] >> 31);
    regs[101] = (int)(temp16);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp17 = (int)(regs[100] - regs[101]);
    regs[96] = (int)(temp17);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[102] = (int)(regs[96]);
    // PARALLEL COMMAND BEGIN
    int temp18 = (int)(regs[102] << 2);
    regs[102] = (int)(temp18);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp19 = (int)(regs[102] + regs[96]);
    regs[102] = (int)(temp19);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp20 = (int)(regs[102] << 1);
    regs[103] = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[102] = (int)(regs[103]);
    // PARALLEL COMMAND BEGIN
    int temp21 = (int)(regs[97] - regs[102]);
    regs[104] = (int)(temp21);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp22 = (long long int)(rbp + -12);
    int *temp23 = (int *)temp22;
    *temp23 = (int)(regs[104]);
    long long int temp24 = (long long int)(rbp + -12);
    int *temp25 = (int *)temp24;
    regs[105] = (int)(*temp25);
    // PARALLEL COMMAND BEGIN
    long long int temp26 = (long long int)(rbp + -12);
    int *temp27 = (int *)temp26;
    int temp28 = (int)(regs[105] * *temp27);
    regs[87] = (int)(temp28);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp29 = (long long int)(rbp + -12);
    int *temp30 = (int *)temp29;
    int temp31 = (int)(regs[87] * *temp30);
    regs[88] = (int)(temp31);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp32 = (long long int)(rbp + -8);
    int *temp33 = (int *)temp32;
    long long int temp34 = (long long int)(rbp + -8);
    int *temp35 = (int *)temp34;
    int temp36 = (int)(*temp35 + regs[88]);
    *temp33 = (int)(temp36);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp37 = (long long int)(rbp + -4);
    int *temp38 = (int *)temp37;
    regs[107] = (int)(*temp38);
    regs[109] = (int)(1717986919);
    // PARALLEL COMMAND BEGIN
    long long int temp39 = (long long int)(regs[107] * regs[109]);
    long long int temp40 = (long long int)(temp39 >> 32);
    regs[108] = (int)(temp40);
    // CLOBBER COMMAND
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp41 = (int)(regs[108] >> 2);
    regs[110] = (int)(temp41);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp42 = (int)(regs[107] >> 31);
    regs[111] = (int)(temp42);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp43 = (int)(regs[110] - regs[111]);
    regs[106] = (int)(temp43);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp44 = (long long int)(rbp + -4);
    int *temp45 = (int *)temp44;
    *temp45 = (int)(regs[106]);
    label43:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp46 = (long long int)(rbp + -4);
    int *temp47 = (int *)temp46;
    long long int temp48 = (long long int)*temp47;
    long long int temp49 = (long long int)0;
    int temp50;
    if (temp48 == temp49) temp50 = 0;
    else if (temp48 < temp49) temp50 = -1;
    else temp50 = 1;
    rflags = (long long int)(temp50);
    bool temp51 = (rflags != 0);
    if (temp51) goto label45;
    // THERE WAS A NOTE HERE
    long long int temp52 = (long long int)(rbp + -16);
    int *temp53 = (int *)temp52;
    regs[89] = (int)(*temp53);
    long long int temp54 = (long long int)(rbp + -8);
    int *temp55 = (int *)temp54;
    long long int temp56 = (long long int)*temp55;
    long long int temp57 = (long long int)regs[89];
    int temp58;
    if (temp56 == temp57) temp58 = 0;
    else if (temp56 < temp57) temp58 = -1;
    else temp58 = 1;
    rflags = (long long int)(temp58);
    bool temp59 = (rflags != 0);
    if (temp59) goto label60;
    // THERE WAS A NOTE HERE
    long long int temp60 = (long long int)(rbp + -16);
    int *temp61 = (int *)temp60;
    regs[90] = (int)(*temp61);
    rsi = (int)(regs[90]);
    long long int temp62 = (long long int)symbol2;
    rdi = (long long int)(temp62);
    rax = (char)(0);
    int temp63 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp63;
    goto label67;
    // THERE WAS A BARRIER HERE
    label60:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp64 = (long long int)(rbp + -16);
    int *temp65 = (int *)temp64;
    regs[91] = (int)(*temp65);
    rsi = (int)(regs[91]);
    long long int temp66 = (long long int)symbol3;
    rdi = (long long int)(temp66);
    rax = (char)(0);
    int temp67 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp67;
    label67:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    regs[92] = (int)(0);
    regs[93] = (int)(regs[92]);
    rax = (int)(regs[93]);
    return (int)(rax);
}
