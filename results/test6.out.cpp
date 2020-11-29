#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

void merge(long long int arg0, int arg1, int arg2, long long int arg3) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    regs[1] = (long long int)arg2;
    regs[2] = (long long int)arg3;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(regs[20] + -72);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(regs[5]);
    long long int temp2 = (long long int)(regs[20] + -76);
    int *temp3 = (int *)temp2;
    *temp3 = (int)(regs[4]);
    long long int temp4 = (long long int)(regs[20] + -80);
    int *temp5 = (int *)temp4;
    *temp5 = (int)(regs[1]);
    long long int temp6 = (long long int)(regs[20] + -84);
    int *temp7 = (int *)temp6;
    *temp7 = (int)(regs[2]);
    // THERE WAS A NOTE HERE
    regs[144] = (long long int)(regs[7]);
    regs[133] = (long long int)(regs[144]);
    long long int temp8 = (long long int)(regs[20] + -80);
    int *temp9 = (int *)temp8;
    regs[145] = (int)(*temp9);
    // PARALLEL COMMAND BEGIN
    long long int temp10 = (long long int)(regs[20] + -76);
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
    long long int temp14 = (long long int)(regs[20] + -16);
    int *temp15 = (int *)temp14;
    *temp15 = (int)(regs[146]);
    long long int temp16 = (long long int)(regs[20] + -84);
    int *temp17 = (int *)temp16;
    regs[150] = (int)(*temp17);
    // PARALLEL COMMAND BEGIN
    long long int temp18 = (long long int)(regs[20] + -80);
    int *temp19 = (int *)temp18;
    int temp20 = (int)(regs[150] - *temp19);
    regs[149] = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp21 = (long long int)(regs[20] + -20);
    int *temp22 = (int *)temp21;
    *temp22 = (int)(regs[149]);
    long long int temp23 = (long long int)(regs[20] + -16);
    int *temp24 = (int *)temp23;
    regs[134] = (int)(*temp24);
    regs[88] = (long long int)(regs[134]);
    // PARALLEL COMMAND BEGIN
    long long int temp25 = (long long int)(regs[88] + -1);
    regs[89] = (long long int)(temp25);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp26 = (long long int)(regs[20] + -32);
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
    long long int temp42 = (long long int)(regs[7] - regs[157]);
    regs[7] = (long long int)(temp42);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[158] = (long long int)(regs[7]);
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
    long long int temp46 = (long long int)(regs[20] + -40);
    long long int *temp47 = (long long int *)temp46;
    *temp47 = (long long int)(regs[161]);
    long long int temp48 = (long long int)(regs[20] + -20);
    int *temp49 = (int *)temp48;
    regs[139] = (int)(*temp49);
    regs[96] = (long long int)(regs[139]);
    // PARALLEL COMMAND BEGIN
    long long int temp50 = (long long int)(regs[96] + -1);
    regs[97] = (long long int)(temp50);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp51 = (long long int)(regs[20] + -48);
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
    long long int temp67 = (long long int)(regs[7] - regs[168]);
    regs[7] = (long long int)(temp67);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[169] = (long long int)(regs[7]);
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
    long long int temp71 = (long long int)(regs[20] + -56);
    long long int *temp72 = (long long int *)temp71;
    *temp72 = (long long int)(regs[172]);
    long long int temp73 = (long long int)(regs[20] + -12);
    int *temp74 = (int *)temp73;
    *temp74 = (int)(0);
    goto label92;
    // THERE WAS A BARRIER HERE
    label94:
    // THERE WAS A NOTE HERE
    long long int temp75 = (long long int)(regs[20] + -76);
    int *temp76 = (int *)temp75;
    regs[173] = (int)(*temp76);
    long long int temp77 = (long long int)(regs[20] + -12);
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
    long long int temp81 = (long long int)(regs[20] + -72);
    long long int *temp82 = (long long int *)temp81;
    regs[175] = (long long int)(*temp82);
    // PARALLEL COMMAND BEGIN
    long long int temp83 = (long long int)(regs[106] + regs[175]);
    regs[107] = (long long int)(temp83);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[108] = (int)(regs[107]);
    long long int temp84 = (long long int)(regs[20] + -40);
    long long int *temp85 = (long long int *)temp84;
    regs[176] = (long long int)(*temp85);
    long long int temp86 = (long long int)(regs[20] + -12);
    int *temp87 = (int *)temp86;
    regs[178] = (int)(*temp87);
    regs[177] = (long long int)(regs[178]);
    long long int temp88 = (long long int)(regs[177] * 4);
    long long int temp89 = (long long int)(temp88 + regs[176]);
    temp89 = (int)(regs[108]);
    // PARALLEL COMMAND BEGIN
    long long int temp90 = (long long int)(regs[20] + -12);
    int *temp91 = (int *)temp90;
    long long int temp92 = (long long int)(regs[20] + -12);
    int *temp93 = (int *)temp92;
    int temp94 = (int)(*temp93 + 1);
    *temp91 = (int)(temp94);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label92:
    // THERE WAS A NOTE HERE
    long long int temp95 = (long long int)(regs[20] + -12);
    int *temp96 = (int *)temp95;
    regs[179] = (int)(*temp96);
    long long int temp97 = (long long int)(regs[20] + -16);
    int *temp98 = (int *)temp97;
    long long int temp99 = (long long int)regs[179];
    long long int temp100 = (long long int)*temp98;
    int temp101;
    if (temp99 == temp100) temp101 = 0;
    else if (temp99 < temp100) temp101 = -1;
    else temp101 = 1;
    regs[17] = (long long int)(temp101);
    bool temp102 = (regs[17] < 0);
    if (temp102) goto label94;
    // THERE WAS A NOTE HERE
    long long int temp103 = (long long int)(regs[20] + -8);
    int *temp104 = (int *)temp103;
    *temp104 = (int)(0);
    goto label117;
    // THERE WAS A BARRIER HERE
    label119:
    // THERE WAS A NOTE HERE
    long long int temp105 = (long long int)(regs[20] + -80);
    int *temp106 = (int *)temp105;
    regs[180] = (int)(*temp106);
    // PARALLEL COMMAND BEGIN
    int temp107 = (int)(regs[180] + 1);
    regs[109] = (int)(temp107);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp108 = (long long int)(regs[20] + -8);
    int *temp109 = (int *)temp108;
    regs[181] = (int)(*temp109);
    // PARALLEL COMMAND BEGIN
    int temp110 = (int)(regs[109] + regs[181]);
    regs[110] = (int)(temp110);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[111] = (long long int)(regs[110]);
    // PARALLEL COMMAND BEGIN
    long long int temp111 = (long long int)(regs[111] << 2);
    regs[112] = (long long int)(temp111);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp112 = (long long int)(regs[20] + -72);
    long long int *temp113 = (long long int *)temp112;
    regs[182] = (long long int)(*temp113);
    // PARALLEL COMMAND BEGIN
    long long int temp114 = (long long int)(regs[112] + regs[182]);
    regs[113] = (long long int)(temp114);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[114] = (int)(regs[113]);
    long long int temp115 = (long long int)(regs[20] + -56);
    long long int *temp116 = (long long int *)temp115;
    regs[183] = (long long int)(*temp116);
    long long int temp117 = (long long int)(regs[20] + -8);
    int *temp118 = (int *)temp117;
    regs[185] = (int)(*temp118);
    regs[184] = (long long int)(regs[185]);
    long long int temp119 = (long long int)(regs[184] * 4);
    long long int temp120 = (long long int)(temp119 + regs[183]);
    temp120 = (int)(regs[114]);
    // PARALLEL COMMAND BEGIN
    long long int temp121 = (long long int)(regs[20] + -8);
    int *temp122 = (int *)temp121;
    long long int temp123 = (long long int)(regs[20] + -8);
    int *temp124 = (int *)temp123;
    int temp125 = (int)(*temp124 + 1);
    *temp122 = (int)(temp125);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label117:
    // THERE WAS A NOTE HERE
    long long int temp126 = (long long int)(regs[20] + -8);
    int *temp127 = (int *)temp126;
    regs[186] = (int)(*temp127);
    long long int temp128 = (long long int)(regs[20] + -20);
    int *temp129 = (int *)temp128;
    long long int temp130 = (long long int)regs[186];
    long long int temp131 = (long long int)*temp129;
    int temp132;
    if (temp130 == temp131) temp132 = 0;
    else if (temp130 < temp131) temp132 = -1;
    else temp132 = 1;
    regs[17] = (long long int)(temp132);
    bool temp133 = (regs[17] < 0);
    if (temp133) goto label119;
    // THERE WAS A NOTE HERE
    long long int temp134 = (long long int)(regs[20] + -12);
    int *temp135 = (int *)temp134;
    *temp135 = (int)(0);
    long long int temp136 = (long long int)(regs[20] + -8);
    int *temp137 = (int *)temp136;
    *temp137 = (int)(0);
    long long int temp138 = (long long int)(regs[20] + -76);
    int *temp139 = (int *)temp138;
    regs[187] = (int)(*temp139);
    long long int temp140 = (long long int)(regs[20] + -4);
    int *temp141 = (int *)temp140;
    *temp141 = (int)(regs[187]);
    goto label171;
    // THERE WAS A BARRIER HERE
    label177:
    // THERE WAS A NOTE HERE
    long long int temp142 = (long long int)(regs[20] + -40);
    long long int *temp143 = (long long int *)temp142;
    regs[188] = (long long int)(*temp143);
    long long int temp144 = (long long int)(regs[20] + -12);
    int *temp145 = (int *)temp144;
    regs[190] = (int)(*temp145);
    regs[189] = (long long int)(regs[190]);
    long long int temp146 = (long long int)(regs[189] * 4);
    long long int temp147 = (long long int)(temp146 + regs[188]);
    regs[115] = (int)(temp147);
    long long int temp148 = (long long int)(regs[20] + -56);
    long long int *temp149 = (long long int *)temp148;
    regs[191] = (long long int)(*temp149);
    long long int temp150 = (long long int)(regs[20] + -8);
    int *temp151 = (int *)temp150;
    regs[193] = (int)(*temp151);
    regs[192] = (long long int)(regs[193]);
    long long int temp152 = (long long int)(regs[192] * 4);
    long long int temp153 = (long long int)(temp152 + regs[191]);
    regs[116] = (int)(temp153);
    long long int temp154 = (long long int)regs[115];
    long long int temp155 = (long long int)regs[116];
    int temp156;
    if (temp154 == temp155) temp156 = 0;
    else if (temp154 < temp155) temp156 = -1;
    else temp156 = 1;
    regs[17] = (long long int)(temp156);
    bool temp157 = (regs[17] > 0);
    if (temp157) goto label155;
    // THERE WAS A NOTE HERE
    long long int temp158 = (long long int)(regs[20] + -4);
    int *temp159 = (int *)temp158;
    regs[194] = (int)(*temp159);
    regs[117] = (long long int)(regs[194]);
    // PARALLEL COMMAND BEGIN
    long long int temp160 = (long long int)(regs[117] << 2);
    regs[118] = (long long int)(temp160);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp161 = (long long int)(regs[20] + -72);
    long long int *temp162 = (long long int *)temp161;
    regs[195] = (long long int)(*temp162);
    // PARALLEL COMMAND BEGIN
    long long int temp163 = (long long int)(regs[118] + regs[195]);
    regs[119] = (long long int)(temp163);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp164 = (long long int)(regs[20] + -40);
    long long int *temp165 = (long long int *)temp164;
    regs[196] = (long long int)(*temp165);
    long long int temp166 = (long long int)(regs[20] + -12);
    int *temp167 = (int *)temp166;
    regs[198] = (int)(*temp167);
    regs[197] = (long long int)(regs[198]);
    long long int temp168 = (long long int)(regs[197] * 4);
    long long int temp169 = (long long int)(temp168 + regs[196]);
    regs[120] = (int)(temp169);
    regs[119] = (int)(regs[120]);
    // PARALLEL COMMAND BEGIN
    long long int temp170 = (long long int)(regs[20] + -12);
    int *temp171 = (int *)temp170;
    long long int temp172 = (long long int)(regs[20] + -12);
    int *temp173 = (int *)temp172;
    int temp174 = (int)(*temp173 + 1);
    *temp171 = (int)(temp174);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    goto label168;
    // THERE WAS A BARRIER HERE
    label155:
    // THERE WAS A NOTE HERE
    long long int temp175 = (long long int)(regs[20] + -4);
    int *temp176 = (int *)temp175;
    regs[199] = (int)(*temp176);
    regs[121] = (long long int)(regs[199]);
    // PARALLEL COMMAND BEGIN
    long long int temp177 = (long long int)(regs[121] << 2);
    regs[122] = (long long int)(temp177);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp178 = (long long int)(regs[20] + -72);
    long long int *temp179 = (long long int *)temp178;
    regs[200] = (long long int)(*temp179);
    // PARALLEL COMMAND BEGIN
    long long int temp180 = (long long int)(regs[122] + regs[200]);
    regs[123] = (long long int)(temp180);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp181 = (long long int)(regs[20] + -56);
    long long int *temp182 = (long long int *)temp181;
    regs[201] = (long long int)(*temp182);
    long long int temp183 = (long long int)(regs[20] + -8);
    int *temp184 = (int *)temp183;
    regs[203] = (int)(*temp184);
    regs[202] = (long long int)(regs[203]);
    long long int temp185 = (long long int)(regs[202] * 4);
    long long int temp186 = (long long int)(temp185 + regs[201]);
    regs[124] = (int)(temp186);
    regs[123] = (int)(regs[124]);
    // PARALLEL COMMAND BEGIN
    long long int temp187 = (long long int)(regs[20] + -8);
    int *temp188 = (int *)temp187;
    long long int temp189 = (long long int)(regs[20] + -8);
    int *temp190 = (int *)temp189;
    int temp191 = (int)(*temp190 + 1);
    *temp188 = (int)(temp191);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label168:
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp192 = (long long int)(regs[20] + -4);
    int *temp193 = (int *)temp192;
    long long int temp194 = (long long int)(regs[20] + -4);
    int *temp195 = (int *)temp194;
    int temp196 = (int)(*temp195 + 1);
    *temp193 = (int)(temp196);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label171:
    // THERE WAS A NOTE HERE
    long long int temp197 = (long long int)(regs[20] + -12);
    int *temp198 = (int *)temp197;
    regs[204] = (int)(*temp198);
    long long int temp199 = (long long int)(regs[20] + -16);
    int *temp200 = (int *)temp199;
    long long int temp201 = (long long int)regs[204];
    long long int temp202 = (long long int)*temp200;
    int temp203;
    if (temp201 == temp202) temp203 = 0;
    else if (temp201 < temp202) temp203 = -1;
    else temp203 = 1;
    regs[17] = (long long int)(temp203);
    bool temp204 = (regs[17] >= 0);
    if (temp204) goto label181;
    // THERE WAS A NOTE HERE
    long long int temp205 = (long long int)(regs[20] + -8);
    int *temp206 = (int *)temp205;
    regs[205] = (int)(*temp206);
    long long int temp207 = (long long int)(regs[20] + -20);
    int *temp208 = (int *)temp207;
    long long int temp209 = (long long int)regs[205];
    long long int temp210 = (long long int)*temp208;
    int temp211;
    if (temp209 == temp210) temp211 = 0;
    else if (temp209 < temp210) temp211 = -1;
    else temp211 = 1;
    regs[17] = (long long int)(temp211);
    bool temp212 = (regs[17] < 0);
    if (temp212) goto label177;
    label181:
    // THERE WAS A NOTE HERE
    goto label198;
    // THERE WAS A BARRIER HERE
    label200:
    // THERE WAS A NOTE HERE
    long long int temp213 = (long long int)(regs[20] + -4);
    int *temp214 = (int *)temp213;
    regs[206] = (int)(*temp214);
    regs[125] = (long long int)(regs[206]);
    // PARALLEL COMMAND BEGIN
    long long int temp215 = (long long int)(regs[125] << 2);
    regs[126] = (long long int)(temp215);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp216 = (long long int)(regs[20] + -72);
    long long int *temp217 = (long long int *)temp216;
    regs[207] = (long long int)(*temp217);
    // PARALLEL COMMAND BEGIN
    long long int temp218 = (long long int)(regs[126] + regs[207]);
    regs[127] = (long long int)(temp218);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp219 = (long long int)(regs[20] + -40);
    long long int *temp220 = (long long int *)temp219;
    regs[208] = (long long int)(*temp220);
    long long int temp221 = (long long int)(regs[20] + -12);
    int *temp222 = (int *)temp221;
    regs[210] = (int)(*temp222);
    regs[209] = (long long int)(regs[210]);
    long long int temp223 = (long long int)(regs[209] * 4);
    long long int temp224 = (long long int)(temp223 + regs[208]);
    regs[128] = (int)(temp224);
    regs[127] = (int)(regs[128]);
    // PARALLEL COMMAND BEGIN
    long long int temp225 = (long long int)(regs[20] + -12);
    int *temp226 = (int *)temp225;
    long long int temp227 = (long long int)(regs[20] + -12);
    int *temp228 = (int *)temp227;
    int temp229 = (int)(*temp228 + 1);
    *temp226 = (int)(temp229);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp230 = (long long int)(regs[20] + -4);
    int *temp231 = (int *)temp230;
    long long int temp232 = (long long int)(regs[20] + -4);
    int *temp233 = (int *)temp232;
    int temp234 = (int)(*temp233 + 1);
    *temp231 = (int)(temp234);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label198:
    // THERE WAS A NOTE HERE
    long long int temp235 = (long long int)(regs[20] + -12);
    int *temp236 = (int *)temp235;
    regs[211] = (int)(*temp236);
    long long int temp237 = (long long int)(regs[20] + -16);
    int *temp238 = (int *)temp237;
    long long int temp239 = (long long int)regs[211];
    long long int temp240 = (long long int)*temp238;
    int temp241;
    if (temp239 == temp240) temp241 = 0;
    else if (temp239 < temp240) temp241 = -1;
    else temp241 = 1;
    regs[17] = (long long int)(temp241);
    bool temp242 = (regs[17] < 0);
    if (temp242) goto label200;
    // THERE WAS A NOTE HERE
    goto label220;
    // THERE WAS A BARRIER HERE
    label222:
    // THERE WAS A NOTE HERE
    long long int temp243 = (long long int)(regs[20] + -4);
    int *temp244 = (int *)temp243;
    regs[212] = (int)(*temp244);
    regs[129] = (long long int)(regs[212]);
    // PARALLEL COMMAND BEGIN
    long long int temp245 = (long long int)(regs[129] << 2);
    regs[130] = (long long int)(temp245);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp246 = (long long int)(regs[20] + -72);
    long long int *temp247 = (long long int *)temp246;
    regs[213] = (long long int)(*temp247);
    // PARALLEL COMMAND BEGIN
    long long int temp248 = (long long int)(regs[130] + regs[213]);
    regs[131] = (long long int)(temp248);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp249 = (long long int)(regs[20] + -56);
    long long int *temp250 = (long long int *)temp249;
    regs[214] = (long long int)(*temp250);
    long long int temp251 = (long long int)(regs[20] + -8);
    int *temp252 = (int *)temp251;
    regs[216] = (int)(*temp252);
    regs[215] = (long long int)(regs[216]);
    long long int temp253 = (long long int)(regs[215] * 4);
    long long int temp254 = (long long int)(temp253 + regs[214]);
    regs[132] = (int)(temp254);
    regs[131] = (int)(regs[132]);
    // PARALLEL COMMAND BEGIN
    long long int temp255 = (long long int)(regs[20] + -8);
    int *temp256 = (int *)temp255;
    long long int temp257 = (long long int)(regs[20] + -8);
    int *temp258 = (int *)temp257;
    int temp259 = (int)(*temp258 + 1);
    *temp256 = (int)(temp259);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp260 = (long long int)(regs[20] + -4);
    int *temp261 = (int *)temp260;
    long long int temp262 = (long long int)(regs[20] + -4);
    int *temp263 = (int *)temp262;
    int temp264 = (int)(*temp263 + 1);
    *temp261 = (int)(temp264);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label220:
    // THERE WAS A NOTE HERE
    long long int temp265 = (long long int)(regs[20] + -8);
    int *temp266 = (int *)temp265;
    regs[217] = (int)(*temp266);
    long long int temp267 = (long long int)(regs[20] + -20);
    int *temp268 = (int *)temp267;
    long long int temp269 = (long long int)regs[217];
    long long int temp270 = (long long int)*temp268;
    int temp271;
    if (temp269 == temp270) temp271 = 0;
    else if (temp269 < temp270) temp271 = -1;
    else temp271 = 1;
    regs[17] = (long long int)(temp271);
    bool temp272 = (regs[17] < 0);
    if (temp272) goto label222;
    // THERE WAS A NOTE HERE
    // CLOBBER COMMAND
    // CLOBBER COMMAND
    regs[7] = (long long int)(regs[133]);
}
void mergeSort(long long int arg0, int arg1, long long int arg2) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    regs[1] = (long long int)arg2;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp273 = (long long int)(regs[20] + -24);
    long long int *temp274 = (long long int *)temp273;
    *temp274 = (long long int)(regs[5]);
    long long int temp275 = (long long int)(regs[20] + -28);
    int *temp276 = (int *)temp275;
    *temp276 = (int)(regs[4]);
    long long int temp277 = (long long int)(regs[20] + -32);
    int *temp278 = (int *)temp277;
    *temp278 = (int)(regs[1]);
    // THERE WAS A NOTE HERE
    long long int temp279 = (long long int)(regs[20] + -28);
    int *temp280 = (int *)temp279;
    regs[90] = (int)(*temp280);
    long long int temp281 = (long long int)(regs[20] + -32);
    int *temp282 = (int *)temp281;
    long long int temp283 = (long long int)regs[90];
    long long int temp284 = (long long int)*temp282;
    int temp285;
    if (temp283 == temp284) temp285 = 0;
    else if (temp283 < temp284) temp285 = -1;
    else temp285 = 1;
    regs[17] = (long long int)(temp285);
    bool temp286 = (regs[17] >= 0);
    if (temp286) goto label50;
    // THERE WAS A NOTE HERE
    long long int temp287 = (long long int)(regs[20] + -32);
    int *temp288 = (int *)temp287;
    regs[91] = (int)(*temp288);
    // PARALLEL COMMAND BEGIN
    long long int temp289 = (long long int)(regs[20] + -28);
    int *temp290 = (int *)temp289;
    int temp291 = (int)(regs[91] - *temp290);
    regs[87] = (int)(temp291);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp292 = (int)(regs[87] >> 31);
    regs[92] = (int)(temp292);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp293 = (int)(regs[92] + regs[87]);
    regs[93] = (int)(temp293);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp294 = (int)(regs[93] >> 1);
    regs[94] = (int)(temp294);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[88] = (int)(regs[94]);
    long long int temp295 = (long long int)(regs[20] + -28);
    int *temp296 = (int *)temp295;
    regs[98] = (int)(*temp296);
    // PARALLEL COMMAND BEGIN
    int temp297 = (int)(regs[88] + regs[98]);
    regs[97] = (int)(temp297);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp298 = (long long int)(regs[20] + -4);
    int *temp299 = (int *)temp298;
    *temp299 = (int)(regs[97]);
    long long int temp300 = (long long int)(regs[20] + -4);
    int *temp301 = (int *)temp300;
    regs[99] = (int)(*temp301);
    long long int temp302 = (long long int)(regs[20] + -28);
    int *temp303 = (int *)temp302;
    regs[100] = (int)(*temp303);
    long long int temp304 = (long long int)(regs[20] + -24);
    long long int *temp305 = (long long int *)temp304;
    regs[101] = (long long int)(*temp305);
    regs[1] = (int)(regs[99]);
    regs[4] = (int)(regs[100]);
    regs[5] = (long long int)(regs[101]);
    mergeSort(regs[5], (int)regs[4], (int)regs[1]);
    long long int temp306 = (long long int)(regs[20] + -4);
    int *temp307 = (int *)temp306;
    regs[102] = (int)(*temp307);
    // PARALLEL COMMAND BEGIN
    int temp308 = (int)(regs[102] + 1);
    regs[89] = (int)(temp308);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp309 = (long long int)(regs[20] + -32);
    int *temp310 = (int *)temp309;
    regs[103] = (int)(*temp310);
    long long int temp311 = (long long int)(regs[20] + -24);
    long long int *temp312 = (long long int *)temp311;
    regs[104] = (long long int)(*temp312);
    regs[1] = (int)(regs[103]);
    regs[4] = (int)(regs[89]);
    regs[5] = (long long int)(regs[104]);
    mergeSort(regs[5], (int)regs[4], (int)regs[1]);
    long long int temp313 = (long long int)(regs[20] + -32);
    int *temp314 = (int *)temp313;
    regs[105] = (int)(*temp314);
    long long int temp315 = (long long int)(regs[20] + -4);
    int *temp316 = (int *)temp315;
    regs[106] = (int)(*temp316);
    long long int temp317 = (long long int)(regs[20] + -28);
    int *temp318 = (int *)temp317;
    regs[107] = (int)(*temp318);
    long long int temp319 = (long long int)(regs[20] + -24);
    long long int *temp320 = (long long int *)temp319;
    regs[108] = (long long int)(*temp320);
    regs[2] = (int)(regs[105]);
    regs[1] = (int)(regs[106]);
    regs[4] = (int)(regs[107]);
    regs[5] = (long long int)(regs[108]);
    merge(regs[5], (int)regs[4], (int)regs[1], (int)regs[2]);
    label50:
    // THERE WAS A NOTE HERE
}
void printArray(long long int arg0, long long int arg1) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp321 = (long long int)(regs[20] + -24);
    long long int *temp322 = (long long int *)temp321;
    *temp322 = (long long int)(regs[5]);
    long long int temp323 = (long long int)(regs[20] + -28);
    int *temp324 = (int *)temp323;
    *temp324 = (int)(regs[4]);
    // THERE WAS A NOTE HERE
    long long int temp325 = (long long int)(regs[20] + -4);
    int *temp326 = (int *)temp325;
    *temp326 = (int)(0);
    goto label22;
    // THERE WAS A BARRIER HERE
    label24:
    // THERE WAS A NOTE HERE
    long long int temp327 = (long long int)(regs[20] + -4);
    int *temp328 = (int *)temp327;
    regs[91] = (int)(*temp328);
    regs[87] = (long long int)(regs[91]);
    // PARALLEL COMMAND BEGIN
    long long int temp329 = (long long int)(regs[87] << 2);
    regs[88] = (long long int)(temp329);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp330 = (long long int)(regs[20] + -24);
    long long int *temp331 = (long long int *)temp330;
    regs[92] = (long long int)(*temp331);
    // PARALLEL COMMAND BEGIN
    long long int temp332 = (long long int)(regs[88] + regs[92]);
    regs[89] = (long long int)(temp332);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[90] = (int)(regs[89]);
    regs[4] = (int)(regs[90]);
    long long int temp333 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp333);
    regs[0] = (char)(0);
    int temp334 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp334;
    // PARALLEL COMMAND BEGIN
    long long int temp335 = (long long int)(regs[20] + -4);
    int *temp336 = (int *)temp335;
    long long int temp337 = (long long int)(regs[20] + -4);
    int *temp338 = (int *)temp337;
    int temp339 = (int)(*temp338 + 1);
    *temp336 = (int)(temp339);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label22:
    // THERE WAS A NOTE HERE
    long long int temp340 = (long long int)(regs[20] + -4);
    int *temp341 = (int *)temp340;
    regs[93] = (int)(*temp341);
    long long int temp342 = (long long int)(regs[20] + -28);
    int *temp343 = (int *)temp342;
    long long int temp344 = (long long int)regs[93];
    long long int temp345 = (long long int)*temp343;
    int temp346;
    if (temp344 == temp345) temp346 = 0;
    else if (temp344 < temp345) temp346 = -1;
    else temp346 = 1;
    regs[17] = (long long int)(temp346);
    bool temp347 = (regs[17] < 0);
    if (temp347) goto label24;
    // THERE WAS A NOTE HERE
    regs[5] = (int)(10);
    int temp348 = putchar((int)regs[5]);
    regs[0] = (long long int)temp348;
}
int main(int argc, char **argv) {
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp349 = (long long int)(regs[20] + -32);
    int *temp350 = (int *)temp349;
    *temp350 = (int)(12);
    long long int temp351 = (long long int)(regs[20] + -28);
    int *temp352 = (int *)temp351;
    *temp352 = (int)(11);
    long long int temp353 = (long long int)(regs[20] + -24);
    int *temp354 = (int *)temp353;
    *temp354 = (int)(13);
    long long int temp355 = (long long int)(regs[20] + -20);
    int *temp356 = (int *)temp355;
    *temp356 = (int)(5);
    long long int temp357 = (long long int)(regs[20] + -16);
    int *temp358 = (int *)temp357;
    *temp358 = (int)(6);
    long long int temp359 = (long long int)(regs[20] + -12);
    int *temp360 = (int *)temp359;
    *temp360 = (int)(7);
    long long int temp361 = (long long int)(regs[20] + -4);
    int *temp362 = (int *)temp361;
    *temp362 = (int)(6);
    long long int temp363 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp363);
    int temp364 = puts(regs[5]);
    regs[0] = (long long int)temp364;
    long long int temp365 = (long long int)(regs[20] + -4);
    int *temp366 = (int *)temp365;
    regs[90] = (int)(*temp366);
    // PARALLEL COMMAND BEGIN
    long long int temp367 = (long long int)(regs[20] + -32);
    regs[91] = (long long int)(temp367);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (int)(regs[90]);
    regs[5] = (long long int)(regs[91]);
    printArray(regs[5], (int)regs[4]);
    long long int temp368 = (long long int)(regs[20] + -4);
    int *temp369 = (int *)temp368;
    regs[92] = (int)(*temp369);
    // PARALLEL COMMAND BEGIN
    int temp370 = (int)(regs[92] + -1);
    regs[87] = (int)(temp370);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp371 = (long long int)(regs[20] + -32);
    regs[93] = (long long int)(temp371);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[1] = (int)(regs[87]);
    regs[4] = (int)(0);
    regs[5] = (long long int)(regs[93]);
    mergeSort(regs[5], (int)regs[4], (int)regs[1]);
    long long int temp372 = externSymbolTable["*.LC2"];
    regs[5] = (long long int)(temp372);
    int temp373 = puts(regs[5]);
    regs[0] = (long long int)temp373;
    long long int temp374 = (long long int)(regs[20] + -4);
    int *temp375 = (int *)temp374;
    regs[94] = (int)(*temp375);
    // PARALLEL COMMAND BEGIN
    long long int temp376 = (long long int)(regs[20] + -32);
    regs[95] = (long long int)(temp376);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (int)(regs[94]);
    regs[5] = (long long int)(regs[95]);
    printArray(regs[5], (int)regs[4]);
    regs[88] = (int)(0);
    regs[89] = (int)(regs[88]);
    regs[0] = (int)(regs[89]);
    return (int)(regs[0]);
}
