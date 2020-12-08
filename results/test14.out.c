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
const char *symbol3 = "%7d";
const char *symbol2 = "%7s";
const char *symbol1 = "INF";
const char *symbol0 = "The following matrix shows the shortest distances between every pair of vertices ";

void printSolution(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -24);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp2 = (long long int)symbol0;
    rdi = (long long int)(temp2);
    int temp3 = puts(rdi);
    rax = (long long int)temp3;
    long long int temp4 = (long long int)(rbp + -4);
    int *temp5 = (int *)temp4;
    *temp5 = (int)(0);
    goto label59;
    // THERE WAS A BARRIER HERE
    label61:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp6 = (long long int)(rbp + -8);
    int *temp7 = (int *)temp6;
    *temp7 = (int)(0);
    goto label50;
    // THERE WAS A BARRIER HERE
    label52:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp8 = (long long int)(rbp + -4);
    int *temp9 = (int *)temp8;
    regs[95] = (int)(*temp9);
    regs[87] = (long long int)(regs[95]);
    // PARALLEL COMMAND BEGIN
    long long int temp10 = (long long int)(regs[87] << 4);
    regs[88] = (long long int)(temp10);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp11 = (long long int)(rbp + -24);
    long long int *temp12 = (long long int *)temp11;
    regs[96] = (long long int)(*temp12);
    // PARALLEL COMMAND BEGIN
    long long int temp13 = (long long int)(regs[88] + regs[96]);
    regs[89] = (long long int)(temp13);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp14 = (long long int)(rbp + -8);
    int *temp15 = (int *)temp14;
    regs[98] = (int)(*temp15);
    regs[97] = (long long int)(regs[98]);
    long long int temp16 = (long long int)(regs[97] * 4);
    long long int temp17 = (long long int)(temp16 + regs[89]);
    int *temp18 = (int *)temp17;
    regs[90] = (int)(*temp18);
    long long int temp19 = (long long int)regs[90];
    long long int temp20 = (long long int)99999;
    int temp21;
    if (temp19 == temp20) temp21 = 0;
    else if (temp19 < temp20) temp21 = -1;
    else temp21 = 1;
    rflags = (long long int)(temp21);
    bool temp22 = (rflags != 0);
    if (temp22) goto label33;
    // THERE WAS A NOTE HERE
    long long int temp23 = (long long int)symbol1;
    rsi = (long long int)(temp23);
    long long int temp24 = (long long int)symbol2;
    rdi = (long long int)(temp24);
    rax = (char)(0);
    int temp25 = printf((const char *)rdi, rsi);
    rax = (long long int)temp25;
    goto label47;
    // THERE WAS A BARRIER HERE
    label33:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp26 = (long long int)(rbp + -4);
    int *temp27 = (int *)temp26;
    regs[99] = (int)(*temp27);
    regs[91] = (long long int)(regs[99]);
    // PARALLEL COMMAND BEGIN
    long long int temp28 = (long long int)(regs[91] << 4);
    regs[92] = (long long int)(temp28);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp29 = (long long int)(rbp + -24);
    long long int *temp30 = (long long int *)temp29;
    regs[100] = (long long int)(*temp30);
    // PARALLEL COMMAND BEGIN
    long long int temp31 = (long long int)(regs[92] + regs[100]);
    regs[93] = (long long int)(temp31);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp32 = (long long int)(rbp + -8);
    int *temp33 = (int *)temp32;
    regs[102] = (int)(*temp33);
    regs[101] = (long long int)(regs[102]);
    long long int temp34 = (long long int)(regs[101] * 4);
    long long int temp35 = (long long int)(temp34 + regs[93]);
    int *temp36 = (int *)temp35;
    regs[94] = (int)(*temp36);
    rsi = (int)(regs[94]);
    long long int temp37 = (long long int)symbol3;
    rdi = (long long int)(temp37);
    rax = (char)(0);
    int temp38 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp38;
    label47:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp39 = (long long int)(rbp + -8);
    int *temp40 = (int *)temp39;
    long long int temp41 = (long long int)(rbp + -8);
    int *temp42 = (int *)temp41;
    int temp43 = (int)(*temp42 + 1);
    *temp40 = (int)(temp43);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label50:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp44 = (long long int)(rbp + -8);
    int *temp45 = (int *)temp44;
    long long int temp46 = (long long int)*temp45;
    long long int temp47 = (long long int)3;
    int temp48;
    if (temp46 == temp47) temp48 = 0;
    else if (temp46 < temp47) temp48 = -1;
    else temp48 = 1;
    rflags = (long long int)(temp48);
    bool temp49 = (rflags <= 0);
    if (temp49) goto label52;
    // THERE WAS A NOTE HERE
    rdi = (int)(10);
    int temp50 = putchar((int)rdi);
    rax = (long long int)temp50;
    // PARALLEL COMMAND BEGIN
    long long int temp51 = (long long int)(rbp + -4);
    int *temp52 = (int *)temp51;
    long long int temp53 = (long long int)(rbp + -4);
    int *temp54 = (int *)temp53;
    int temp55 = (int)(*temp54 + 1);
    *temp52 = (int)(temp55);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label59:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp56 = (long long int)(rbp + -4);
    int *temp57 = (int *)temp56;
    long long int temp58 = (long long int)*temp57;
    long long int temp59 = (long long int)3;
    int temp60;
    if (temp58 == temp59) temp60 = 0;
    else if (temp58 < temp59) temp60 = -1;
    else temp60 = 1;
    rflags = (long long int)(temp60);
    bool temp61 = (rflags <= 0);
    if (temp61) goto label61;
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void floydWarshall(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp62 = (long long int)(rbp + -88);
    long long int *temp63 = (long long int *)temp62;
    *temp63 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp64 = (long long int)(rbp + -4);
    int *temp65 = (int *)temp64;
    *temp65 = (int)(0);
    goto label37;
    // THERE WAS A BARRIER HERE
    label39:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp66 = (long long int)(rbp + -8);
    int *temp67 = (int *)temp66;
    *temp67 = (int)(0);
    goto label30;
    // THERE WAS A BARRIER HERE
    label32:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp68 = (long long int)(rbp + -4);
    int *temp69 = (int *)temp68;
    regs[98] = (int)(*temp69);
    regs[87] = (long long int)(regs[98]);
    // PARALLEL COMMAND BEGIN
    long long int temp70 = (long long int)(regs[87] << 4);
    regs[88] = (long long int)(temp70);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp71 = (long long int)(rbp + -88);
    long long int *temp72 = (long long int *)temp71;
    regs[99] = (long long int)(*temp72);
    // PARALLEL COMMAND BEGIN
    long long int temp73 = (long long int)(regs[88] + regs[99]);
    regs[89] = (long long int)(temp73);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp74 = (long long int)(rbp + -8);
    int *temp75 = (int *)temp74;
    regs[101] = (int)(*temp75);
    regs[100] = (long long int)(regs[101]);
    long long int temp76 = (long long int)(regs[100] * 4);
    long long int temp77 = (long long int)(temp76 + regs[89]);
    int *temp78 = (int *)temp77;
    regs[90] = (int)(*temp78);
    long long int temp79 = (long long int)(rbp + -8);
    int *temp80 = (int *)temp79;
    regs[103] = (int)(*temp80);
    regs[102] = (long long int)(regs[103]);
    long long int temp81 = (long long int)(rbp + -4);
    int *temp82 = (int *)temp81;
    regs[105] = (int)(*temp82);
    regs[104] = (long long int)(regs[105]);
    // PARALLEL COMMAND BEGIN
    long long int temp83 = (long long int)(regs[104] << 2);
    regs[106] = (long long int)(temp83);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp84 = (long long int)(regs[106] + regs[102]);
    regs[107] = (long long int)(temp84);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp85 = (long long int)(regs[107] * 4);
    long long int temp86 = (long long int)(temp85 + rbp);
    long long int temp87 = (long long int)(temp86 + -80);
    int *temp88 = (int *)temp87;
    *temp88 = (int)(regs[90]);
    // PARALLEL COMMAND BEGIN
    long long int temp89 = (long long int)(rbp + -8);
    int *temp90 = (int *)temp89;
    long long int temp91 = (long long int)(rbp + -8);
    int *temp92 = (int *)temp91;
    int temp93 = (int)(*temp92 + 1);
    *temp90 = (int)(temp93);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label30:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp94 = (long long int)(rbp + -8);
    int *temp95 = (int *)temp94;
    long long int temp96 = (long long int)*temp95;
    long long int temp97 = (long long int)3;
    int temp98;
    if (temp96 == temp97) temp98 = 0;
    else if (temp96 < temp97) temp98 = -1;
    else temp98 = 1;
    rflags = (long long int)(temp98);
    bool temp99 = (rflags <= 0);
    if (temp99) goto label32;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp100 = (long long int)(rbp + -4);
    int *temp101 = (int *)temp100;
    long long int temp102 = (long long int)(rbp + -4);
    int *temp103 = (int *)temp102;
    int temp104 = (int)(*temp103 + 1);
    *temp101 = (int)(temp104);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label37:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp105 = (long long int)(rbp + -4);
    int *temp106 = (int *)temp105;
    long long int temp107 = (long long int)*temp106;
    long long int temp108 = (long long int)3;
    int temp109;
    if (temp107 == temp108) temp109 = 0;
    else if (temp107 < temp108) temp109 = -1;
    else temp109 = 1;
    rflags = (long long int)(temp109);
    bool temp110 = (rflags <= 0);
    if (temp110) goto label39;
    // THERE WAS A NOTE HERE
    long long int temp111 = (long long int)(rbp + -12);
    int *temp112 = (int *)temp111;
    *temp112 = (int)(0);
    goto label119;
    // THERE WAS A BARRIER HERE
    label121:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp113 = (long long int)(rbp + -4);
    int *temp114 = (int *)temp113;
    *temp114 = (int)(0);
    goto label112;
    // THERE WAS A BARRIER HERE
    label114:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp115 = (long long int)(rbp + -8);
    int *temp116 = (int *)temp115;
    *temp116 = (int)(0);
    goto label105;
    // THERE WAS A BARRIER HERE
    label107:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp117 = (long long int)(rbp + -12);
    int *temp118 = (int *)temp117;
    regs[109] = (int)(*temp118);
    regs[108] = (long long int)(regs[109]);
    long long int temp119 = (long long int)(rbp + -4);
    int *temp120 = (int *)temp119;
    regs[111] = (int)(*temp120);
    regs[110] = (long long int)(regs[111]);
    // PARALLEL COMMAND BEGIN
    long long int temp121 = (long long int)(regs[110] << 2);
    regs[112] = (long long int)(temp121);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp122 = (long long int)(regs[112] + regs[108]);
    regs[113] = (long long int)(temp122);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp123 = (long long int)(regs[113] * 4);
    long long int temp124 = (long long int)(temp123 + rbp);
    long long int temp125 = (long long int)(temp124 + -80);
    int *temp126 = (int *)temp125;
    regs[91] = (int)(*temp126);
    long long int temp127 = (long long int)(rbp + -8);
    int *temp128 = (int *)temp127;
    regs[115] = (int)(*temp128);
    regs[114] = (long long int)(regs[115]);
    long long int temp129 = (long long int)(rbp + -12);
    int *temp130 = (int *)temp129;
    regs[117] = (int)(*temp130);
    regs[116] = (long long int)(regs[117]);
    // PARALLEL COMMAND BEGIN
    long long int temp131 = (long long int)(regs[116] << 2);
    regs[118] = (long long int)(temp131);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp132 = (long long int)(regs[118] + regs[114]);
    regs[119] = (long long int)(temp132);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp133 = (long long int)(regs[119] * 4);
    long long int temp134 = (long long int)(temp133 + rbp);
    long long int temp135 = (long long int)(temp134 + -80);
    int *temp136 = (int *)temp135;
    regs[92] = (int)(*temp136);
    // PARALLEL COMMAND BEGIN
    int temp137 = (int)(regs[91] + regs[92]);
    regs[93] = (int)(temp137);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp138 = (long long int)(rbp + -8);
    int *temp139 = (int *)temp138;
    regs[121] = (int)(*temp139);
    regs[120] = (long long int)(regs[121]);
    long long int temp140 = (long long int)(rbp + -4);
    int *temp141 = (int *)temp140;
    regs[123] = (int)(*temp141);
    regs[122] = (long long int)(regs[123]);
    // PARALLEL COMMAND BEGIN
    long long int temp142 = (long long int)(regs[122] << 2);
    regs[124] = (long long int)(temp142);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp143 = (long long int)(regs[124] + regs[120]);
    regs[125] = (long long int)(temp143);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp144 = (long long int)(regs[125] * 4);
    long long int temp145 = (long long int)(temp144 + rbp);
    long long int temp146 = (long long int)(temp145 + -80);
    int *temp147 = (int *)temp146;
    regs[94] = (int)(*temp147);
    long long int temp148 = (long long int)regs[93];
    long long int temp149 = (long long int)regs[94];
    int temp150;
    if (temp148 == temp149) temp150 = 0;
    else if (temp148 < temp149) temp150 = -1;
    else temp150 = 1;
    rflags = (long long int)(temp150);
    bool temp151 = (rflags >= 0);
    if (temp151) goto label102;
    // THERE WAS A NOTE HERE
    long long int temp152 = (long long int)(rbp + -12);
    int *temp153 = (int *)temp152;
    regs[127] = (int)(*temp153);
    regs[126] = (long long int)(regs[127]);
    long long int temp154 = (long long int)(rbp + -4);
    int *temp155 = (int *)temp154;
    regs[129] = (int)(*temp155);
    regs[128] = (long long int)(regs[129]);
    // PARALLEL COMMAND BEGIN
    long long int temp156 = (long long int)(regs[128] << 2);
    regs[130] = (long long int)(temp156);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp157 = (long long int)(regs[130] + regs[126]);
    regs[131] = (long long int)(temp157);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp158 = (long long int)(regs[131] * 4);
    long long int temp159 = (long long int)(temp158 + rbp);
    long long int temp160 = (long long int)(temp159 + -80);
    int *temp161 = (int *)temp160;
    regs[95] = (int)(*temp161);
    long long int temp162 = (long long int)(rbp + -8);
    int *temp163 = (int *)temp162;
    regs[133] = (int)(*temp163);
    regs[132] = (long long int)(regs[133]);
    long long int temp164 = (long long int)(rbp + -12);
    int *temp165 = (int *)temp164;
    regs[135] = (int)(*temp165);
    regs[134] = (long long int)(regs[135]);
    // PARALLEL COMMAND BEGIN
    long long int temp166 = (long long int)(regs[134] << 2);
    regs[136] = (long long int)(temp166);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp167 = (long long int)(regs[136] + regs[132]);
    regs[137] = (long long int)(temp167);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp168 = (long long int)(regs[137] * 4);
    long long int temp169 = (long long int)(temp168 + rbp);
    long long int temp170 = (long long int)(temp169 + -80);
    int *temp171 = (int *)temp170;
    regs[96] = (int)(*temp171);
    // PARALLEL COMMAND BEGIN
    int temp172 = (int)(regs[95] + regs[96]);
    regs[97] = (int)(temp172);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp173 = (long long int)(rbp + -8);
    int *temp174 = (int *)temp173;
    regs[139] = (int)(*temp174);
    regs[138] = (long long int)(regs[139]);
    long long int temp175 = (long long int)(rbp + -4);
    int *temp176 = (int *)temp175;
    regs[141] = (int)(*temp176);
    regs[140] = (long long int)(regs[141]);
    // PARALLEL COMMAND BEGIN
    long long int temp177 = (long long int)(regs[140] << 2);
    regs[142] = (long long int)(temp177);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    long long int temp178 = (long long int)(regs[142] + regs[138]);
    regs[143] = (long long int)(temp178);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp179 = (long long int)(regs[143] * 4);
    long long int temp180 = (long long int)(temp179 + rbp);
    long long int temp181 = (long long int)(temp180 + -80);
    int *temp182 = (int *)temp181;
    *temp182 = (int)(regs[97]);
    label102:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp183 = (long long int)(rbp + -8);
    int *temp184 = (int *)temp183;
    long long int temp185 = (long long int)(rbp + -8);
    int *temp186 = (int *)temp185;
    int temp187 = (int)(*temp186 + 1);
    *temp184 = (int)(temp187);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label105:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp188 = (long long int)(rbp + -8);
    int *temp189 = (int *)temp188;
    long long int temp190 = (long long int)*temp189;
    long long int temp191 = (long long int)3;
    int temp192;
    if (temp190 == temp191) temp192 = 0;
    else if (temp190 < temp191) temp192 = -1;
    else temp192 = 1;
    rflags = (long long int)(temp192);
    bool temp193 = (rflags <= 0);
    if (temp193) goto label107;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp194 = (long long int)(rbp + -4);
    int *temp195 = (int *)temp194;
    long long int temp196 = (long long int)(rbp + -4);
    int *temp197 = (int *)temp196;
    int temp198 = (int)(*temp197 + 1);
    *temp195 = (int)(temp198);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label112:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp199 = (long long int)(rbp + -4);
    int *temp200 = (int *)temp199;
    long long int temp201 = (long long int)*temp200;
    long long int temp202 = (long long int)3;
    int temp203;
    if (temp201 == temp202) temp203 = 0;
    else if (temp201 < temp202) temp203 = -1;
    else temp203 = 1;
    rflags = (long long int)(temp203);
    bool temp204 = (rflags <= 0);
    if (temp204) goto label114;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp205 = (long long int)(rbp + -12);
    int *temp206 = (int *)temp205;
    long long int temp207 = (long long int)(rbp + -12);
    int *temp208 = (int *)temp207;
    int temp209 = (int)(*temp208 + 1);
    *temp206 = (int)(temp209);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label119:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp210 = (long long int)(rbp + -12);
    int *temp211 = (int *)temp210;
    long long int temp212 = (long long int)*temp211;
    long long int temp213 = (long long int)3;
    int temp214;
    if (temp212 == temp213) temp214 = 0;
    else if (temp212 < temp213) temp214 = -1;
    else temp214 = 1;
    rflags = (long long int)(temp214);
    bool temp215 = (rflags <= 0);
    if (temp215) goto label121;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp216 = (long long int)(rbp + -80);
    regs[144] = (long long int)(temp216);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdi = (long long int)(regs[144]);
    printSolution(rdi);
    rbp += 0x100;
    rsp += 0x100;
}
int main(int argc, char **argv) {
    rbp = (long long int)malloc(0x1000000) + 0x1000000;
    rsp = rbp - 0x50;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp217 = (long long int)(rbp + -64);
    int *temp218 = (int *)temp217;
    *temp218 = (int)(0);
    long long int temp219 = (long long int)(rbp + -60);
    int *temp220 = (int *)temp219;
    *temp220 = (int)(5);
    long long int temp221 = (long long int)(rbp + -56);
    int *temp222 = (int *)temp221;
    *temp222 = (int)(99999);
    long long int temp223 = (long long int)(rbp + -52);
    int *temp224 = (int *)temp223;
    *temp224 = (int)(10);
    long long int temp225 = (long long int)(rbp + -48);
    int *temp226 = (int *)temp225;
    *temp226 = (int)(99999);
    long long int temp227 = (long long int)(rbp + -44);
    int *temp228 = (int *)temp227;
    *temp228 = (int)(0);
    long long int temp229 = (long long int)(rbp + -40);
    int *temp230 = (int *)temp229;
    *temp230 = (int)(3);
    long long int temp231 = (long long int)(rbp + -36);
    int *temp232 = (int *)temp231;
    *temp232 = (int)(99999);
    long long int temp233 = (long long int)(rbp + -32);
    int *temp234 = (int *)temp233;
    *temp234 = (int)(99999);
    long long int temp235 = (long long int)(rbp + -28);
    int *temp236 = (int *)temp235;
    *temp236 = (int)(99999);
    long long int temp237 = (long long int)(rbp + -24);
    int *temp238 = (int *)temp237;
    *temp238 = (int)(0);
    long long int temp239 = (long long int)(rbp + -20);
    int *temp240 = (int *)temp239;
    *temp240 = (int)(1);
    long long int temp241 = (long long int)(rbp + -16);
    int *temp242 = (int *)temp241;
    *temp242 = (int)(99999);
    long long int temp243 = (long long int)(rbp + -12);
    int *temp244 = (int *)temp243;
    *temp244 = (int)(99999);
    long long int temp245 = (long long int)(rbp + -8);
    int *temp246 = (int *)temp245;
    *temp246 = (int)(99999);
    long long int temp247 = (long long int)(rbp + -4);
    int *temp248 = (int *)temp247;
    *temp248 = (int)(0);
    // PARALLEL COMMAND BEGIN
    long long int temp249 = (long long int)(rbp + -64);
    regs[89] = (long long int)(temp249);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rdi = (long long int)(regs[89]);
    floydWarshall(rdi);
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    rax = (int)(regs[88]);
    return (int)(rax);
}
