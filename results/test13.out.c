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
const char *symbol13 = "addr at *ptr_array[1] = %p\n";
const char *symbol12 = "addr at *ptr_array[0] = %p\n";
const char *symbol11 = "*ptr_array[1] = %c\n";
const char *symbol10 = "addr at **ptr_array[0] = %p\n\n";
const char *symbol9 = "addr at **ptr_array = %p\n";
const char *symbol8 = "**ptr_array = %c\n";
const char *symbol7 = "fancy array string %s, addr = %p\n\n";
const char *symbol6 = "same array string %s, addr = %p\n";
const char *symbol5 = "array string %s, addr = %p\n";
const char *symbol4 = "**fancy_same_array[3] = %c, addr = %p\n";
const char *symbol3 = "same_array[3] = %c, addr = %p\n";
const char *symbol2 = "array[3] = %c, addr = %p\n";
const char *symbol1 = "value at address of pointer is %c\n\n";
const char *symbol0 = "pointer is at address %p\n";

int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -36);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(65);
    // PARALLEL COMMAND BEGIN
    long long int temp2 = (long long int)(rbp + -36);
    regs[118] = (long long int)(temp2);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp3 = (long long int)(rbp + -32);
    long long int *temp4 = (long long int *)temp3;
    *temp4 = (long long int)(regs[118]);
    // PARALLEL COMMAND BEGIN
    long long int temp5 = (long long int)(rbp + -32);
    regs[119] = (long long int)(temp5);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[119]);
    long long int temp6 = (long long int)symbol0;
    rdi = (long long int)(temp6);
    rax = (char)(0);
    int temp7 = printf((const char *)rdi, rsi);
    rax = (long long int)temp7;
    long long int temp8 = (long long int)(rbp + -32);
    long long int *temp9 = (long long int *)temp8;
    regs[87] = (long long int)(*temp9);
    int *temp10 = (int *)regs[87];
    regs[88] = (int)(*temp10);
    rsi = (int)(regs[88]);
    long long int temp11 = (long long int)symbol1;
    rdi = (long long int)(temp11);
    rax = (char)(0);
    int temp12 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp12;
    long long int temp13 = (long long int)(rbp + -41);
    char *temp14 = (char *)temp13;
    *temp14 = (char)(97);
    long long int temp15 = (long long int)(rbp + -40);
    char *temp16 = (char *)temp15;
    *temp16 = (char)(65);
    long long int temp17 = (long long int)(rbp + -39);
    char *temp18 = (char *)temp17;
    *temp18 = (char)(98);
    long long int temp19 = (long long int)(rbp + -38);
    char *temp20 = (char *)temp19;
    *temp20 = (char)(122);
    long long int temp21 = (long long int)(rbp + -37);
    char *temp22 = (char *)temp21;
    *temp22 = (char)(77);
    // PARALLEL COMMAND BEGIN
    long long int temp23 = (long long int)(rbp + -41);
    regs[120] = (long long int)(temp23);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp24 = (long long int)(rbp + -56);
    long long int *temp25 = (long long int *)temp24;
    *temp25 = (long long int)(regs[120]);
    // PARALLEL COMMAND BEGIN
    long long int temp26 = (long long int)(rbp + -56);
    regs[121] = (long long int)(temp26);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp27 = (long long int)(rbp + -8);
    long long int *temp28 = (long long int *)temp27;
    *temp28 = (long long int)(regs[121]);
    long long int temp29 = (long long int)(rbp + -38);
    char *temp30 = (char *)temp29;
    regs[89] = (char)(*temp30);
    regs[90] = (int)(regs[89]);
    // PARALLEL COMMAND BEGIN
    long long int temp31 = (long long int)(rbp + -41);
    regs[122] = (long long int)(temp31);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp32 = (long long int)(regs[122] + 3);
    regs[123] = (long long int)(temp32);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdx = (long long int)(regs[123]);
    rsi = (int)(regs[90]);
    long long int temp33 = (long long int)symbol2;
    rdi = (long long int)(temp33);
    rax = (char)(0);
    int temp34 = printf((const char *)rdi, (int)rsi, rdx);
    rax = (long long int)temp34;
    long long int temp35 = (long long int)(rbp + -56);
    long long int *temp36 = (long long int *)temp35;
    regs[91] = (long long int)(*temp36);
    // PARALLEL COMMAND BEGIN
    long long int temp37 = (long long int)(regs[91] + 3);
    regs[92] = (long long int)(temp37);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp38 = (long long int)(rbp + -56);
    long long int *temp39 = (long long int *)temp38;
    regs[93] = (long long int)(*temp39);
    // PARALLEL COMMAND BEGIN
    long long int temp40 = (long long int)(regs[93] + 3);
    regs[94] = (long long int)(temp40);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    char *temp41 = (char *)regs[94];
    regs[95] = (char)(*temp41);
    regs[96] = (int)(regs[95]);
    rdx = (long long int)(regs[92]);
    rsi = (int)(regs[96]);
    long long int temp42 = (long long int)symbol3;
    rdi = (long long int)(temp42);
    rax = (char)(0);
    int temp43 = printf((const char *)rdi, (int)rsi, rdx);
    rax = (long long int)temp43;
    long long int temp44 = (long long int)(rbp + -8);
    long long int *temp45 = (long long int *)temp44;
    regs[124] = (long long int)(*temp45);
    long long int *temp46 = (long long int *)regs[124];
    regs[97] = (long long int)(*temp46);
    // PARALLEL COMMAND BEGIN
    long long int temp47 = (long long int)(regs[97] + 3);
    regs[98] = (long long int)(temp47);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp48 = (long long int)(rbp + -8);
    long long int *temp49 = (long long int *)temp48;
    regs[125] = (long long int)(*temp49);
    long long int *temp50 = (long long int *)regs[125];
    regs[99] = (long long int)(*temp50);
    // PARALLEL COMMAND BEGIN
    long long int temp51 = (long long int)(regs[99] + 3);
    regs[100] = (long long int)(temp51);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    char *temp52 = (char *)regs[100];
    regs[101] = (char)(*temp52);
    regs[102] = (int)(regs[101]);
    rdx = (long long int)(regs[98]);
    rsi = (int)(regs[102]);
    long long int temp53 = (long long int)symbol4;
    rdi = (long long int)(temp53);
    rax = (char)(0);
    int temp54 = printf((const char *)rdi, (int)rsi, rdx);
    rax = (long long int)temp54;
    // PARALLEL COMMAND BEGIN
    long long int temp55 = (long long int)(rbp + -41);
    regs[126] = (long long int)(temp55);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp56 = (long long int)(rbp + -41);
    regs[127] = (long long int)(temp56);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdx = (long long int)(regs[126]);
    rsi = (long long int)(regs[127]);
    long long int temp57 = (long long int)symbol5;
    rdi = (long long int)(temp57);
    rax = (char)(0);
    int temp58 = printf((const char *)rdi, rsi, rdx);
    rax = (long long int)temp58;
    long long int temp59 = (long long int)(rbp + -56);
    long long int *temp60 = (long long int *)temp59;
    regs[103] = (long long int)(*temp60);
    // PARALLEL COMMAND BEGIN
    long long int temp61 = (long long int)(rbp + -56);
    regs[128] = (long long int)(temp61);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdx = (long long int)(regs[128]);
    rsi = (long long int)(regs[103]);
    long long int temp62 = (long long int)symbol6;
    rdi = (long long int)(temp62);
    rax = (char)(0);
    int temp63 = printf((const char *)rdi, rsi, rdx);
    rax = (long long int)temp63;
    long long int temp64 = (long long int)(rbp + -8);
    long long int *temp65 = (long long int *)temp64;
    regs[129] = (long long int)(*temp65);
    long long int *temp66 = (long long int *)regs[129];
    regs[104] = (long long int)(*temp66);
    long long int temp67 = (long long int)(rbp + -8);
    long long int *temp68 = (long long int *)temp67;
    regs[130] = (long long int)(*temp68);
    rdx = (long long int)(regs[130]);
    rsi = (long long int)(regs[104]);
    long long int temp69 = (long long int)symbol7;
    rdi = (long long int)(temp69);
    rax = (char)(0);
    int temp70 = printf((const char *)rdi, rsi, rdx);
    rax = (long long int)temp70;
    long long int temp71 = (long long int)(rbp + -16);
    long long int *temp72 = (long long int *)temp71;
    *temp72 = (long long int)(0);
    long long int temp73 = (long long int)(rbp + -24);
    long long int *temp74 = (long long int *)temp73;
    *temp74 = (long long int)(0);
    long long int temp75 = (long long int)(rbp + -82);
    char *temp76 = (char *)temp75;
    *temp76 = (char)(72);
    long long int temp77 = (long long int)(rbp + -81);
    char *temp78 = (char *)temp77;
    *temp78 = (char)(105);
    // PARALLEL COMMAND BEGIN
    long long int temp79 = (long long int)(rbp + -82);
    regs[131] = (long long int)(temp79);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp80 = (long long int)(regs[131] + 1);
    regs[132] = (long long int)(temp80);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp81 = (long long int)(rbp + -16);
    long long int *temp82 = (long long int *)temp81;
    *temp82 = (long long int)(regs[132]);
    // PARALLEL COMMAND BEGIN
    long long int temp83 = (long long int)(rbp + -82);
    regs[133] = (long long int)(temp83);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp84 = (long long int)(rbp + -24);
    long long int *temp85 = (long long int *)temp84;
    *temp85 = (long long int)(regs[133]);
    long long int temp86 = (long long int)(rbp + -24);
    long long int *temp87 = (long long int *)temp86;
    regs[134] = (long long int)(*temp87);
    long long int temp88 = (long long int)(rbp + -80);
    long long int *temp89 = (long long int *)temp88;
    *temp89 = (long long int)(regs[134]);
    long long int temp90 = (long long int)(rbp + -16);
    long long int *temp91 = (long long int *)temp90;
    regs[135] = (long long int)(*temp91);
    long long int temp92 = (long long int)(rbp + -72);
    long long int *temp93 = (long long int *)temp92;
    *temp93 = (long long int)(regs[135]);
    long long int temp94 = (long long int)(rbp + -80);
    long long int *temp95 = (long long int *)temp94;
    regs[105] = (long long int)(*temp95);
    char *temp96 = (char *)regs[105];
    regs[106] = (char)(*temp96);
    regs[107] = (int)(regs[106]);
    rsi = (int)(regs[107]);
    long long int temp97 = (long long int)symbol8;
    rdi = (long long int)(temp97);
    rax = (char)(0);
    int temp98 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp98;
    long long int temp99 = (long long int)(rbp + -80);
    long long int *temp100 = (long long int *)temp99;
    regs[108] = (long long int)(*temp100);
    rsi = (long long int)(regs[108]);
    long long int temp101 = (long long int)symbol9;
    rdi = (long long int)(temp101);
    rax = (char)(0);
    int temp102 = printf((const char *)rdi, rsi);
    rax = (long long int)temp102;
    long long int temp103 = (long long int)(rbp + -80);
    long long int *temp104 = (long long int *)temp103;
    regs[109] = (long long int)(*temp104);
    rsi = (long long int)(regs[109]);
    long long int temp105 = (long long int)symbol10;
    rdi = (long long int)(temp105);
    rax = (char)(0);
    int temp106 = printf((const char *)rdi, rsi);
    rax = (long long int)temp106;
    long long int temp107 = (long long int)(rbp + -72);
    long long int *temp108 = (long long int *)temp107;
    regs[110] = (long long int)(*temp108);
    char *temp109 = (char *)regs[110];
    regs[111] = (char)(*temp109);
    regs[112] = (int)(regs[111]);
    rsi = (int)(regs[112]);
    long long int temp110 = (long long int)symbol11;
    rdi = (long long int)(temp110);
    rax = (char)(0);
    int temp111 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp111;
    long long int temp112 = (long long int)(rbp + -80);
    long long int *temp113 = (long long int *)temp112;
    regs[113] = (long long int)(*temp113);
    rsi = (long long int)(regs[113]);
    long long int temp114 = (long long int)symbol12;
    rdi = (long long int)(temp114);
    rax = (char)(0);
    int temp115 = printf((const char *)rdi, rsi);
    rax = (long long int)temp115;
    long long int temp116 = (long long int)(rbp + -80);
    long long int *temp117 = (long long int *)temp116;
    regs[114] = (long long int)(*temp117);
    rsi = (long long int)(regs[114]);
    long long int temp118 = (long long int)symbol12;
    rdi = (long long int)(temp118);
    rax = (char)(0);
    int temp119 = printf((const char *)rdi, rsi);
    rax = (long long int)temp119;
    long long int temp120 = (long long int)(rbp + -72);
    long long int *temp121 = (long long int *)temp120;
    regs[115] = (long long int)(*temp121);
    rsi = (long long int)(regs[115]);
    long long int temp122 = (long long int)symbol13;
    rdi = (long long int)(temp122);
    rax = (char)(0);
    int temp123 = printf((const char *)rdi, rsi);
    rax = (long long int)temp123;
    regs[116] = (int)(0);
    regs[117] = (int)(regs[116]);
    rax = (int)(regs[117]);
    return (int)(rax);
}
