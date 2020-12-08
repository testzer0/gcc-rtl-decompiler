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
const char *symbol7 = "\n Complexity : \n Best case = Avg case = Worst case = O(n logn) ";
const char *symbol6 = "\t %d";
const char *symbol5 = "\n The sorted array is : ";
const char *symbol4 = "%d\t ";
const char *symbol3 = "Heap array : ";
const char *symbol2 = "\n Enter the nos : ";
const char *symbol1 = "%d";
const char *symbol0 = "\n Enter no of elements :";

int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)symbol0;
    rdi = (long long int)(temp0);
    rax = (char)(0);
    int temp1 = printf((const char *)rdi);
    rax = (long long int)temp1;
    // PARALLEL COMMAND BEGIN
    long long int temp2 = (long long int)(rbp + -68);
    regs[108] = (long long int)(temp2);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[108]);
    long long int temp3 = (long long int)symbol1;
    rdi = (long long int)(temp3);
    rax = (char)(0);
    int temp4 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp4;
    long long int temp5 = (long long int)symbol2;
    rdi = (long long int)(temp5);
    rax = (char)(0);
    int temp6 = printf((const char *)rdi);
    rax = (long long int)temp6;
    long long int temp7 = (long long int)(rbp + -4);
    int *temp8 = (int *)temp7;
    *temp8 = (int)(0);
    goto label30;
    // THERE WAS A BARRIER HERE
    label33:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp9 = (long long int)(rbp + -64);
    regs[109] = (long long int)(temp9);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp10 = (long long int)(rbp + -4);
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
    rsi = (long long int)(regs[87]);
    long long int temp14 = (long long int)symbol1;
    rdi = (long long int)(temp14);
    rax = (char)(0);
    int temp15 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp15;
    // PARALLEL COMMAND BEGIN
    long long int temp16 = (long long int)(rbp + -4);
    int *temp17 = (int *)temp16;
    long long int temp18 = (long long int)(rbp + -4);
    int *temp19 = (int *)temp18;
    int temp20 = (int)(*temp19 + 1);
    *temp17 = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label30:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp21 = (long long int)(rbp + -68);
    int *temp22 = (int *)temp21;
    regs[88] = (int)(*temp22);
    long long int temp23 = (long long int)(rbp + -4);
    int *temp24 = (int *)temp23;
    long long int temp25 = (long long int)*temp24;
    long long int temp26 = (long long int)regs[88];
    int temp27;
    if (temp25 == temp26) temp27 = 0;
    else if (temp25 < temp26) temp27 = -1;
    else temp27 = 1;
    rflags = (long long int)(temp27);
    bool temp28 = (rflags < 0);
    if (temp28) goto label33;
    // THERE WAS A NOTE HERE
    long long int temp29 = (long long int)(rbp + -4);
    int *temp30 = (int *)temp29;
    *temp30 = (int)(1);
    goto label82;
    // THERE WAS A BARRIER HERE
    label85:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp31 = (long long int)(rbp + -4);
    int *temp32 = (int *)temp31;
    regs[113] = (int)(*temp32);
    long long int temp33 = (long long int)(rbp + -12);
    int *temp34 = (int *)temp33;
    *temp34 = (int)(regs[113]);
    label77:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp35 = (long long int)(rbp + -12);
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
    long long int temp41 = (long long int)(rbp + -16);
    int *temp42 = (int *)temp41;
    *temp42 = (int)(regs[117]);
    long long int temp43 = (long long int)(rbp + -16);
    int *temp44 = (int *)temp43;
    regs[119] = (int)(*temp44);
    regs[118] = (long long int)(regs[119]);
    long long int temp45 = (long long int)(regs[118] * 4);
    long long int temp46 = (long long int)(temp45 + rbp);
    long long int temp47 = (long long int)(temp46 + -64);
    int *temp48 = (int *)temp47;
    regs[90] = (int)(*temp48);
    long long int temp49 = (long long int)(rbp + -12);
    int *temp50 = (int *)temp49;
    regs[121] = (int)(*temp50);
    regs[120] = (long long int)(regs[121]);
    long long int temp51 = (long long int)(regs[120] * 4);
    long long int temp52 = (long long int)(temp51 + rbp);
    long long int temp53 = (long long int)(temp52 + -64);
    int *temp54 = (int *)temp53;
    regs[91] = (int)(*temp54);
    long long int temp55 = (long long int)regs[90];
    long long int temp56 = (long long int)regs[91];
    int temp57;
    if (temp55 == temp56) temp57 = 0;
    else if (temp55 < temp56) temp57 = -1;
    else temp57 = 1;
    rflags = (long long int)(temp57);
    bool temp58 = (rflags >= 0);
    if (temp58) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp59 = (long long int)(rbp + -16);
    int *temp60 = (int *)temp59;
    regs[123] = (int)(*temp60);
    regs[122] = (long long int)(regs[123]);
    long long int temp61 = (long long int)(regs[122] * 4);
    long long int temp62 = (long long int)(temp61 + rbp);
    long long int temp63 = (long long int)(temp62 + -64);
    int *temp64 = (int *)temp63;
    regs[124] = (int)(*temp64);
    long long int temp65 = (long long int)(rbp + -20);
    int *temp66 = (int *)temp65;
    *temp66 = (int)(regs[124]);
    long long int temp67 = (long long int)(rbp + -12);
    int *temp68 = (int *)temp67;
    regs[126] = (int)(*temp68);
    regs[125] = (long long int)(regs[126]);
    long long int temp69 = (long long int)(regs[125] * 4);
    long long int temp70 = (long long int)(temp69 + rbp);
    long long int temp71 = (long long int)(temp70 + -64);
    int *temp72 = (int *)temp71;
    regs[92] = (int)(*temp72);
    long long int temp73 = (long long int)(rbp + -16);
    int *temp74 = (int *)temp73;
    regs[128] = (int)(*temp74);
    regs[127] = (long long int)(regs[128]);
    long long int temp75 = (long long int)(regs[127] * 4);
    long long int temp76 = (long long int)(temp75 + rbp);
    long long int temp77 = (long long int)(temp76 + -64);
    int *temp78 = (int *)temp77;
    *temp78 = (int)(regs[92]);
    long long int temp79 = (long long int)(rbp + -12);
    int *temp80 = (int *)temp79;
    regs[130] = (int)(*temp80);
    regs[129] = (long long int)(regs[130]);
    long long int temp81 = (long long int)(rbp + -20);
    int *temp82 = (int *)temp81;
    regs[131] = (int)(*temp82);
    long long int temp83 = (long long int)(regs[129] * 4);
    long long int temp84 = (long long int)(temp83 + rbp);
    long long int temp85 = (long long int)(temp84 + -64);
    int *temp86 = (int *)temp85;
    *temp86 = (int)(regs[131]);
    label73:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp87 = (long long int)(rbp + -16);
    int *temp88 = (int *)temp87;
    regs[132] = (int)(*temp88);
    long long int temp89 = (long long int)(rbp + -12);
    int *temp90 = (int *)temp89;
    *temp90 = (int)(regs[132]);
    long long int temp91 = (long long int)(rbp + -12);
    int *temp92 = (int *)temp91;
    long long int temp93 = (long long int)*temp92;
    long long int temp94 = (long long int)0;
    int temp95;
    if (temp93 == temp94) temp95 = 0;
    else if (temp93 < temp94) temp95 = -1;
    else temp95 = 1;
    rflags = (long long int)(temp95);
    bool temp96 = (rflags != 0);
    if (temp96) goto label77;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp97 = (long long int)(rbp + -4);
    int *temp98 = (int *)temp97;
    long long int temp99 = (long long int)(rbp + -4);
    int *temp100 = (int *)temp99;
    int temp101 = (int)(*temp100 + 1);
    *temp98 = (int)(temp101);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label82:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp102 = (long long int)(rbp + -68);
    int *temp103 = (int *)temp102;
    regs[93] = (int)(*temp103);
    long long int temp104 = (long long int)(rbp + -4);
    int *temp105 = (int *)temp104;
    long long int temp106 = (long long int)*temp105;
    long long int temp107 = (long long int)regs[93];
    int temp108;
    if (temp106 == temp107) temp108 = 0;
    else if (temp106 < temp107) temp108 = -1;
    else temp108 = 1;
    rflags = (long long int)(temp108);
    bool temp109 = (rflags < 0);
    if (temp109) goto label85;
    // THERE WAS A NOTE HERE
    long long int temp110 = (long long int)symbol3;
    rdi = (long long int)(temp110);
    rax = (char)(0);
    int temp111 = printf((const char *)rdi);
    rax = (long long int)temp111;
    long long int temp112 = (long long int)(rbp + -4);
    int *temp113 = (int *)temp112;
    *temp113 = (int)(0);
    goto label104;
    // THERE WAS A BARRIER HERE
    label107:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp114 = (long long int)(rbp + -4);
    int *temp115 = (int *)temp114;
    regs[134] = (int)(*temp115);
    regs[133] = (long long int)(regs[134]);
    long long int temp116 = (long long int)(regs[133] * 4);
    long long int temp117 = (long long int)(temp116 + rbp);
    long long int temp118 = (long long int)(temp117 + -64);
    int *temp119 = (int *)temp118;
    regs[94] = (int)(*temp119);
    rsi = (int)(regs[94]);
    long long int temp120 = (long long int)symbol4;
    rdi = (long long int)(temp120);
    rax = (char)(0);
    int temp121 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp121;
    // PARALLEL COMMAND BEGIN
    long long int temp122 = (long long int)(rbp + -4);
    int *temp123 = (int *)temp122;
    long long int temp124 = (long long int)(rbp + -4);
    int *temp125 = (int *)temp124;
    int temp126 = (int)(*temp125 + 1);
    *temp123 = (int)(temp126);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label104:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp127 = (long long int)(rbp + -68);
    int *temp128 = (int *)temp127;
    regs[95] = (int)(*temp128);
    long long int temp129 = (long long int)(rbp + -4);
    int *temp130 = (int *)temp129;
    long long int temp131 = (long long int)*temp130;
    long long int temp132 = (long long int)regs[95];
    int temp133;
    if (temp131 == temp132) temp133 = 0;
    else if (temp131 < temp132) temp133 = -1;
    else temp133 = 1;
    rflags = (long long int)(temp133);
    bool temp134 = (rflags < 0);
    if (temp134) goto label107;
    // THERE WAS A NOTE HERE
    long long int temp135 = (long long int)(rbp + -68);
    int *temp136 = (int *)temp135;
    regs[96] = (int)(*temp136);
    // PARALLEL COMMAND BEGIN
    int temp137 = (int)(regs[96] + -1);
    regs[135] = (int)(temp137);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp138 = (long long int)(rbp + -8);
    int *temp139 = (int *)temp138;
    *temp139 = (int)(regs[135]);
    goto label188;
    // THERE WAS A BARRIER HERE
    label190:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp140 = (long long int)(rbp + -64);
    int *temp141 = (int *)temp140;
    regs[136] = (int)(*temp141);
    long long int temp142 = (long long int)(rbp + -20);
    int *temp143 = (int *)temp142;
    *temp143 = (int)(regs[136]);
    long long int temp144 = (long long int)(rbp + -8);
    int *temp145 = (int *)temp144;
    regs[138] = (int)(*temp145);
    regs[137] = (long long int)(regs[138]);
    long long int temp146 = (long long int)(regs[137] * 4);
    long long int temp147 = (long long int)(temp146 + rbp);
    long long int temp148 = (long long int)(temp147 + -64);
    int *temp149 = (int *)temp148;
    regs[97] = (int)(*temp149);
    long long int temp150 = (long long int)(rbp + -64);
    int *temp151 = (int *)temp150;
    *temp151 = (int)(regs[97]);
    long long int temp152 = (long long int)(rbp + -8);
    int *temp153 = (int *)temp152;
    regs[140] = (int)(*temp153);
    regs[139] = (long long int)(regs[140]);
    long long int temp154 = (long long int)(rbp + -20);
    int *temp155 = (int *)temp154;
    regs[141] = (int)(*temp155);
    long long int temp156 = (long long int)(regs[139] * 4);
    long long int temp157 = (long long int)(temp156 + rbp);
    long long int temp158 = (long long int)(temp157 + -64);
    int *temp159 = (int *)temp158;
    *temp159 = (int)(regs[141]);
    long long int temp160 = (long long int)(rbp + -16);
    int *temp161 = (int *)temp160;
    *temp161 = (int)(0);
    label182:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp162 = (long long int)(rbp + -16);
    int *temp163 = (int *)temp162;
    regs[142] = (int)(*temp163);
    // PARALLEL COMMAND BEGIN
    int temp164 = (int)(regs[142] << 1);
    regs[98] = (int)(temp164);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp165 = (int)(regs[98] + 1);
    regs[143] = (int)(temp165);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp166 = (long long int)(rbp + -12);
    int *temp167 = (int *)temp166;
    *temp167 = (int)(regs[143]);
    long long int temp168 = (long long int)(rbp + -12);
    int *temp169 = (int *)temp168;
    regs[145] = (int)(*temp169);
    regs[144] = (long long int)(regs[145]);
    long long int temp170 = (long long int)(regs[144] * 4);
    long long int temp171 = (long long int)(temp170 + rbp);
    long long int temp172 = (long long int)(temp171 + -64);
    int *temp173 = (int *)temp172;
    regs[99] = (int)(*temp173);
    long long int temp174 = (long long int)(rbp + -12);
    int *temp175 = (int *)temp174;
    regs[146] = (int)(*temp175);
    // PARALLEL COMMAND BEGIN
    int temp176 = (int)(regs[146] + 1);
    regs[100] = (int)(temp176);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[147] = (long long int)(regs[100]);
    long long int temp177 = (long long int)(regs[147] * 4);
    long long int temp178 = (long long int)(temp177 + rbp);
    long long int temp179 = (long long int)(temp178 + -64);
    int *temp180 = (int *)temp179;
    regs[101] = (int)(*temp180);
    long long int temp181 = (long long int)regs[99];
    long long int temp182 = (long long int)regs[101];
    int temp183;
    if (temp181 == temp182) temp183 = 0;
    else if (temp181 < temp182) temp183 = -1;
    else temp183 = 1;
    rflags = (long long int)(temp183);
    bool temp184 = (rflags >= 0);
    if (temp184) goto label149;
    // THERE WAS A NOTE HERE
    long long int temp185 = (long long int)(rbp + -8);
    int *temp186 = (int *)temp185;
    regs[148] = (int)(*temp186);
    // PARALLEL COMMAND BEGIN
    int temp187 = (int)(regs[148] + -1);
    regs[102] = (int)(temp187);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp188 = (long long int)(rbp + -12);
    int *temp189 = (int *)temp188;
    long long int temp190 = (long long int)*temp189;
    long long int temp191 = (long long int)regs[102];
    int temp192;
    if (temp190 == temp191) temp192 = 0;
    else if (temp190 < temp191) temp192 = -1;
    else temp192 = 1;
    rflags = (long long int)(temp192);
    bool temp193 = (rflags >= 0);
    if (temp193) goto label149;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp194 = (long long int)(rbp + -12);
    int *temp195 = (int *)temp194;
    long long int temp196 = (long long int)(rbp + -12);
    int *temp197 = (int *)temp196;
    int temp198 = (int)(*temp197 + 1);
    *temp195 = (int)(temp198);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label149:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp199 = (long long int)(rbp + -16);
    int *temp200 = (int *)temp199;
    regs[150] = (int)(*temp200);
    regs[149] = (long long int)(regs[150]);
    long long int temp201 = (long long int)(regs[149] * 4);
    long long int temp202 = (long long int)(temp201 + rbp);
    long long int temp203 = (long long int)(temp202 + -64);
    int *temp204 = (int *)temp203;
    regs[103] = (int)(*temp204);
    long long int temp205 = (long long int)(rbp + -12);
    int *temp206 = (int *)temp205;
    regs[152] = (int)(*temp206);
    regs[151] = (long long int)(regs[152]);
    long long int temp207 = (long long int)(regs[151] * 4);
    long long int temp208 = (long long int)(temp207 + rbp);
    long long int temp209 = (long long int)(temp208 + -64);
    int *temp210 = (int *)temp209;
    regs[104] = (int)(*temp210);
    long long int temp211 = (long long int)regs[103];
    long long int temp212 = (long long int)regs[104];
    int temp213;
    if (temp211 == temp212) temp213 = 0;
    else if (temp211 < temp212) temp213 = -1;
    else temp213 = 1;
    rflags = (long long int)(temp213);
    bool temp214 = (rflags >= 0);
    if (temp214) goto label178;
    // THERE WAS A NOTE HERE
    long long int temp215 = (long long int)(rbp + -12);
    int *temp216 = (int *)temp215;
    regs[153] = (int)(*temp216);
    long long int temp217 = (long long int)(rbp + -8);
    int *temp218 = (int *)temp217;
    long long int temp219 = (long long int)regs[153];
    long long int temp220 = (long long int)*temp218;
    int temp221;
    if (temp219 == temp220) temp221 = 0;
    else if (temp219 < temp220) temp221 = -1;
    else temp221 = 1;
    rflags = (long long int)(temp221);
    bool temp222 = (rflags >= 0);
    if (temp222) goto label178;
    // THERE WAS A NOTE HERE
    long long int temp223 = (long long int)(rbp + -16);
    int *temp224 = (int *)temp223;
    regs[155] = (int)(*temp224);
    regs[154] = (long long int)(regs[155]);
    long long int temp225 = (long long int)(regs[154] * 4);
    long long int temp226 = (long long int)(temp225 + rbp);
    long long int temp227 = (long long int)(temp226 + -64);
    int *temp228 = (int *)temp227;
    regs[156] = (int)(*temp228);
    long long int temp229 = (long long int)(rbp + -20);
    int *temp230 = (int *)temp229;
    *temp230 = (int)(regs[156]);
    long long int temp231 = (long long int)(rbp + -12);
    int *temp232 = (int *)temp231;
    regs[158] = (int)(*temp232);
    regs[157] = (long long int)(regs[158]);
    long long int temp233 = (long long int)(regs[157] * 4);
    long long int temp234 = (long long int)(temp233 + rbp);
    long long int temp235 = (long long int)(temp234 + -64);
    int *temp236 = (int *)temp235;
    regs[105] = (int)(*temp236);
    long long int temp237 = (long long int)(rbp + -16);
    int *temp238 = (int *)temp237;
    regs[160] = (int)(*temp238);
    regs[159] = (long long int)(regs[160]);
    long long int temp239 = (long long int)(regs[159] * 4);
    long long int temp240 = (long long int)(temp239 + rbp);
    long long int temp241 = (long long int)(temp240 + -64);
    int *temp242 = (int *)temp241;
    *temp242 = (int)(regs[105]);
    long long int temp243 = (long long int)(rbp + -12);
    int *temp244 = (int *)temp243;
    regs[162] = (int)(*temp244);
    regs[161] = (long long int)(regs[162]);
    long long int temp245 = (long long int)(rbp + -20);
    int *temp246 = (int *)temp245;
    regs[163] = (int)(*temp246);
    long long int temp247 = (long long int)(regs[161] * 4);
    long long int temp248 = (long long int)(temp247 + rbp);
    long long int temp249 = (long long int)(temp248 + -64);
    int *temp250 = (int *)temp249;
    *temp250 = (int)(regs[163]);
    label178:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp251 = (long long int)(rbp + -12);
    int *temp252 = (int *)temp251;
    regs[164] = (int)(*temp252);
    long long int temp253 = (long long int)(rbp + -16);
    int *temp254 = (int *)temp253;
    *temp254 = (int)(regs[164]);
    long long int temp255 = (long long int)(rbp + -12);
    int *temp256 = (int *)temp255;
    regs[165] = (int)(*temp256);
    long long int temp257 = (long long int)(rbp + -8);
    int *temp258 = (int *)temp257;
    long long int temp259 = (long long int)regs[165];
    long long int temp260 = (long long int)*temp258;
    int temp261;
    if (temp259 == temp260) temp261 = 0;
    else if (temp259 < temp260) temp261 = -1;
    else temp261 = 1;
    rflags = (long long int)(temp261);
    bool temp262 = (rflags < 0);
    if (temp262) goto label182;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp263 = (long long int)(rbp + -8);
    int *temp264 = (int *)temp263;
    long long int temp265 = (long long int)(rbp + -8);
    int *temp266 = (int *)temp265;
    int temp267 = (int)(*temp266 + -1);
    *temp264 = (int)(temp267);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label188:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp268 = (long long int)(rbp + -8);
    int *temp269 = (int *)temp268;
    long long int temp270 = (long long int)*temp269;
    long long int temp271 = (long long int)0;
    int temp272;
    if (temp270 == temp271) temp272 = 0;
    else if (temp270 < temp271) temp272 = -1;
    else temp272 = 1;
    rflags = (long long int)(temp272);
    bool temp273 = (rflags >= 0);
    if (temp273) goto label190;
    // THERE WAS A NOTE HERE
    long long int temp274 = (long long int)symbol5;
    rdi = (long long int)(temp274);
    rax = (char)(0);
    int temp275 = printf((const char *)rdi);
    rax = (long long int)temp275;
    long long int temp276 = (long long int)(rbp + -4);
    int *temp277 = (int *)temp276;
    *temp277 = (int)(0);
    goto label209;
    // THERE WAS A BARRIER HERE
    label212:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp278 = (long long int)(rbp + -4);
    int *temp279 = (int *)temp278;
    regs[167] = (int)(*temp279);
    regs[166] = (long long int)(regs[167]);
    long long int temp280 = (long long int)(regs[166] * 4);
    long long int temp281 = (long long int)(temp280 + rbp);
    long long int temp282 = (long long int)(temp281 + -64);
    int *temp283 = (int *)temp282;
    regs[106] = (int)(*temp283);
    rsi = (int)(regs[106]);
    long long int temp284 = (long long int)symbol6;
    rdi = (long long int)(temp284);
    rax = (char)(0);
    int temp285 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp285;
    // PARALLEL COMMAND BEGIN
    long long int temp286 = (long long int)(rbp + -4);
    int *temp287 = (int *)temp286;
    long long int temp288 = (long long int)(rbp + -4);
    int *temp289 = (int *)temp288;
    int temp290 = (int)(*temp289 + 1);
    *temp287 = (int)(temp290);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label209:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp291 = (long long int)(rbp + -68);
    int *temp292 = (int *)temp291;
    regs[107] = (int)(*temp292);
    long long int temp293 = (long long int)(rbp + -4);
    int *temp294 = (int *)temp293;
    long long int temp295 = (long long int)*temp294;
    long long int temp296 = (long long int)regs[107];
    int temp297;
    if (temp295 == temp296) temp297 = 0;
    else if (temp295 < temp296) temp297 = -1;
    else temp297 = 1;
    rflags = (long long int)(temp297);
    bool temp298 = (rflags < 0);
    if (temp298) goto label212;
    // THERE WAS A NOTE HERE
    long long int temp299 = (long long int)symbol7;
    rdi = (long long int)(temp299);
    int temp300 = puts(rdi);
    rax = (long long int)temp300;
    return (int)(rax);
}
