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
const char *symbol0 = "Pos is %d\n";

int binary_search(long long int arg0, int arg1, int arg2, int arg3) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rcx = (long long int)arg3;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -24);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(rdi);
    long long int temp2 = (long long int)(rbp + -28);
    int *temp3 = (int *)temp2;
    *temp3 = (int)(rsi);
    long long int temp4 = (long long int)(rbp + -32);
    int *temp5 = (int *)temp4;
    *temp5 = (int)(rdx);
    long long int temp6 = (long long int)(rbp + -36);
    int *temp7 = (int *)temp6;
    *temp7 = (int)(rcx);
    // THERE WAS A NOTE HERE
    long long int temp8 = (long long int)(rbp + -28);
    int *temp9 = (int *)temp8;
    regs[101] = (int)(*temp9);
    long long int temp10 = (long long int)(rbp + -32);
    int *temp11 = (int *)temp10;
    long long int temp12 = (long long int)regs[101];
    long long int temp13 = (long long int)*temp11;
    int temp14;
    if (temp12 == temp13) temp14 = 0;
    else if (temp12 < temp13) temp14 = -1;
    else temp14 = 1;
    rflags = (long long int)(temp14);
    bool temp15 = (rflags <= 0);
    if (temp15) goto label16;
    // THERE WAS A NOTE HERE
    regs[99] = (int)(-1);
    goto label79;
    // THERE WAS A BARRIER HERE
    label16:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp16 = (long long int)(rbp + -32);
    int *temp17 = (int *)temp16;
    regs[102] = (int)(*temp17);
    // PARALLEL COMMAND BEGIN
    long long int temp18 = (long long int)(rbp + -28);
    int *temp19 = (int *)temp18;
    int temp20 = (int)(regs[102] - *temp19);
    regs[87] = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp21 = (int)(regs[87] >> 31);
    regs[103] = (int)(temp21);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp22 = (int)(regs[103] + regs[87]);
    regs[104] = (int)(temp22);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp23 = (int)(regs[104] >> 1);
    regs[105] = (int)(temp23);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[88] = (int)(regs[105]);
    long long int temp24 = (long long int)(rbp + -28);
    int *temp25 = (int *)temp24;
    regs[109] = (int)(*temp25);
    // PARALLEL COMMAND BEGIN
    int temp26 = (int)(regs[88] + regs[109]);
    regs[108] = (int)(temp26);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp27 = (long long int)(rbp + -4);
    int *temp28 = (int *)temp27;
    *temp28 = (int)(regs[108]);
    long long int temp29 = (long long int)(rbp + -4);
    int *temp30 = (int *)temp29;
    regs[110] = (int)(*temp30);
    regs[89] = (long long int)(regs[110]);
    // PARALLEL COMMAND BEGIN
    long long int temp31 = (long long int)(regs[89] << 2);
    regs[90] = (long long int)(temp31);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp32 = (long long int)(rbp + -24);
    long long int *temp33 = (long long int *)temp32;
    regs[111] = (long long int)(*temp33);
    // PARALLEL COMMAND BEGIN
    long long int temp34 = (long long int)(regs[90] + regs[111]);
    regs[91] = (long long int)(temp34);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp35 = (int *)regs[91];
    regs[92] = (int)(*temp35);
    long long int temp36 = (long long int)(rbp + -36);
    int *temp37 = (int *)temp36;
    long long int temp38 = (long long int)*temp37;
    long long int temp39 = (long long int)regs[92];
    int temp40;
    if (temp38 == temp39) temp40 = 0;
    else if (temp38 < temp39) temp40 = -1;
    else temp40 = 1;
    rflags = (long long int)(temp40);
    bool temp41 = (rflags != 0);
    if (temp41) goto label42;
    // THERE WAS A NOTE HERE
    long long int temp42 = (long long int)(rbp + -4);
    int *temp43 = (int *)temp42;
    regs[99] = (int)(*temp43);
    goto label79;
    // THERE WAS A BARRIER HERE
    label42:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp44 = (long long int)(rbp + -4);
    int *temp45 = (int *)temp44;
    regs[112] = (int)(*temp45);
    regs[93] = (long long int)(regs[112]);
    // PARALLEL COMMAND BEGIN
    long long int temp46 = (long long int)(regs[93] << 2);
    regs[94] = (long long int)(temp46);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp47 = (long long int)(rbp + -24);
    long long int *temp48 = (long long int *)temp47;
    regs[113] = (long long int)(*temp48);
    // PARALLEL COMMAND BEGIN
    long long int temp49 = (long long int)(regs[94] + regs[113]);
    regs[95] = (long long int)(temp49);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp50 = (int *)regs[95];
    regs[96] = (int)(*temp50);
    long long int temp51 = (long long int)(rbp + -36);
    int *temp52 = (int *)temp51;
    long long int temp53 = (long long int)*temp52;
    long long int temp54 = (long long int)regs[96];
    int temp55;
    if (temp53 == temp54) temp55 = 0;
    else if (temp53 < temp54) temp55 = -1;
    else temp55 = 1;
    rflags = (long long int)(temp55);
    bool temp56 = (rflags <= 0);
    if (temp56) goto label66;
    // THERE WAS A NOTE HERE
    long long int temp57 = (long long int)(rbp + -4);
    int *temp58 = (int *)temp57;
    regs[114] = (int)(*temp58);
    // PARALLEL COMMAND BEGIN
    int temp59 = (int)(regs[114] + 1);
    regs[97] = (int)(temp59);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp60 = (long long int)(rbp + -36);
    int *temp61 = (int *)temp60;
    regs[115] = (int)(*temp61);
    long long int temp62 = (long long int)(rbp + -32);
    int *temp63 = (int *)temp62;
    regs[116] = (int)(*temp63);
    long long int temp64 = (long long int)(rbp + -24);
    long long int *temp65 = (long long int *)temp64;
    regs[117] = (long long int)(*temp65);
    rcx = (int)(regs[115]);
    rdx = (int)(regs[116]);
    rsi = (int)(regs[97]);
    rdi = (long long int)(regs[117]);
    int temp66 = binary_search(rdi, (int)rsi, (int)rdx, (int)rcx);
    rax = (long long int)temp66;
    regs[99] = (int)(rax);
    goto label79;
    // THERE WAS A BARRIER HERE
    label66:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp67 = (long long int)(rbp + -4);
    int *temp68 = (int *)temp67;
    regs[118] = (int)(*temp68);
    // PARALLEL COMMAND BEGIN
    int temp69 = (int)(regs[118] + -1);
    regs[98] = (int)(temp69);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp70 = (long long int)(rbp + -36);
    int *temp71 = (int *)temp70;
    regs[119] = (int)(*temp71);
    long long int temp72 = (long long int)(rbp + -28);
    int *temp73 = (int *)temp72;
    regs[120] = (int)(*temp73);
    long long int temp74 = (long long int)(rbp + -24);
    long long int *temp75 = (long long int *)temp74;
    regs[121] = (long long int)(*temp75);
    rcx = (int)(regs[119]);
    rdx = (int)(regs[98]);
    rsi = (int)(regs[120]);
    rdi = (long long int)(regs[121]);
    int temp76 = binary_search(rdi, (int)rsi, (int)rdx, (int)rcx);
    rax = (long long int)temp76;
    regs[99] = (int)(rax);
    label79:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    regs[100] = (int)(regs[99]);
    rax = (int)(regs[100]);
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
    long long int temp77 = (long long int)(rbp + -32);
    int *temp78 = (int *)temp77;
    *temp78 = (int)(3);
    long long int temp79 = (long long int)(rbp + -28);
    int *temp80 = (int *)temp79;
    *temp80 = (int)(5);
    long long int temp81 = (long long int)(rbp + -24);
    int *temp82 = (int *)temp81;
    *temp82 = (int)(11);
    long long int temp83 = (long long int)(rbp + -20);
    int *temp84 = (int *)temp83;
    *temp84 = (int)(33);
    long long int temp85 = (long long int)(rbp + -16);
    int *temp86 = (int *)temp85;
    *temp86 = (int)(71);
    // PARALLEL COMMAND BEGIN
    long long int temp87 = (long long int)(rbp + -32);
    regs[89] = (long long int)(temp87);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rcx = (int)(33);
    rdx = (int)(4);
    rsi = (int)(0);
    rdi = (long long int)(regs[89]);
    int temp88 = binary_search(rdi, (int)rsi, (int)rdx, (int)rcx);
    rax = (long long int)temp88;
    regs[90] = (int)(rax);
    long long int temp89 = (long long int)(rbp + -4);
    int *temp90 = (int *)temp89;
    *temp90 = (int)(regs[90]);
    long long int temp91 = (long long int)(rbp + -4);
    int *temp92 = (int *)temp91;
    regs[91] = (int)(*temp92);
    rsi = (int)(regs[91]);
    long long int temp93 = (long long int)symbol0;
    rdi = (long long int)(temp93);
    rax = (char)(0);
    int temp94 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp94;
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    rax = (int)(regs[88]);
    return (int)(rax);
}
