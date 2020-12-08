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
const char *symbol1 = "%d - %d \t%d \n";
const char *symbol0 = "Edge \tWeight";

int minKey(long long int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -24);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(rdi);
    long long int temp2 = (long long int)(rbp + -32);
    long long int *temp3 = (long long int *)temp2;
    *temp3 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp4 = (long long int)(rbp + -4);
    int *temp5 = (int *)temp4;
    *temp5 = (int)(2147483647);
    long long int temp6 = (long long int)(rbp + -12);
    int *temp7 = (int *)temp6;
    *temp7 = (int)(0);
    goto label42;
    // THERE WAS A BARRIER HERE
    label44:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp8 = (long long int)(rbp + -12);
    int *temp9 = (int *)temp8;
    regs[100] = (int)(*temp9);
    regs[87] = (long long int)(regs[100]);
    long long int temp10 = (long long int)(rbp + -32);
    long long int *temp11 = (long long int *)temp10;
    regs[101] = (long long int)(*temp11);
    // PARALLEL COMMAND BEGIN
    long long int temp12 = (long long int)(regs[87] + regs[101]);
    regs[88] = (long long int)(temp12);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    char *temp13 = (char *)regs[88];
    regs[89] = (char)(*temp13);
    // PARALLEL COMMAND BEGIN
    char temp14 = (char)(regs[89] ^ 1);
    regs[90] = (char)(temp14);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp15 = (long long int)regs[90];
    long long int temp16 = (long long int)0;
    int temp17;
    if (temp15 == temp16) temp17 = 0;
    else if (temp15 < temp16) temp17 = -1;
    else temp17 = 1;
    rflags = (long long int)(temp17);
    bool temp18 = (rflags == 0);
    if (temp18) goto label39;
    // THERE WAS A NOTE HERE
    long long int temp19 = (long long int)(rbp + -12);
    int *temp20 = (int *)temp19;
    regs[102] = (int)(*temp20);
    regs[91] = (long long int)(regs[102]);
    // PARALLEL COMMAND BEGIN
    long long int temp21 = (long long int)(regs[91] << 2);
    regs[92] = (long long int)(temp21);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp22 = (long long int)(rbp + -24);
    long long int *temp23 = (long long int *)temp22;
    regs[103] = (long long int)(*temp23);
    // PARALLEL COMMAND BEGIN
    long long int temp24 = (long long int)(regs[92] + regs[103]);
    regs[93] = (long long int)(temp24);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp25 = (int *)regs[93];
    regs[94] = (int)(*temp25);
    long long int temp26 = (long long int)(rbp + -4);
    int *temp27 = (int *)temp26;
    long long int temp28 = (long long int)*temp27;
    long long int temp29 = (long long int)regs[94];
    int temp30;
    if (temp28 == temp29) temp30 = 0;
    else if (temp28 < temp29) temp30 = -1;
    else temp30 = 1;
    rflags = (long long int)(temp30);
    bool temp31 = (rflags <= 0);
    if (temp31) goto label39;
    // THERE WAS A NOTE HERE
    long long int temp32 = (long long int)(rbp + -12);
    int *temp33 = (int *)temp32;
    regs[104] = (int)(*temp33);
    regs[95] = (long long int)(regs[104]);
    // PARALLEL COMMAND BEGIN
    long long int temp34 = (long long int)(regs[95] << 2);
    regs[96] = (long long int)(temp34);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp35 = (long long int)(rbp + -24);
    long long int *temp36 = (long long int *)temp35;
    regs[105] = (long long int)(*temp36);
    // PARALLEL COMMAND BEGIN
    long long int temp37 = (long long int)(regs[96] + regs[105]);
    regs[97] = (long long int)(temp37);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp38 = (int *)regs[97];
    regs[106] = (int)(*temp38);
    long long int temp39 = (long long int)(rbp + -4);
    int *temp40 = (int *)temp39;
    *temp40 = (int)(regs[106]);
    long long int temp41 = (long long int)(rbp + -12);
    int *temp42 = (int *)temp41;
    regs[107] = (int)(*temp42);
    long long int temp43 = (long long int)(rbp + -8);
    int *temp44 = (int *)temp43;
    *temp44 = (int)(regs[107]);
    label39:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp45 = (long long int)(rbp + -12);
    int *temp46 = (int *)temp45;
    long long int temp47 = (long long int)(rbp + -12);
    int *temp48 = (int *)temp47;
    int temp49 = (int)(*temp48 + 1);
    *temp46 = (int)(temp49);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label42:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp50 = (long long int)(rbp + -12);
    int *temp51 = (int *)temp50;
    long long int temp52 = (long long int)*temp51;
    long long int temp53 = (long long int)4;
    int temp54;
    if (temp52 == temp53) temp54 = 0;
    else if (temp52 < temp53) temp54 = -1;
    else temp54 = 1;
    rflags = (long long int)(temp54);
    bool temp55 = (rflags <= 0);
    if (temp55) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp56 = (long long int)(rbp + -8);
    int *temp57 = (int *)temp56;
    regs[98] = (int)(*temp57);
    regs[99] = (int)(regs[98]);
    rax = (int)(regs[99]);
    rbp += 0x100;
    rsp += 0x100;
    return (int)(rax);
}
int printMST(long long int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp58 = (long long int)(rbp + -24);
    long long int *temp59 = (long long int *)temp58;
    *temp59 = (long long int)(rdi);
    long long int temp60 = (long long int)(rbp + -32);
    long long int *temp61 = (long long int *)temp60;
    *temp61 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp62 = (long long int)symbol0;
    rdi = (long long int)(temp62);
    int temp63 = puts(rdi);
    rax = (long long int)temp63;
    long long int temp64 = (long long int)(rbp + -4);
    int *temp65 = (int *)temp64;
    *temp65 = (int)(1);
    goto label45;
    // THERE WAS A BARRIER HERE
    label47:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp66 = (long long int)(rbp + -4);
    int *temp67 = (int *)temp66;
    regs[100] = (int)(*temp67);
    regs[87] = (long long int)(regs[100]);
    regs[101] = (long long int)(regs[87]);
    // PARALLEL COMMAND BEGIN
    long long int temp68 = (long long int)(regs[101] << 2);
    regs[101] = (long long int)(temp68);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp69 = (long long int)(regs[101] + regs[87]);
    regs[101] = (long long int)(temp69);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp70 = (long long int)(regs[101] << 2);
    regs[102] = (long long int)(temp70);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[101] = (long long int)(regs[102]);
    regs[88] = (long long int)(regs[101]);
    long long int temp71 = (long long int)(rbp + -32);
    long long int *temp72 = (long long int *)temp71;
    regs[103] = (long long int)(*temp72);
    // PARALLEL COMMAND BEGIN
    long long int temp73 = (long long int)(regs[88] + regs[103]);
    regs[89] = (long long int)(temp73);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp74 = (long long int)(rbp + -4);
    int *temp75 = (int *)temp74;
    regs[104] = (int)(*temp75);
    regs[90] = (long long int)(regs[104]);
    // PARALLEL COMMAND BEGIN
    long long int temp76 = (long long int)(regs[90] << 2);
    regs[91] = (long long int)(temp76);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp77 = (long long int)(rbp + -24);
    long long int *temp78 = (long long int *)temp77;
    regs[105] = (long long int)(*temp78);
    // PARALLEL COMMAND BEGIN
    long long int temp79 = (long long int)(regs[91] + regs[105]);
    regs[92] = (long long int)(temp79);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp80 = (int *)regs[92];
    regs[93] = (int)(*temp80);
    regs[106] = (long long int)(regs[93]);
    long long int temp81 = (long long int)(regs[106] * 4);
    long long int temp82 = (long long int)(temp81 + regs[89]);
    int *temp83 = (int *)temp82;
    regs[94] = (int)(*temp83);
    long long int temp84 = (long long int)(rbp + -4);
    int *temp85 = (int *)temp84;
    regs[107] = (int)(*temp85);
    regs[95] = (long long int)(regs[107]);
    // PARALLEL COMMAND BEGIN
    long long int temp86 = (long long int)(regs[95] << 2);
    regs[96] = (long long int)(temp86);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp87 = (long long int)(rbp + -24);
    long long int *temp88 = (long long int *)temp87;
    regs[108] = (long long int)(*temp88);
    // PARALLEL COMMAND BEGIN
    long long int temp89 = (long long int)(regs[96] + regs[108]);
    regs[97] = (long long int)(temp89);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp90 = (int *)regs[97];
    regs[98] = (int)(*temp90);
    long long int temp91 = (long long int)(rbp + -4);
    int *temp92 = (int *)temp91;
    regs[109] = (int)(*temp92);
    rcx = (int)(regs[94]);
    rdx = (int)(regs[109]);
    rsi = (int)(regs[98]);
    long long int temp93 = (long long int)symbol1;
    rdi = (long long int)(temp93);
    rax = (char)(0);
    int temp94 = printf((const char *)rdi, (int)rsi, (int)rdx, (int)rcx);
    rax = (long long int)temp94;
    // PARALLEL COMMAND BEGIN
    long long int temp95 = (long long int)(rbp + -4);
    int *temp96 = (int *)temp95;
    long long int temp97 = (long long int)(rbp + -4);
    int *temp98 = (int *)temp97;
    int temp99 = (int)(*temp98 + 1);
    *temp96 = (int)(temp99);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label45:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp100 = (long long int)(rbp + -4);
    int *temp101 = (int *)temp100;
    long long int temp102 = (long long int)*temp101;
    long long int temp103 = (long long int)4;
    int temp104;
    if (temp102 == temp103) temp104 = 0;
    else if (temp102 < temp103) temp104 = -1;
    else temp104 = 1;
    rflags = (long long int)(temp104);
    bool temp105 = (rflags <= 0);
    if (temp105) goto label47;
    // THERE WAS A NOTE HERE
    // CLOBBER COMMAND
    // CLOBBER COMMAND
    rax = (int)(regs[99]);
    rbp += 0x100;
    rsp += 0x100;
    return (int)(rax);
}
void primMST(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp106 = (long long int)(rbp + -104);
    long long int *temp107 = (long long int *)temp106;
    *temp107 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp108 = (long long int)(rbp + -4);
    int *temp109 = (int *)temp108;
    *temp109 = (int)(0);
    goto label17;
    // THERE WAS A BARRIER HERE
    label19:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp110 = (long long int)(rbp + -4);
    int *temp111 = (int *)temp110;
    regs[103] = (int)(*temp111);
    regs[102] = (long long int)(regs[103]);
    long long int temp112 = (long long int)(regs[102] * 4);
    long long int temp113 = (long long int)(temp112 + rbp);
    long long int temp114 = (long long int)(temp113 + -80);
    int *temp115 = (int *)temp114;
    *temp115 = (int)(2147483647);
    long long int temp116 = (long long int)(rbp + -4);
    int *temp117 = (int *)temp116;
    regs[105] = (int)(*temp117);
    regs[104] = (long long int)(regs[105]);
    long long int temp118 = (long long int)(rbp + regs[104]);
    long long int temp119 = (long long int)(temp118 + -85);
    char *temp120 = (char *)temp119;
    *temp120 = (char)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp121 = (long long int)(rbp + -4);
    int *temp122 = (int *)temp121;
    long long int temp123 = (long long int)(rbp + -4);
    int *temp124 = (int *)temp123;
    int temp125 = (int)(*temp124 + 1);
    *temp122 = (int)(temp125);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label17:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp126 = (long long int)(rbp + -4);
    int *temp127 = (int *)temp126;
    long long int temp128 = (long long int)*temp127;
    long long int temp129 = (long long int)4;
    int temp130;
    if (temp128 == temp129) temp130 = 0;
    else if (temp128 < temp129) temp130 = -1;
    else temp130 = 1;
    rflags = (long long int)(temp130);
    bool temp131 = (rflags <= 0);
    if (temp131) goto label19;
    // THERE WAS A NOTE HERE
    long long int temp132 = (long long int)(rbp + -80);
    int *temp133 = (int *)temp132;
    *temp133 = (int)(0);
    long long int temp134 = (long long int)(rbp + -48);
    int *temp135 = (int *)temp134;
    *temp135 = (int)(-1);
    long long int temp136 = (long long int)(rbp + -8);
    int *temp137 = (int *)temp136;
    *temp137 = (int)(0);
    goto label115;
    // THERE WAS A BARRIER HERE
    label117:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp138 = (long long int)(rbp + -85);
    regs[106] = (long long int)(temp138);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp139 = (long long int)(rbp + -80);
    regs[107] = (long long int)(temp139);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[106]);
    rdi = (long long int)(regs[107]);
    int temp140 = minKey(rdi, rsi);
    rax = (long long int)temp140;
    regs[108] = (int)(rax);
    long long int temp141 = (long long int)(rbp + -16);
    int *temp142 = (int *)temp141;
    *temp142 = (int)(regs[108]);
    long long int temp143 = (long long int)(rbp + -16);
    int *temp144 = (int *)temp143;
    regs[110] = (int)(*temp144);
    regs[109] = (long long int)(regs[110]);
    long long int temp145 = (long long int)(rbp + regs[109]);
    long long int temp146 = (long long int)(temp145 + -85);
    char *temp147 = (char *)temp146;
    *temp147 = (char)(1);
    long long int temp148 = (long long int)(rbp + -12);
    int *temp149 = (int *)temp148;
    *temp149 = (int)(0);
    goto label108;
    // THERE WAS A BARRIER HERE
    label110:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp150 = (long long int)(rbp + -16);
    int *temp151 = (int *)temp150;
    regs[111] = (int)(*temp151);
    regs[87] = (long long int)(regs[111]);
    regs[112] = (long long int)(regs[87]);
    // PARALLEL COMMAND BEGIN
    long long int temp152 = (long long int)(regs[112] << 2);
    regs[112] = (long long int)(temp152);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp153 = (long long int)(regs[112] + regs[87]);
    regs[112] = (long long int)(temp153);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp154 = (long long int)(regs[112] << 2);
    regs[113] = (long long int)(temp154);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[112] = (long long int)(regs[113]);
    regs[88] = (long long int)(regs[112]);
    long long int temp155 = (long long int)(rbp + -104);
    long long int *temp156 = (long long int *)temp155;
    regs[114] = (long long int)(*temp156);
    // PARALLEL COMMAND BEGIN
    long long int temp157 = (long long int)(regs[88] + regs[114]);
    regs[89] = (long long int)(temp157);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp158 = (long long int)(rbp + -12);
    int *temp159 = (int *)temp158;
    regs[116] = (int)(*temp159);
    regs[115] = (long long int)(regs[116]);
    long long int temp160 = (long long int)(regs[115] * 4);
    long long int temp161 = (long long int)(temp160 + regs[89]);
    int *temp162 = (int *)temp161;
    regs[90] = (int)(*temp162);
    long long int temp163 = (long long int)regs[90];
    long long int temp164 = (long long int)0;
    int temp165;
    if (temp163 == temp164) temp165 = 0;
    else if (temp163 < temp164) temp165 = -1;
    else temp165 = 1;
    rflags = (long long int)(temp165);
    bool temp166 = (rflags == 0);
    if (temp166) goto label105;
    // THERE WAS A NOTE HERE
    long long int temp167 = (long long int)(rbp + -12);
    int *temp168 = (int *)temp167;
    regs[118] = (int)(*temp168);
    regs[117] = (long long int)(regs[118]);
    long long int temp169 = (long long int)(rbp + regs[117]);
    long long int temp170 = (long long int)(temp169 + -85);
    char *temp171 = (char *)temp170;
    regs[91] = (char)(*temp171);
    // PARALLEL COMMAND BEGIN
    char temp172 = (char)(regs[91] ^ 1);
    regs[92] = (char)(temp172);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp173 = (long long int)regs[92];
    long long int temp174 = (long long int)0;
    int temp175;
    if (temp173 == temp174) temp175 = 0;
    else if (temp173 < temp174) temp175 = -1;
    else temp175 = 1;
    rflags = (long long int)(temp175);
    bool temp176 = (rflags == 0);
    if (temp176) goto label105;
    // THERE WAS A NOTE HERE
    long long int temp177 = (long long int)(rbp + -16);
    int *temp178 = (int *)temp177;
    regs[119] = (int)(*temp178);
    regs[93] = (long long int)(regs[119]);
    regs[120] = (long long int)(regs[93]);
    // PARALLEL COMMAND BEGIN
    long long int temp179 = (long long int)(regs[120] << 2);
    regs[120] = (long long int)(temp179);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp180 = (long long int)(regs[120] + regs[93]);
    regs[120] = (long long int)(temp180);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp181 = (long long int)(regs[120] << 2);
    regs[121] = (long long int)(temp181);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[120] = (long long int)(regs[121]);
    regs[94] = (long long int)(regs[120]);
    long long int temp182 = (long long int)(rbp + -104);
    long long int *temp183 = (long long int *)temp182;
    regs[122] = (long long int)(*temp183);
    // PARALLEL COMMAND BEGIN
    long long int temp184 = (long long int)(regs[94] + regs[122]);
    regs[95] = (long long int)(temp184);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp185 = (long long int)(rbp + -12);
    int *temp186 = (int *)temp185;
    regs[124] = (int)(*temp186);
    regs[123] = (long long int)(regs[124]);
    long long int temp187 = (long long int)(regs[123] * 4);
    long long int temp188 = (long long int)(temp187 + regs[95]);
    int *temp189 = (int *)temp188;
    regs[96] = (int)(*temp189);
    long long int temp190 = (long long int)(rbp + -12);
    int *temp191 = (int *)temp190;
    regs[126] = (int)(*temp191);
    regs[125] = (long long int)(regs[126]);
    long long int temp192 = (long long int)(regs[125] * 4);
    long long int temp193 = (long long int)(temp192 + rbp);
    long long int temp194 = (long long int)(temp193 + -80);
    int *temp195 = (int *)temp194;
    regs[97] = (int)(*temp195);
    long long int temp196 = (long long int)regs[96];
    long long int temp197 = (long long int)regs[97];
    int temp198;
    if (temp196 == temp197) temp198 = 0;
    else if (temp196 < temp197) temp198 = -1;
    else temp198 = 1;
    rflags = (long long int)(temp198);
    bool temp199 = (rflags >= 0);
    if (temp199) goto label105;
    // THERE WAS A NOTE HERE
    long long int temp200 = (long long int)(rbp + -12);
    int *temp201 = (int *)temp200;
    regs[128] = (int)(*temp201);
    regs[127] = (long long int)(regs[128]);
    long long int temp202 = (long long int)(rbp + -16);
    int *temp203 = (int *)temp202;
    regs[129] = (int)(*temp203);
    long long int temp204 = (long long int)(regs[127] * 4);
    long long int temp205 = (long long int)(temp204 + rbp);
    long long int temp206 = (long long int)(temp205 + -48);
    int *temp207 = (int *)temp206;
    *temp207 = (int)(regs[129]);
    long long int temp208 = (long long int)(rbp + -16);
    int *temp209 = (int *)temp208;
    regs[130] = (int)(*temp209);
    regs[98] = (long long int)(regs[130]);
    regs[131] = (long long int)(regs[98]);
    // PARALLEL COMMAND BEGIN
    long long int temp210 = (long long int)(regs[131] << 2);
    regs[131] = (long long int)(temp210);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp211 = (long long int)(regs[131] + regs[98]);
    regs[131] = (long long int)(temp211);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp212 = (long long int)(regs[131] << 2);
    regs[132] = (long long int)(temp212);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[131] = (long long int)(regs[132]);
    regs[99] = (long long int)(regs[131]);
    long long int temp213 = (long long int)(rbp + -104);
    long long int *temp214 = (long long int *)temp213;
    regs[133] = (long long int)(*temp214);
    // PARALLEL COMMAND BEGIN
    long long int temp215 = (long long int)(regs[99] + regs[133]);
    regs[100] = (long long int)(temp215);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp216 = (long long int)(rbp + -12);
    int *temp217 = (int *)temp216;
    regs[135] = (int)(*temp217);
    regs[134] = (long long int)(regs[135]);
    long long int temp218 = (long long int)(regs[134] * 4);
    long long int temp219 = (long long int)(temp218 + regs[100]);
    int *temp220 = (int *)temp219;
    regs[101] = (int)(*temp220);
    long long int temp221 = (long long int)(rbp + -12);
    int *temp222 = (int *)temp221;
    regs[137] = (int)(*temp222);
    regs[136] = (long long int)(regs[137]);
    long long int temp223 = (long long int)(regs[136] * 4);
    long long int temp224 = (long long int)(temp223 + rbp);
    long long int temp225 = (long long int)(temp224 + -80);
    int *temp226 = (int *)temp225;
    *temp226 = (int)(regs[101]);
    label105:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp227 = (long long int)(rbp + -12);
    int *temp228 = (int *)temp227;
    long long int temp229 = (long long int)(rbp + -12);
    int *temp230 = (int *)temp229;
    int temp231 = (int)(*temp230 + 1);
    *temp228 = (int)(temp231);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label108:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp232 = (long long int)(rbp + -12);
    int *temp233 = (int *)temp232;
    long long int temp234 = (long long int)*temp233;
    long long int temp235 = (long long int)4;
    int temp236;
    if (temp234 == temp235) temp236 = 0;
    else if (temp234 < temp235) temp236 = -1;
    else temp236 = 1;
    rflags = (long long int)(temp236);
    bool temp237 = (rflags <= 0);
    if (temp237) goto label110;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp238 = (long long int)(rbp + -8);
    int *temp239 = (int *)temp238;
    long long int temp240 = (long long int)(rbp + -8);
    int *temp241 = (int *)temp240;
    int temp242 = (int)(*temp241 + 1);
    *temp239 = (int)(temp242);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label115:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp243 = (long long int)(rbp + -8);
    int *temp244 = (int *)temp243;
    long long int temp245 = (long long int)*temp244;
    long long int temp246 = (long long int)3;
    int temp247;
    if (temp245 == temp246) temp247 = 0;
    else if (temp245 < temp246) temp247 = -1;
    else temp247 = 1;
    rflags = (long long int)(temp247);
    bool temp248 = (rflags <= 0);
    if (temp248) goto label117;
    // THERE WAS A NOTE HERE
    long long int temp249 = (long long int)(rbp + -104);
    long long int *temp250 = (long long int *)temp249;
    regs[138] = (long long int)(*temp250);
    // PARALLEL COMMAND BEGIN
    long long int temp251 = (long long int)(rbp + -48);
    regs[139] = (long long int)(temp251);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[138]);
    rdi = (long long int)(regs[139]);
    int temp252 = printMST(rdi, rsi);
    rax = (long long int)temp252;
    rbp += 0x100;
    rsp += 0x100;
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp253 = (long long int)(rbp + -112);
    int *temp254 = (int *)temp253;
    *temp254 = (int)(0);
    long long int temp255 = (long long int)(rbp + -108);
    int *temp256 = (int *)temp255;
    *temp256 = (int)(2);
    long long int temp257 = (long long int)(rbp + -104);
    int *temp258 = (int *)temp257;
    *temp258 = (int)(0);
    long long int temp259 = (long long int)(rbp + -100);
    int *temp260 = (int *)temp259;
    *temp260 = (int)(6);
    long long int temp261 = (long long int)(rbp + -96);
    int *temp262 = (int *)temp261;
    *temp262 = (int)(0);
    long long int temp263 = (long long int)(rbp + -92);
    int *temp264 = (int *)temp263;
    *temp264 = (int)(2);
    long long int temp265 = (long long int)(rbp + -88);
    int *temp266 = (int *)temp265;
    *temp266 = (int)(0);
    long long int temp267 = (long long int)(rbp + -84);
    int *temp268 = (int *)temp267;
    *temp268 = (int)(3);
    long long int temp269 = (long long int)(rbp + -80);
    int *temp270 = (int *)temp269;
    *temp270 = (int)(8);
    long long int temp271 = (long long int)(rbp + -76);
    int *temp272 = (int *)temp271;
    *temp272 = (int)(5);
    long long int temp273 = (long long int)(rbp + -72);
    int *temp274 = (int *)temp273;
    *temp274 = (int)(0);
    long long int temp275 = (long long int)(rbp + -68);
    int *temp276 = (int *)temp275;
    *temp276 = (int)(3);
    long long int temp277 = (long long int)(rbp + -64);
    int *temp278 = (int *)temp277;
    *temp278 = (int)(0);
    long long int temp279 = (long long int)(rbp + -60);
    int *temp280 = (int *)temp279;
    *temp280 = (int)(0);
    long long int temp281 = (long long int)(rbp + -56);
    int *temp282 = (int *)temp281;
    *temp282 = (int)(7);
    long long int temp283 = (long long int)(rbp + -52);
    int *temp284 = (int *)temp283;
    *temp284 = (int)(6);
    long long int temp285 = (long long int)(rbp + -48);
    int *temp286 = (int *)temp285;
    *temp286 = (int)(8);
    long long int temp287 = (long long int)(rbp + -44);
    int *temp288 = (int *)temp287;
    *temp288 = (int)(0);
    long long int temp289 = (long long int)(rbp + -40);
    int *temp290 = (int *)temp289;
    *temp290 = (int)(0);
    long long int temp291 = (long long int)(rbp + -36);
    int *temp292 = (int *)temp291;
    *temp292 = (int)(9);
    long long int temp293 = (long long int)(rbp + -32);
    int *temp294 = (int *)temp293;
    *temp294 = (int)(0);
    long long int temp295 = (long long int)(rbp + -28);
    int *temp296 = (int *)temp295;
    *temp296 = (int)(5);
    long long int temp297 = (long long int)(rbp + -24);
    int *temp298 = (int *)temp297;
    *temp298 = (int)(7);
    long long int temp299 = (long long int)(rbp + -20);
    int *temp300 = (int *)temp299;
    *temp300 = (int)(9);
    long long int temp301 = (long long int)(rbp + -16);
    int *temp302 = (int *)temp301;
    *temp302 = (int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp303 = (long long int)(rbp + -112);
    regs[89] = (long long int)(temp303);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdi = (long long int)(regs[89]);
    primMST(rdi);
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    rax = (int)(regs[88]);
    return (int)(rax);
}
