#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

int main(int argc, char **argv) {
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp0);
    regs[0] = (char)(0);
    int temp1 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1;
    // PARALLEL COMMAND BEGIN
    long long int temp2 = (long long int)(regs[20] + -68);
    regs[108] = (long long int)(temp2);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[108]);
    long long int temp3 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp3);
    regs[0] = (char)(0);
    int temp4 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp4;
    long long int temp5 = externSymbolTable["*.LC2"];
    regs[5] = (long long int)(temp5);
    regs[0] = (char)(0);
    int temp6 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp6;
    long long int temp7 = (long long int)(regs[20] + -4);
    int *temp8 = (int *)temp7;
    *temp8 = (int)(0);
    goto label30;
    // THERE WAS A BARRIER HERE
    label33:
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp9 = (long long int)(regs[20] + -64);
    regs[109] = (long long int)(temp9);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp10 = (long long int)(regs[20] + -4);
    int *temp11 = (int *)temp10;
    regs[111] = (int)(*temp11);
    regs[110] = (long long int)(regs[111]);
    // PARALLEL COMMAND BEGIN
    long long int temp12 = (long long int)(regs[110] << 2);
    regs[112] = (long long int)(temp12);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp13 = (long long int)(regs[109] + regs[112]);
    regs[87] = (long long int)(temp13);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[87]);
    long long int temp14 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp14);
    regs[0] = (char)(0);
    int temp15 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp15;
    // PARALLEL COMMAND BEGIN
    long long int temp16 = (long long int)(regs[20] + -4);
    int *temp17 = (int *)temp16;
    long long int temp18 = (long long int)(regs[20] + -4);
    int *temp19 = (int *)temp18;
    int temp20 = (int)(*temp19 + 1);
    *temp17 = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label30:
    // THERE WAS A NOTE HERE
    long long int temp21 = (long long int)(regs[20] + -68);
    int *temp22 = (int *)temp21;
    regs[88] = (int)(*temp22);
    long long int temp23 = (long long int)(regs[20] + -4);
    int *temp24 = (int *)temp23;
    long long int temp25 = (long long int)*temp24;
    long long int temp26 = (long long int)regs[88];
    int temp27;
    if (temp25 == temp26) temp27 = 0;
    else if (temp25 < temp26) temp27 = -1;
    else temp27 = 1;
    regs[17] = (long long int)(temp27);
    bool temp28 = (regs[17] < 0);
    if (temp28) goto label33;
    // THERE WAS A NOTE HERE
    long long int temp29 = (long long int)(regs[20] + -4);
    int *temp30 = (int *)temp29;
    *temp30 = (int)(1);
    goto label82;
    // THERE WAS A BARRIER HERE
    label85:
    // THERE WAS A NOTE HERE
    long long int temp31 = (long long int)(regs[20] + -4);
    int *temp32 = (int *)temp31;
    regs[113] = (int)(*temp32);
    long long int temp33 = (long long int)(regs[20] + -12);
    int *temp34 = (int *)temp33;
    *temp34 = (int)(regs[113]);
    label77:
    // THERE WAS A NOTE HERE
    long long int temp35 = (long long int)(regs[20] + -12);
    int *temp36 = (int *)temp35;
    regs[114] = (int)(*temp36);
    // PARALLEL COMMAND BEGIN
    int temp37 = (int)(regs[114] + -1);
    regs[89] = (int)(temp37);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp38 = (int)(regs[89] >> 31);
    regs[115] = (int)(temp38);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp39 = (int)(regs[115] + regs[89]);
    regs[116] = (int)(temp39);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp40 = (int)(regs[116] >> 1);
    regs[117] = (int)(temp40);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp41 = (long long int)(regs[20] + -16);
    int *temp42 = (int *)temp41;
    *temp42 = (int)(regs[117]);
    long long int temp43 = (long long int)(regs[20] + -16);
    int *temp44 = (int *)temp43;
    regs[119] = (int)(*temp44);
    regs[118] = (long long int)(regs[119]);
    long long int temp45 = (long long int)(regs[118] * 4);
    long long int temp46 = (long long int)(temp45 + regs[20]);
    long long int temp47 = (long long int)(temp46 + -64);
    regs[90] = (int)(temp47);
    long long int temp48 = (long long int)(regs[20] + -12);
    int *temp49 = (int *)temp48;
    regs[121] = (int)(*temp49);
    regs[120] = (long long int)(regs[121]);
    long long int temp50 = (long long int)(regs[120] * 4);
    long long int temp51 = (long long int)(temp50 + regs[20]);
    long long int temp52 = (long long int)(temp51 + -64);
    regs[91] = (int)(temp52);
    long long int temp53 = (long long int)regs[90];
    long long int temp54 = (long long int)regs[91];
    int temp55;
    if (temp53 == temp54) temp55 = 0;
    else if (temp53 < temp54) temp55 = -1;
    else temp55 = 1;
    regs[17] = (long long int)(temp55);
    bool temp56 = (regs[17] >= 0);
    if (temp56) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp57 = (long long int)(regs[20] + -16);
    int *temp58 = (int *)temp57;
    regs[123] = (int)(*temp58);
    regs[122] = (long long int)(regs[123]);
    long long int temp59 = (long long int)(regs[122] * 4);
    long long int temp60 = (long long int)(temp59 + regs[20]);
    long long int temp61 = (long long int)(temp60 + -64);
    regs[124] = (int)(temp61);
    long long int temp62 = (long long int)(regs[20] + -20);
    int *temp63 = (int *)temp62;
    *temp63 = (int)(regs[124]);
    long long int temp64 = (long long int)(regs[20] + -12);
    int *temp65 = (int *)temp64;
    regs[126] = (int)(*temp65);
    regs[125] = (long long int)(regs[126]);
    long long int temp66 = (long long int)(regs[125] * 4);
    long long int temp67 = (long long int)(temp66 + regs[20]);
    long long int temp68 = (long long int)(temp67 + -64);
    regs[92] = (int)(temp68);
    long long int temp69 = (long long int)(regs[20] + -16);
    int *temp70 = (int *)temp69;
    regs[128] = (int)(*temp70);
    regs[127] = (long long int)(regs[128]);
    long long int temp71 = (long long int)(regs[127] * 4);
    long long int temp72 = (long long int)(temp71 + regs[20]);
    long long int temp73 = (long long int)(temp72 + -64);
    temp73 = (int)(regs[92]);
    long long int temp74 = (long long int)(regs[20] + -12);
    int *temp75 = (int *)temp74;
    regs[130] = (int)(*temp75);
    regs[129] = (long long int)(regs[130]);
    long long int temp76 = (long long int)(regs[20] + -20);
    int *temp77 = (int *)temp76;
    regs[131] = (int)(*temp77);
    long long int temp78 = (long long int)(regs[129] * 4);
    long long int temp79 = (long long int)(temp78 + regs[20]);
    long long int temp80 = (long long int)(temp79 + -64);
    temp80 = (int)(regs[131]);
    label73:
    // THERE WAS A NOTE HERE
    long long int temp81 = (long long int)(regs[20] + -16);
    int *temp82 = (int *)temp81;
    regs[132] = (int)(*temp82);
    long long int temp83 = (long long int)(regs[20] + -12);
    int *temp84 = (int *)temp83;
    *temp84 = (int)(regs[132]);
    long long int temp85 = (long long int)(regs[20] + -12);
    int *temp86 = (int *)temp85;
    long long int temp87 = (long long int)*temp86;
    long long int temp88 = (long long int)0;
    int temp89;
    if (temp87 == temp88) temp89 = 0;
    else if (temp87 < temp88) temp89 = -1;
    else temp89 = 1;
    regs[17] = (long long int)(temp89);
    bool temp90 = (regs[17] != 0);
    if (temp90) goto label77;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp91 = (long long int)(regs[20] + -4);
    int *temp92 = (int *)temp91;
    long long int temp93 = (long long int)(regs[20] + -4);
    int *temp94 = (int *)temp93;
    int temp95 = (int)(*temp94 + 1);
    *temp92 = (int)(temp95);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label82:
    // THERE WAS A NOTE HERE
    long long int temp96 = (long long int)(regs[20] + -68);
    int *temp97 = (int *)temp96;
    regs[93] = (int)(*temp97);
    long long int temp98 = (long long int)(regs[20] + -4);
    int *temp99 = (int *)temp98;
    long long int temp100 = (long long int)*temp99;
    long long int temp101 = (long long int)regs[93];
    int temp102;
    if (temp100 == temp101) temp102 = 0;
    else if (temp100 < temp101) temp102 = -1;
    else temp102 = 1;
    regs[17] = (long long int)(temp102);
    bool temp103 = (regs[17] < 0);
    if (temp103) goto label85;
    // THERE WAS A NOTE HERE
    long long int temp104 = externSymbolTable["*.LC3"];
    regs[5] = (long long int)(temp104);
    regs[0] = (char)(0);
    int temp105 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp105;
    long long int temp106 = (long long int)(regs[20] + -4);
    int *temp107 = (int *)temp106;
    *temp107 = (int)(0);
    goto label104;
    // THERE WAS A BARRIER HERE
    label107:
    // THERE WAS A NOTE HERE
    long long int temp108 = (long long int)(regs[20] + -4);
    int *temp109 = (int *)temp108;
    regs[134] = (int)(*temp109);
    regs[133] = (long long int)(regs[134]);
    long long int temp110 = (long long int)(regs[133] * 4);
    long long int temp111 = (long long int)(temp110 + regs[20]);
    long long int temp112 = (long long int)(temp111 + -64);
    regs[94] = (int)(temp112);
    regs[4] = (int)(regs[94]);
    long long int temp113 = externSymbolTable["*.LC4"];
    regs[5] = (long long int)(temp113);
    regs[0] = (char)(0);
    int temp114 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp114;
    // PARALLEL COMMAND BEGIN
    long long int temp115 = (long long int)(regs[20] + -4);
    int *temp116 = (int *)temp115;
    long long int temp117 = (long long int)(regs[20] + -4);
    int *temp118 = (int *)temp117;
    int temp119 = (int)(*temp118 + 1);
    *temp116 = (int)(temp119);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label104:
    // THERE WAS A NOTE HERE
    long long int temp120 = (long long int)(regs[20] + -68);
    int *temp121 = (int *)temp120;
    regs[95] = (int)(*temp121);
    long long int temp122 = (long long int)(regs[20] + -4);
    int *temp123 = (int *)temp122;
    long long int temp124 = (long long int)*temp123;
    long long int temp125 = (long long int)regs[95];
    int temp126;
    if (temp124 == temp125) temp126 = 0;
    else if (temp124 < temp125) temp126 = -1;
    else temp126 = 1;
    regs[17] = (long long int)(temp126);
    bool temp127 = (regs[17] < 0);
    if (temp127) goto label107;
    // THERE WAS A NOTE HERE
    long long int temp128 = (long long int)(regs[20] + -68);
    int *temp129 = (int *)temp128;
    regs[96] = (int)(*temp129);
    // PARALLEL COMMAND BEGIN
    int temp130 = (int)(regs[96] + -1);
    regs[135] = (int)(temp130);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp131 = (long long int)(regs[20] + -8);
    int *temp132 = (int *)temp131;
    *temp132 = (int)(regs[135]);
    goto label188;
    // THERE WAS A BARRIER HERE
    label190:
    // THERE WAS A NOTE HERE
    long long int temp133 = (long long int)(regs[20] + -64);
    int *temp134 = (int *)temp133;
    regs[136] = (int)(*temp134);
    long long int temp135 = (long long int)(regs[20] + -20);
    int *temp136 = (int *)temp135;
    *temp136 = (int)(regs[136]);
    long long int temp137 = (long long int)(regs[20] + -8);
    int *temp138 = (int *)temp137;
    regs[138] = (int)(*temp138);
    regs[137] = (long long int)(regs[138]);
    long long int temp139 = (long long int)(regs[137] * 4);
    long long int temp140 = (long long int)(temp139 + regs[20]);
    long long int temp141 = (long long int)(temp140 + -64);
    regs[97] = (int)(temp141);
    long long int temp142 = (long long int)(regs[20] + -64);
    int *temp143 = (int *)temp142;
    *temp143 = (int)(regs[97]);
    long long int temp144 = (long long int)(regs[20] + -8);
    int *temp145 = (int *)temp144;
    regs[140] = (int)(*temp145);
    regs[139] = (long long int)(regs[140]);
    long long int temp146 = (long long int)(regs[20] + -20);
    int *temp147 = (int *)temp146;
    regs[141] = (int)(*temp147);
    long long int temp148 = (long long int)(regs[139] * 4);
    long long int temp149 = (long long int)(temp148 + regs[20]);
    long long int temp150 = (long long int)(temp149 + -64);
    temp150 = (int)(regs[141]);
    long long int temp151 = (long long int)(regs[20] + -16);
    int *temp152 = (int *)temp151;
    *temp152 = (int)(0);
    label182:
    // THERE WAS A NOTE HERE
    long long int temp153 = (long long int)(regs[20] + -16);
    int *temp154 = (int *)temp153;
    regs[142] = (int)(*temp154);
    // PARALLEL COMMAND BEGIN
    int temp155 = (int)(regs[142] << 1);
    regs[98] = (int)(temp155);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp156 = (int)(regs[98] + 1);
    regs[143] = (int)(temp156);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp157 = (long long int)(regs[20] + -12);
    int *temp158 = (int *)temp157;
    *temp158 = (int)(regs[143]);
    long long int temp159 = (long long int)(regs[20] + -12);
    int *temp160 = (int *)temp159;
    regs[145] = (int)(*temp160);
    regs[144] = (long long int)(regs[145]);
    long long int temp161 = (long long int)(regs[144] * 4);
    long long int temp162 = (long long int)(temp161 + regs[20]);
    long long int temp163 = (long long int)(temp162 + -64);
    regs[99] = (int)(temp163);
    long long int temp164 = (long long int)(regs[20] + -12);
    int *temp165 = (int *)temp164;
    regs[146] = (int)(*temp165);
    // PARALLEL COMMAND BEGIN
    int temp166 = (int)(regs[146] + 1);
    regs[100] = (int)(temp166);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[147] = (long long int)(regs[100]);
    long long int temp167 = (long long int)(regs[147] * 4);
    long long int temp168 = (long long int)(temp167 + regs[20]);
    long long int temp169 = (long long int)(temp168 + -64);
    regs[101] = (int)(temp169);
    long long int temp170 = (long long int)regs[99];
    long long int temp171 = (long long int)regs[101];
    int temp172;
    if (temp170 == temp171) temp172 = 0;
    else if (temp170 < temp171) temp172 = -1;
    else temp172 = 1;
    regs[17] = (long long int)(temp172);
    bool temp173 = (regs[17] >= 0);
    if (temp173) goto label149;
    // THERE WAS A NOTE HERE
    long long int temp174 = (long long int)(regs[20] + -8);
    int *temp175 = (int *)temp174;
    regs[148] = (int)(*temp175);
    // PARALLEL COMMAND BEGIN
    int temp176 = (int)(regs[148] + -1);
    regs[102] = (int)(temp176);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp177 = (long long int)(regs[20] + -12);
    int *temp178 = (int *)temp177;
    long long int temp179 = (long long int)*temp178;
    long long int temp180 = (long long int)regs[102];
    int temp181;
    if (temp179 == temp180) temp181 = 0;
    else if (temp179 < temp180) temp181 = -1;
    else temp181 = 1;
    regs[17] = (long long int)(temp181);
    bool temp182 = (regs[17] >= 0);
    if (temp182) goto label149;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp183 = (long long int)(regs[20] + -12);
    int *temp184 = (int *)temp183;
    long long int temp185 = (long long int)(regs[20] + -12);
    int *temp186 = (int *)temp185;
    int temp187 = (int)(*temp186 + 1);
    *temp184 = (int)(temp187);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label149:
    // THERE WAS A NOTE HERE
    long long int temp188 = (long long int)(regs[20] + -16);
    int *temp189 = (int *)temp188;
    regs[150] = (int)(*temp189);
    regs[149] = (long long int)(regs[150]);
    long long int temp190 = (long long int)(regs[149] * 4);
    long long int temp191 = (long long int)(temp190 + regs[20]);
    long long int temp192 = (long long int)(temp191 + -64);
    regs[103] = (int)(temp192);
    long long int temp193 = (long long int)(regs[20] + -12);
    int *temp194 = (int *)temp193;
    regs[152] = (int)(*temp194);
    regs[151] = (long long int)(regs[152]);
    long long int temp195 = (long long int)(regs[151] * 4);
    long long int temp196 = (long long int)(temp195 + regs[20]);
    long long int temp197 = (long long int)(temp196 + -64);
    regs[104] = (int)(temp197);
    long long int temp198 = (long long int)regs[103];
    long long int temp199 = (long long int)regs[104];
    int temp200;
    if (temp198 == temp199) temp200 = 0;
    else if (temp198 < temp199) temp200 = -1;
    else temp200 = 1;
    regs[17] = (long long int)(temp200);
    bool temp201 = (regs[17] >= 0);
    if (temp201) goto label178;
    // THERE WAS A NOTE HERE
    long long int temp202 = (long long int)(regs[20] + -12);
    int *temp203 = (int *)temp202;
    regs[153] = (int)(*temp203);
    long long int temp204 = (long long int)(regs[20] + -8);
    int *temp205 = (int *)temp204;
    long long int temp206 = (long long int)regs[153];
    long long int temp207 = (long long int)*temp205;
    int temp208;
    if (temp206 == temp207) temp208 = 0;
    else if (temp206 < temp207) temp208 = -1;
    else temp208 = 1;
    regs[17] = (long long int)(temp208);
    bool temp209 = (regs[17] >= 0);
    if (temp209) goto label178;
    // THERE WAS A NOTE HERE
    long long int temp210 = (long long int)(regs[20] + -16);
    int *temp211 = (int *)temp210;
    regs[155] = (int)(*temp211);
    regs[154] = (long long int)(regs[155]);
    long long int temp212 = (long long int)(regs[154] * 4);
    long long int temp213 = (long long int)(temp212 + regs[20]);
    long long int temp214 = (long long int)(temp213 + -64);
    regs[156] = (int)(temp214);
    long long int temp215 = (long long int)(regs[20] + -20);
    int *temp216 = (int *)temp215;
    *temp216 = (int)(regs[156]);
    long long int temp217 = (long long int)(regs[20] + -12);
    int *temp218 = (int *)temp217;
    regs[158] = (int)(*temp218);
    regs[157] = (long long int)(regs[158]);
    long long int temp219 = (long long int)(regs[157] * 4);
    long long int temp220 = (long long int)(temp219 + regs[20]);
    long long int temp221 = (long long int)(temp220 + -64);
    regs[105] = (int)(temp221);
    long long int temp222 = (long long int)(regs[20] + -16);
    int *temp223 = (int *)temp222;
    regs[160] = (int)(*temp223);
    regs[159] = (long long int)(regs[160]);
    long long int temp224 = (long long int)(regs[159] * 4);
    long long int temp225 = (long long int)(temp224 + regs[20]);
    long long int temp226 = (long long int)(temp225 + -64);
    temp226 = (int)(regs[105]);
    long long int temp227 = (long long int)(regs[20] + -12);
    int *temp228 = (int *)temp227;
    regs[162] = (int)(*temp228);
    regs[161] = (long long int)(regs[162]);
    long long int temp229 = (long long int)(regs[20] + -20);
    int *temp230 = (int *)temp229;
    regs[163] = (int)(*temp230);
    long long int temp231 = (long long int)(regs[161] * 4);
    long long int temp232 = (long long int)(temp231 + regs[20]);
    long long int temp233 = (long long int)(temp232 + -64);
    temp233 = (int)(regs[163]);
    label178:
    // THERE WAS A NOTE HERE
    long long int temp234 = (long long int)(regs[20] + -12);
    int *temp235 = (int *)temp234;
    regs[164] = (int)(*temp235);
    long long int temp236 = (long long int)(regs[20] + -16);
    int *temp237 = (int *)temp236;
    *temp237 = (int)(regs[164]);
    long long int temp238 = (long long int)(regs[20] + -12);
    int *temp239 = (int *)temp238;
    regs[165] = (int)(*temp239);
    long long int temp240 = (long long int)(regs[20] + -8);
    int *temp241 = (int *)temp240;
    long long int temp242 = (long long int)regs[165];
    long long int temp243 = (long long int)*temp241;
    int temp244;
    if (temp242 == temp243) temp244 = 0;
    else if (temp242 < temp243) temp244 = -1;
    else temp244 = 1;
    regs[17] = (long long int)(temp244);
    bool temp245 = (regs[17] < 0);
    if (temp245) goto label182;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp246 = (long long int)(regs[20] + -8);
    int *temp247 = (int *)temp246;
    long long int temp248 = (long long int)(regs[20] + -8);
    int *temp249 = (int *)temp248;
    int temp250 = (int)(*temp249 + -1);
    *temp247 = (int)(temp250);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label188:
    // THERE WAS A NOTE HERE
    long long int temp251 = (long long int)(regs[20] + -8);
    int *temp252 = (int *)temp251;
    long long int temp253 = (long long int)*temp252;
    long long int temp254 = (long long int)0;
    int temp255;
    if (temp253 == temp254) temp255 = 0;
    else if (temp253 < temp254) temp255 = -1;
    else temp255 = 1;
    regs[17] = (long long int)(temp255);
    bool temp256 = (regs[17] >= 0);
    if (temp256) goto label190;
    // THERE WAS A NOTE HERE
    long long int temp257 = externSymbolTable["*.LC5"];
    regs[5] = (long long int)(temp257);
    regs[0] = (char)(0);
    int temp258 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp258;
    long long int temp259 = (long long int)(regs[20] + -4);
    int *temp260 = (int *)temp259;
    *temp260 = (int)(0);
    goto label209;
    // THERE WAS A BARRIER HERE
    label212:
    // THERE WAS A NOTE HERE
    long long int temp261 = (long long int)(regs[20] + -4);
    int *temp262 = (int *)temp261;
    regs[167] = (int)(*temp262);
    regs[166] = (long long int)(regs[167]);
    long long int temp263 = (long long int)(regs[166] * 4);
    long long int temp264 = (long long int)(temp263 + regs[20]);
    long long int temp265 = (long long int)(temp264 + -64);
    regs[106] = (int)(temp265);
    regs[4] = (int)(regs[106]);
    long long int temp266 = externSymbolTable["*.LC6"];
    regs[5] = (long long int)(temp266);
    regs[0] = (char)(0);
    int temp267 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp267;
    // PARALLEL COMMAND BEGIN
    long long int temp268 = (long long int)(regs[20] + -4);
    int *temp269 = (int *)temp268;
    long long int temp270 = (long long int)(regs[20] + -4);
    int *temp271 = (int *)temp270;
    int temp272 = (int)(*temp271 + 1);
    *temp269 = (int)(temp272);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label209:
    // THERE WAS A NOTE HERE
    long long int temp273 = (long long int)(regs[20] + -68);
    int *temp274 = (int *)temp273;
    regs[107] = (int)(*temp274);
    long long int temp275 = (long long int)(regs[20] + -4);
    int *temp276 = (int *)temp275;
    long long int temp277 = (long long int)*temp276;
    long long int temp278 = (long long int)regs[107];
    int temp279;
    if (temp277 == temp278) temp279 = 0;
    else if (temp277 < temp278) temp279 = -1;
    else temp279 = 1;
    regs[17] = (long long int)(temp279);
    bool temp280 = (regs[17] < 0);
    if (temp280) goto label212;
    // THERE WAS A NOTE HERE
    long long int temp281 = externSymbolTable["*.LC7"];
    regs[5] = (long long int)(temp281);
    int temp282 = puts(regs[5]);
    regs[0] = (long long int)temp282;
    return (int)(regs[0]);
}
