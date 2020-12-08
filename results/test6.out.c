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
const char *symbol2 = "\nSorted array is ";
const char *symbol1 = "Given array is ";
const char *symbol0 = "%d ";

void merge(long long int arg0, int arg1, int arg2, int arg3) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rcx = (long long int)arg3;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -72);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(rdi);
    long long int temp2 = (long long int)(rbp + -76);
    int *temp3 = (int *)temp2;
    *temp3 = (int)(rsi);
    long long int temp4 = (long long int)(rbp + -80);
    int *temp5 = (int *)temp4;
    *temp5 = (int)(rdx);
    long long int temp6 = (long long int)(rbp + -84);
    int *temp7 = (int *)temp6;
    *temp7 = (int)(rcx);
    // THERE WAS A NOTE HERE
    regs[144] = (long long int)(rsp);
    regs[133] = (long long int)(regs[144]);
    long long int temp8 = (long long int)(rbp + -80);
    int *temp9 = (int *)temp8;
    regs[145] = (int)(*temp9);
    // PARALLEL COMMAND BEGIN
    long long int temp10 = (long long int)(rbp + -76);
    int *temp11 = (int *)temp10;
    int temp12 = (int)(regs[145] - *temp11);
    regs[87] = (int)(temp12);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp13 = (int)(regs[87] + 1);
    regs[146] = (int)(temp13);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp14 = (long long int)(rbp + -16);
    int *temp15 = (int *)temp14;
    *temp15 = (int)(regs[146]);
    long long int temp16 = (long long int)(rbp + -84);
    int *temp17 = (int *)temp16;
    regs[150] = (int)(*temp17);
    // PARALLEL COMMAND BEGIN
    long long int temp18 = (long long int)(rbp + -80);
    int *temp19 = (int *)temp18;
    int temp20 = (int)(regs[150] - *temp19);
    regs[149] = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp21 = (long long int)(rbp + -20);
    int *temp22 = (int *)temp21;
    *temp22 = (int)(regs[149]);
    long long int temp23 = (long long int)(rbp + -16);
    int *temp24 = (int *)temp23;
    regs[134] = (int)(*temp24);
    regs[88] = (long long int)(regs[134]);
    // PARALLEL COMMAND BEGIN
    long long int temp25 = (long long int)(regs[88] + -1);
    regs[89] = (long long int)(temp25);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp26 = (long long int)(rbp + -32);
    long long int *temp27 = (long long int *)temp26;
    *temp27 = (long long int)(regs[89]);
    regs[90] = (long long int)(regs[134]);
    long long int temp28 = regs[91];
    temp28 = (long long int)(regs[90]);
    long long int temp29 = regs[91];
    temp29 = (long long int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp30 = (long long int)(regs[91] << 5);
    regs[135] = (long long int)(temp30);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[92] = (long long int)(regs[134]);
    // PARALLEL COMMAND BEGIN
    long long int temp31 = (long long int)(regs[92] << 2);
    regs[136] = (long long int)(temp31);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[93] = (long long int)(regs[134]);
    long long int temp32 = regs[94];
    temp32 = (long long int)(regs[93]);
    long long int temp33 = regs[94];
    temp33 = (long long int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp34 = (long long int)(regs[94] << 5);
    regs[137] = (long long int)(temp34);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[95] = (long long int)(regs[134]);
    // PARALLEL COMMAND BEGIN
    long long int temp35 = (long long int)(regs[95] << 2);
    regs[138] = (long long int)(temp35);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp36 = (long long int)(regs[138] + 3);
    regs[151] = (long long int)(temp36);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[218] = (long long int)(16);
    // PARALLEL COMMAND BEGIN
    long long int temp37 = (long long int)(regs[218] + -1);
    regs[152] = (long long int)(temp37);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp38 = (long long int)(regs[151] + regs[152]);
    regs[153] = (long long int)(temp38);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[219] = (long long int)(16);
    // PARALLEL COMMAND BEGIN
    long long int temp39 = (long long int)(regs[153] / regs[219]);
    regs[155] = (long long int)(temp39);
    long long int temp40 = (long long int)(regs[153] % regs[219]);
    regs[156] = (long long int)(temp40);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp41 = (long long int)(regs[155] * 16);
    regs[157] = (long long int)(temp41);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp42 = (long long int)(rsp - regs[157]);
    rsp = (long long int)(temp42);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[158] = (long long int)(rsp);
    // PARALLEL COMMAND BEGIN
    long long int temp43 = (long long int)(regs[158] + 3);
    regs[159] = (long long int)(temp43);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp44 = (long long int)(regs[159] >> 2);
    regs[160] = (long long int)(temp44);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp45 = (long long int)(regs[160] << 2);
    regs[161] = (long long int)(temp45);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp46 = (long long int)(rbp + -40);
    long long int *temp47 = (long long int *)temp46;
    *temp47 = (long long int)(regs[161]);
    long long int temp48 = (long long int)(rbp + -20);
    int *temp49 = (int *)temp48;
    regs[139] = (int)(*temp49);
    regs[96] = (long long int)(regs[139]);
    // PARALLEL COMMAND BEGIN
    long long int temp50 = (long long int)(regs[96] + -1);
    regs[97] = (long long int)(temp50);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp51 = (long long int)(rbp + -48);
    long long int *temp52 = (long long int *)temp51;
    *temp52 = (long long int)(regs[97]);
    regs[98] = (long long int)(regs[139]);
    long long int temp53 = regs[99];
    temp53 = (long long int)(regs[98]);
    long long int temp54 = regs[99];
    temp54 = (long long int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp55 = (long long int)(regs[99] << 5);
    regs[140] = (long long int)(temp55);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[100] = (long long int)(regs[139]);
    // PARALLEL COMMAND BEGIN
    long long int temp56 = (long long int)(regs[100] << 2);
    regs[141] = (long long int)(temp56);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[101] = (long long int)(regs[139]);
    long long int temp57 = regs[102];
    temp57 = (long long int)(regs[101]);
    long long int temp58 = regs[102];
    temp58 = (long long int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp59 = (long long int)(regs[102] << 5);
    regs[142] = (long long int)(temp59);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[103] = (long long int)(regs[139]);
    // PARALLEL COMMAND BEGIN
    long long int temp60 = (long long int)(regs[103] << 2);
    regs[143] = (long long int)(temp60);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp61 = (long long int)(regs[143] + 3);
    regs[162] = (long long int)(temp61);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[220] = (long long int)(16);
    // PARALLEL COMMAND BEGIN
    long long int temp62 = (long long int)(regs[220] + -1);
    regs[163] = (long long int)(temp62);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp63 = (long long int)(regs[162] + regs[163]);
    regs[164] = (long long int)(temp63);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[221] = (long long int)(16);
    // PARALLEL COMMAND BEGIN
    long long int temp64 = (long long int)(regs[164] / regs[221]);
    regs[166] = (long long int)(temp64);
    long long int temp65 = (long long int)(regs[164] % regs[221]);
    regs[167] = (long long int)(temp65);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp66 = (long long int)(regs[166] * 16);
    regs[168] = (long long int)(temp66);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp67 = (long long int)(rsp - regs[168]);
    rsp = (long long int)(temp67);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[169] = (long long int)(rsp);
    // PARALLEL COMMAND BEGIN
    long long int temp68 = (long long int)(regs[169] + 3);
    regs[170] = (long long int)(temp68);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp69 = (long long int)(regs[170] >> 2);
    regs[171] = (long long int)(temp69);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp70 = (long long int)(regs[171] << 2);
    regs[172] = (long long int)(temp70);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp71 = (long long int)(rbp + -56);
    long long int *temp72 = (long long int *)temp71;
    *temp72 = (long long int)(regs[172]);
    long long int temp73 = (long long int)(rbp + -12);
    int *temp74 = (int *)temp73;
    *temp74 = (int)(0);
    goto label92;
    // THERE WAS A BARRIER HERE
    label94:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp75 = (long long int)(rbp + -76);
    int *temp76 = (int *)temp75;
    regs[173] = (int)(*temp76);
    long long int temp77 = (long long int)(rbp + -12);
    int *temp78 = (int *)temp77;
    regs[174] = (int)(*temp78);
    // PARALLEL COMMAND BEGIN
    int temp79 = (int)(regs[173] + regs[174]);
    regs[104] = (int)(temp79);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[105] = (long long int)(regs[104]);
    // PARALLEL COMMAND BEGIN
    long long int temp80 = (long long int)(regs[105] << 2);
    regs[106] = (long long int)(temp80);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp81 = (long long int)(rbp + -72);
    long long int *temp82 = (long long int *)temp81;
    regs[175] = (long long int)(*temp82);
    // PARALLEL COMMAND BEGIN
    long long int temp83 = (long long int)(regs[106] + regs[175]);
    regs[107] = (long long int)(temp83);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp84 = (int *)regs[107];
    regs[108] = (int)(*temp84);
    long long int temp85 = (long long int)(rbp + -40);
    long long int *temp86 = (long long int *)temp85;
    regs[176] = (long long int)(*temp86);
    long long int temp87 = (long long int)(rbp + -12);
    int *temp88 = (int *)temp87;
    regs[178] = (int)(*temp88);
    regs[177] = (long long int)(regs[178]);
    long long int temp89 = (long long int)(regs[177] * 4);
    long long int temp90 = (long long int)(temp89 + regs[176]);
    int *temp91 = (int *)temp90;
    *temp91 = (int)(regs[108]);
    // PARALLEL COMMAND BEGIN
    long long int temp92 = (long long int)(rbp + -12);
    int *temp93 = (int *)temp92;
    long long int temp94 = (long long int)(rbp + -12);
    int *temp95 = (int *)temp94;
    int temp96 = (int)(*temp95 + 1);
    *temp93 = (int)(temp96);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label92:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp97 = (long long int)(rbp + -12);
    int *temp98 = (int *)temp97;
    regs[179] = (int)(*temp98);
    long long int temp99 = (long long int)(rbp + -16);
    int *temp100 = (int *)temp99;
    long long int temp101 = (long long int)regs[179];
    long long int temp102 = (long long int)*temp100;
    int temp103;
    if (temp101 == temp102) temp103 = 0;
    else if (temp101 < temp102) temp103 = -1;
    else temp103 = 1;
    rflags = (long long int)(temp103);
    bool temp104 = (rflags < 0);
    if (temp104) goto label94;
    // THERE WAS A NOTE HERE
    long long int temp105 = (long long int)(rbp + -8);
    int *temp106 = (int *)temp105;
    *temp106 = (int)(0);
    goto label117;
    // THERE WAS A BARRIER HERE
    label119:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp107 = (long long int)(rbp + -80);
    int *temp108 = (int *)temp107;
    regs[180] = (int)(*temp108);
    // PARALLEL COMMAND BEGIN
    int temp109 = (int)(regs[180] + 1);
    regs[109] = (int)(temp109);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp110 = (long long int)(rbp + -8);
    int *temp111 = (int *)temp110;
    regs[181] = (int)(*temp111);
    // PARALLEL COMMAND BEGIN
    int temp112 = (int)(regs[109] + regs[181]);
    regs[110] = (int)(temp112);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[111] = (long long int)(regs[110]);
    // PARALLEL COMMAND BEGIN
    long long int temp113 = (long long int)(regs[111] << 2);
    regs[112] = (long long int)(temp113);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp114 = (long long int)(rbp + -72);
    long long int *temp115 = (long long int *)temp114;
    regs[182] = (long long int)(*temp115);
    // PARALLEL COMMAND BEGIN
    long long int temp116 = (long long int)(regs[112] + regs[182]);
    regs[113] = (long long int)(temp116);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp117 = (int *)regs[113];
    regs[114] = (int)(*temp117);
    long long int temp118 = (long long int)(rbp + -56);
    long long int *temp119 = (long long int *)temp118;
    regs[183] = (long long int)(*temp119);
    long long int temp120 = (long long int)(rbp + -8);
    int *temp121 = (int *)temp120;
    regs[185] = (int)(*temp121);
    regs[184] = (long long int)(regs[185]);
    long long int temp122 = (long long int)(regs[184] * 4);
    long long int temp123 = (long long int)(temp122 + regs[183]);
    int *temp124 = (int *)temp123;
    *temp124 = (int)(regs[114]);
    // PARALLEL COMMAND BEGIN
    long long int temp125 = (long long int)(rbp + -8);
    int *temp126 = (int *)temp125;
    long long int temp127 = (long long int)(rbp + -8);
    int *temp128 = (int *)temp127;
    int temp129 = (int)(*temp128 + 1);
    *temp126 = (int)(temp129);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label117:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp130 = (long long int)(rbp + -8);
    int *temp131 = (int *)temp130;
    regs[186] = (int)(*temp131);
    long long int temp132 = (long long int)(rbp + -20);
    int *temp133 = (int *)temp132;
    long long int temp134 = (long long int)regs[186];
    long long int temp135 = (long long int)*temp133;
    int temp136;
    if (temp134 == temp135) temp136 = 0;
    else if (temp134 < temp135) temp136 = -1;
    else temp136 = 1;
    rflags = (long long int)(temp136);
    bool temp137 = (rflags < 0);
    if (temp137) goto label119;
    // THERE WAS A NOTE HERE
    long long int temp138 = (long long int)(rbp + -12);
    int *temp139 = (int *)temp138;
    *temp139 = (int)(0);
    long long int temp140 = (long long int)(rbp + -8);
    int *temp141 = (int *)temp140;
    *temp141 = (int)(0);
    long long int temp142 = (long long int)(rbp + -76);
    int *temp143 = (int *)temp142;
    regs[187] = (int)(*temp143);
    long long int temp144 = (long long int)(rbp + -4);
    int *temp145 = (int *)temp144;
    *temp145 = (int)(regs[187]);
    goto label171;
    // THERE WAS A BARRIER HERE
    label177:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp146 = (long long int)(rbp + -40);
    long long int *temp147 = (long long int *)temp146;
    regs[188] = (long long int)(*temp147);
    long long int temp148 = (long long int)(rbp + -12);
    int *temp149 = (int *)temp148;
    regs[190] = (int)(*temp149);
    regs[189] = (long long int)(regs[190]);
    long long int temp150 = (long long int)(regs[189] * 4);
    long long int temp151 = (long long int)(temp150 + regs[188]);
    int *temp152 = (int *)temp151;
    regs[115] = (int)(*temp152);
    long long int temp153 = (long long int)(rbp + -56);
    long long int *temp154 = (long long int *)temp153;
    regs[191] = (long long int)(*temp154);
    long long int temp155 = (long long int)(rbp + -8);
    int *temp156 = (int *)temp155;
    regs[193] = (int)(*temp156);
    regs[192] = (long long int)(regs[193]);
    long long int temp157 = (long long int)(regs[192] * 4);
    long long int temp158 = (long long int)(temp157 + regs[191]);
    int *temp159 = (int *)temp158;
    regs[116] = (int)(*temp159);
    long long int temp160 = (long long int)regs[115];
    long long int temp161 = (long long int)regs[116];
    int temp162;
    if (temp160 == temp161) temp162 = 0;
    else if (temp160 < temp161) temp162 = -1;
    else temp162 = 1;
    rflags = (long long int)(temp162);
    bool temp163 = (rflags > 0);
    if (temp163) goto label155;
    // THERE WAS A NOTE HERE
    long long int temp164 = (long long int)(rbp + -4);
    int *temp165 = (int *)temp164;
    regs[194] = (int)(*temp165);
    regs[117] = (long long int)(regs[194]);
    // PARALLEL COMMAND BEGIN
    long long int temp166 = (long long int)(regs[117] << 2);
    regs[118] = (long long int)(temp166);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp167 = (long long int)(rbp + -72);
    long long int *temp168 = (long long int *)temp167;
    regs[195] = (long long int)(*temp168);
    // PARALLEL COMMAND BEGIN
    long long int temp169 = (long long int)(regs[118] + regs[195]);
    regs[119] = (long long int)(temp169);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp170 = (long long int)(rbp + -40);
    long long int *temp171 = (long long int *)temp170;
    regs[196] = (long long int)(*temp171);
    long long int temp172 = (long long int)(rbp + -12);
    int *temp173 = (int *)temp172;
    regs[198] = (int)(*temp173);
    regs[197] = (long long int)(regs[198]);
    long long int temp174 = (long long int)(regs[197] * 4);
    long long int temp175 = (long long int)(temp174 + regs[196]);
    int *temp176 = (int *)temp175;
    regs[120] = (int)(*temp176);
    int *temp177 = (int *)regs[119];
    *temp177 = (int)(regs[120]);
    // PARALLEL COMMAND BEGIN
    long long int temp178 = (long long int)(rbp + -12);
    int *temp179 = (int *)temp178;
    long long int temp180 = (long long int)(rbp + -12);
    int *temp181 = (int *)temp180;
    int temp182 = (int)(*temp181 + 1);
    *temp179 = (int)(temp182);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    goto label168;
    // THERE WAS A BARRIER HERE
    label155:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp183 = (long long int)(rbp + -4);
    int *temp184 = (int *)temp183;
    regs[199] = (int)(*temp184);
    regs[121] = (long long int)(regs[199]);
    // PARALLEL COMMAND BEGIN
    long long int temp185 = (long long int)(regs[121] << 2);
    regs[122] = (long long int)(temp185);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp186 = (long long int)(rbp + -72);
    long long int *temp187 = (long long int *)temp186;
    regs[200] = (long long int)(*temp187);
    // PARALLEL COMMAND BEGIN
    long long int temp188 = (long long int)(regs[122] + regs[200]);
    regs[123] = (long long int)(temp188);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp189 = (long long int)(rbp + -56);
    long long int *temp190 = (long long int *)temp189;
    regs[201] = (long long int)(*temp190);
    long long int temp191 = (long long int)(rbp + -8);
    int *temp192 = (int *)temp191;
    regs[203] = (int)(*temp192);
    regs[202] = (long long int)(regs[203]);
    long long int temp193 = (long long int)(regs[202] * 4);
    long long int temp194 = (long long int)(temp193 + regs[201]);
    int *temp195 = (int *)temp194;
    regs[124] = (int)(*temp195);
    int *temp196 = (int *)regs[123];
    *temp196 = (int)(regs[124]);
    // PARALLEL COMMAND BEGIN
    long long int temp197 = (long long int)(rbp + -8);
    int *temp198 = (int *)temp197;
    long long int temp199 = (long long int)(rbp + -8);
    int *temp200 = (int *)temp199;
    int temp201 = (int)(*temp200 + 1);
    *temp198 = (int)(temp201);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label168:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp202 = (long long int)(rbp + -4);
    int *temp203 = (int *)temp202;
    long long int temp204 = (long long int)(rbp + -4);
    int *temp205 = (int *)temp204;
    int temp206 = (int)(*temp205 + 1);
    *temp203 = (int)(temp206);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label171:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp207 = (long long int)(rbp + -12);
    int *temp208 = (int *)temp207;
    regs[204] = (int)(*temp208);
    long long int temp209 = (long long int)(rbp + -16);
    int *temp210 = (int *)temp209;
    long long int temp211 = (long long int)regs[204];
    long long int temp212 = (long long int)*temp210;
    int temp213;
    if (temp211 == temp212) temp213 = 0;
    else if (temp211 < temp212) temp213 = -1;
    else temp213 = 1;
    rflags = (long long int)(temp213);
    bool temp214 = (rflags >= 0);
    if (temp214) goto label181;
    // THERE WAS A NOTE HERE
    long long int temp215 = (long long int)(rbp + -8);
    int *temp216 = (int *)temp215;
    regs[205] = (int)(*temp216);
    long long int temp217 = (long long int)(rbp + -20);
    int *temp218 = (int *)temp217;
    long long int temp219 = (long long int)regs[205];
    long long int temp220 = (long long int)*temp218;
    int temp221;
    if (temp219 == temp220) temp221 = 0;
    else if (temp219 < temp220) temp221 = -1;
    else temp221 = 1;
    rflags = (long long int)(temp221);
    bool temp222 = (rflags < 0);
    if (temp222) goto label177;
    label181:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    goto label198;
    // THERE WAS A BARRIER HERE
    label200:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp223 = (long long int)(rbp + -4);
    int *temp224 = (int *)temp223;
    regs[206] = (int)(*temp224);
    regs[125] = (long long int)(regs[206]);
    // PARALLEL COMMAND BEGIN
    long long int temp225 = (long long int)(regs[125] << 2);
    regs[126] = (long long int)(temp225);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp226 = (long long int)(rbp + -72);
    long long int *temp227 = (long long int *)temp226;
    regs[207] = (long long int)(*temp227);
    // PARALLEL COMMAND BEGIN
    long long int temp228 = (long long int)(regs[126] + regs[207]);
    regs[127] = (long long int)(temp228);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp229 = (long long int)(rbp + -40);
    long long int *temp230 = (long long int *)temp229;
    regs[208] = (long long int)(*temp230);
    long long int temp231 = (long long int)(rbp + -12);
    int *temp232 = (int *)temp231;
    regs[210] = (int)(*temp232);
    regs[209] = (long long int)(regs[210]);
    long long int temp233 = (long long int)(regs[209] * 4);
    long long int temp234 = (long long int)(temp233 + regs[208]);
    int *temp235 = (int *)temp234;
    regs[128] = (int)(*temp235);
    int *temp236 = (int *)regs[127];
    *temp236 = (int)(regs[128]);
    // PARALLEL COMMAND BEGIN
    long long int temp237 = (long long int)(rbp + -12);
    int *temp238 = (int *)temp237;
    long long int temp239 = (long long int)(rbp + -12);
    int *temp240 = (int *)temp239;
    int temp241 = (int)(*temp240 + 1);
    *temp238 = (int)(temp241);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp242 = (long long int)(rbp + -4);
    int *temp243 = (int *)temp242;
    long long int temp244 = (long long int)(rbp + -4);
    int *temp245 = (int *)temp244;
    int temp246 = (int)(*temp245 + 1);
    *temp243 = (int)(temp246);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label198:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp247 = (long long int)(rbp + -12);
    int *temp248 = (int *)temp247;
    regs[211] = (int)(*temp248);
    long long int temp249 = (long long int)(rbp + -16);
    int *temp250 = (int *)temp249;
    long long int temp251 = (long long int)regs[211];
    long long int temp252 = (long long int)*temp250;
    int temp253;
    if (temp251 == temp252) temp253 = 0;
    else if (temp251 < temp252) temp253 = -1;
    else temp253 = 1;
    rflags = (long long int)(temp253);
    bool temp254 = (rflags < 0);
    if (temp254) goto label200;
    // THERE WAS A NOTE HERE
    goto label220;
    // THERE WAS A BARRIER HERE
    label222:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp255 = (long long int)(rbp + -4);
    int *temp256 = (int *)temp255;
    regs[212] = (int)(*temp256);
    regs[129] = (long long int)(regs[212]);
    // PARALLEL COMMAND BEGIN
    long long int temp257 = (long long int)(regs[129] << 2);
    regs[130] = (long long int)(temp257);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp258 = (long long int)(rbp + -72);
    long long int *temp259 = (long long int *)temp258;
    regs[213] = (long long int)(*temp259);
    // PARALLEL COMMAND BEGIN
    long long int temp260 = (long long int)(regs[130] + regs[213]);
    regs[131] = (long long int)(temp260);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp261 = (long long int)(rbp + -56);
    long long int *temp262 = (long long int *)temp261;
    regs[214] = (long long int)(*temp262);
    long long int temp263 = (long long int)(rbp + -8);
    int *temp264 = (int *)temp263;
    regs[216] = (int)(*temp264);
    regs[215] = (long long int)(regs[216]);
    long long int temp265 = (long long int)(regs[215] * 4);
    long long int temp266 = (long long int)(temp265 + regs[214]);
    int *temp267 = (int *)temp266;
    regs[132] = (int)(*temp267);
    int *temp268 = (int *)regs[131];
    *temp268 = (int)(regs[132]);
    // PARALLEL COMMAND BEGIN
    long long int temp269 = (long long int)(rbp + -8);
    int *temp270 = (int *)temp269;
    long long int temp271 = (long long int)(rbp + -8);
    int *temp272 = (int *)temp271;
    int temp273 = (int)(*temp272 + 1);
    *temp270 = (int)(temp273);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp274 = (long long int)(rbp + -4);
    int *temp275 = (int *)temp274;
    long long int temp276 = (long long int)(rbp + -4);
    int *temp277 = (int *)temp276;
    int temp278 = (int)(*temp277 + 1);
    *temp275 = (int)(temp278);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label220:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp279 = (long long int)(rbp + -8);
    int *temp280 = (int *)temp279;
    regs[217] = (int)(*temp280);
    long long int temp281 = (long long int)(rbp + -20);
    int *temp282 = (int *)temp281;
    long long int temp283 = (long long int)regs[217];
    long long int temp284 = (long long int)*temp282;
    int temp285;
    if (temp283 == temp284) temp285 = 0;
    else if (temp283 < temp284) temp285 = -1;
    else temp285 = 1;
    rflags = (long long int)(temp285);
    bool temp286 = (rflags < 0);
    if (temp286) goto label222;
    // THERE WAS A NOTE HERE
    // CLOBBER COMMAND
    // CLOBBER COMMAND
    rsp = (long long int)(regs[133]);
    rbp += 0x100;
    rsp += 0x100;
}
void mergeSort(long long int arg0, int arg1, int arg2) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp287 = (long long int)(rbp + -24);
    long long int *temp288 = (long long int *)temp287;
    *temp288 = (long long int)(rdi);
    long long int temp289 = (long long int)(rbp + -28);
    int *temp290 = (int *)temp289;
    *temp290 = (int)(rsi);
    long long int temp291 = (long long int)(rbp + -32);
    int *temp292 = (int *)temp291;
    *temp292 = (int)(rdx);
    // THERE WAS A NOTE HERE
    long long int temp293 = (long long int)(rbp + -28);
    int *temp294 = (int *)temp293;
    regs[90] = (int)(*temp294);
    long long int temp295 = (long long int)(rbp + -32);
    int *temp296 = (int *)temp295;
    long long int temp297 = (long long int)regs[90];
    long long int temp298 = (long long int)*temp296;
    int temp299;
    if (temp297 == temp298) temp299 = 0;
    else if (temp297 < temp298) temp299 = -1;
    else temp299 = 1;
    rflags = (long long int)(temp299);
    bool temp300 = (rflags >= 0);
    if (temp300) goto label50;
    // THERE WAS A NOTE HERE
    long long int temp301 = (long long int)(rbp + -32);
    int *temp302 = (int *)temp301;
    regs[91] = (int)(*temp302);
    // PARALLEL COMMAND BEGIN
    long long int temp303 = (long long int)(rbp + -28);
    int *temp304 = (int *)temp303;
    int temp305 = (int)(regs[91] - *temp304);
    regs[87] = (int)(temp305);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp306 = (int)(regs[87] >> 31);
    regs[92] = (int)(temp306);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp307 = (int)(regs[92] + regs[87]);
    regs[93] = (int)(temp307);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp308 = (int)(regs[93] >> 1);
    regs[94] = (int)(temp308);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[88] = (int)(regs[94]);
    long long int temp309 = (long long int)(rbp + -28);
    int *temp310 = (int *)temp309;
    regs[98] = (int)(*temp310);
    // PARALLEL COMMAND BEGIN
    int temp311 = (int)(regs[88] + regs[98]);
    regs[97] = (int)(temp311);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp312 = (long long int)(rbp + -4);
    int *temp313 = (int *)temp312;
    *temp313 = (int)(regs[97]);
    long long int temp314 = (long long int)(rbp + -4);
    int *temp315 = (int *)temp314;
    regs[99] = (int)(*temp315);
    long long int temp316 = (long long int)(rbp + -28);
    int *temp317 = (int *)temp316;
    regs[100] = (int)(*temp317);
    long long int temp318 = (long long int)(rbp + -24);
    long long int *temp319 = (long long int *)temp318;
    regs[101] = (long long int)(*temp319);
    rdx = (int)(regs[99]);
    rsi = (int)(regs[100]);
    rdi = (long long int)(regs[101]);
    mergeSort(rdi, (int)rsi, (int)rdx);
    long long int temp320 = (long long int)(rbp + -4);
    int *temp321 = (int *)temp320;
    regs[102] = (int)(*temp321);
    // PARALLEL COMMAND BEGIN
    int temp322 = (int)(regs[102] + 1);
    regs[89] = (int)(temp322);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp323 = (long long int)(rbp + -32);
    int *temp324 = (int *)temp323;
    regs[103] = (int)(*temp324);
    long long int temp325 = (long long int)(rbp + -24);
    long long int *temp326 = (long long int *)temp325;
    regs[104] = (long long int)(*temp326);
    rdx = (int)(regs[103]);
    rsi = (int)(regs[89]);
    rdi = (long long int)(regs[104]);
    mergeSort(rdi, (int)rsi, (int)rdx);
    long long int temp327 = (long long int)(rbp + -32);
    int *temp328 = (int *)temp327;
    regs[105] = (int)(*temp328);
    long long int temp329 = (long long int)(rbp + -4);
    int *temp330 = (int *)temp329;
    regs[106] = (int)(*temp330);
    long long int temp331 = (long long int)(rbp + -28);
    int *temp332 = (int *)temp331;
    regs[107] = (int)(*temp332);
    long long int temp333 = (long long int)(rbp + -24);
    long long int *temp334 = (long long int *)temp333;
    regs[108] = (long long int)(*temp334);
    rcx = (int)(regs[105]);
    rdx = (int)(regs[106]);
    rsi = (int)(regs[107]);
    rdi = (long long int)(regs[108]);
    merge(rdi, (int)rsi, (int)rdx, (int)rcx);
    label50:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void printArray(long long int arg0, int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp335 = (long long int)(rbp + -24);
    long long int *temp336 = (long long int *)temp335;
    *temp336 = (long long int)(rdi);
    long long int temp337 = (long long int)(rbp + -28);
    int *temp338 = (int *)temp337;
    *temp338 = (int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp339 = (long long int)(rbp + -4);
    int *temp340 = (int *)temp339;
    *temp340 = (int)(0);
    goto label22;
    // THERE WAS A BARRIER HERE
    label24:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp341 = (long long int)(rbp + -4);
    int *temp342 = (int *)temp341;
    regs[91] = (int)(*temp342);
    regs[87] = (long long int)(regs[91]);
    // PARALLEL COMMAND BEGIN
    long long int temp343 = (long long int)(regs[87] << 2);
    regs[88] = (long long int)(temp343);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp344 = (long long int)(rbp + -24);
    long long int *temp345 = (long long int *)temp344;
    regs[92] = (long long int)(*temp345);
    // PARALLEL COMMAND BEGIN
    long long int temp346 = (long long int)(regs[88] + regs[92]);
    regs[89] = (long long int)(temp346);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    int *temp347 = (int *)regs[89];
    regs[90] = (int)(*temp347);
    rsi = (int)(regs[90]);
    long long int temp348 = (long long int)symbol0;
    rdi = (long long int)(temp348);
    rax = (char)(0);
    int temp349 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp349;
    // PARALLEL COMMAND BEGIN
    long long int temp350 = (long long int)(rbp + -4);
    int *temp351 = (int *)temp350;
    long long int temp352 = (long long int)(rbp + -4);
    int *temp353 = (int *)temp352;
    int temp354 = (int)(*temp353 + 1);
    *temp351 = (int)(temp354);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label22:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp355 = (long long int)(rbp + -4);
    int *temp356 = (int *)temp355;
    regs[93] = (int)(*temp356);
    long long int temp357 = (long long int)(rbp + -28);
    int *temp358 = (int *)temp357;
    long long int temp359 = (long long int)regs[93];
    long long int temp360 = (long long int)*temp358;
    int temp361;
    if (temp359 == temp360) temp361 = 0;
    else if (temp359 < temp360) temp361 = -1;
    else temp361 = 1;
    rflags = (long long int)(temp361);
    bool temp362 = (rflags < 0);
    if (temp362) goto label24;
    // THERE WAS A NOTE HERE
    rdi = (int)(10);
    int temp363 = putchar((int)rdi);
    rax = (long long int)temp363;
    rbp += 0x100;
    rsp += 0x100;
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp364 = (long long int)(rbp + -32);
    int *temp365 = (int *)temp364;
    *temp365 = (int)(12);
    long long int temp366 = (long long int)(rbp + -28);
    int *temp367 = (int *)temp366;
    *temp367 = (int)(11);
    long long int temp368 = (long long int)(rbp + -24);
    int *temp369 = (int *)temp368;
    *temp369 = (int)(13);
    long long int temp370 = (long long int)(rbp + -20);
    int *temp371 = (int *)temp370;
    *temp371 = (int)(5);
    long long int temp372 = (long long int)(rbp + -16);
    int *temp373 = (int *)temp372;
    *temp373 = (int)(6);
    long long int temp374 = (long long int)(rbp + -12);
    int *temp375 = (int *)temp374;
    *temp375 = (int)(7);
    long long int temp376 = (long long int)(rbp + -4);
    int *temp377 = (int *)temp376;
    *temp377 = (int)(6);
    long long int temp378 = (long long int)symbol1;
    rdi = (long long int)(temp378);
    int temp379 = puts(rdi);
    rax = (long long int)temp379;
    long long int temp380 = (long long int)(rbp + -4);
    int *temp381 = (int *)temp380;
    regs[90] = (int)(*temp381);
    // PARALLEL COMMAND BEGIN
    long long int temp382 = (long long int)(rbp + -32);
    regs[91] = (long long int)(temp382);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(regs[90]);
    rdi = (long long int)(regs[91]);
    printArray(rdi, (int)rsi);
    long long int temp383 = (long long int)(rbp + -4);
    int *temp384 = (int *)temp383;
    regs[92] = (int)(*temp384);
    // PARALLEL COMMAND BEGIN
    int temp385 = (int)(regs[92] + -1);
    regs[87] = (int)(temp385);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp386 = (long long int)(rbp + -32);
    regs[93] = (long long int)(temp386);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdx = (int)(regs[87]);
    rsi = (int)(0);
    rdi = (long long int)(regs[93]);
    mergeSort(rdi, (int)rsi, (int)rdx);
    long long int temp387 = (long long int)symbol2;
    rdi = (long long int)(temp387);
    int temp388 = puts(rdi);
    rax = (long long int)temp388;
    long long int temp389 = (long long int)(rbp + -4);
    int *temp390 = (int *)temp389;
    regs[94] = (int)(*temp390);
    // PARALLEL COMMAND BEGIN
    long long int temp391 = (long long int)(rbp + -32);
    regs[95] = (long long int)(temp391);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (int)(regs[94]);
    rdi = (long long int)(regs[95]);
    printArray(rdi, (int)rsi);
    regs[88] = (int)(0);
    regs[89] = (int)(regs[88]);
    rax = (int)(regs[89]);
    return (int)(rax);
}
