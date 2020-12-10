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
const char *symbol2 = "\nReversed Linked list ";
const char *symbol1 = "Given linked list";
const char *symbol0 = "%d  ";

void reverse(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -40);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp2 = (long long int)(rbp + -8);
    long long int *temp3 = (long long int *)temp2;
    *temp3 = (long long int)(0);
    long long int temp4 = (long long int)(rbp + -40);
    long long int *temp5 = (long long int *)temp4;
    regs[87] = (long long int)(*temp5);
    long long int *temp6 = (long long int *)regs[87];
    regs[88] = (long long int)(*temp6);
    long long int temp7 = (long long int)(rbp + -16);
    long long int *temp8 = (long long int *)temp7;
    *temp8 = (long long int)(regs[88]);
    goto label23;
    // THERE WAS A BARRIER HERE
    label25:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp9 = (long long int)(rbp + -16);
    long long int *temp10 = (long long int *)temp9;
    regs[89] = (long long int)(*temp10);
    long long int temp11 = (long long int)(regs[89] + 8);
    long long int *temp12 = (long long int *)temp11;
    regs[90] = (long long int)(*temp12);
    long long int temp13 = (long long int)(rbp + -24);
    long long int *temp14 = (long long int *)temp13;
    *temp14 = (long long int)(regs[90]);
    long long int temp15 = (long long int)(rbp + -16);
    long long int *temp16 = (long long int *)temp15;
    regs[91] = (long long int)(*temp16);
    long long int temp17 = (long long int)(rbp + -8);
    long long int *temp18 = (long long int *)temp17;
    regs[92] = (long long int)(*temp18);
    long long int temp19 = (long long int)(regs[91] + 8);
    long long int *temp20 = (long long int *)temp19;
    *temp20 = (long long int)(regs[92]);
    long long int temp21 = (long long int)(rbp + -16);
    long long int *temp22 = (long long int *)temp21;
    regs[93] = (long long int)(*temp22);
    long long int temp23 = (long long int)(rbp + -8);
    long long int *temp24 = (long long int *)temp23;
    *temp24 = (long long int)(regs[93]);
    long long int temp25 = (long long int)(rbp + -24);
    long long int *temp26 = (long long int *)temp25;
    regs[94] = (long long int)(*temp26);
    long long int temp27 = (long long int)(rbp + -16);
    long long int *temp28 = (long long int *)temp27;
    *temp28 = (long long int)(regs[94]);
    label23:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp29 = (long long int)(rbp + -16);
    long long int *temp30 = (long long int *)temp29;
    long long int temp31 = (long long int)*temp30;
    long long int temp32 = (long long int)0;
    int temp33;
    if (temp31 == temp32) temp33 = 0;
    else if (temp31 < temp32) temp33 = -1;
    else temp33 = 1;
    rflags = (long long int)(temp33);
    bool temp34 = (rflags != 0);
    if (temp34) goto label25;
    // THERE WAS A NOTE HERE
    long long int temp35 = (long long int)(rbp + -40);
    long long int *temp36 = (long long int *)temp35;
    regs[95] = (long long int)(*temp36);
    long long int temp37 = (long long int)(rbp + -8);
    long long int *temp38 = (long long int *)temp37;
    regs[96] = (long long int)(*temp38);
    long long int *temp39 = (long long int *)regs[95];
    *temp39 = (long long int)(regs[96]);
    rbp += 0x100;
    rsp += 0x100;
}
void push(long long int arg0, int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp40 = (long long int)(rbp + -24);
    long long int *temp41 = (long long int *)temp40;
    *temp41 = (long long int)(rdi);
    long long int temp42 = (long long int)(rbp + -28);
    int *temp43 = (int *)temp42;
    *temp43 = (int)(rsi);
    // THERE WAS A NOTE HERE
    rdi = (long long int)(16);
    long long int temp44 = malloc(rdi);
    rax = (long long int)temp44;
    regs[88] = (long long int)(rax);
    long long int temp45 = (long long int)(rbp + -8);
    long long int *temp46 = (long long int *)temp45;
    *temp46 = (long long int)(regs[88]);
    long long int temp47 = (long long int)(rbp + -8);
    long long int *temp48 = (long long int *)temp47;
    regs[89] = (long long int)(*temp48);
    long long int temp49 = (long long int)(rbp + -28);
    int *temp50 = (int *)temp49;
    regs[90] = (int)(*temp50);
    int *temp51 = (int *)regs[89];
    *temp51 = (int)(regs[90]);
    long long int temp52 = (long long int)(rbp + -24);
    long long int *temp53 = (long long int *)temp52;
    regs[91] = (long long int)(*temp53);
    long long int *temp54 = (long long int *)regs[91];
    regs[87] = (long long int)(*temp54);
    long long int temp55 = (long long int)(rbp + -8);
    long long int *temp56 = (long long int *)temp55;
    regs[92] = (long long int)(*temp56);
    long long int temp57 = (long long int)(regs[92] + 8);
    long long int *temp58 = (long long int *)temp57;
    *temp58 = (long long int)(regs[87]);
    long long int temp59 = (long long int)(rbp + -24);
    long long int *temp60 = (long long int *)temp59;
    regs[93] = (long long int)(*temp60);
    long long int temp61 = (long long int)(rbp + -8);
    long long int *temp62 = (long long int *)temp61;
    regs[94] = (long long int)(*temp62);
    long long int *temp63 = (long long int *)regs[93];
    *temp63 = (long long int)(regs[94]);
    rbp += 0x100;
    rsp += 0x100;
}
void printList(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp64 = (long long int)(rbp + -24);
    long long int *temp65 = (long long int *)temp64;
    *temp65 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp66 = (long long int)(rbp + -24);
    long long int *temp67 = (long long int *)temp66;
    regs[88] = (long long int)(*temp67);
    long long int temp68 = (long long int)(rbp + -8);
    long long int *temp69 = (long long int *)temp68;
    *temp69 = (long long int)(regs[88]);
    goto label20;
    // THERE WAS A BARRIER HERE
    label22:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp70 = (long long int)(rbp + -8);
    long long int *temp71 = (long long int *)temp70;
    regs[89] = (long long int)(*temp71);
    int *temp72 = (int *)regs[89];
    regs[87] = (int)(*temp72);
    rsi = (int)(regs[87]);
    long long int temp73 = (long long int)symbol0;
    rdi = (long long int)(temp73);
    rax = (char)(0);
    int temp74 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp74;
    long long int temp75 = (long long int)(rbp + -8);
    long long int *temp76 = (long long int *)temp75;
    regs[90] = (long long int)(*temp76);
    long long int temp77 = (long long int)(regs[90] + 8);
    long long int *temp78 = (long long int *)temp77;
    regs[91] = (long long int)(*temp78);
    long long int temp79 = (long long int)(rbp + -8);
    long long int *temp80 = (long long int *)temp79;
    *temp80 = (long long int)(regs[91]);
    label20:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp81 = (long long int)(rbp + -8);
    long long int *temp82 = (long long int *)temp81;
    long long int temp83 = (long long int)*temp82;
    long long int temp84 = (long long int)0;
    int temp85;
    if (temp83 == temp84) temp85 = 0;
    else if (temp83 < temp84) temp85 = -1;
    else temp85 = 1;
    rflags = (long long int)(temp85);
    bool temp86 = (rflags != 0);
    if (temp86) goto label22;
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp87 = (long long int)(rbp + -8);
    long long int *temp88 = (long long int *)temp87;
    *temp88 = (long long int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp89 = (long long int)(rbp + -8);
    regs[91] = (long long int)(temp89);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(20);
    rdi = (long long int)(regs[91]);
    push(rdi, (int)rsi);
    // PARALLEL COMMAND BEGIN
    long long int temp90 = (long long int)(rbp + -8);
    regs[92] = (long long int)(temp90);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(4);
    rdi = (long long int)(regs[92]);
    push(rdi, (int)rsi);
    // PARALLEL COMMAND BEGIN
    long long int temp91 = (long long int)(rbp + -8);
    regs[93] = (long long int)(temp91);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(15);
    rdi = (long long int)(regs[93]);
    push(rdi, (int)rsi);
    // PARALLEL COMMAND BEGIN
    long long int temp92 = (long long int)(rbp + -8);
    regs[94] = (long long int)(temp92);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(85);
    rdi = (long long int)(regs[94]);
    push(rdi, (int)rsi);
    long long int temp93 = (long long int)symbol1;
    rdi = (long long int)(temp93);
    int temp94 = puts(rdi);
    rax = (long long int)temp94;
    long long int temp95 = (long long int)(rbp + -8);
    long long int *temp96 = (long long int *)temp95;
    regs[87] = (long long int)(*temp96);
    rdi = (long long int)(regs[87]);
    printList(rdi);
    // PARALLEL COMMAND BEGIN
    long long int temp97 = (long long int)(rbp + -8);
    regs[95] = (long long int)(temp97);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdi = (long long int)(regs[95]);
    reverse(rdi);
    long long int temp98 = (long long int)symbol2;
    rdi = (long long int)(temp98);
    int temp99 = puts(rdi);
    rax = (long long int)temp99;
    long long int temp100 = (long long int)(rbp + -8);
    long long int *temp101 = (long long int *)temp100;
    regs[88] = (long long int)(*temp101);
    rdi = (long long int)(regs[88]);
    printList(rdi);
    int temp102 = getchar();
    rax = (long long int)temp102;
    regs[89] = (int)(0);
    regs[90] = (int)(regs[89]);
    rax = (int)(regs[90]);
    return (int)(rax);
}
