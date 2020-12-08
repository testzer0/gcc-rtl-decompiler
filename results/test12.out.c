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
const char *symbol1 = "%c: ";
const char *symbol0 = "%d";

long long int newNode(int arg0, int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    regs[90] = (int)(rdi);
    long long int temp0 = (long long int)(rbp + -24);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(rsi);
    char temp2 = (char)(regs[90] & 255);
    regs[91] = (char)(temp2);
    long long int temp3 = (long long int)(rbp + -20);
    char *temp4 = (char *)temp3;
    *temp4 = (char)(regs[91]);
    // THERE WAS A NOTE HERE
    rdi = (long long int)(24);
    long long int temp5 = malloc(rdi);
    rax = (long long int)temp5;
    regs[92] = (long long int)(rax);
    long long int temp6 = (long long int)(rbp + -8);
    long long int *temp7 = (long long int *)temp6;
    *temp7 = (long long int)(regs[92]);
    long long int temp8 = (long long int)(rbp + -8);
    long long int *temp9 = (long long int *)temp8;
    regs[93] = (long long int)(*temp9);
    long long int temp10 = (long long int)(regs[93] + 16);
    long long int *temp11 = (long long int *)temp10;
    *temp11 = (long long int)(0);
    long long int temp12 = (long long int)(rbp + -8);
    long long int *temp13 = (long long int *)temp12;
    regs[94] = (long long int)(*temp13);
    long long int temp14 = (long long int)(regs[94] + 16);
    long long int *temp15 = (long long int *)temp14;
    regs[87] = (long long int)(*temp15);
    long long int temp16 = (long long int)(rbp + -8);
    long long int *temp17 = (long long int *)temp16;
    regs[95] = (long long int)(*temp17);
    long long int temp18 = (long long int)(regs[95] + 8);
    long long int *temp19 = (long long int *)temp18;
    *temp19 = (long long int)(regs[87]);
    long long int temp20 = (long long int)(rbp + -8);
    long long int *temp21 = (long long int *)temp20;
    regs[96] = (long long int)(*temp21);
    long long int temp22 = (long long int)(rbp + -20);
    char *temp23 = (char *)temp22;
    regs[97] = (char)(*temp23);
    char *temp24 = (char *)regs[96];
    *temp24 = (char)(regs[97]);
    long long int temp25 = (long long int)(rbp + -8);
    long long int *temp26 = (long long int *)temp25;
    regs[98] = (long long int)(*temp26);
    long long int temp27 = (long long int)(rbp + -24);
    int *temp28 = (int *)temp27;
    regs[99] = (int)(*temp28);
    long long int temp29 = (long long int)(regs[98] + 4);
    int *temp30 = (int *)temp29;
    *temp30 = (int)(regs[99]);
    long long int temp31 = (long long int)(rbp + -8);
    long long int *temp32 = (long long int *)temp31;
    regs[88] = (long long int)(*temp32);
    regs[89] = (long long int)(regs[88]);
    rax = (long long int)(regs[89]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
long long int createMinHeap(int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp33 = (long long int)(rbp + -20);
    int *temp34 = (int *)temp33;
    *temp34 = (int)(rdi);
    // THERE WAS A NOTE HERE
    rdi = (long long int)(16);
    long long int temp35 = malloc(rdi);
    rax = (long long int)temp35;
    regs[93] = (long long int)(rax);
    long long int temp36 = (long long int)(rbp + -8);
    long long int *temp37 = (long long int *)temp36;
    *temp37 = (long long int)(regs[93]);
    long long int temp38 = (long long int)(rbp + -8);
    long long int *temp39 = (long long int *)temp38;
    regs[94] = (long long int)(*temp39);
    int *temp40 = (int *)regs[94];
    *temp40 = (int)(0);
    long long int temp41 = (long long int)(rbp + -8);
    long long int *temp42 = (long long int *)temp41;
    regs[95] = (long long int)(*temp42);
    long long int temp43 = (long long int)(rbp + -20);
    int *temp44 = (int *)temp43;
    regs[96] = (int)(*temp44);
    long long int temp45 = (long long int)(regs[95] + 4);
    int *temp46 = (int *)temp45;
    *temp46 = (int)(regs[96]);
    long long int temp47 = (long long int)(rbp + -8);
    long long int *temp48 = (long long int *)temp47;
    regs[97] = (long long int)(*temp48);
    long long int temp49 = (long long int)(regs[97] + 4);
    int *temp50 = (int *)temp49;
    regs[87] = (int)(*temp50);
    regs[88] = (long long int)(regs[87]);
    // PARALLEL COMMAND BEGIN
    long long int temp51 = (long long int)(regs[88] << 3);
    regs[89] = (long long int)(temp51);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdi = (long long int)(regs[89]);
    long long int temp52 = malloc(rdi);
    rax = (long long int)temp52;
    regs[98] = (long long int)(rax);
    regs[90] = (long long int)(regs[98]);
    long long int temp53 = (long long int)(rbp + -8);
    long long int *temp54 = (long long int *)temp53;
    regs[99] = (long long int)(*temp54);
    long long int temp55 = (long long int)(regs[99] + 8);
    long long int *temp56 = (long long int *)temp55;
    *temp56 = (long long int)(regs[90]);
    long long int temp57 = (long long int)(rbp + -8);
    long long int *temp58 = (long long int *)temp57;
    regs[91] = (long long int)(*temp58);
    regs[92] = (long long int)(regs[91]);
    rax = (long long int)(regs[92]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
void swapMinHeapNode(long long int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp59 = (long long int)(rbp + -24);
    long long int *temp60 = (long long int *)temp59;
    *temp60 = (long long int)(rdi);
    long long int temp61 = (long long int)(rbp + -32);
    long long int *temp62 = (long long int *)temp61;
    *temp62 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp63 = (long long int)(rbp + -24);
    long long int *temp64 = (long long int *)temp63;
    regs[88] = (long long int)(*temp64);
    long long int *temp65 = (long long int *)regs[88];
    regs[89] = (long long int)(*temp65);
    long long int temp66 = (long long int)(rbp + -8);
    long long int *temp67 = (long long int *)temp66;
    *temp67 = (long long int)(regs[89]);
    long long int temp68 = (long long int)(rbp + -32);
    long long int *temp69 = (long long int *)temp68;
    regs[90] = (long long int)(*temp69);
    long long int *temp70 = (long long int *)regs[90];
    regs[87] = (long long int)(*temp70);
    long long int temp71 = (long long int)(rbp + -24);
    long long int *temp72 = (long long int *)temp71;
    regs[91] = (long long int)(*temp72);
    long long int *temp73 = (long long int *)regs[91];
    *temp73 = (long long int)(regs[87]);
    long long int temp74 = (long long int)(rbp + -32);
    long long int *temp75 = (long long int *)temp74;
    regs[92] = (long long int)(*temp75);
    long long int temp76 = (long long int)(rbp + -8);
    long long int *temp77 = (long long int *)temp76;
    regs[93] = (long long int)(*temp77);
    long long int *temp78 = (long long int *)regs[92];
    *temp78 = (long long int)(regs[93]);
    rbp += 0x100;
    rsp += 0x100;
}
void minHeapify(long long int arg0, int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp79 = (long long int)(rbp + -24);
    long long int *temp80 = (long long int *)temp79;
    *temp80 = (long long int)(rdi);
    long long int temp81 = (long long int)(rbp + -28);
    int *temp82 = (int *)temp81;
    *temp82 = (int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp83 = (long long int)(rbp + -28);
    int *temp84 = (int *)temp83;
    regs[125] = (int)(*temp84);
    long long int temp85 = (long long int)(rbp + -4);
    int *temp86 = (int *)temp85;
    *temp86 = (int)(regs[125]);
    long long int temp87 = (long long int)(rbp + -28);
    int *temp88 = (int *)temp87;
    regs[126] = (int)(*temp88);
    // PARALLEL COMMAND BEGIN
    int temp89 = (int)(regs[126] << 1);
    regs[87] = (int)(temp89);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp90 = (int)(regs[87] + 1);
    regs[127] = (int)(temp90);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp91 = (long long int)(rbp + -8);
    int *temp92 = (int *)temp91;
    *temp92 = (int)(regs[127]);
    long long int temp93 = (long long int)(rbp + -28);
    int *temp94 = (int *)temp93;
    regs[128] = (int)(*temp94);
    // PARALLEL COMMAND BEGIN
    int temp95 = (int)(regs[128] + 1);
    regs[88] = (int)(temp95);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp96 = (int)(regs[88] << 1);
    regs[129] = (int)(temp96);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp97 = (long long int)(rbp + -12);
    int *temp98 = (int *)temp97;
    *temp98 = (int)(regs[129]);
    long long int temp99 = (long long int)(rbp + -24);
    long long int *temp100 = (long long int *)temp99;
    regs[130] = (long long int)(*temp100);
    int *temp101 = (int *)regs[130];
    regs[89] = (int)(*temp101);
    long long int temp102 = (long long int)(rbp + -8);
    int *temp103 = (int *)temp102;
    regs[90] = (int)(*temp103);
    long long int temp104 = (long long int)regs[89];
    long long int temp105 = (long long int)regs[90];
    int temp106;
    if (temp104 == temp105) temp106 = 0;
    else if (temp104 < temp105) temp106 = -1;
    else temp106 = 1;
    rflags = (long long int)(temp106);
    bool temp107 = (rflags <= 0);
    if (temp107) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp108 = (long long int)(rbp + -24);
    long long int *temp109 = (long long int *)temp108;
    regs[131] = (long long int)(*temp109);
    long long int temp110 = (long long int)(regs[131] + 8);
    long long int *temp111 = (long long int *)temp110;
    regs[91] = (long long int)(*temp111);
    long long int temp112 = (long long int)(rbp + -8);
    int *temp113 = (int *)temp112;
    regs[132] = (int)(*temp113);
    regs[92] = (long long int)(regs[132]);
    // PARALLEL COMMAND BEGIN
    long long int temp114 = (long long int)(regs[92] << 3);
    regs[93] = (long long int)(temp114);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp115 = (long long int)(regs[91] + regs[93]);
    regs[94] = (long long int)(temp115);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int *temp116 = (long long int *)regs[94];
    regs[95] = (long long int)(*temp116);
    long long int temp117 = (long long int)(regs[95] + 4);
    int *temp118 = (int *)temp117;
    regs[96] = (int)(*temp118);
    long long int temp119 = (long long int)(rbp + -24);
    long long int *temp120 = (long long int *)temp119;
    regs[133] = (long long int)(*temp120);
    long long int temp121 = (long long int)(regs[133] + 8);
    long long int *temp122 = (long long int *)temp121;
    regs[97] = (long long int)(*temp122);
    long long int temp123 = (long long int)(rbp + -4);
    int *temp124 = (int *)temp123;
    regs[134] = (int)(*temp124);
    regs[98] = (long long int)(regs[134]);
    // PARALLEL COMMAND BEGIN
    long long int temp125 = (long long int)(regs[98] << 3);
    regs[99] = (long long int)(temp125);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp126 = (long long int)(regs[97] + regs[99]);
    regs[100] = (long long int)(temp126);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int *temp127 = (long long int *)regs[100];
    regs[101] = (long long int)(*temp127);
    long long int temp128 = (long long int)(regs[101] + 4);
    int *temp129 = (int *)temp128;
    regs[102] = (int)(*temp129);
    long long int temp130 = (long long int)regs[96];
    long long int temp131 = (long long int)regs[102];
    int temp132;
    if (temp130 == temp131) temp132 = 0;
    else if (temp130 < temp131) temp132 = -1;
    else temp132 = 1;
    rflags = (long long int)(temp132);
    bool temp133 = (rflags >= 0);
    if (temp133) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp134 = (long long int)(rbp + -8);
    int *temp135 = (int *)temp134;
    regs[135] = (int)(*temp135);
    long long int temp136 = (long long int)(rbp + -4);
    int *temp137 = (int *)temp136;
    *temp137 = (int)(regs[135]);
    label44:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp138 = (long long int)(rbp + -24);
    long long int *temp139 = (long long int *)temp138;
    regs[136] = (long long int)(*temp139);
    int *temp140 = (int *)regs[136];
    regs[103] = (int)(*temp140);
    long long int temp141 = (long long int)(rbp + -12);
    int *temp142 = (int *)temp141;
    regs[104] = (int)(*temp142);
    long long int temp143 = (long long int)regs[103];
    long long int temp144 = (long long int)regs[104];
    int temp145;
    if (temp143 == temp144) temp145 = 0;
    else if (temp143 < temp144) temp145 = -1;
    else temp145 = 1;
    rflags = (long long int)(temp145);
    bool temp146 = (rflags <= 0);
    if (temp146) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp147 = (long long int)(rbp + -24);
    long long int *temp148 = (long long int *)temp147;
    regs[137] = (long long int)(*temp148);
    long long int temp149 = (long long int)(regs[137] + 8);
    long long int *temp150 = (long long int *)temp149;
    regs[105] = (long long int)(*temp150);
    long long int temp151 = (long long int)(rbp + -12);
    int *temp152 = (int *)temp151;
    regs[138] = (int)(*temp152);
    regs[106] = (long long int)(regs[138]);
    // PARALLEL COMMAND BEGIN
    long long int temp153 = (long long int)(regs[106] << 3);
    regs[107] = (long long int)(temp153);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp154 = (long long int)(regs[105] + regs[107]);
    regs[108] = (long long int)(temp154);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int *temp155 = (long long int *)regs[108];
    regs[109] = (long long int)(*temp155);
    long long int temp156 = (long long int)(regs[109] + 4);
    int *temp157 = (int *)temp156;
    regs[110] = (int)(*temp157);
    long long int temp158 = (long long int)(rbp + -24);
    long long int *temp159 = (long long int *)temp158;
    regs[139] = (long long int)(*temp159);
    long long int temp160 = (long long int)(regs[139] + 8);
    long long int *temp161 = (long long int *)temp160;
    regs[111] = (long long int)(*temp161);
    long long int temp162 = (long long int)(rbp + -4);
    int *temp163 = (int *)temp162;
    regs[140] = (int)(*temp163);
    regs[112] = (long long int)(regs[140]);
    // PARALLEL COMMAND BEGIN
    long long int temp164 = (long long int)(regs[112] << 3);
    regs[113] = (long long int)(temp164);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp165 = (long long int)(regs[111] + regs[113]);
    regs[114] = (long long int)(temp165);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int *temp166 = (long long int *)regs[114];
    regs[115] = (long long int)(*temp166);
    long long int temp167 = (long long int)(regs[115] + 4);
    int *temp168 = (int *)temp167;
    regs[116] = (int)(*temp168);
    long long int temp169 = (long long int)regs[110];
    long long int temp170 = (long long int)regs[116];
    int temp171;
    if (temp169 == temp170) temp171 = 0;
    else if (temp169 < temp170) temp171 = -1;
    else temp171 = 1;
    rflags = (long long int)(temp171);
    bool temp172 = (rflags >= 0);
    if (temp172) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp173 = (long long int)(rbp + -12);
    int *temp174 = (int *)temp173;
    regs[141] = (int)(*temp174);
    long long int temp175 = (long long int)(rbp + -4);
    int *temp176 = (int *)temp175;
    *temp176 = (int)(regs[141]);
    label73:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp177 = (long long int)(rbp + -4);
    int *temp178 = (int *)temp177;
    regs[142] = (int)(*temp178);
    long long int temp179 = (long long int)(rbp + -28);
    int *temp180 = (int *)temp179;
    long long int temp181 = (long long int)regs[142];
    long long int temp182 = (long long int)*temp180;
    int temp183;
    if (temp181 == temp182) temp183 = 0;
    else if (temp181 < temp182) temp183 = -1;
    else temp183 = 1;
    rflags = (long long int)(temp183);
    bool temp184 = (rflags == 0);
    if (temp184) goto label101;
    // THERE WAS A NOTE HERE
    long long int temp185 = (long long int)(rbp + -24);
    long long int *temp186 = (long long int *)temp185;
    regs[143] = (long long int)(*temp186);
    long long int temp187 = (long long int)(regs[143] + 8);
    long long int *temp188 = (long long int *)temp187;
    regs[117] = (long long int)(*temp188);
    long long int temp189 = (long long int)(rbp + -28);
    int *temp190 = (int *)temp189;
    regs[144] = (int)(*temp190);
    regs[118] = (long long int)(regs[144]);
    // PARALLEL COMMAND BEGIN
    long long int temp191 = (long long int)(regs[118] << 3);
    regs[119] = (long long int)(temp191);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp192 = (long long int)(regs[117] + regs[119]);
    regs[120] = (long long int)(temp192);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp193 = (long long int)(rbp + -24);
    long long int *temp194 = (long long int *)temp193;
    regs[145] = (long long int)(*temp194);
    long long int temp195 = (long long int)(regs[145] + 8);
    long long int *temp196 = (long long int *)temp195;
    regs[121] = (long long int)(*temp196);
    long long int temp197 = (long long int)(rbp + -4);
    int *temp198 = (int *)temp197;
    regs[146] = (int)(*temp198);
    regs[122] = (long long int)(regs[146]);
    // PARALLEL COMMAND BEGIN
    long long int temp199 = (long long int)(regs[122] << 3);
    regs[123] = (long long int)(temp199);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp200 = (long long int)(regs[121] + regs[123]);
    regs[124] = (long long int)(temp200);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[120]);
    rdi = (long long int)(regs[124]);
    swapMinHeapNode(rdi, rsi);
    long long int temp201 = (long long int)(rbp + -4);
    int *temp202 = (int *)temp201;
    regs[147] = (int)(*temp202);
    long long int temp203 = (long long int)(rbp + -24);
    long long int *temp204 = (long long int *)temp203;
    regs[148] = (long long int)(*temp204);
    rsi = (int)(regs[147]);
    rdi = (long long int)(regs[148]);
    minHeapify(rdi, (int)rsi);
    label101:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
int isSizeOne(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp205 = (long long int)(rbp + -8);
    long long int *temp206 = (long long int *)temp205;
    *temp206 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp207 = (long long int)(rbp + -8);
    long long int *temp208 = (long long int *)temp207;
    regs[91] = (long long int)(*temp208);
    int *temp209 = (int *)regs[91];
    regs[87] = (int)(*temp209);
    long long int temp210 = (long long int)regs[87];
    long long int temp211 = (long long int)1;
    int temp212;
    if (temp210 == temp211) temp212 = 0;
    else if (temp210 < temp211) temp212 = -1;
    else temp212 = 1;
    rflags = (long long int)(temp212);
    char temp213 = (char)(rflags == 0);
    regs[88] = (char)(temp213);
    regs[89] = (int)(regs[88]);
    regs[90] = (int)(regs[89]);
    rax = (int)(regs[90]);
    rbp += 0x100;
    rsp += 0x100;
    return (int)(rax);
}
long long int extractMin(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp214 = (long long int)(rbp + -24);
    long long int *temp215 = (long long int *)temp214;
    *temp215 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp216 = (long long int)(rbp + -24);
    long long int *temp217 = (long long int *)temp216;
    regs[100] = (long long int)(*temp217);
    long long int temp218 = (long long int)(regs[100] + 8);
    long long int *temp219 = (long long int *)temp218;
    regs[87] = (long long int)(*temp219);
    long long int *temp220 = (long long int *)regs[87];
    regs[101] = (long long int)(*temp220);
    long long int temp221 = (long long int)(rbp + -8);
    long long int *temp222 = (long long int *)temp221;
    *temp222 = (long long int)(regs[101]);
    long long int temp223 = (long long int)(rbp + -24);
    long long int *temp224 = (long long int *)temp223;
    regs[102] = (long long int)(*temp224);
    long long int temp225 = (long long int)(regs[102] + 8);
    long long int *temp226 = (long long int *)temp225;
    regs[88] = (long long int)(*temp226);
    long long int temp227 = (long long int)(rbp + -24);
    long long int *temp228 = (long long int *)temp227;
    regs[103] = (long long int)(*temp228);
    int *temp229 = (int *)regs[103];
    regs[89] = (int)(*temp229);
    // PARALLEL COMMAND BEGIN
    int temp230 = (int)(regs[89] + -1);
    regs[90] = (int)(temp230);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[91] = (long long int)(regs[90]);
    // PARALLEL COMMAND BEGIN
    long long int temp231 = (long long int)(regs[91] << 3);
    regs[92] = (long long int)(temp231);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp232 = (long long int)(regs[88] + regs[92]);
    regs[93] = (long long int)(temp232);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp233 = (long long int)(rbp + -24);
    long long int *temp234 = (long long int *)temp233;
    regs[104] = (long long int)(*temp234);
    long long int temp235 = (long long int)(regs[104] + 8);
    long long int *temp236 = (long long int *)temp235;
    regs[94] = (long long int)(*temp236);
    long long int *temp237 = (long long int *)regs[93];
    regs[95] = (long long int)(*temp237);
    long long int *temp238 = (long long int *)regs[94];
    *temp238 = (long long int)(regs[95]);
    long long int temp239 = (long long int)(rbp + -24);
    long long int *temp240 = (long long int *)temp239;
    regs[105] = (long long int)(*temp240);
    int *temp241 = (int *)regs[105];
    regs[96] = (int)(*temp241);
    // PARALLEL COMMAND BEGIN
    int temp242 = (int)(regs[96] + -1);
    regs[97] = (int)(temp242);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp243 = (long long int)(rbp + -24);
    long long int *temp244 = (long long int *)temp243;
    regs[106] = (long long int)(*temp244);
    int *temp245 = (int *)regs[106];
    *temp245 = (int)(regs[97]);
    long long int temp246 = (long long int)(rbp + -24);
    long long int *temp247 = (long long int *)temp246;
    regs[107] = (long long int)(*temp247);
    rsi = (int)(0);
    rdi = (long long int)(regs[107]);
    minHeapify(rdi, (int)rsi);
    long long int temp248 = (long long int)(rbp + -8);
    long long int *temp249 = (long long int *)temp248;
    regs[98] = (long long int)(*temp249);
    regs[99] = (long long int)(regs[98]);
    rax = (long long int)(regs[99]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
void insertMinHeap(long long int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp250 = (long long int)(rbp + -24);
    long long int *temp251 = (long long int *)temp250;
    *temp251 = (long long int)(rdi);
    long long int temp252 = (long long int)(rbp + -32);
    long long int *temp253 = (long long int *)temp252;
    *temp253 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp254 = (long long int)(rbp + -24);
    long long int *temp255 = (long long int *)temp254;
    regs[116] = (long long int)(*temp255);
    int *temp256 = (int *)regs[116];
    regs[87] = (int)(*temp256);
    // PARALLEL COMMAND BEGIN
    int temp257 = (int)(regs[87] + 1);
    regs[88] = (int)(temp257);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp258 = (long long int)(rbp + -24);
    long long int *temp259 = (long long int *)temp258;
    regs[117] = (long long int)(*temp259);
    int *temp260 = (int *)regs[117];
    *temp260 = (int)(regs[88]);
    long long int temp261 = (long long int)(rbp + -24);
    long long int *temp262 = (long long int *)temp261;
    regs[118] = (long long int)(*temp262);
    int *temp263 = (int *)regs[118];
    regs[89] = (int)(*temp263);
    // PARALLEL COMMAND BEGIN
    int temp264 = (int)(regs[89] + -1);
    regs[90] = (int)(temp264);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp265 = (long long int)(rbp + -4);
    int *temp266 = (int *)temp265;
    *temp266 = (int)(regs[90]);
    goto label44;
    // THERE WAS A BARRIER HERE
    label64:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp267 = (long long int)(rbp + -24);
    long long int *temp268 = (long long int *)temp267;
    regs[119] = (long long int)(*temp268);
    long long int temp269 = (long long int)(regs[119] + 8);
    long long int *temp270 = (long long int *)temp269;
    regs[91] = (long long int)(*temp270);
    long long int temp271 = (long long int)(rbp + -4);
    int *temp272 = (int *)temp271;
    regs[120] = (int)(*temp272);
    // PARALLEL COMMAND BEGIN
    int temp273 = (int)(regs[120] + -1);
    regs[92] = (int)(temp273);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp274 = (int)(regs[92] >> 31);
    regs[121] = (int)(temp274);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp275 = (int)(regs[121] + regs[92]);
    regs[122] = (int)(temp275);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp276 = (int)(regs[122] >> 1);
    regs[123] = (int)(temp276);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[93] = (int)(regs[123]);
    regs[94] = (long long int)(regs[93]);
    // PARALLEL COMMAND BEGIN
    long long int temp277 = (long long int)(regs[94] << 3);
    regs[95] = (long long int)(temp277);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp278 = (long long int)(regs[91] + regs[95]);
    regs[96] = (long long int)(temp278);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp279 = (long long int)(rbp + -24);
    long long int *temp280 = (long long int *)temp279;
    regs[124] = (long long int)(*temp280);
    long long int temp281 = (long long int)(regs[124] + 8);
    long long int *temp282 = (long long int *)temp281;
    regs[97] = (long long int)(*temp282);
    long long int temp283 = (long long int)(rbp + -4);
    int *temp284 = (int *)temp283;
    regs[125] = (int)(*temp284);
    regs[98] = (long long int)(regs[125]);
    // PARALLEL COMMAND BEGIN
    long long int temp285 = (long long int)(regs[98] << 3);
    regs[99] = (long long int)(temp285);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp286 = (long long int)(regs[97] + regs[99]);
    regs[100] = (long long int)(temp286);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int *temp287 = (long long int *)regs[96];
    regs[101] = (long long int)(*temp287);
    long long int *temp288 = (long long int *)regs[100];
    *temp288 = (long long int)(regs[101]);
    long long int temp289 = (long long int)(rbp + -4);
    int *temp290 = (int *)temp289;
    regs[126] = (int)(*temp290);
    // PARALLEL COMMAND BEGIN
    int temp291 = (int)(regs[126] + -1);
    regs[102] = (int)(temp291);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp292 = (int)(regs[102] >> 31);
    regs[127] = (int)(temp292);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp293 = (int)(regs[127] + regs[102]);
    regs[128] = (int)(temp293);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp294 = (int)(regs[128] >> 1);
    regs[129] = (int)(temp294);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp295 = (long long int)(rbp + -4);
    int *temp296 = (int *)temp295;
    *temp296 = (int)(regs[129]);
    label44:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp297 = (long long int)(rbp + -4);
    int *temp298 = (int *)temp297;
    long long int temp299 = (long long int)*temp298;
    long long int temp300 = (long long int)0;
    int temp301;
    if (temp299 == temp300) temp301 = 0;
    else if (temp299 < temp300) temp301 = -1;
    else temp301 = 1;
    rflags = (long long int)(temp301);
    bool temp302 = (rflags == 0);
    if (temp302) goto label67;
    // THERE WAS A NOTE HERE
    long long int temp303 = (long long int)(rbp + -32);
    long long int *temp304 = (long long int *)temp303;
    regs[130] = (long long int)(*temp304);
    long long int temp305 = (long long int)(regs[130] + 4);
    int *temp306 = (int *)temp305;
    regs[103] = (int)(*temp306);
    long long int temp307 = (long long int)(rbp + -24);
    long long int *temp308 = (long long int *)temp307;
    regs[131] = (long long int)(*temp308);
    long long int temp309 = (long long int)(regs[131] + 8);
    long long int *temp310 = (long long int *)temp309;
    regs[104] = (long long int)(*temp310);
    long long int temp311 = (long long int)(rbp + -4);
    int *temp312 = (int *)temp311;
    regs[132] = (int)(*temp312);
    // PARALLEL COMMAND BEGIN
    int temp313 = (int)(regs[132] + -1);
    regs[105] = (int)(temp313);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp314 = (int)(regs[105] >> 31);
    regs[133] = (int)(temp314);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp315 = (int)(regs[133] + regs[105]);
    regs[134] = (int)(temp315);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp316 = (int)(regs[134] >> 1);
    regs[135] = (int)(temp316);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[106] = (int)(regs[135]);
    regs[107] = (long long int)(regs[106]);
    // PARALLEL COMMAND BEGIN
    long long int temp317 = (long long int)(regs[107] << 3);
    regs[108] = (long long int)(temp317);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp318 = (long long int)(regs[104] + regs[108]);
    regs[109] = (long long int)(temp318);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int *temp319 = (long long int *)regs[109];
    regs[110] = (long long int)(*temp319);
    long long int temp320 = (long long int)(regs[110] + 4);
    int *temp321 = (int *)temp320;
    regs[111] = (int)(*temp321);
    long long int temp322 = (long long int)regs[103];
    long long int temp323 = (long long int)regs[111];
    int temp324;
    if (temp322 == temp323) temp324 = 0;
    else if (temp322 < temp323) temp324 = -1;
    else temp324 = 1;
    rflags = (long long int)(temp324);
    bool temp325 = (rflags < 0);
    if (temp325) goto label64;
    label67:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp326 = (long long int)(rbp + -24);
    long long int *temp327 = (long long int *)temp326;
    regs[136] = (long long int)(*temp327);
    long long int temp328 = (long long int)(regs[136] + 8);
    long long int *temp329 = (long long int *)temp328;
    regs[112] = (long long int)(*temp329);
    long long int temp330 = (long long int)(rbp + -4);
    int *temp331 = (int *)temp330;
    regs[137] = (int)(*temp331);
    regs[113] = (long long int)(regs[137]);
    // PARALLEL COMMAND BEGIN
    long long int temp332 = (long long int)(regs[113] << 3);
    regs[114] = (long long int)(temp332);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp333 = (long long int)(regs[112] + regs[114]);
    regs[115] = (long long int)(temp333);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp334 = (long long int)(rbp + -32);
    long long int *temp335 = (long long int *)temp334;
    regs[138] = (long long int)(*temp335);
    long long int *temp336 = (long long int *)regs[115];
    *temp336 = (long long int)(regs[138]);
    rbp += 0x100;
    rsp += 0x100;
}
void buildMinHeap(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp337 = (long long int)(rbp + -24);
    long long int *temp338 = (long long int *)temp337;
    *temp338 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp339 = (long long int)(rbp + -24);
    long long int *temp340 = (long long int *)temp339;
    regs[90] = (long long int)(*temp340);
    int *temp341 = (int *)regs[90];
    regs[87] = (int)(*temp341);
    // PARALLEL COMMAND BEGIN
    int temp342 = (int)(regs[87] + -1);
    regs[88] = (int)(temp342);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp343 = (long long int)(rbp + -8);
    int *temp344 = (int *)temp343;
    *temp344 = (int)(regs[88]);
    long long int temp345 = (long long int)(rbp + -8);
    int *temp346 = (int *)temp345;
    regs[91] = (int)(*temp346);
    // PARALLEL COMMAND BEGIN
    int temp347 = (int)(regs[91] + -1);
    regs[89] = (int)(temp347);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp348 = (int)(regs[89] >> 31);
    regs[92] = (int)(temp348);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp349 = (int)(regs[92] + regs[89]);
    regs[93] = (int)(temp349);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp350 = (int)(regs[93] >> 1);
    regs[94] = (int)(temp350);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp351 = (long long int)(rbp + -4);
    int *temp352 = (int *)temp351;
    *temp352 = (int)(regs[94]);
    goto label25;
    // THERE WAS A BARRIER HERE
    label27:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp353 = (long long int)(rbp + -4);
    int *temp354 = (int *)temp353;
    regs[95] = (int)(*temp354);
    long long int temp355 = (long long int)(rbp + -24);
    long long int *temp356 = (long long int *)temp355;
    regs[96] = (long long int)(*temp356);
    rsi = (int)(regs[95]);
    rdi = (long long int)(regs[96]);
    minHeapify(rdi, (int)rsi);
    // PARALLEL COMMAND BEGIN
    long long int temp357 = (long long int)(rbp + -4);
    int *temp358 = (int *)temp357;
    long long int temp359 = (long long int)(rbp + -4);
    int *temp360 = (int *)temp359;
    int temp361 = (int)(*temp360 + -1);
    *temp358 = (int)(temp361);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label25:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp362 = (long long int)(rbp + -4);
    int *temp363 = (int *)temp362;
    long long int temp364 = (long long int)*temp363;
    long long int temp365 = (long long int)0;
    int temp366;
    if (temp364 == temp365) temp366 = 0;
    else if (temp364 < temp365) temp366 = -1;
    else temp366 = 1;
    rflags = (long long int)(temp366);
    bool temp367 = (rflags >= 0);
    if (temp367) goto label27;
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void printArr(long long int arg0, int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp368 = (long long int)(rbp + -24);
    long long int *temp369 = (long long int *)temp368;
    *temp369 = (long long int)(rdi);
    long long int temp370 = (long long int)(rbp + -28);
    int *temp371 = (int *)temp370;
    *temp371 = (int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp372 = (long long int)(rbp + -4);
    int *temp373 = (int *)temp372;
    *temp373 = (int)(0);
    goto label22;
    // THERE WAS A BARRIER HERE
    label24:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp374 = (long long int)(rbp + -4);
    int *temp375 = (int *)temp374;
    regs[91] = (int)(*temp375);
    regs[87] = (long long int)(regs[91]);
    // PARALLEL COMMAND BEGIN
    long long int temp376 = (long long int)(regs[87] << 2);
    regs[88] = (long long int)(temp376);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp377 = (long long int)(rbp + -24);
    long long int *temp378 = (long long int *)temp377;
    regs[92] = (long long int)(*temp378);
    // PARALLEL COMMAND BEGIN
    long long int temp379 = (long long int)(regs[88] + regs[92]);
    regs[89] = (long long int)(temp379);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp380 = (int *)regs[89];
    regs[90] = (int)(*temp380);
    rsi = (int)(regs[90]);
    long long int temp381 = (long long int)symbol0;
    rdi = (long long int)(temp381);
    rax = (char)(0);
    int temp382 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp382;
    // PARALLEL COMMAND BEGIN
    long long int temp383 = (long long int)(rbp + -4);
    int *temp384 = (int *)temp383;
    long long int temp385 = (long long int)(rbp + -4);
    int *temp386 = (int *)temp385;
    int temp387 = (int)(*temp386 + 1);
    *temp384 = (int)(temp387);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label22:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp388 = (long long int)(rbp + -4);
    int *temp389 = (int *)temp388;
    regs[93] = (int)(*temp389);
    long long int temp390 = (long long int)(rbp + -28);
    int *temp391 = (int *)temp390;
    long long int temp392 = (long long int)regs[93];
    long long int temp393 = (long long int)*temp391;
    int temp394;
    if (temp392 == temp393) temp394 = 0;
    else if (temp392 < temp393) temp394 = -1;
    else temp394 = 1;
    rflags = (long long int)(temp394);
    bool temp395 = (rflags < 0);
    if (temp395) goto label24;
    // THERE WAS A NOTE HERE
    rdi = (int)(10);
    int temp396 = putchar((int)rdi);
    rax = (long long int)temp396;
    rbp += 0x100;
    rsp += 0x100;
}
int isLeaf(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp397 = (long long int)(rbp + -8);
    long long int *temp398 = (long long int *)temp397;
    *temp398 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp399 = (long long int)(rbp + -8);
    long long int *temp400 = (long long int *)temp399;
    regs[91] = (long long int)(*temp400);
    long long int temp401 = (long long int)(regs[91] + 8);
    long long int *temp402 = (long long int *)temp401;
    regs[87] = (long long int)(*temp402);
    long long int temp403 = (long long int)regs[87];
    long long int temp404 = (long long int)0;
    int temp405;
    if (temp403 == temp404) temp405 = 0;
    else if (temp403 < temp404) temp405 = -1;
    else temp405 = 1;
    rflags = (long long int)(temp405);
    bool temp406 = (rflags != 0);
    if (temp406) goto label19;
    // THERE WAS A NOTE HERE
    long long int temp407 = (long long int)(rbp + -8);
    long long int *temp408 = (long long int *)temp407;
    regs[92] = (long long int)(*temp408);
    long long int temp409 = (long long int)(regs[92] + 16);
    long long int *temp410 = (long long int *)temp409;
    regs[88] = (long long int)(*temp410);
    long long int temp411 = (long long int)regs[88];
    long long int temp412 = (long long int)0;
    int temp413;
    if (temp411 == temp412) temp413 = 0;
    else if (temp411 < temp412) temp413 = -1;
    else temp413 = 1;
    rflags = (long long int)(temp413);
    bool temp414 = (rflags != 0);
    if (temp414) goto label19;
    // THERE WAS A NOTE HERE
    regs[89] = (int)(1);
    goto label24;
    // THERE WAS A BARRIER HERE
    label19:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    regs[89] = (int)(0);
    label24:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    regs[90] = (int)(regs[89]);
    rax = (int)(regs[90]);
    rbp += 0x100;
    rsp += 0x100;
    return (int)(rax);
}
long long int createAndBuildMinHeap(long long int arg0, long long int arg1, int arg2) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp415 = (long long int)(rbp + -24);
    long long int *temp416 = (long long int *)temp415;
    *temp416 = (long long int)(rdi);
    long long int temp417 = (long long int)(rbp + -32);
    long long int *temp418 = (long long int *)temp417;
    *temp418 = (long long int)(rsi);
    long long int temp419 = (long long int)(rbp + -36);
    int *temp420 = (int *)temp419;
    *temp420 = (int)(rdx);
    // THERE WAS A NOTE HERE
    long long int temp421 = (long long int)(rbp + -36);
    int *temp422 = (int *)temp421;
    regs[87] = (int)(*temp422);
    rdi = (int)(regs[87]);
    long long int temp423 = createMinHeap((int)rdi);
    rax = (long long int)temp423;
    regs[105] = (long long int)(rax);
    long long int temp424 = (long long int)(rbp + -16);
    long long int *temp425 = (long long int *)temp424;
    *temp425 = (long long int)(regs[105]);
    long long int temp426 = (long long int)(rbp + -4);
    int *temp427 = (int *)temp426;
    *temp427 = (int)(0);
    goto label42;
    // THERE WAS A BARRIER HERE
    label44:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp428 = (long long int)(rbp + -4);
    int *temp429 = (int *)temp428;
    regs[106] = (int)(*temp429);
    regs[88] = (long long int)(regs[106]);
    // PARALLEL COMMAND BEGIN
    long long int temp430 = (long long int)(regs[88] << 2);
    regs[89] = (long long int)(temp430);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp431 = (long long int)(rbp + -32);
    long long int *temp432 = (long long int *)temp431;
    regs[107] = (long long int)(*temp432);
    // PARALLEL COMMAND BEGIN
    long long int temp433 = (long long int)(regs[89] + regs[107]);
    regs[90] = (long long int)(temp433);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp434 = (int *)regs[90];
    regs[91] = (int)(*temp434);
    regs[92] = (int)(regs[91]);
    long long int temp435 = (long long int)(rbp + -4);
    int *temp436 = (int *)temp435;
    regs[108] = (int)(*temp436);
    regs[93] = (long long int)(regs[108]);
    long long int temp437 = (long long int)(rbp + -24);
    long long int *temp438 = (long long int *)temp437;
    regs[109] = (long long int)(*temp438);
    // PARALLEL COMMAND BEGIN
    long long int temp439 = (long long int)(regs[93] + regs[109]);
    regs[94] = (long long int)(temp439);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    char *temp440 = (char *)regs[94];
    regs[95] = (char)(*temp440);
    regs[96] = (int)(regs[95]);
    long long int temp441 = (long long int)(rbp + -16);
    long long int *temp442 = (long long int *)temp441;
    regs[110] = (long long int)(*temp442);
    long long int temp443 = (long long int)(regs[110] + 8);
    long long int *temp444 = (long long int *)temp443;
    regs[97] = (long long int)(*temp444);
    long long int temp445 = (long long int)(rbp + -4);
    int *temp446 = (int *)temp445;
    regs[111] = (int)(*temp446);
    regs[98] = (long long int)(regs[111]);
    // PARALLEL COMMAND BEGIN
    long long int temp447 = (long long int)(regs[98] << 3);
    regs[99] = (long long int)(temp447);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp448 = (long long int)(regs[97] + regs[99]);
    regs[100] = (long long int)(temp448);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(regs[92]);
    rdi = (int)(regs[96]);
    long long int temp449 = newNode((int)rdi, (int)rsi);
    rax = (long long int)temp449;
    regs[101] = (long long int)(rax);
    long long int *temp450 = (long long int *)regs[100];
    *temp450 = (long long int)(regs[101]);
    // PARALLEL COMMAND BEGIN
    long long int temp451 = (long long int)(rbp + -4);
    int *temp452 = (int *)temp451;
    long long int temp453 = (long long int)(rbp + -4);
    int *temp454 = (int *)temp453;
    int temp455 = (int)(*temp454 + 1);
    *temp452 = (int)(temp455);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label42:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp456 = (long long int)(rbp + -4);
    int *temp457 = (int *)temp456;
    regs[112] = (int)(*temp457);
    long long int temp458 = (long long int)(rbp + -36);
    int *temp459 = (int *)temp458;
    long long int temp460 = (long long int)regs[112];
    long long int temp461 = (long long int)*temp459;
    int temp462;
    if (temp460 == temp461) temp462 = 0;
    else if (temp460 < temp461) temp462 = -1;
    else temp462 = 1;
    rflags = (long long int)(temp462);
    bool temp463 = (rflags < 0);
    if (temp463) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp464 = (long long int)(rbp + -36);
    int *temp465 = (int *)temp464;
    regs[102] = (int)(*temp465);
    long long int temp466 = (long long int)(rbp + -16);
    long long int *temp467 = (long long int *)temp466;
    regs[113] = (long long int)(*temp467);
    int *temp468 = (int *)regs[113];
    *temp468 = (int)(regs[102]);
    long long int temp469 = (long long int)(rbp + -16);
    long long int *temp470 = (long long int *)temp469;
    regs[114] = (long long int)(*temp470);
    rdi = (long long int)(regs[114]);
    buildMinHeap(rdi);
    long long int temp471 = (long long int)(rbp + -16);
    long long int *temp472 = (long long int *)temp471;
    regs[103] = (long long int)(*temp472);
    regs[104] = (long long int)(regs[103]);
    rax = (long long int)(regs[104]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
long long int buildHuffmanTree(long long int arg0, long long int arg1, int arg2) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp473 = (long long int)(rbp + -40);
    long long int *temp474 = (long long int *)temp473;
    *temp474 = (long long int)(rdi);
    long long int temp475 = (long long int)(rbp + -48);
    long long int *temp476 = (long long int *)temp475;
    *temp476 = (long long int)(rsi);
    long long int temp477 = (long long int)(rbp + -52);
    int *temp478 = (int *)temp477;
    *temp478 = (int)(rdx);
    // THERE WAS A NOTE HERE
    long long int temp479 = (long long int)(rbp + -52);
    int *temp480 = (int *)temp479;
    regs[93] = (int)(*temp480);
    long long int temp481 = (long long int)(rbp + -48);
    long long int *temp482 = (long long int *)temp481;
    regs[94] = (long long int)(*temp482);
    long long int temp483 = (long long int)(rbp + -40);
    long long int *temp484 = (long long int *)temp483;
    regs[95] = (long long int)(*temp484);
    rdx = (int)(regs[93]);
    rsi = (long long int)(regs[94]);
    rdi = (long long int)(regs[95]);
    long long int temp485 = createAndBuildMinHeap(rdi, rsi, (int)rdx);
    rax = (long long int)temp485;
    regs[96] = (long long int)(rax);
    long long int temp486 = (long long int)(rbp + -8);
    long long int *temp487 = (long long int *)temp486;
    *temp487 = (long long int)(regs[96]);
    goto label51;
    // THERE WAS A BARRIER HERE
    label57:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp488 = (long long int)(rbp + -8);
    long long int *temp489 = (long long int *)temp488;
    regs[97] = (long long int)(*temp489);
    rdi = (long long int)(regs[97]);
    long long int temp490 = extractMin(rdi);
    rax = (long long int)temp490;
    regs[98] = (long long int)(rax);
    long long int temp491 = (long long int)(rbp + -16);
    long long int *temp492 = (long long int *)temp491;
    *temp492 = (long long int)(regs[98]);
    long long int temp493 = (long long int)(rbp + -8);
    long long int *temp494 = (long long int *)temp493;
    regs[99] = (long long int)(*temp494);
    rdi = (long long int)(regs[99]);
    long long int temp495 = extractMin(rdi);
    rax = (long long int)temp495;
    regs[100] = (long long int)(rax);
    long long int temp496 = (long long int)(rbp + -24);
    long long int *temp497 = (long long int *)temp496;
    *temp497 = (long long int)(regs[100]);
    long long int temp498 = (long long int)(rbp + -16);
    long long int *temp499 = (long long int *)temp498;
    regs[101] = (long long int)(*temp499);
    long long int temp500 = (long long int)(regs[101] + 4);
    int *temp501 = (int *)temp500;
    regs[87] = (int)(*temp501);
    long long int temp502 = (long long int)(rbp + -24);
    long long int *temp503 = (long long int *)temp502;
    regs[102] = (long long int)(*temp503);
    long long int temp504 = (long long int)(regs[102] + 4);
    int *temp505 = (int *)temp504;
    regs[88] = (int)(*temp505);
    // PARALLEL COMMAND BEGIN
    int temp506 = (int)(regs[87] + regs[88]);
    regs[89] = (int)(temp506);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(regs[89]);
    rdi = (int)(36);
    long long int temp507 = newNode((int)rdi, (int)rsi);
    rax = (long long int)temp507;
    regs[103] = (long long int)(rax);
    long long int temp508 = (long long int)(rbp + -32);
    long long int *temp509 = (long long int *)temp508;
    *temp509 = (long long int)(regs[103]);
    long long int temp510 = (long long int)(rbp + -32);
    long long int *temp511 = (long long int *)temp510;
    regs[104] = (long long int)(*temp511);
    long long int temp512 = (long long int)(rbp + -16);
    long long int *temp513 = (long long int *)temp512;
    regs[105] = (long long int)(*temp513);
    long long int temp514 = (long long int)(regs[104] + 8);
    long long int *temp515 = (long long int *)temp514;
    *temp515 = (long long int)(regs[105]);
    long long int temp516 = (long long int)(rbp + -32);
    long long int *temp517 = (long long int *)temp516;
    regs[106] = (long long int)(*temp517);
    long long int temp518 = (long long int)(rbp + -24);
    long long int *temp519 = (long long int *)temp518;
    regs[107] = (long long int)(*temp519);
    long long int temp520 = (long long int)(regs[106] + 16);
    long long int *temp521 = (long long int *)temp520;
    *temp521 = (long long int)(regs[107]);
    long long int temp522 = (long long int)(rbp + -32);
    long long int *temp523 = (long long int *)temp522;
    regs[108] = (long long int)(*temp523);
    long long int temp524 = (long long int)(rbp + -8);
    long long int *temp525 = (long long int *)temp524;
    regs[109] = (long long int)(*temp525);
    rsi = (long long int)(regs[108]);
    rdi = (long long int)(regs[109]);
    insertMinHeap(rdi, rsi);
    label51:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp526 = (long long int)(rbp + -8);
    long long int *temp527 = (long long int *)temp526;
    regs[110] = (long long int)(*temp527);
    rdi = (long long int)(regs[110]);
    int temp528 = isSizeOne(rdi);
    rax = (long long int)temp528;
    regs[90] = (int)(rax);
    long long int temp529 = (long long int)regs[90];
    long long int temp530 = (long long int)0;
    int temp531;
    if (temp529 == temp530) temp531 = 0;
    else if (temp529 < temp530) temp531 = -1;
    else temp531 = 1;
    rflags = (long long int)(temp531);
    bool temp532 = (rflags == 0);
    if (temp532) goto label57;
    // THERE WAS A NOTE HERE
    long long int temp533 = (long long int)(rbp + -8);
    long long int *temp534 = (long long int *)temp533;
    regs[111] = (long long int)(*temp534);
    rdi = (long long int)(regs[111]);
    long long int temp535 = extractMin(rdi);
    rax = (long long int)temp535;
    regs[91] = (long long int)(rax);
    regs[92] = (long long int)(regs[91]);
    rax = (long long int)(regs[92]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
void printCodes(long long int arg0, long long int arg1, int arg2) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp536 = (long long int)(rbp + -8);
    long long int *temp537 = (long long int *)temp536;
    *temp537 = (long long int)(rdi);
    long long int temp538 = (long long int)(rbp + -16);
    long long int *temp539 = (long long int *)temp538;
    *temp539 = (long long int)(rsi);
    long long int temp540 = (long long int)(rbp + -20);
    int *temp541 = (int *)temp540;
    *temp541 = (int)(rdx);
    // THERE WAS A NOTE HERE
    long long int temp542 = (long long int)(rbp + -8);
    long long int *temp543 = (long long int *)temp542;
    regs[102] = (long long int)(*temp543);
    long long int temp544 = (long long int)(regs[102] + 8);
    long long int *temp545 = (long long int *)temp544;
    regs[87] = (long long int)(*temp545);
    long long int temp546 = (long long int)regs[87];
    long long int temp547 = (long long int)0;
    int temp548;
    if (temp546 == temp547) temp548 = 0;
    else if (temp546 < temp547) temp548 = -1;
    else temp548 = 1;
    rflags = (long long int)(temp548);
    bool temp549 = (rflags == 0);
    if (temp549) goto label28;
    // THERE WAS A NOTE HERE
    long long int temp550 = (long long int)(rbp + -20);
    int *temp551 = (int *)temp550;
    regs[103] = (int)(*temp551);
    regs[88] = (long long int)(regs[103]);
    // PARALLEL COMMAND BEGIN
    long long int temp552 = (long long int)(regs[88] << 2);
    regs[89] = (long long int)(temp552);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp553 = (long long int)(rbp + -16);
    long long int *temp554 = (long long int *)temp553;
    regs[104] = (long long int)(*temp554);
    // PARALLEL COMMAND BEGIN
    long long int temp555 = (long long int)(regs[89] + regs[104]);
    regs[90] = (long long int)(temp555);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp556 = (int *)regs[90];
    *temp556 = (int)(0);
    long long int temp557 = (long long int)(rbp + -20);
    int *temp558 = (int *)temp557;
    regs[105] = (int)(*temp558);
    // PARALLEL COMMAND BEGIN
    int temp559 = (int)(regs[105] + 1);
    regs[91] = (int)(temp559);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp560 = (long long int)(rbp + -8);
    long long int *temp561 = (long long int *)temp560;
    regs[106] = (long long int)(*temp561);
    long long int temp562 = (long long int)(regs[106] + 8);
    long long int *temp563 = (long long int *)temp562;
    regs[92] = (long long int)(*temp563);
    long long int temp564 = (long long int)(rbp + -16);
    long long int *temp565 = (long long int *)temp564;
    regs[107] = (long long int)(*temp565);
    rdx = (int)(regs[91]);
    rsi = (long long int)(regs[107]);
    rdi = (long long int)(regs[92]);
    printCodes(rdi, rsi, (int)rdx);
    label28:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp566 = (long long int)(rbp + -8);
    long long int *temp567 = (long long int *)temp566;
    regs[108] = (long long int)(*temp567);
    long long int temp568 = (long long int)(regs[108] + 16);
    long long int *temp569 = (long long int *)temp568;
    regs[93] = (long long int)(*temp569);
    long long int temp570 = (long long int)regs[93];
    long long int temp571 = (long long int)0;
    int temp572;
    if (temp570 == temp571) temp572 = 0;
    else if (temp570 < temp571) temp572 = -1;
    else temp572 = 1;
    rflags = (long long int)(temp572);
    bool temp573 = (rflags == 0);
    if (temp573) goto label50;
    // THERE WAS A NOTE HERE
    long long int temp574 = (long long int)(rbp + -20);
    int *temp575 = (int *)temp574;
    regs[109] = (int)(*temp575);
    regs[94] = (long long int)(regs[109]);
    // PARALLEL COMMAND BEGIN
    long long int temp576 = (long long int)(regs[94] << 2);
    regs[95] = (long long int)(temp576);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp577 = (long long int)(rbp + -16);
    long long int *temp578 = (long long int *)temp577;
    regs[110] = (long long int)(*temp578);
    // PARALLEL COMMAND BEGIN
    long long int temp579 = (long long int)(regs[95] + regs[110]);
    regs[96] = (long long int)(temp579);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp580 = (int *)regs[96];
    *temp580 = (int)(1);
    long long int temp581 = (long long int)(rbp + -20);
    int *temp582 = (int *)temp581;
    regs[111] = (int)(*temp582);
    // PARALLEL COMMAND BEGIN
    int temp583 = (int)(regs[111] + 1);
    regs[97] = (int)(temp583);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp584 = (long long int)(rbp + -8);
    long long int *temp585 = (long long int *)temp584;
    regs[112] = (long long int)(*temp585);
    long long int temp586 = (long long int)(regs[112] + 16);
    long long int *temp587 = (long long int *)temp586;
    regs[98] = (long long int)(*temp587);
    long long int temp588 = (long long int)(rbp + -16);
    long long int *temp589 = (long long int *)temp588;
    regs[113] = (long long int)(*temp589);
    rdx = (int)(regs[97]);
    rsi = (long long int)(regs[113]);
    rdi = (long long int)(regs[98]);
    printCodes(rdi, rsi, (int)rdx);
    label50:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp590 = (long long int)(rbp + -8);
    long long int *temp591 = (long long int *)temp590;
    regs[114] = (long long int)(*temp591);
    rdi = (long long int)(regs[114]);
    int temp592 = isLeaf(rdi);
    rax = (long long int)temp592;
    regs[99] = (int)(rax);
    long long int temp593 = (long long int)regs[99];
    long long int temp594 = (long long int)0;
    int temp595;
    if (temp593 == temp594) temp595 = 0;
    else if (temp593 < temp594) temp595 = -1;
    else temp595 = 1;
    rflags = (long long int)(temp595);
    bool temp596 = (rflags == 0);
    if (temp596) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp597 = (long long int)(rbp + -8);
    long long int *temp598 = (long long int *)temp597;
    regs[115] = (long long int)(*temp598);
    char *temp599 = (char *)regs[115];
    regs[100] = (char)(*temp599);
    regs[101] = (int)(regs[100]);
    rsi = (int)(regs[101]);
    long long int temp600 = (long long int)symbol1;
    rdi = (long long int)(temp600);
    rax = (char)(0);
    int temp601 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp601;
    long long int temp602 = (long long int)(rbp + -20);
    int *temp603 = (int *)temp602;
    regs[116] = (int)(*temp603);
    long long int temp604 = (long long int)(rbp + -16);
    long long int *temp605 = (long long int *)temp604;
    regs[117] = (long long int)(*temp605);
    rsi = (int)(regs[116]);
    rdi = (long long int)(regs[117]);
    printArr(rdi, (int)rsi);
    label73:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void HuffmanCodes(long long int arg0, long long int arg1, int arg2) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp606 = (long long int)(rbp + -424);
    long long int *temp607 = (long long int *)temp606;
    *temp607 = (long long int)(rdi);
    long long int temp608 = (long long int)(rbp + -432);
    long long int *temp609 = (long long int *)temp608;
    *temp609 = (long long int)(rsi);
    long long int temp610 = (long long int)(rbp + -436);
    int *temp611 = (int *)temp610;
    *temp611 = (int)(rdx);
    // THERE WAS A NOTE HERE
    long long int temp612 = (long long int)(rbp + -436);
    int *temp613 = (int *)temp612;
    regs[87] = (int)(*temp613);
    long long int temp614 = (long long int)(rbp + -432);
    long long int *temp615 = (long long int *)temp614;
    regs[88] = (long long int)(*temp615);
    long long int temp616 = (long long int)(rbp + -424);
    long long int *temp617 = (long long int *)temp616;
    regs[89] = (long long int)(*temp617);
    rdx = (int)(regs[87]);
    rsi = (long long int)(regs[88]);
    rdi = (long long int)(regs[89]);
    long long int temp618 = buildHuffmanTree(rdi, rsi, (int)rdx);
    rax = (long long int)temp618;
    regs[90] = (long long int)(rax);
    long long int temp619 = (long long int)(rbp + -8);
    long long int *temp620 = (long long int *)temp619;
    *temp620 = (long long int)(regs[90]);
    long long int temp621 = (long long int)(rbp + -12);
    int *temp622 = (int *)temp621;
    *temp622 = (int)(0);
    long long int temp623 = (long long int)(rbp + -12);
    int *temp624 = (int *)temp623;
    regs[91] = (int)(*temp624);
    // PARALLEL COMMAND BEGIN
    long long int temp625 = (long long int)(rbp + -416);
    regs[92] = (long long int)(temp625);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp626 = (long long int)(rbp + -8);
    long long int *temp627 = (long long int *)temp626;
    regs[93] = (long long int)(*temp627);
    rdx = (int)(regs[91]);
    rsi = (long long int)(regs[92]);
    rdi = (long long int)(regs[93]);
    printCodes(rdi, rsi, (int)rdx);
    rbp += 0x100;
    rsp += 0x100;
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp628 = (long long int)(rbp + -10);
    char *temp629 = (char *)temp628;
    *temp629 = (char)(97);
    long long int temp630 = (long long int)(rbp + -9);
    char *temp631 = (char *)temp630;
    *temp631 = (char)(98);
    long long int temp632 = (long long int)(rbp + -8);
    char *temp633 = (char *)temp632;
    *temp633 = (char)(99);
    long long int temp634 = (long long int)(rbp + -7);
    char *temp635 = (char *)temp634;
    *temp635 = (char)(100);
    long long int temp636 = (long long int)(rbp + -6);
    char *temp637 = (char *)temp636;
    *temp637 = (char)(101);
    long long int temp638 = (long long int)(rbp + -5);
    char *temp639 = (char *)temp638;
    *temp639 = (char)(102);
    long long int temp640 = (long long int)(rbp + -48);
    int *temp641 = (int *)temp640;
    *temp641 = (int)(5);
    long long int temp642 = (long long int)(rbp + -44);
    int *temp643 = (int *)temp642;
    *temp643 = (int)(9);
    long long int temp644 = (long long int)(rbp + -40);
    int *temp645 = (int *)temp644;
    *temp645 = (int)(12);
    long long int temp646 = (long long int)(rbp + -36);
    int *temp647 = (int *)temp646;
    *temp647 = (int)(13);
    long long int temp648 = (long long int)(rbp + -32);
    int *temp649 = (int *)temp648;
    *temp649 = (int)(16);
    long long int temp650 = (long long int)(rbp + -28);
    int *temp651 = (int *)temp650;
    *temp651 = (int)(45);
    long long int temp652 = (long long int)(rbp + -4);
    int *temp653 = (int *)temp652;
    *temp653 = (int)(6);
    long long int temp654 = (long long int)(rbp + -4);
    int *temp655 = (int *)temp654;
    regs[89] = (int)(*temp655);
    // PARALLEL COMMAND BEGIN
    long long int temp656 = (long long int)(rbp + -48);
    regs[90] = (long long int)(temp656);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp657 = (long long int)(rbp + -10);
    regs[91] = (long long int)(temp657);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdx = (int)(regs[89]);
    rsi = (long long int)(regs[90]);
    rdi = (long long int)(regs[91]);
    HuffmanCodes(rdi, rsi, (int)rdx);
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    rax = (int)(regs[88]);
    return (int)(rax);
}
