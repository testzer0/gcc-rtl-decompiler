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
const char *symbol11 = "Root - %d\n";
const char *symbol10 = "\n";
const char *symbol9 = "\nInorder Traversel - ";
const char *symbol8 = "\n\nPlease Enter A Value to Delete - ";
const char *symbol7 = "\nSuccessfully Inserted %d in the tree\n\n";
const char *symbol6 = "\n\nPlease Enter A Value to insert - ";
const char *symbol5 = "%d";
const char *symbol4 = "1 - Input\n2 - Delete\n3 - Inorder Traversel\n0 - Quit\n\nPlease Enter the Choice - ";
const char *symbol3 = "%d ";
const char *symbol2 = "%d c-%d ";
const char *symbol1 = "Node Not Found!!!";
const char *symbol0 = "\nroot - %d - %d\n";

long long int newNode(int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -20);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(rdi);
    long long int temp2 = (long long int)(rbp + -32);
    long long int *temp3 = (long long int *)temp2;
    *temp3 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    rdi = (long long int)(40);
    long long int temp4 = malloc(rdi);
    rax = (long long int)temp4;
    regs[89] = (long long int)(rax);
    long long int temp5 = (long long int)(rbp + -8);
    long long int *temp6 = (long long int *)temp5;
    *temp6 = (long long int)(regs[89]);
    long long int temp7 = (long long int)(rbp + -8);
    long long int *temp8 = (long long int *)temp7;
    regs[90] = (long long int)(*temp8);
    long long int temp9 = (long long int)(rbp + -20);
    int *temp10 = (int *)temp9;
    regs[91] = (int)(*temp10);
    int *temp11 = (int *)regs[90];
    *temp11 = (int)(regs[91]);
    long long int temp12 = (long long int)(rbp + -8);
    long long int *temp13 = (long long int *)temp12;
    regs[92] = (long long int)(*temp13);
    long long int temp14 = (long long int)(rbp + -32);
    long long int *temp15 = (long long int *)temp14;
    regs[93] = (long long int)(*temp15);
    long long int temp16 = (long long int)(regs[92] + 8);
    long long int *temp17 = (long long int *)temp16;
    *temp17 = (long long int)(regs[93]);
    long long int temp18 = (long long int)(rbp + -8);
    long long int *temp19 = (long long int *)temp18;
    regs[94] = (long long int)(*temp19);
    long long int temp20 = (long long int)(regs[94] + 16);
    long long int *temp21 = (long long int *)temp20;
    *temp21 = (long long int)(0);
    long long int temp22 = (long long int)(rbp + -8);
    long long int *temp23 = (long long int *)temp22;
    regs[95] = (long long int)(*temp23);
    long long int temp24 = (long long int)(regs[95] + 24);
    long long int *temp25 = (long long int *)temp24;
    *temp25 = (long long int)(0);
    long long int temp26 = (long long int)(rbp + -8);
    long long int *temp27 = (long long int *)temp26;
    regs[96] = (long long int)(*temp27);
    long long int temp28 = (long long int)(regs[96] + 32);
    int *temp29 = (int *)temp28;
    *temp29 = (int)(1);
    long long int temp30 = (long long int)(rbp + -8);
    long long int *temp31 = (long long int *)temp30;
    regs[87] = (long long int)(*temp31);
    regs[88] = (long long int)(regs[87]);
    rax = (long long int)(regs[88]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
long long int leftRotate(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp32 = (long long int)(rbp + -24);
    long long int *temp33 = (long long int *)temp32;
    *temp33 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp34 = (long long int)(rbp + -24);
    long long int *temp35 = (long long int *)temp34;
    regs[93] = (long long int)(*temp35);
    long long int temp36 = (long long int)(regs[93] + 8);
    long long int *temp37 = (long long int *)temp36;
    regs[94] = (long long int)(*temp37);
    long long int temp38 = (long long int)(rbp + -8);
    long long int *temp39 = (long long int *)temp38;
    *temp39 = (long long int)(regs[94]);
    long long int temp40 = (long long int)(rbp + -8);
    long long int *temp41 = (long long int *)temp40;
    regs[95] = (long long int)(*temp41);
    long long int temp42 = (long long int)(regs[95] + 8);
    long long int *temp43 = (long long int *)temp42;
    regs[96] = (long long int)(*temp43);
    long long int temp44 = (long long int)(rbp + -16);
    long long int *temp45 = (long long int *)temp44;
    *temp45 = (long long int)(regs[96]);
    long long int temp46 = (long long int)(rbp + -24);
    long long int *temp47 = (long long int *)temp46;
    regs[97] = (long long int)(*temp47);
    long long int temp48 = (long long int)(regs[97] + 16);
    long long int *temp49 = (long long int *)temp48;
    regs[87] = (long long int)(*temp49);
    long long int temp50 = (long long int)(rbp + -8);
    long long int *temp51 = (long long int *)temp50;
    regs[98] = (long long int)(*temp51);
    long long int temp52 = (long long int)(regs[98] + 24);
    long long int *temp53 = (long long int *)temp52;
    *temp53 = (long long int)(regs[87]);
    long long int temp54 = (long long int)(rbp + -24);
    long long int *temp55 = (long long int *)temp54;
    regs[99] = (long long int)(*temp55);
    long long int temp56 = (long long int)(regs[99] + 16);
    long long int *temp57 = (long long int *)temp56;
    regs[88] = (long long int)(*temp57);
    long long int temp58 = (long long int)regs[88];
    long long int temp59 = (long long int)0;
    int temp60;
    if (temp58 == temp59) temp60 = 0;
    else if (temp58 < temp59) temp60 = -1;
    else temp60 = 1;
    rflags = (long long int)(temp60);
    bool temp61 = (rflags == 0);
    if (temp61) goto label25;
    // THERE WAS A NOTE HERE
    long long int temp62 = (long long int)(rbp + -24);
    long long int *temp63 = (long long int *)temp62;
    regs[100] = (long long int)(*temp63);
    long long int temp64 = (long long int)(regs[100] + 16);
    long long int *temp65 = (long long int *)temp64;
    regs[89] = (long long int)(*temp65);
    long long int temp66 = (long long int)(rbp + -8);
    long long int *temp67 = (long long int *)temp66;
    regs[101] = (long long int)(*temp67);
    long long int temp68 = (long long int)(regs[89] + 8);
    long long int *temp69 = (long long int *)temp68;
    *temp69 = (long long int)(regs[101]);
    label25:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp70 = (long long int)(rbp + -24);
    long long int *temp71 = (long long int *)temp70;
    regs[102] = (long long int)(*temp71);
    long long int temp72 = (long long int)(rbp + -16);
    long long int *temp73 = (long long int *)temp72;
    regs[103] = (long long int)(*temp73);
    long long int temp74 = (long long int)(regs[102] + 8);
    long long int *temp75 = (long long int *)temp74;
    *temp75 = (long long int)(regs[103]);
    long long int temp76 = (long long int)(rbp + -8);
    long long int *temp77 = (long long int *)temp76;
    regs[104] = (long long int)(*temp77);
    long long int temp78 = (long long int)(rbp + -24);
    long long int *temp79 = (long long int *)temp78;
    regs[105] = (long long int)(*temp79);
    long long int temp80 = (long long int)(regs[104] + 8);
    long long int *temp81 = (long long int *)temp80;
    *temp81 = (long long int)(regs[105]);
    long long int temp82 = (long long int)(rbp + -24);
    long long int *temp83 = (long long int *)temp82;
    regs[106] = (long long int)(*temp83);
    long long int temp84 = (long long int)(rbp + -8);
    long long int *temp85 = (long long int *)temp84;
    regs[107] = (long long int)(*temp85);
    long long int temp86 = (long long int)(regs[106] + 16);
    long long int *temp87 = (long long int *)temp86;
    *temp87 = (long long int)(regs[107]);
    long long int temp88 = (long long int)(rbp + -16);
    long long int *temp89 = (long long int *)temp88;
    long long int temp90 = (long long int)*temp89;
    long long int temp91 = (long long int)0;
    int temp92;
    if (temp90 == temp91) temp92 = 0;
    else if (temp90 < temp91) temp92 = -1;
    else temp92 = 1;
    rflags = (long long int)(temp92);
    bool temp93 = (rflags == 0);
    if (temp93) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp94 = (long long int)(rbp + -16);
    long long int *temp95 = (long long int *)temp94;
    regs[108] = (long long int)(*temp95);
    long long int temp96 = (long long int)(regs[108] + 24);
    long long int *temp97 = (long long int *)temp96;
    regs[90] = (long long int)(*temp97);
    long long int temp98 = (long long int)(rbp + -8);
    long long int *temp99 = (long long int *)temp98;
    long long int temp100 = (long long int)*temp99;
    long long int temp101 = (long long int)regs[90];
    int temp102;
    if (temp100 == temp101) temp102 = 0;
    else if (temp100 < temp101) temp102 = -1;
    else temp102 = 1;
    rflags = (long long int)(temp102);
    bool temp103 = (rflags != 0);
    if (temp103) goto label49;
    // THERE WAS A NOTE HERE
    long long int temp104 = (long long int)(rbp + -16);
    long long int *temp105 = (long long int *)temp104;
    regs[109] = (long long int)(*temp105);
    long long int temp106 = (long long int)(rbp + -24);
    long long int *temp107 = (long long int *)temp106;
    regs[110] = (long long int)(*temp107);
    long long int temp108 = (long long int)(regs[109] + 24);
    long long int *temp109 = (long long int *)temp108;
    *temp109 = (long long int)(regs[110]);
    goto label54;
    // THERE WAS A BARRIER HERE
    label49:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp110 = (long long int)(rbp + -16);
    long long int *temp111 = (long long int *)temp110;
    regs[111] = (long long int)(*temp111);
    long long int temp112 = (long long int)(rbp + -24);
    long long int *temp113 = (long long int *)temp112;
    regs[112] = (long long int)(*temp113);
    long long int temp114 = (long long int)(regs[111] + 16);
    long long int *temp115 = (long long int *)temp114;
    *temp115 = (long long int)(regs[112]);
    label54:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp116 = (long long int)(rbp + -24);
    long long int *temp117 = (long long int *)temp116;
    regs[91] = (long long int)(*temp117);
    regs[92] = (long long int)(regs[91]);
    rax = (long long int)(regs[92]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
long long int rightRotate(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp118 = (long long int)(rbp + -24);
    long long int *temp119 = (long long int *)temp118;
    *temp119 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp120 = (long long int)(rbp + -24);
    long long int *temp121 = (long long int *)temp120;
    regs[93] = (long long int)(*temp121);
    long long int temp122 = (long long int)(regs[93] + 8);
    long long int *temp123 = (long long int *)temp122;
    regs[94] = (long long int)(*temp123);
    long long int temp124 = (long long int)(rbp + -8);
    long long int *temp125 = (long long int *)temp124;
    *temp125 = (long long int)(regs[94]);
    long long int temp126 = (long long int)(rbp + -8);
    long long int *temp127 = (long long int *)temp126;
    regs[95] = (long long int)(*temp127);
    long long int temp128 = (long long int)(regs[95] + 8);
    long long int *temp129 = (long long int *)temp128;
    regs[96] = (long long int)(*temp129);
    long long int temp130 = (long long int)(rbp + -16);
    long long int *temp131 = (long long int *)temp130;
    *temp131 = (long long int)(regs[96]);
    long long int temp132 = (long long int)(rbp + -24);
    long long int *temp133 = (long long int *)temp132;
    regs[97] = (long long int)(*temp133);
    long long int temp134 = (long long int)(regs[97] + 24);
    long long int *temp135 = (long long int *)temp134;
    regs[87] = (long long int)(*temp135);
    long long int temp136 = (long long int)(rbp + -8);
    long long int *temp137 = (long long int *)temp136;
    regs[98] = (long long int)(*temp137);
    long long int temp138 = (long long int)(regs[98] + 16);
    long long int *temp139 = (long long int *)temp138;
    *temp139 = (long long int)(regs[87]);
    long long int temp140 = (long long int)(rbp + -24);
    long long int *temp141 = (long long int *)temp140;
    regs[99] = (long long int)(*temp141);
    long long int temp142 = (long long int)(regs[99] + 24);
    long long int *temp143 = (long long int *)temp142;
    regs[88] = (long long int)(*temp143);
    long long int temp144 = (long long int)regs[88];
    long long int temp145 = (long long int)0;
    int temp146;
    if (temp144 == temp145) temp146 = 0;
    else if (temp144 < temp145) temp146 = -1;
    else temp146 = 1;
    rflags = (long long int)(temp146);
    bool temp147 = (rflags == 0);
    if (temp147) goto label25;
    // THERE WAS A NOTE HERE
    long long int temp148 = (long long int)(rbp + -24);
    long long int *temp149 = (long long int *)temp148;
    regs[100] = (long long int)(*temp149);
    long long int temp150 = (long long int)(regs[100] + 24);
    long long int *temp151 = (long long int *)temp150;
    regs[89] = (long long int)(*temp151);
    long long int temp152 = (long long int)(rbp + -8);
    long long int *temp153 = (long long int *)temp152;
    regs[101] = (long long int)(*temp153);
    long long int temp154 = (long long int)(regs[89] + 8);
    long long int *temp155 = (long long int *)temp154;
    *temp155 = (long long int)(regs[101]);
    label25:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp156 = (long long int)(rbp + -24);
    long long int *temp157 = (long long int *)temp156;
    regs[102] = (long long int)(*temp157);
    long long int temp158 = (long long int)(rbp + -16);
    long long int *temp159 = (long long int *)temp158;
    regs[103] = (long long int)(*temp159);
    long long int temp160 = (long long int)(regs[102] + 8);
    long long int *temp161 = (long long int *)temp160;
    *temp161 = (long long int)(regs[103]);
    long long int temp162 = (long long int)(rbp + -8);
    long long int *temp163 = (long long int *)temp162;
    regs[104] = (long long int)(*temp163);
    long long int temp164 = (long long int)(rbp + -24);
    long long int *temp165 = (long long int *)temp164;
    regs[105] = (long long int)(*temp165);
    long long int temp166 = (long long int)(regs[104] + 8);
    long long int *temp167 = (long long int *)temp166;
    *temp167 = (long long int)(regs[105]);
    long long int temp168 = (long long int)(rbp + -24);
    long long int *temp169 = (long long int *)temp168;
    regs[106] = (long long int)(*temp169);
    long long int temp170 = (long long int)(rbp + -8);
    long long int *temp171 = (long long int *)temp170;
    regs[107] = (long long int)(*temp171);
    long long int temp172 = (long long int)(regs[106] + 24);
    long long int *temp173 = (long long int *)temp172;
    *temp173 = (long long int)(regs[107]);
    long long int temp174 = (long long int)(rbp + -16);
    long long int *temp175 = (long long int *)temp174;
    long long int temp176 = (long long int)*temp175;
    long long int temp177 = (long long int)0;
    int temp178;
    if (temp176 == temp177) temp178 = 0;
    else if (temp176 < temp177) temp178 = -1;
    else temp178 = 1;
    rflags = (long long int)(temp178);
    bool temp179 = (rflags == 0);
    if (temp179) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp180 = (long long int)(rbp + -16);
    long long int *temp181 = (long long int *)temp180;
    regs[108] = (long long int)(*temp181);
    long long int temp182 = (long long int)(regs[108] + 24);
    long long int *temp183 = (long long int *)temp182;
    regs[90] = (long long int)(*temp183);
    long long int temp184 = (long long int)(rbp + -8);
    long long int *temp185 = (long long int *)temp184;
    long long int temp186 = (long long int)*temp185;
    long long int temp187 = (long long int)regs[90];
    int temp188;
    if (temp186 == temp187) temp188 = 0;
    else if (temp186 < temp187) temp188 = -1;
    else temp188 = 1;
    rflags = (long long int)(temp188);
    bool temp189 = (rflags != 0);
    if (temp189) goto label49;
    // THERE WAS A NOTE HERE
    long long int temp190 = (long long int)(rbp + -16);
    long long int *temp191 = (long long int *)temp190;
    regs[109] = (long long int)(*temp191);
    long long int temp192 = (long long int)(rbp + -24);
    long long int *temp193 = (long long int *)temp192;
    regs[110] = (long long int)(*temp193);
    long long int temp194 = (long long int)(regs[109] + 24);
    long long int *temp195 = (long long int *)temp194;
    *temp195 = (long long int)(regs[110]);
    goto label54;
    // THERE WAS A BARRIER HERE
    label49:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp196 = (long long int)(rbp + -16);
    long long int *temp197 = (long long int *)temp196;
    regs[111] = (long long int)(*temp197);
    long long int temp198 = (long long int)(rbp + -24);
    long long int *temp199 = (long long int *)temp198;
    regs[112] = (long long int)(*temp199);
    long long int temp200 = (long long int)(regs[111] + 16);
    long long int *temp201 = (long long int *)temp200;
    *temp201 = (long long int)(regs[112]);
    label54:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp202 = (long long int)(rbp + -24);
    long long int *temp203 = (long long int *)temp202;
    regs[91] = (long long int)(*temp203);
    regs[92] = (long long int)(regs[91]);
    rax = (long long int)(regs[92]);
    rbp += 0x100;
    rsp += 0x100;
    return (long long int)(rax);
}
void checkNode(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp204 = (long long int)(rbp + -40);
    long long int *temp205 = (long long int *)temp204;
    *temp205 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp206 = (long long int)(rbp + -40);
    long long int *temp207 = (long long int *)temp206;
    long long int temp208 = (long long int)*temp207;
    long long int temp209 = (long long int)0;
    int temp210;
    if (temp208 == temp209) temp210 = 0;
    else if (temp208 < temp209) temp210 = -1;
    else temp210 = 1;
    rflags = (long long int)(temp210);
    bool temp211 = (rflags == 0);
    if (temp211) goto label374;
    // THERE WAS A NOTE HERE
    long long int temp212 = (long long int)(rbp + -40);
    long long int *temp213 = (long long int *)temp212;
    regs[128] = (long long int)(*temp213);
    long long int temp214 = (long long int)(regs[128] + 8);
    long long int *temp215 = (long long int *)temp214;
    regs[87] = (long long int)(*temp215);
    long long int temp216 = (long long int)regs[87];
    long long int temp217 = (long long int)0;
    int temp218;
    if (temp216 == temp217) temp218 = 0;
    else if (temp216 < temp217) temp218 = -1;
    else temp218 = 1;
    rflags = (long long int)(temp218);
    bool temp219 = (rflags != 0);
    if (temp219) goto label17;
    // THERE WAS A NOTE HERE
    goto label374;
    // THERE WAS A BARRIER HERE
    label17:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp220 = (long long int)(rbp + -40);
    long long int *temp221 = (long long int *)temp220;
    regs[129] = (long long int)(*temp221);
    long long int temp222 = (long long int)(rbp + -8);
    long long int *temp223 = (long long int *)temp222;
    *temp223 = (long long int)(regs[129]);
    long long int temp224 = (long long int)(rbp + -40);
    long long int *temp225 = (long long int *)temp224;
    regs[130] = (long long int)(*temp225);
    long long int temp226 = (long long int)(regs[130] + 32);
    int *temp227 = (int *)temp226;
    regs[88] = (int)(*temp227);
    long long int temp228 = (long long int)regs[88];
    long long int temp229 = (long long int)0;
    int temp230;
    if (temp228 == temp229) temp230 = 0;
    else if (temp228 < temp229) temp230 = -1;
    else temp230 = 1;
    rflags = (long long int)(temp230);
    bool temp231 = (rflags == 0);
    if (temp231) goto label374;
    // THERE WAS A NOTE HERE
    long long int temp232 = (long long int)(rbp + -40);
    long long int *temp233 = (long long int *)temp232;
    regs[131] = (long long int)(*temp233);
    long long int temp234 = (long long int)(regs[131] + 8);
    long long int *temp235 = (long long int *)temp234;
    regs[89] = (long long int)(*temp235);
    long long int temp236 = (long long int)(regs[89] + 32);
    int *temp237 = (int *)temp236;
    regs[90] = (int)(*temp237);
    long long int temp238 = (long long int)regs[90];
    long long int temp239 = (long long int)0;
    int temp240;
    if (temp238 == temp239) temp240 = 0;
    else if (temp238 < temp239) temp240 = -1;
    else temp240 = 1;
    rflags = (long long int)(temp240);
    bool temp241 = (rflags != 0);
    if (temp241) goto label35;
    // THERE WAS A NOTE HERE
    goto label374;
    // THERE WAS A BARRIER HERE
    label35:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp242 = (long long int)(rbp + -40);
    long long int *temp243 = (long long int *)temp242;
    regs[132] = (long long int)(*temp243);
    long long int temp244 = (long long int)(regs[132] + 8);
    long long int *temp245 = (long long int *)temp244;
    regs[133] = (long long int)(*temp245);
    long long int temp246 = (long long int)(rbp + -16);
    long long int *temp247 = (long long int *)temp246;
    *temp247 = (long long int)(regs[133]);
    long long int temp248 = (long long int)(rbp + -16);
    long long int *temp249 = (long long int *)temp248;
    regs[134] = (long long int)(*temp249);
    long long int temp250 = (long long int)(regs[134] + 8);
    long long int *temp251 = (long long int *)temp250;
    regs[135] = (long long int)(*temp251);
    long long int temp252 = (long long int)(rbp + -24);
    long long int *temp253 = (long long int *)temp252;
    *temp253 = (long long int)(regs[135]);
    long long int temp254 = (long long int)(rbp + -24);
    long long int *temp255 = (long long int *)temp254;
    long long int temp256 = (long long int)*temp255;
    long long int temp257 = (long long int)0;
    int temp258;
    if (temp256 == temp257) temp258 = 0;
    else if (temp256 < temp257) temp258 = -1;
    else temp258 = 1;
    rflags = (long long int)(temp258);
    bool temp259 = (rflags != 0);
    if (temp259) goto label50;
    // THERE WAS A NOTE HERE
    long long int temp260 = (long long int)(rbp + -16);
    long long int *temp261 = (long long int *)temp260;
    regs[136] = (long long int)(*temp261);
    long long int temp262 = (long long int)(regs[136] + 32);
    int *temp263 = (int *)temp262;
    *temp263 = (int)(0);
    goto label374;
    // THERE WAS A BARRIER HERE
    label50:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp264 = (long long int)(rbp + -24);
    long long int *temp265 = (long long int *)temp264;
    regs[137] = (long long int)(*temp265);
    long long int temp266 = (long long int)(regs[137] + 24);
    long long int *temp267 = (long long int *)temp266;
    regs[91] = (long long int)(*temp267);
    long long int temp268 = (long long int)regs[91];
    long long int temp269 = (long long int)0;
    int temp270;
    if (temp268 == temp269) temp270 = 0;
    else if (temp268 < temp269) temp270 = -1;
    else temp270 = 1;
    rflags = (long long int)(temp270);
    bool temp271 = (rflags == 0);
    if (temp271) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp272 = (long long int)(rbp + -24);
    long long int *temp273 = (long long int *)temp272;
    regs[138] = (long long int)(*temp273);
    long long int temp274 = (long long int)(regs[138] + 24);
    long long int *temp275 = (long long int *)temp274;
    regs[92] = (long long int)(*temp275);
    long long int temp276 = (long long int)(regs[92] + 32);
    int *temp277 = (int *)temp276;
    regs[93] = (int)(*temp277);
    long long int temp278 = (long long int)regs[93];
    long long int temp279 = (long long int)1;
    int temp280;
    if (temp278 == temp279) temp280 = 0;
    else if (temp278 < temp279) temp280 = -1;
    else temp280 = 1;
    rflags = (long long int)(temp280);
    bool temp281 = (rflags != 0);
    if (temp281) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp282 = (long long int)(rbp + -24);
    long long int *temp283 = (long long int *)temp282;
    regs[139] = (long long int)(*temp283);
    long long int temp284 = (long long int)(regs[139] + 16);
    long long int *temp285 = (long long int *)temp284;
    regs[94] = (long long int)(*temp285);
    long long int temp286 = (long long int)regs[94];
    long long int temp287 = (long long int)0;
    int temp288;
    if (temp286 == temp287) temp288 = 0;
    else if (temp286 < temp287) temp288 = -1;
    else temp288 = 1;
    rflags = (long long int)(temp288);
    bool temp289 = (rflags == 0);
    if (temp289) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp290 = (long long int)(rbp + -24);
    long long int *temp291 = (long long int *)temp290;
    regs[140] = (long long int)(*temp291);
    long long int temp292 = (long long int)(regs[140] + 16);
    long long int *temp293 = (long long int *)temp292;
    regs[95] = (long long int)(*temp293);
    long long int temp294 = (long long int)(regs[95] + 32);
    int *temp295 = (int *)temp294;
    regs[96] = (int)(*temp295);
    long long int temp296 = (long long int)regs[96];
    long long int temp297 = (long long int)1;
    int temp298;
    if (temp296 == temp297) temp298 = 0;
    else if (temp296 < temp297) temp298 = -1;
    else temp298 = 1;
    rflags = (long long int)(temp298);
    bool temp299 = (rflags != 0);
    if (temp299) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp300 = (long long int)(rbp + -24);
    long long int *temp301 = (long long int *)temp300;
    regs[141] = (long long int)(*temp301);
    long long int temp302 = (long long int)(regs[141] + 24);
    long long int *temp303 = (long long int *)temp302;
    regs[97] = (long long int)(*temp303);
    long long int temp304 = (long long int)(regs[97] + 32);
    int *temp305 = (int *)temp304;
    *temp305 = (int)(0);
    long long int temp306 = (long long int)(rbp + -24);
    long long int *temp307 = (long long int *)temp306;
    regs[142] = (long long int)(*temp307);
    long long int temp308 = (long long int)(regs[142] + 16);
    long long int *temp309 = (long long int *)temp308;
    regs[98] = (long long int)(*temp309);
    long long int temp310 = (long long int)(regs[98] + 32);
    int *temp311 = (int *)temp310;
    *temp311 = (int)(0);
    long long int temp312 = (long long int)(rbp + -24);
    long long int *temp313 = (long long int *)temp312;
    regs[143] = (long long int)(*temp313);
    long long int temp314 = (long long int)(regs[143] + 32);
    int *temp315 = (int *)temp314;
    *temp315 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label84:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp316 = (long long int)(rbp + -24);
    long long int *temp317 = (long long int *)temp316;
    regs[144] = (long long int)(*temp317);
    long long int temp318 = (long long int)(regs[144] + 8);
    long long int *temp319 = (long long int *)temp318;
    regs[145] = (long long int)(*temp319);
    long long int temp320 = (long long int)(rbp + -32);
    long long int *temp321 = (long long int *)temp320;
    *temp321 = (long long int)(regs[145]);
    long long int temp322 = (long long int)(rbp + -24);
    long long int *temp323 = (long long int *)temp322;
    regs[146] = (long long int)(*temp323);
    long long int temp324 = (long long int)(regs[146] + 24);
    long long int *temp325 = (long long int *)temp324;
    regs[99] = (long long int)(*temp325);
    long long int temp326 = (long long int)(rbp + -16);
    long long int *temp327 = (long long int *)temp326;
    long long int temp328 = (long long int)*temp327;
    long long int temp329 = (long long int)regs[99];
    int temp330;
    if (temp328 == temp329) temp330 = 0;
    else if (temp328 < temp329) temp330 = -1;
    else temp330 = 1;
    rflags = (long long int)(temp330);
    bool temp331 = (rflags != 0);
    if (temp331) goto label234;
    // THERE WAS A NOTE HERE
    long long int temp332 = (long long int)(rbp + -16);
    long long int *temp333 = (long long int *)temp332;
    regs[147] = (long long int)(*temp333);
    long long int temp334 = (long long int)(regs[147] + 24);
    long long int *temp335 = (long long int *)temp334;
    regs[100] = (long long int)(*temp335);
    long long int temp336 = (long long int)(rbp + -40);
    long long int *temp337 = (long long int *)temp336;
    long long int temp338 = (long long int)*temp337;
    long long int temp339 = (long long int)regs[100];
    int temp340;
    if (temp338 == temp339) temp340 = 0;
    else if (temp338 < temp339) temp340 = -1;
    else temp340 = 1;
    rflags = (long long int)(temp340);
    bool temp341 = (rflags != 0);
    if (temp341) goto label154;
    // THERE WAS A NOTE HERE
    long long int temp342 = (long long int)(rbp + -16);
    long long int *temp343 = (long long int *)temp342;
    regs[148] = (long long int)(*temp343);
    long long int temp344 = (long long int)(regs[148] + 16);
    long long int *temp345 = (long long int *)temp344;
    regs[101] = (long long int)(*temp345);
    long long int temp346 = (long long int)(rbp + -24);
    long long int *temp347 = (long long int *)temp346;
    regs[149] = (long long int)(*temp347);
    long long int temp348 = (long long int)(regs[149] + 24);
    long long int *temp349 = (long long int *)temp348;
    *temp349 = (long long int)(regs[101]);
    long long int temp350 = (long long int)(rbp + -16);
    long long int *temp351 = (long long int *)temp350;
    regs[150] = (long long int)(*temp351);
    long long int temp352 = (long long int)(regs[150] + 16);
    long long int *temp353 = (long long int *)temp352;
    regs[102] = (long long int)(*temp353);
    long long int temp354 = (long long int)regs[102];
    long long int temp355 = (long long int)0;
    int temp356;
    if (temp354 == temp355) temp356 = 0;
    else if (temp354 < temp355) temp356 = -1;
    else temp356 = 1;
    rflags = (long long int)(temp356);
    bool temp357 = (rflags == 0);
    if (temp357) goto label112;
    // THERE WAS A NOTE HERE
    long long int temp358 = (long long int)(rbp + -16);
    long long int *temp359 = (long long int *)temp358;
    regs[151] = (long long int)(*temp359);
    long long int temp360 = (long long int)(regs[151] + 16);
    long long int *temp361 = (long long int *)temp360;
    regs[103] = (long long int)(*temp361);
    long long int temp362 = (long long int)(rbp + -24);
    long long int *temp363 = (long long int *)temp362;
    regs[152] = (long long int)(*temp363);
    long long int temp364 = (long long int)(regs[103] + 8);
    long long int *temp365 = (long long int *)temp364;
    *temp365 = (long long int)(regs[152]);
    label112:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp366 = (long long int)(rbp + -16);
    long long int *temp367 = (long long int *)temp366;
    regs[153] = (long long int)(*temp367);
    long long int temp368 = (long long int)(rbp + -24);
    long long int *temp369 = (long long int *)temp368;
    regs[154] = (long long int)(*temp369);
    long long int temp370 = (long long int)(regs[153] + 16);
    long long int *temp371 = (long long int *)temp370;
    *temp371 = (long long int)(regs[154]);
    long long int temp372 = (long long int)(rbp + -24);
    long long int *temp373 = (long long int *)temp372;
    regs[155] = (long long int)(*temp373);
    long long int temp374 = (long long int)(rbp + -16);
    long long int *temp375 = (long long int *)temp374;
    regs[156] = (long long int)(*temp375);
    long long int temp376 = (long long int)(regs[155] + 8);
    long long int *temp377 = (long long int *)temp376;
    *temp377 = (long long int)(regs[156]);
    long long int temp378 = (long long int)(rbp + -16);
    long long int *temp379 = (long long int *)temp378;
    regs[157] = (long long int)(*temp379);
    long long int temp380 = (long long int)(rbp + -32);
    long long int *temp381 = (long long int *)temp380;
    regs[158] = (long long int)(*temp381);
    long long int temp382 = (long long int)(regs[157] + 8);
    long long int *temp383 = (long long int *)temp382;
    *temp383 = (long long int)(regs[158]);
    long long int temp384 = (long long int)(rbp + -32);
    long long int *temp385 = (long long int *)temp384;
    long long int temp386 = (long long int)*temp385;
    long long int temp387 = (long long int)0;
    int temp388;
    if (temp386 == temp387) temp388 = 0;
    else if (temp386 < temp387) temp388 = -1;
    else temp388 = 1;
    rflags = (long long int)(temp388);
    bool temp389 = (rflags == 0);
    if (temp389) goto label146;
    // THERE WAS A NOTE HERE
    long long int temp390 = (long long int)(rbp + -32);
    long long int *temp391 = (long long int *)temp390;
    regs[159] = (long long int)(*temp391);
    long long int temp392 = (long long int)(regs[159] + 16);
    long long int *temp393 = (long long int *)temp392;
    regs[104] = (long long int)(*temp393);
    long long int temp394 = (long long int)regs[104];
    long long int temp395 = (long long int)0;
    int temp396;
    if (temp394 == temp395) temp396 = 0;
    else if (temp394 < temp395) temp396 = -1;
    else temp396 = 1;
    rflags = (long long int)(temp396);
    bool temp397 = (rflags == 0);
    if (temp397) goto label141;
    // THERE WAS A NOTE HERE
    long long int temp398 = (long long int)(rbp + -32);
    long long int *temp399 = (long long int *)temp398;
    regs[160] = (long long int)(*temp399);
    long long int temp400 = (long long int)(regs[160] + 16);
    long long int *temp401 = (long long int *)temp400;
    regs[105] = (long long int)(*temp401);
    long long int temp402 = (long long int)(rbp + -24);
    long long int *temp403 = (long long int *)temp402;
    long long int temp404 = (long long int)*temp403;
    long long int temp405 = (long long int)regs[105];
    int temp406;
    if (temp404 == temp405) temp406 = 0;
    else if (temp404 < temp405) temp406 = -1;
    else temp406 = 1;
    rflags = (long long int)(temp406);
    bool temp407 = (rflags != 0);
    if (temp407) goto label141;
    // THERE WAS A NOTE HERE
    long long int temp408 = (long long int)(rbp + -32);
    long long int *temp409 = (long long int *)temp408;
    regs[161] = (long long int)(*temp409);
    long long int temp410 = (long long int)(rbp + -16);
    long long int *temp411 = (long long int *)temp410;
    regs[162] = (long long int)(*temp411);
    long long int temp412 = (long long int)(regs[161] + 16);
    long long int *temp413 = (long long int *)temp412;
    *temp413 = (long long int)(regs[162]);
    goto label146;
    // THERE WAS A BARRIER HERE
    label141:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp414 = (long long int)(rbp + -32);
    long long int *temp415 = (long long int *)temp414;
    regs[163] = (long long int)(*temp415);
    long long int temp416 = (long long int)(rbp + -16);
    long long int *temp417 = (long long int *)temp416;
    regs[164] = (long long int)(*temp417);
    long long int temp418 = (long long int)(regs[163] + 24);
    long long int *temp419 = (long long int *)temp418;
    *temp419 = (long long int)(regs[164]);
    label146:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp420 = (long long int)(rbp + -16);
    long long int *temp421 = (long long int *)temp420;
    regs[165] = (long long int)(*temp421);
    long long int temp422 = (long long int)(regs[165] + 32);
    int *temp423 = (int *)temp422;
    *temp423 = (int)(0);
    long long int temp424 = (long long int)(rbp + -24);
    long long int *temp425 = (long long int *)temp424;
    regs[166] = (long long int)(*temp425);
    long long int temp426 = (long long int)(regs[166] + 32);
    int *temp427 = (int *)temp426;
    *temp427 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label154:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp428 = (long long int)(rbp + -8);
    long long int *temp429 = (long long int *)temp428;
    regs[167] = (long long int)(*temp429);
    long long int temp430 = (long long int)(regs[167] + 24);
    long long int *temp431 = (long long int *)temp430;
    regs[106] = (long long int)(*temp431);
    long long int temp432 = (long long int)(rbp + -16);
    long long int *temp433 = (long long int *)temp432;
    regs[168] = (long long int)(*temp433);
    long long int temp434 = (long long int)(regs[168] + 16);
    long long int *temp435 = (long long int *)temp434;
    *temp435 = (long long int)(regs[106]);
    long long int temp436 = (long long int)(rbp + -8);
    long long int *temp437 = (long long int *)temp436;
    regs[169] = (long long int)(*temp437);
    long long int temp438 = (long long int)(regs[169] + 24);
    long long int *temp439 = (long long int *)temp438;
    regs[107] = (long long int)(*temp439);
    long long int temp440 = (long long int)regs[107];
    long long int temp441 = (long long int)0;
    int temp442;
    if (temp440 == temp441) temp442 = 0;
    else if (temp440 < temp441) temp442 = -1;
    else temp442 = 1;
    rflags = (long long int)(temp442);
    bool temp443 = (rflags == 0);
    if (temp443) goto label169;
    // THERE WAS A NOTE HERE
    long long int temp444 = (long long int)(rbp + -8);
    long long int *temp445 = (long long int *)temp444;
    regs[170] = (long long int)(*temp445);
    long long int temp446 = (long long int)(regs[170] + 24);
    long long int *temp447 = (long long int *)temp446;
    regs[108] = (long long int)(*temp447);
    long long int temp448 = (long long int)(rbp + -16);
    long long int *temp449 = (long long int *)temp448;
    regs[171] = (long long int)(*temp449);
    long long int temp450 = (long long int)(regs[108] + 8);
    long long int *temp451 = (long long int *)temp450;
    *temp451 = (long long int)(regs[171]);
    label169:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp452 = (long long int)(rbp + -8);
    long long int *temp453 = (long long int *)temp452;
    regs[172] = (long long int)(*temp453);
    long long int temp454 = (long long int)(rbp + -16);
    long long int *temp455 = (long long int *)temp454;
    regs[173] = (long long int)(*temp455);
    long long int temp456 = (long long int)(regs[172] + 24);
    long long int *temp457 = (long long int *)temp456;
    *temp457 = (long long int)(regs[173]);
    long long int temp458 = (long long int)(rbp + -16);
    long long int *temp459 = (long long int *)temp458;
    regs[174] = (long long int)(*temp459);
    long long int temp460 = (long long int)(rbp + -8);
    long long int *temp461 = (long long int *)temp460;
    regs[175] = (long long int)(*temp461);
    long long int temp462 = (long long int)(regs[174] + 8);
    long long int *temp463 = (long long int *)temp462;
    *temp463 = (long long int)(regs[175]);
    long long int temp464 = (long long int)(rbp + -8);
    long long int *temp465 = (long long int *)temp464;
    regs[176] = (long long int)(*temp465);
    long long int temp466 = (long long int)(regs[176] + 16);
    long long int *temp467 = (long long int *)temp466;
    regs[109] = (long long int)(*temp467);
    long long int temp468 = (long long int)(rbp + -24);
    long long int *temp469 = (long long int *)temp468;
    regs[177] = (long long int)(*temp469);
    long long int temp470 = (long long int)(regs[177] + 24);
    long long int *temp471 = (long long int *)temp470;
    *temp471 = (long long int)(regs[109]);
    long long int temp472 = (long long int)(rbp + -8);
    long long int *temp473 = (long long int *)temp472;
    regs[178] = (long long int)(*temp473);
    long long int temp474 = (long long int)(regs[178] + 16);
    long long int *temp475 = (long long int *)temp474;
    regs[110] = (long long int)(*temp475);
    long long int temp476 = (long long int)regs[110];
    long long int temp477 = (long long int)0;
    int temp478;
    if (temp476 == temp477) temp478 = 0;
    else if (temp476 < temp477) temp478 = -1;
    else temp478 = 1;
    rflags = (long long int)(temp478);
    bool temp479 = (rflags == 0);
    if (temp479) goto label190;
    // THERE WAS A NOTE HERE
    long long int temp480 = (long long int)(rbp + -8);
    long long int *temp481 = (long long int *)temp480;
    regs[179] = (long long int)(*temp481);
    long long int temp482 = (long long int)(regs[179] + 16);
    long long int *temp483 = (long long int *)temp482;
    regs[111] = (long long int)(*temp483);
    long long int temp484 = (long long int)(rbp + -24);
    long long int *temp485 = (long long int *)temp484;
    regs[180] = (long long int)(*temp485);
    long long int temp486 = (long long int)(regs[111] + 8);
    long long int *temp487 = (long long int *)temp486;
    *temp487 = (long long int)(regs[180]);
    label190:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp488 = (long long int)(rbp + -8);
    long long int *temp489 = (long long int *)temp488;
    regs[181] = (long long int)(*temp489);
    long long int temp490 = (long long int)(rbp + -24);
    long long int *temp491 = (long long int *)temp490;
    regs[182] = (long long int)(*temp491);
    long long int temp492 = (long long int)(regs[181] + 16);
    long long int *temp493 = (long long int *)temp492;
    *temp493 = (long long int)(regs[182]);
    long long int temp494 = (long long int)(rbp + -24);
    long long int *temp495 = (long long int *)temp494;
    regs[183] = (long long int)(*temp495);
    long long int temp496 = (long long int)(rbp + -8);
    long long int *temp497 = (long long int *)temp496;
    regs[184] = (long long int)(*temp497);
    long long int temp498 = (long long int)(regs[183] + 8);
    long long int *temp499 = (long long int *)temp498;
    *temp499 = (long long int)(regs[184]);
    long long int temp500 = (long long int)(rbp + -8);
    long long int *temp501 = (long long int *)temp500;
    regs[185] = (long long int)(*temp501);
    long long int temp502 = (long long int)(rbp + -32);
    long long int *temp503 = (long long int *)temp502;
    regs[186] = (long long int)(*temp503);
    long long int temp504 = (long long int)(regs[185] + 8);
    long long int *temp505 = (long long int *)temp504;
    *temp505 = (long long int)(regs[186]);
    long long int temp506 = (long long int)(rbp + -32);
    long long int *temp507 = (long long int *)temp506;
    long long int temp508 = (long long int)*temp507;
    long long int temp509 = (long long int)0;
    int temp510;
    if (temp508 == temp509) temp510 = 0;
    else if (temp508 < temp509) temp510 = -1;
    else temp510 = 1;
    rflags = (long long int)(temp510);
    bool temp511 = (rflags == 0);
    if (temp511) goto label224;
    // THERE WAS A NOTE HERE
    long long int temp512 = (long long int)(rbp + -32);
    long long int *temp513 = (long long int *)temp512;
    regs[187] = (long long int)(*temp513);
    long long int temp514 = (long long int)(regs[187] + 16);
    long long int *temp515 = (long long int *)temp514;
    regs[112] = (long long int)(*temp515);
    long long int temp516 = (long long int)regs[112];
    long long int temp517 = (long long int)0;
    int temp518;
    if (temp516 == temp517) temp518 = 0;
    else if (temp516 < temp517) temp518 = -1;
    else temp518 = 1;
    rflags = (long long int)(temp518);
    bool temp519 = (rflags == 0);
    if (temp519) goto label219;
    // THERE WAS A NOTE HERE
    long long int temp520 = (long long int)(rbp + -32);
    long long int *temp521 = (long long int *)temp520;
    regs[188] = (long long int)(*temp521);
    long long int temp522 = (long long int)(regs[188] + 16);
    long long int *temp523 = (long long int *)temp522;
    regs[113] = (long long int)(*temp523);
    long long int temp524 = (long long int)(rbp + -24);
    long long int *temp525 = (long long int *)temp524;
    long long int temp526 = (long long int)*temp525;
    long long int temp527 = (long long int)regs[113];
    int temp528;
    if (temp526 == temp527) temp528 = 0;
    else if (temp526 < temp527) temp528 = -1;
    else temp528 = 1;
    rflags = (long long int)(temp528);
    bool temp529 = (rflags != 0);
    if (temp529) goto label219;
    // THERE WAS A NOTE HERE
    long long int temp530 = (long long int)(rbp + -32);
    long long int *temp531 = (long long int *)temp530;
    regs[189] = (long long int)(*temp531);
    long long int temp532 = (long long int)(rbp + -8);
    long long int *temp533 = (long long int *)temp532;
    regs[190] = (long long int)(*temp533);
    long long int temp534 = (long long int)(regs[189] + 16);
    long long int *temp535 = (long long int *)temp534;
    *temp535 = (long long int)(regs[190]);
    goto label224;
    // THERE WAS A BARRIER HERE
    label219:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp536 = (long long int)(rbp + -32);
    long long int *temp537 = (long long int *)temp536;
    regs[191] = (long long int)(*temp537);
    long long int temp538 = (long long int)(rbp + -8);
    long long int *temp539 = (long long int *)temp538;
    regs[192] = (long long int)(*temp539);
    long long int temp540 = (long long int)(regs[191] + 24);
    long long int *temp541 = (long long int *)temp540;
    *temp541 = (long long int)(regs[192]);
    label224:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp542 = (long long int)(rbp + -8);
    long long int *temp543 = (long long int *)temp542;
    regs[193] = (long long int)(*temp543);
    long long int temp544 = (long long int)(regs[193] + 32);
    int *temp545 = (int *)temp544;
    *temp545 = (int)(0);
    long long int temp546 = (long long int)(rbp + -24);
    long long int *temp547 = (long long int *)temp546;
    regs[194] = (long long int)(*temp547);
    long long int temp548 = (long long int)(regs[194] + 32);
    int *temp549 = (int *)temp548;
    *temp549 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label234:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp550 = (long long int)(rbp + -16);
    long long int *temp551 = (long long int *)temp550;
    regs[195] = (long long int)(*temp551);
    long long int temp552 = (long long int)(regs[195] + 16);
    long long int *temp553 = (long long int *)temp552;
    regs[114] = (long long int)(*temp553);
    long long int temp554 = (long long int)(rbp + -40);
    long long int *temp555 = (long long int *)temp554;
    long long int temp556 = (long long int)*temp555;
    long long int temp557 = (long long int)regs[114];
    int temp558;
    if (temp556 == temp557) temp558 = 0;
    else if (temp556 < temp557) temp558 = -1;
    else temp558 = 1;
    rflags = (long long int)(temp558);
    bool temp559 = (rflags != 0);
    if (temp559) goto label296;
    // THERE WAS A NOTE HERE
    long long int temp560 = (long long int)(rbp + -16);
    long long int *temp561 = (long long int *)temp560;
    regs[196] = (long long int)(*temp561);
    long long int temp562 = (long long int)(regs[196] + 24);
    long long int *temp563 = (long long int *)temp562;
    regs[115] = (long long int)(*temp563);
    long long int temp564 = (long long int)(rbp + -24);
    long long int *temp565 = (long long int *)temp564;
    regs[197] = (long long int)(*temp565);
    long long int temp566 = (long long int)(regs[197] + 16);
    long long int *temp567 = (long long int *)temp566;
    *temp567 = (long long int)(regs[115]);
    long long int temp568 = (long long int)(rbp + -16);
    long long int *temp569 = (long long int *)temp568;
    regs[198] = (long long int)(*temp569);
    long long int temp570 = (long long int)(regs[198] + 24);
    long long int *temp571 = (long long int *)temp570;
    regs[116] = (long long int)(*temp571);
    long long int temp572 = (long long int)regs[116];
    long long int temp573 = (long long int)0;
    int temp574;
    if (temp572 == temp573) temp574 = 0;
    else if (temp572 < temp573) temp574 = -1;
    else temp574 = 1;
    rflags = (long long int)(temp574);
    bool temp575 = (rflags == 0);
    if (temp575) goto label254;
    // THERE WAS A NOTE HERE
    long long int temp576 = (long long int)(rbp + -16);
    long long int *temp577 = (long long int *)temp576;
    regs[199] = (long long int)(*temp577);
    long long int temp578 = (long long int)(regs[199] + 24);
    long long int *temp579 = (long long int *)temp578;
    regs[117] = (long long int)(*temp579);
    long long int temp580 = (long long int)(rbp + -24);
    long long int *temp581 = (long long int *)temp580;
    regs[200] = (long long int)(*temp581);
    long long int temp582 = (long long int)(regs[117] + 8);
    long long int *temp583 = (long long int *)temp582;
    *temp583 = (long long int)(regs[200]);
    label254:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp584 = (long long int)(rbp + -16);
    long long int *temp585 = (long long int *)temp584;
    regs[201] = (long long int)(*temp585);
    long long int temp586 = (long long int)(rbp + -24);
    long long int *temp587 = (long long int *)temp586;
    regs[202] = (long long int)(*temp587);
    long long int temp588 = (long long int)(regs[201] + 24);
    long long int *temp589 = (long long int *)temp588;
    *temp589 = (long long int)(regs[202]);
    long long int temp590 = (long long int)(rbp + -24);
    long long int *temp591 = (long long int *)temp590;
    regs[203] = (long long int)(*temp591);
    long long int temp592 = (long long int)(rbp + -16);
    long long int *temp593 = (long long int *)temp592;
    regs[204] = (long long int)(*temp593);
    long long int temp594 = (long long int)(regs[203] + 8);
    long long int *temp595 = (long long int *)temp594;
    *temp595 = (long long int)(regs[204]);
    long long int temp596 = (long long int)(rbp + -16);
    long long int *temp597 = (long long int *)temp596;
    regs[205] = (long long int)(*temp597);
    long long int temp598 = (long long int)(rbp + -32);
    long long int *temp599 = (long long int *)temp598;
    regs[206] = (long long int)(*temp599);
    long long int temp600 = (long long int)(regs[205] + 8);
    long long int *temp601 = (long long int *)temp600;
    *temp601 = (long long int)(regs[206]);
    long long int temp602 = (long long int)(rbp + -32);
    long long int *temp603 = (long long int *)temp602;
    long long int temp604 = (long long int)*temp603;
    long long int temp605 = (long long int)0;
    int temp606;
    if (temp604 == temp605) temp606 = 0;
    else if (temp604 < temp605) temp606 = -1;
    else temp606 = 1;
    rflags = (long long int)(temp606);
    bool temp607 = (rflags == 0);
    if (temp607) goto label288;
    // THERE WAS A NOTE HERE
    long long int temp608 = (long long int)(rbp + -32);
    long long int *temp609 = (long long int *)temp608;
    regs[207] = (long long int)(*temp609);
    long long int temp610 = (long long int)(regs[207] + 16);
    long long int *temp611 = (long long int *)temp610;
    regs[118] = (long long int)(*temp611);
    long long int temp612 = (long long int)regs[118];
    long long int temp613 = (long long int)0;
    int temp614;
    if (temp612 == temp613) temp614 = 0;
    else if (temp612 < temp613) temp614 = -1;
    else temp614 = 1;
    rflags = (long long int)(temp614);
    bool temp615 = (rflags == 0);
    if (temp615) goto label283;
    // THERE WAS A NOTE HERE
    long long int temp616 = (long long int)(rbp + -32);
    long long int *temp617 = (long long int *)temp616;
    regs[208] = (long long int)(*temp617);
    long long int temp618 = (long long int)(regs[208] + 16);
    long long int *temp619 = (long long int *)temp618;
    regs[119] = (long long int)(*temp619);
    long long int temp620 = (long long int)(rbp + -24);
    long long int *temp621 = (long long int *)temp620;
    long long int temp622 = (long long int)*temp621;
    long long int temp623 = (long long int)regs[119];
    int temp624;
    if (temp622 == temp623) temp624 = 0;
    else if (temp622 < temp623) temp624 = -1;
    else temp624 = 1;
    rflags = (long long int)(temp624);
    bool temp625 = (rflags != 0);
    if (temp625) goto label283;
    // THERE WAS A NOTE HERE
    long long int temp626 = (long long int)(rbp + -32);
    long long int *temp627 = (long long int *)temp626;
    regs[209] = (long long int)(*temp627);
    long long int temp628 = (long long int)(rbp + -16);
    long long int *temp629 = (long long int *)temp628;
    regs[210] = (long long int)(*temp629);
    long long int temp630 = (long long int)(regs[209] + 16);
    long long int *temp631 = (long long int *)temp630;
    *temp631 = (long long int)(regs[210]);
    goto label288;
    // THERE WAS A BARRIER HERE
    label283:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp632 = (long long int)(rbp + -32);
    long long int *temp633 = (long long int *)temp632;
    regs[211] = (long long int)(*temp633);
    long long int temp634 = (long long int)(rbp + -16);
    long long int *temp635 = (long long int *)temp634;
    regs[212] = (long long int)(*temp635);
    long long int temp636 = (long long int)(regs[211] + 24);
    long long int *temp637 = (long long int *)temp636;
    *temp637 = (long long int)(regs[212]);
    label288:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp638 = (long long int)(rbp + -16);
    long long int *temp639 = (long long int *)temp638;
    regs[213] = (long long int)(*temp639);
    long long int temp640 = (long long int)(regs[213] + 32);
    int *temp641 = (int *)temp640;
    *temp641 = (int)(0);
    long long int temp642 = (long long int)(rbp + -24);
    long long int *temp643 = (long long int *)temp642;
    regs[214] = (long long int)(*temp643);
    long long int temp644 = (long long int)(regs[214] + 32);
    int *temp645 = (int *)temp644;
    *temp645 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label296:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp646 = (long long int)(rbp + -8);
    long long int *temp647 = (long long int *)temp646;
    regs[215] = (long long int)(*temp647);
    long long int temp648 = (long long int)(regs[215] + 16);
    long long int *temp649 = (long long int *)temp648;
    regs[120] = (long long int)(*temp649);
    long long int temp650 = (long long int)(rbp + -16);
    long long int *temp651 = (long long int *)temp650;
    regs[216] = (long long int)(*temp651);
    long long int temp652 = (long long int)(regs[216] + 24);
    long long int *temp653 = (long long int *)temp652;
    *temp653 = (long long int)(regs[120]);
    long long int temp654 = (long long int)(rbp + -8);
    long long int *temp655 = (long long int *)temp654;
    regs[217] = (long long int)(*temp655);
    long long int temp656 = (long long int)(regs[217] + 16);
    long long int *temp657 = (long long int *)temp656;
    regs[121] = (long long int)(*temp657);
    long long int temp658 = (long long int)regs[121];
    long long int temp659 = (long long int)0;
    int temp660;
    if (temp658 == temp659) temp660 = 0;
    else if (temp658 < temp659) temp660 = -1;
    else temp660 = 1;
    rflags = (long long int)(temp660);
    bool temp661 = (rflags == 0);
    if (temp661) goto label311;
    // THERE WAS A NOTE HERE
    long long int temp662 = (long long int)(rbp + -8);
    long long int *temp663 = (long long int *)temp662;
    regs[218] = (long long int)(*temp663);
    long long int temp664 = (long long int)(regs[218] + 16);
    long long int *temp665 = (long long int *)temp664;
    regs[122] = (long long int)(*temp665);
    long long int temp666 = (long long int)(rbp + -16);
    long long int *temp667 = (long long int *)temp666;
    regs[219] = (long long int)(*temp667);
    long long int temp668 = (long long int)(regs[122] + 8);
    long long int *temp669 = (long long int *)temp668;
    *temp669 = (long long int)(regs[219]);
    label311:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp670 = (long long int)(rbp + -8);
    long long int *temp671 = (long long int *)temp670;
    regs[220] = (long long int)(*temp671);
    long long int temp672 = (long long int)(rbp + -16);
    long long int *temp673 = (long long int *)temp672;
    regs[221] = (long long int)(*temp673);
    long long int temp674 = (long long int)(regs[220] + 16);
    long long int *temp675 = (long long int *)temp674;
    *temp675 = (long long int)(regs[221]);
    long long int temp676 = (long long int)(rbp + -16);
    long long int *temp677 = (long long int *)temp676;
    regs[222] = (long long int)(*temp677);
    long long int temp678 = (long long int)(rbp + -8);
    long long int *temp679 = (long long int *)temp678;
    regs[223] = (long long int)(*temp679);
    long long int temp680 = (long long int)(regs[222] + 8);
    long long int *temp681 = (long long int *)temp680;
    *temp681 = (long long int)(regs[223]);
    long long int temp682 = (long long int)(rbp + -8);
    long long int *temp683 = (long long int *)temp682;
    regs[224] = (long long int)(*temp683);
    long long int temp684 = (long long int)(regs[224] + 24);
    long long int *temp685 = (long long int *)temp684;
    regs[123] = (long long int)(*temp685);
    long long int temp686 = (long long int)(rbp + -24);
    long long int *temp687 = (long long int *)temp686;
    regs[225] = (long long int)(*temp687);
    long long int temp688 = (long long int)(regs[225] + 16);
    long long int *temp689 = (long long int *)temp688;
    *temp689 = (long long int)(regs[123]);
    long long int temp690 = (long long int)(rbp + -8);
    long long int *temp691 = (long long int *)temp690;
    regs[226] = (long long int)(*temp691);
    long long int temp692 = (long long int)(regs[226] + 24);
    long long int *temp693 = (long long int *)temp692;
    regs[124] = (long long int)(*temp693);
    long long int temp694 = (long long int)regs[124];
    long long int temp695 = (long long int)0;
    int temp696;
    if (temp694 == temp695) temp696 = 0;
    else if (temp694 < temp695) temp696 = -1;
    else temp696 = 1;
    rflags = (long long int)(temp696);
    bool temp697 = (rflags == 0);
    if (temp697) goto label332;
    // THERE WAS A NOTE HERE
    long long int temp698 = (long long int)(rbp + -8);
    long long int *temp699 = (long long int *)temp698;
    regs[227] = (long long int)(*temp699);
    long long int temp700 = (long long int)(regs[227] + 24);
    long long int *temp701 = (long long int *)temp700;
    regs[125] = (long long int)(*temp701);
    long long int temp702 = (long long int)(rbp + -24);
    long long int *temp703 = (long long int *)temp702;
    regs[228] = (long long int)(*temp703);
    long long int temp704 = (long long int)(regs[125] + 8);
    long long int *temp705 = (long long int *)temp704;
    *temp705 = (long long int)(regs[228]);
    label332:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp706 = (long long int)(rbp + -8);
    long long int *temp707 = (long long int *)temp706;
    regs[229] = (long long int)(*temp707);
    long long int temp708 = (long long int)(rbp + -24);
    long long int *temp709 = (long long int *)temp708;
    regs[230] = (long long int)(*temp709);
    long long int temp710 = (long long int)(regs[229] + 24);
    long long int *temp711 = (long long int *)temp710;
    *temp711 = (long long int)(regs[230]);
    long long int temp712 = (long long int)(rbp + -24);
    long long int *temp713 = (long long int *)temp712;
    regs[231] = (long long int)(*temp713);
    long long int temp714 = (long long int)(rbp + -8);
    long long int *temp715 = (long long int *)temp714;
    regs[232] = (long long int)(*temp715);
    long long int temp716 = (long long int)(regs[231] + 8);
    long long int *temp717 = (long long int *)temp716;
    *temp717 = (long long int)(regs[232]);
    long long int temp718 = (long long int)(rbp + -8);
    long long int *temp719 = (long long int *)temp718;
    regs[233] = (long long int)(*temp719);
    long long int temp720 = (long long int)(rbp + -32);
    long long int *temp721 = (long long int *)temp720;
    regs[234] = (long long int)(*temp721);
    long long int temp722 = (long long int)(regs[233] + 8);
    long long int *temp723 = (long long int *)temp722;
    *temp723 = (long long int)(regs[234]);
    long long int temp724 = (long long int)(rbp + -32);
    long long int *temp725 = (long long int *)temp724;
    long long int temp726 = (long long int)*temp725;
    long long int temp727 = (long long int)0;
    int temp728;
    if (temp726 == temp727) temp728 = 0;
    else if (temp726 < temp727) temp728 = -1;
    else temp728 = 1;
    rflags = (long long int)(temp728);
    bool temp729 = (rflags == 0);
    if (temp729) goto label366;
    // THERE WAS A NOTE HERE
    long long int temp730 = (long long int)(rbp + -32);
    long long int *temp731 = (long long int *)temp730;
    regs[235] = (long long int)(*temp731);
    long long int temp732 = (long long int)(regs[235] + 16);
    long long int *temp733 = (long long int *)temp732;
    regs[126] = (long long int)(*temp733);
    long long int temp734 = (long long int)regs[126];
    long long int temp735 = (long long int)0;
    int temp736;
    if (temp734 == temp735) temp736 = 0;
    else if (temp734 < temp735) temp736 = -1;
    else temp736 = 1;
    rflags = (long long int)(temp736);
    bool temp737 = (rflags == 0);
    if (temp737) goto label361;
    // THERE WAS A NOTE HERE
    long long int temp738 = (long long int)(rbp + -32);
    long long int *temp739 = (long long int *)temp738;
    regs[236] = (long long int)(*temp739);
    long long int temp740 = (long long int)(regs[236] + 16);
    long long int *temp741 = (long long int *)temp740;
    regs[127] = (long long int)(*temp741);
    long long int temp742 = (long long int)(rbp + -24);
    long long int *temp743 = (long long int *)temp742;
    long long int temp744 = (long long int)*temp743;
    long long int temp745 = (long long int)regs[127];
    int temp746;
    if (temp744 == temp745) temp746 = 0;
    else if (temp744 < temp745) temp746 = -1;
    else temp746 = 1;
    rflags = (long long int)(temp746);
    bool temp747 = (rflags != 0);
    if (temp747) goto label361;
    // THERE WAS A NOTE HERE
    long long int temp748 = (long long int)(rbp + -32);
    long long int *temp749 = (long long int *)temp748;
    regs[237] = (long long int)(*temp749);
    long long int temp750 = (long long int)(rbp + -8);
    long long int *temp751 = (long long int *)temp750;
    regs[238] = (long long int)(*temp751);
    long long int temp752 = (long long int)(regs[237] + 16);
    long long int *temp753 = (long long int *)temp752;
    *temp753 = (long long int)(regs[238]);
    goto label366;
    // THERE WAS A BARRIER HERE
    label361:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp754 = (long long int)(rbp + -32);
    long long int *temp755 = (long long int *)temp754;
    regs[239] = (long long int)(*temp755);
    long long int temp756 = (long long int)(rbp + -8);
    long long int *temp757 = (long long int *)temp756;
    regs[240] = (long long int)(*temp757);
    long long int temp758 = (long long int)(regs[239] + 24);
    long long int *temp759 = (long long int *)temp758;
    *temp759 = (long long int)(regs[240]);
    label366:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp760 = (long long int)(rbp + -8);
    long long int *temp761 = (long long int *)temp760;
    regs[241] = (long long int)(*temp761);
    long long int temp762 = (long long int)(regs[241] + 32);
    int *temp763 = (int *)temp762;
    *temp763 = (int)(0);
    long long int temp764 = (long long int)(rbp + -24);
    long long int *temp765 = (long long int *)temp764;
    regs[242] = (long long int)(*temp765);
    long long int temp766 = (long long int)(regs[242] + 32);
    int *temp767 = (int *)temp766;
    *temp767 = (int)(1);
    label374:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void insertNode(int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp768 = (long long int)(rbp + -36);
    int *temp769 = (int *)temp768;
    *temp769 = (int)(rdi);
    long long int temp770 = (long long int)(rbp + -48);
    long long int *temp771 = (long long int *)temp770;
    *temp771 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp772 = (long long int)(rbp + -48);
    long long int *temp773 = (long long int *)temp772;
    regs[93] = (long long int)(*temp773);
    long long int *temp774 = (long long int *)regs[93];
    regs[94] = (long long int)(*temp774);
    long long int temp775 = (long long int)(rbp + -8);
    long long int *temp776 = (long long int *)temp775;
    *temp776 = (long long int)(regs[94]);
    goto label72;
    // THERE WAS A BARRIER HERE
    label74:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp777 = (long long int)(rbp + -8);
    long long int *temp778 = (long long int *)temp777;
    regs[95] = (long long int)(*temp778);
    int *temp779 = (int *)regs[95];
    regs[87] = (int)(*temp779);
    long long int temp780 = (long long int)(rbp + -36);
    int *temp781 = (int *)temp780;
    long long int temp782 = (long long int)*temp781;
    long long int temp783 = (long long int)regs[87];
    int temp784;
    if (temp782 == temp783) temp784 = 0;
    else if (temp782 < temp783) temp784 = -1;
    else temp784 = 1;
    rflags = (long long int)(temp784);
    bool temp785 = (rflags >= 0);
    if (temp785) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp786 = (long long int)(rbp + -8);
    long long int *temp787 = (long long int *)temp786;
    regs[96] = (long long int)(*temp787);
    long long int temp788 = (long long int)(regs[96] + 16);
    long long int *temp789 = (long long int *)temp788;
    regs[88] = (long long int)(*temp789);
    long long int temp790 = (long long int)regs[88];
    long long int temp791 = (long long int)0;
    int temp792;
    if (temp790 == temp791) temp792 = 0;
    else if (temp790 < temp791) temp792 = -1;
    else temp792 = 1;
    rflags = (long long int)(temp792);
    bool temp793 = (rflags == 0);
    if (temp793) goto label28;
    // THERE WAS A NOTE HERE
    long long int temp794 = (long long int)(rbp + -8);
    long long int *temp795 = (long long int *)temp794;
    regs[97] = (long long int)(*temp795);
    long long int temp796 = (long long int)(regs[97] + 16);
    long long int *temp797 = (long long int *)temp796;
    regs[98] = (long long int)(*temp797);
    long long int temp798 = (long long int)(rbp + -8);
    long long int *temp799 = (long long int *)temp798;
    *temp799 = (long long int)(regs[98]);
    goto label72;
    // THERE WAS A BARRIER HERE
    label28:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp800 = (long long int)(rbp + -8);
    long long int *temp801 = (long long int *)temp800;
    regs[99] = (long long int)(*temp801);
    long long int temp802 = (long long int)(rbp + -36);
    int *temp803 = (int *)temp802;
    regs[100] = (int)(*temp803);
    rsi = (long long int)(regs[99]);
    rdi = (int)(regs[100]);
    long long int temp804 = newNode((int)rdi, rsi);
    rax = (long long int)temp804;
    regs[101] = (long long int)(rax);
    long long int temp805 = (long long int)(rbp + -24);
    long long int *temp806 = (long long int *)temp805;
    *temp806 = (long long int)(regs[101]);
    long long int temp807 = (long long int)(rbp + -8);
    long long int *temp808 = (long long int *)temp807;
    regs[102] = (long long int)(*temp808);
    long long int temp809 = (long long int)(rbp + -24);
    long long int *temp810 = (long long int *)temp809;
    regs[103] = (long long int)(*temp810);
    long long int temp811 = (long long int)(regs[102] + 16);
    long long int *temp812 = (long long int *)temp811;
    *temp812 = (long long int)(regs[103]);
    long long int temp813 = (long long int)(rbp + -24);
    long long int *temp814 = (long long int *)temp813;
    regs[104] = (long long int)(*temp814);
    long long int temp815 = (long long int)(rbp + -8);
    long long int *temp816 = (long long int *)temp815;
    *temp816 = (long long int)(regs[104]);
    goto label77;
    // THERE WAS A BARRIER HERE
    label44:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp817 = (long long int)(rbp + -8);
    long long int *temp818 = (long long int *)temp817;
    regs[105] = (long long int)(*temp818);
    long long int temp819 = (long long int)(regs[105] + 24);
    long long int *temp820 = (long long int *)temp819;
    regs[89] = (long long int)(*temp820);
    long long int temp821 = (long long int)regs[89];
    long long int temp822 = (long long int)0;
    int temp823;
    if (temp821 == temp822) temp823 = 0;
    else if (temp821 < temp822) temp823 = -1;
    else temp823 = 1;
    rflags = (long long int)(temp823);
    bool temp824 = (rflags == 0);
    if (temp824) goto label56;
    // THERE WAS A NOTE HERE
    long long int temp825 = (long long int)(rbp + -8);
    long long int *temp826 = (long long int *)temp825;
    regs[106] = (long long int)(*temp826);
    long long int temp827 = (long long int)(regs[106] + 24);
    long long int *temp828 = (long long int *)temp827;
    regs[107] = (long long int)(*temp828);
    long long int temp829 = (long long int)(rbp + -8);
    long long int *temp830 = (long long int *)temp829;
    *temp830 = (long long int)(regs[107]);
    goto label72;
    // THERE WAS A BARRIER HERE
    label56:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp831 = (long long int)(rbp + -8);
    long long int *temp832 = (long long int *)temp831;
    regs[108] = (long long int)(*temp832);
    long long int temp833 = (long long int)(rbp + -36);
    int *temp834 = (int *)temp833;
    regs[109] = (int)(*temp834);
    rsi = (long long int)(regs[108]);
    rdi = (int)(regs[109]);
    long long int temp835 = newNode((int)rdi, rsi);
    rax = (long long int)temp835;
    regs[110] = (long long int)(rax);
    long long int temp836 = (long long int)(rbp + -16);
    long long int *temp837 = (long long int *)temp836;
    *temp837 = (long long int)(regs[110]);
    long long int temp838 = (long long int)(rbp + -8);
    long long int *temp839 = (long long int *)temp838;
    regs[111] = (long long int)(*temp839);
    long long int temp840 = (long long int)(rbp + -16);
    long long int *temp841 = (long long int *)temp840;
    regs[112] = (long long int)(*temp841);
    long long int temp842 = (long long int)(regs[111] + 24);
    long long int *temp843 = (long long int *)temp842;
    *temp843 = (long long int)(regs[112]);
    long long int temp844 = (long long int)(rbp + -16);
    long long int *temp845 = (long long int *)temp844;
    regs[113] = (long long int)(*temp845);
    long long int temp846 = (long long int)(rbp + -8);
    long long int *temp847 = (long long int *)temp846;
    *temp847 = (long long int)(regs[113]);
    goto label77;
    // THERE WAS A BARRIER HERE
    label72:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp848 = (long long int)(rbp + -8);
    long long int *temp849 = (long long int *)temp848;
    long long int temp850 = (long long int)*temp849;
    long long int temp851 = (long long int)0;
    int temp852;
    if (temp850 == temp851) temp852 = 0;
    else if (temp850 < temp851) temp852 = -1;
    else temp852 = 1;
    rflags = (long long int)(temp852);
    bool temp853 = (rflags != 0);
    if (temp853) goto label74;
    label77:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    goto label107;
    // THERE WAS A BARRIER HERE
    label111:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp854 = (long long int)(rbp + -8);
    long long int *temp855 = (long long int *)temp854;
    regs[114] = (long long int)(*temp855);
    rdi = (long long int)(regs[114]);
    checkNode(rdi);
    long long int temp856 = (long long int)(rbp + -8);
    long long int *temp857 = (long long int *)temp856;
    regs[115] = (long long int)(*temp857);
    long long int temp858 = (long long int)(regs[115] + 8);
    long long int *temp859 = (long long int *)temp858;
    regs[90] = (long long int)(*temp859);
    long long int temp860 = (long long int)regs[90];
    long long int temp861 = (long long int)0;
    int temp862;
    if (temp860 == temp861) temp862 = 0;
    else if (temp860 < temp861) temp862 = -1;
    else temp862 = 1;
    rflags = (long long int)(temp862);
    bool temp863 = (rflags != 0);
    if (temp863) goto label95;
    // THERE WAS A NOTE HERE
    long long int temp864 = (long long int)(rbp + -48);
    long long int *temp865 = (long long int *)temp864;
    regs[116] = (long long int)(*temp865);
    long long int temp866 = (long long int)(rbp + -8);
    long long int *temp867 = (long long int *)temp866;
    regs[117] = (long long int)(*temp867);
    long long int *temp868 = (long long int *)regs[116];
    *temp868 = (long long int)(regs[117]);
    goto label114;
    // THERE WAS A BARRIER HERE
    label95:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp869 = (long long int)(rbp + -8);
    long long int *temp870 = (long long int *)temp869;
    regs[118] = (long long int)(*temp870);
    long long int temp871 = (long long int)(regs[118] + 8);
    long long int *temp872 = (long long int *)temp871;
    regs[119] = (long long int)(*temp872);
    long long int temp873 = (long long int)(rbp + -8);
    long long int *temp874 = (long long int *)temp873;
    *temp874 = (long long int)(regs[119]);
    long long int temp875 = (long long int)(rbp + -48);
    long long int *temp876 = (long long int *)temp875;
    regs[120] = (long long int)(*temp876);
    long long int *temp877 = (long long int *)regs[120];
    regs[91] = (long long int)(*temp877);
    long long int temp878 = (long long int)(rbp + -8);
    long long int *temp879 = (long long int *)temp878;
    long long int temp880 = (long long int)*temp879;
    long long int temp881 = (long long int)regs[91];
    int temp882;
    if (temp880 == temp881) temp882 = 0;
    else if (temp880 < temp881) temp882 = -1;
    else temp882 = 1;
    rflags = (long long int)(temp882);
    bool temp883 = (rflags != 0);
    if (temp883) goto label107;
    // THERE WAS A NOTE HERE
    long long int temp884 = (long long int)(rbp + -8);
    long long int *temp885 = (long long int *)temp884;
    regs[121] = (long long int)(*temp885);
    long long int temp886 = (long long int)(regs[121] + 32);
    int *temp887 = (int *)temp886;
    *temp887 = (int)(0);
    label107:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp888 = (long long int)(rbp + -48);
    long long int *temp889 = (long long int *)temp888;
    regs[122] = (long long int)(*temp889);
    long long int *temp890 = (long long int *)regs[122];
    regs[92] = (long long int)(*temp890);
    long long int temp891 = (long long int)(rbp + -8);
    long long int *temp892 = (long long int *)temp891;
    long long int temp893 = (long long int)*temp892;
    long long int temp894 = (long long int)regs[92];
    int temp895;
    if (temp893 == temp894) temp895 = 0;
    else if (temp893 < temp894) temp895 = -1;
    else temp895 = 1;
    rflags = (long long int)(temp895);
    bool temp896 = (rflags != 0);
    if (temp896) goto label111;
    label114:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void checkForCase2(long long int arg0, int arg1, int arg2, long long int arg3) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rdx = (long long int)arg2;
    rcx = (long long int)arg3;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp897 = (long long int)(rbp + -56);
    long long int *temp898 = (long long int *)temp897;
    *temp898 = (long long int)(rdi);
    long long int temp899 = (long long int)(rbp + -60);
    int *temp900 = (int *)temp899;
    *temp900 = (int)(rsi);
    long long int temp901 = (long long int)(rbp + -64);
    int *temp902 = (int *)temp901;
    *temp902 = (int)(rdx);
    long long int temp903 = (long long int)(rbp + -72);
    long long int *temp904 = (long long int *)temp903;
    *temp904 = (long long int)(rcx);
    // THERE WAS A NOTE HERE
    long long int temp905 = (long long int)(rbp + -72);
    long long int *temp906 = (long long int *)temp905;
    regs[168] = (long long int)(*temp906);
    long long int *temp907 = (long long int *)regs[168];
    regs[87] = (long long int)(*temp907);
    long long int temp908 = (long long int)(rbp + -56);
    long long int *temp909 = (long long int *)temp908;
    long long int temp910 = (long long int)*temp909;
    long long int temp911 = (long long int)regs[87];
    int temp912;
    if (temp910 == temp911) temp912 = 0;
    else if (temp910 < temp911) temp912 = -1;
    else temp912 = 1;
    rflags = (long long int)(temp912);
    bool temp913 = (rflags != 0);
    if (temp913) goto label19;
    // THERE WAS A NOTE HERE
    long long int temp914 = (long long int)(rbp + -72);
    long long int *temp915 = (long long int *)temp914;
    regs[169] = (long long int)(*temp915);
    long long int *temp916 = (long long int *)regs[169];
    regs[88] = (long long int)(*temp916);
    long long int temp917 = (long long int)(regs[88] + 32);
    int *temp918 = (int *)temp917;
    *temp918 = (int)(0);
    goto label533;
    // THERE WAS A BARRIER HERE
    label19:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp919 = (long long int)(rbp + -60);
    int *temp920 = (int *)temp919;
    long long int temp921 = (long long int)*temp920;
    long long int temp922 = (long long int)0;
    int temp923;
    if (temp921 == temp922) temp923 = 0;
    else if (temp921 < temp922) temp923 = -1;
    else temp923 = 1;
    rflags = (long long int)(temp923);
    bool temp924 = (rflags != 0);
    if (temp924) goto label60;
    // THERE WAS A NOTE HERE
    long long int temp925 = (long long int)(rbp + -56);
    long long int *temp926 = (long long int *)temp925;
    regs[170] = (long long int)(*temp926);
    long long int temp927 = (long long int)(regs[170] + 32);
    int *temp928 = (int *)temp927;
    regs[89] = (int)(*temp928);
    long long int temp929 = (long long int)regs[89];
    long long int temp930 = (long long int)1;
    int temp931;
    if (temp929 == temp930) temp931 = 0;
    else if (temp929 < temp930) temp931 = -1;
    else temp931 = 1;
    rflags = (long long int)(temp931);
    bool temp932 = (rflags != 0);
    if (temp932) goto label60;
    // THERE WAS A NOTE HERE
    long long int temp933 = (long long int)(rbp + -64);
    int *temp934 = (int *)temp933;
    long long int temp935 = (long long int)*temp934;
    long long int temp936 = (long long int)0;
    int temp937;
    if (temp935 == temp936) temp937 = 0;
    else if (temp935 < temp936) temp937 = -1;
    else temp937 = 1;
    rflags = (long long int)(temp937);
    bool temp938 = (rflags != 0);
    if (temp938) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp939 = (long long int)(rbp + -56);
    long long int *temp940 = (long long int *)temp939;
    regs[171] = (long long int)(*temp940);
    long long int temp941 = (long long int)(regs[171] + 24);
    long long int *temp942 = (long long int *)temp941;
    regs[90] = (long long int)(*temp942);
    long long int temp943 = (long long int)regs[90];
    long long int temp944 = (long long int)0;
    int temp945;
    if (temp943 == temp944) temp945 = 0;
    else if (temp943 < temp944) temp945 = -1;
    else temp945 = 1;
    rflags = (long long int)(temp945);
    bool temp946 = (rflags == 0);
    if (temp946) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp947 = (long long int)(rbp + -56);
    long long int *temp948 = (long long int *)temp947;
    regs[172] = (long long int)(*temp948);
    long long int temp949 = (long long int)(regs[172] + 24);
    long long int *temp950 = (long long int *)temp949;
    regs[91] = (long long int)(*temp950);
    long long int temp951 = (long long int)(regs[91] + 32);
    int *temp952 = (int *)temp951;
    *temp952 = (int)(1);
    goto label54;
    // THERE WAS A BARRIER HERE
    label44:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp953 = (long long int)(rbp + -56);
    long long int *temp954 = (long long int *)temp953;
    regs[173] = (long long int)(*temp954);
    long long int temp955 = (long long int)(regs[173] + 16);
    long long int *temp956 = (long long int *)temp955;
    regs[92] = (long long int)(*temp956);
    long long int temp957 = (long long int)regs[92];
    long long int temp958 = (long long int)0;
    int temp959;
    if (temp957 == temp958) temp959 = 0;
    else if (temp957 < temp958) temp959 = -1;
    else temp959 = 1;
    rflags = (long long int)(temp959);
    bool temp960 = (rflags == 0);
    if (temp960) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp961 = (long long int)(rbp + -56);
    long long int *temp962 = (long long int *)temp961;
    regs[174] = (long long int)(*temp962);
    long long int temp963 = (long long int)(regs[174] + 16);
    long long int *temp964 = (long long int *)temp963;
    regs[93] = (long long int)(*temp964);
    long long int temp965 = (long long int)(regs[93] + 32);
    int *temp966 = (int *)temp965;
    *temp966 = (int)(1);
    label54:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp967 = (long long int)(rbp + -56);
    long long int *temp968 = (long long int *)temp967;
    regs[175] = (long long int)(*temp968);
    long long int temp969 = (long long int)(regs[175] + 32);
    int *temp970 = (int *)temp969;
    *temp970 = (int)(0);
    goto label533;
    // THERE WAS A BARRIER HERE
    label60:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp971 = (long long int)(rbp + -56);
    long long int *temp972 = (long long int *)temp971;
    regs[176] = (long long int)(*temp972);
    long long int temp973 = (long long int)(regs[176] + 8);
    long long int *temp974 = (long long int *)temp973;
    regs[177] = (long long int)(*temp974);
    long long int temp975 = (long long int)(rbp + -24);
    long long int *temp976 = (long long int *)temp975;
    *temp976 = (long long int)(regs[177]);
    long long int temp977 = (long long int)(rbp + -12);
    int *temp978 = (int *)temp977;
    *temp978 = (int)(0);
    long long int temp979 = (long long int)(rbp + -24);
    long long int *temp980 = (long long int *)temp979;
    regs[178] = (long long int)(*temp980);
    long long int temp981 = (long long int)(regs[178] + 24);
    long long int *temp982 = (long long int *)temp981;
    regs[94] = (long long int)(*temp982);
    long long int temp983 = (long long int)(rbp + -56);
    long long int *temp984 = (long long int *)temp983;
    long long int temp985 = (long long int)*temp984;
    long long int temp986 = (long long int)regs[94];
    int temp987;
    if (temp985 == temp986) temp987 = 0;
    else if (temp985 < temp986) temp987 = -1;
    else temp987 = 1;
    rflags = (long long int)(temp987);
    bool temp988 = (rflags != 0);
    if (temp988) goto label77;
    // THERE WAS A NOTE HERE
    long long int temp989 = (long long int)(rbp + -24);
    long long int *temp990 = (long long int *)temp989;
    regs[179] = (long long int)(*temp990);
    long long int temp991 = (long long int)(regs[179] + 16);
    long long int *temp992 = (long long int *)temp991;
    regs[180] = (long long int)(*temp992);
    long long int temp993 = (long long int)(rbp + -8);
    long long int *temp994 = (long long int *)temp993;
    *temp994 = (long long int)(regs[180]);
    long long int temp995 = (long long int)(rbp + -12);
    int *temp996 = (int *)temp995;
    *temp996 = (int)(1);
    goto label82;
    // THERE WAS A BARRIER HERE
    label77:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp997 = (long long int)(rbp + -24);
    long long int *temp998 = (long long int *)temp997;
    regs[181] = (long long int)(*temp998);
    long long int temp999 = (long long int)(regs[181] + 24);
    long long int *temp1000 = (long long int *)temp999;
    regs[182] = (long long int)(*temp1000);
    long long int temp1001 = (long long int)(rbp + -8);
    long long int *temp1002 = (long long int *)temp1001;
    *temp1002 = (long long int)(regs[182]);
    label82:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1003 = (long long int)(rbp + -8);
    long long int *temp1004 = (long long int *)temp1003;
    regs[183] = (long long int)(*temp1004);
    long long int temp1005 = (long long int)(regs[183] + 24);
    long long int *temp1006 = (long long int *)temp1005;
    regs[95] = (long long int)(*temp1006);
    long long int temp1007 = (long long int)regs[95];
    long long int temp1008 = (long long int)0;
    int temp1009;
    if (temp1007 == temp1008) temp1009 = 0;
    else if (temp1007 < temp1008) temp1009 = -1;
    else temp1009 = 1;
    rflags = (long long int)(temp1009);
    bool temp1010 = (rflags == 0);
    if (temp1010) goto label94;
    // THERE WAS A NOTE HERE
    long long int temp1011 = (long long int)(rbp + -8);
    long long int *temp1012 = (long long int *)temp1011;
    regs[184] = (long long int)(*temp1012);
    long long int temp1013 = (long long int)(regs[184] + 24);
    long long int *temp1014 = (long long int *)temp1013;
    regs[96] = (long long int)(*temp1014);
    long long int temp1015 = (long long int)(regs[96] + 32);
    int *temp1016 = (int *)temp1015;
    regs[97] = (int)(*temp1016);
    long long int temp1017 = (long long int)regs[97];
    long long int temp1018 = (long long int)1;
    int temp1019;
    if (temp1017 == temp1018) temp1019 = 0;
    else if (temp1017 < temp1018) temp1019 = -1;
    else temp1019 = 1;
    rflags = (long long int)(temp1019);
    bool temp1020 = (rflags == 0);
    if (temp1020) goto label106;
    label94:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1021 = (long long int)(rbp + -8);
    long long int *temp1022 = (long long int *)temp1021;
    regs[185] = (long long int)(*temp1022);
    long long int temp1023 = (long long int)(regs[185] + 16);
    long long int *temp1024 = (long long int *)temp1023;
    regs[98] = (long long int)(*temp1024);
    long long int temp1025 = (long long int)regs[98];
    long long int temp1026 = (long long int)0;
    int temp1027;
    if (temp1025 == temp1026) temp1027 = 0;
    else if (temp1025 < temp1026) temp1027 = -1;
    else temp1027 = 1;
    rflags = (long long int)(temp1027);
    bool temp1028 = (rflags == 0);
    if (temp1028) goto label359;
    // THERE WAS A NOTE HERE
    long long int temp1029 = (long long int)(rbp + -8);
    long long int *temp1030 = (long long int *)temp1029;
    regs[186] = (long long int)(*temp1030);
    long long int temp1031 = (long long int)(regs[186] + 16);
    long long int *temp1032 = (long long int *)temp1031;
    regs[99] = (long long int)(*temp1032);
    long long int temp1033 = (long long int)(regs[99] + 32);
    int *temp1034 = (int *)temp1033;
    regs[100] = (int)(*temp1034);
    long long int temp1035 = (long long int)regs[100];
    long long int temp1036 = (long long int)1;
    int temp1037;
    if (temp1035 == temp1036) temp1037 = 0;
    else if (temp1035 < temp1036) temp1037 = -1;
    else temp1037 = 1;
    rflags = (long long int)(temp1037);
    bool temp1038 = (rflags != 0);
    if (temp1038) goto label359;
    label106:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1039 = (long long int)(rbp + -8);
    long long int *temp1040 = (long long int *)temp1039;
    regs[187] = (long long int)(*temp1040);
    long long int temp1041 = (long long int)(regs[187] + 24);
    long long int *temp1042 = (long long int *)temp1041;
    regs[101] = (long long int)(*temp1042);
    long long int temp1043 = (long long int)regs[101];
    long long int temp1044 = (long long int)0;
    int temp1045;
    if (temp1043 == temp1044) temp1045 = 0;
    else if (temp1043 < temp1044) temp1045 = -1;
    else temp1045 = 1;
    rflags = (long long int)(temp1045);
    bool temp1046 = (rflags == 0);
    if (temp1046) goto label238;
    // THERE WAS A NOTE HERE
    long long int temp1047 = (long long int)(rbp + -8);
    long long int *temp1048 = (long long int *)temp1047;
    regs[188] = (long long int)(*temp1048);
    long long int temp1049 = (long long int)(regs[188] + 24);
    long long int *temp1050 = (long long int *)temp1049;
    regs[102] = (long long int)(*temp1050);
    long long int temp1051 = (long long int)(regs[102] + 32);
    int *temp1052 = (int *)temp1051;
    regs[103] = (int)(*temp1052);
    long long int temp1053 = (long long int)regs[103];
    long long int temp1054 = (long long int)1;
    int temp1055;
    if (temp1053 == temp1054) temp1055 = 0;
    else if (temp1053 < temp1054) temp1055 = -1;
    else temp1055 = 1;
    rflags = (long long int)(temp1055);
    bool temp1056 = (rflags != 0);
    if (temp1056) goto label238;
    // THERE WAS A NOTE HERE
    long long int temp1057 = (long long int)(rbp + -12);
    int *temp1058 = (int *)temp1057;
    long long int temp1059 = (long long int)*temp1058;
    long long int temp1060 = (long long int)1;
    int temp1061;
    if (temp1059 == temp1060) temp1061 = 0;
    else if (temp1059 < temp1060) temp1061 = -1;
    else temp1061 = 1;
    rflags = (long long int)(temp1061);
    bool temp1062 = (rflags != 0);
    if (temp1062) goto label182;
    // THERE WAS A NOTE HERE
    long long int temp1063 = (long long int)(rbp + -24);
    long long int *temp1064 = (long long int *)temp1063;
    regs[189] = (long long int)(*temp1064);
    long long int temp1065 = (long long int)(regs[189] + 32);
    int *temp1066 = (int *)temp1065;
    regs[190] = (int)(*temp1066);
    long long int temp1067 = (long long int)(rbp + -32);
    int *temp1068 = (int *)temp1067;
    *temp1068 = (int)(regs[190]);
    long long int temp1069 = (long long int)(rbp + -8);
    long long int *temp1070 = (long long int *)temp1069;
    regs[191] = (long long int)(*temp1070);
    long long int temp1071 = (long long int)(regs[191] + 24);
    long long int *temp1072 = (long long int *)temp1071;
    regs[104] = (long long int)(*temp1072);
    rdi = (long long int)(regs[104]);
    long long int temp1073 = leftRotate(rdi);
    rax = (long long int)temp1073;
    regs[192] = (long long int)(rax);
    long long int temp1074 = (long long int)(rbp + -8);
    long long int *temp1075 = (long long int *)temp1074;
    *temp1075 = (long long int)(regs[192]);
    long long int temp1076 = (long long int)(rbp + -8);
    long long int *temp1077 = (long long int *)temp1076;
    regs[193] = (long long int)(*temp1077);
    rdi = (long long int)(regs[193]);
    long long int temp1078 = rightRotate(rdi);
    rax = (long long int)temp1078;
    regs[194] = (long long int)(rax);
    long long int temp1079 = (long long int)(rbp + -24);
    long long int *temp1080 = (long long int *)temp1079;
    *temp1080 = (long long int)(regs[194]);
    long long int temp1081 = (long long int)(rbp + -24);
    long long int *temp1082 = (long long int *)temp1081;
    regs[195] = (long long int)(*temp1082);
    long long int temp1083 = (long long int)(regs[195] + 8);
    long long int *temp1084 = (long long int *)temp1083;
    regs[105] = (long long int)(*temp1084);
    long long int temp1085 = (long long int)regs[105];
    long long int temp1086 = (long long int)0;
    int temp1087;
    if (temp1085 == temp1086) temp1087 = 0;
    else if (temp1085 < temp1086) temp1087 = -1;
    else temp1087 = 1;
    rflags = (long long int)(temp1087);
    bool temp1088 = (rflags != 0);
    if (temp1088) goto label144;
    // THERE WAS A NOTE HERE
    long long int temp1089 = (long long int)(rbp + -72);
    long long int *temp1090 = (long long int *)temp1089;
    regs[196] = (long long int)(*temp1090);
    long long int temp1091 = (long long int)(rbp + -24);
    long long int *temp1092 = (long long int *)temp1091;
    regs[197] = (long long int)(*temp1092);
    long long int *temp1093 = (long long int *)regs[196];
    *temp1093 = (long long int)(regs[197]);
    label144:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1094 = (long long int)(rbp + -24);
    long long int *temp1095 = (long long int *)temp1094;
    regs[198] = (long long int)(*temp1095);
    long long int temp1096 = (long long int)(rbp + -32);
    int *temp1097 = (int *)temp1096;
    regs[199] = (int)(*temp1097);
    long long int temp1098 = (long long int)(regs[198] + 32);
    int *temp1099 = (int *)temp1098;
    *temp1099 = (int)(regs[199]);
    long long int temp1100 = (long long int)(rbp + -24);
    long long int *temp1101 = (long long int *)temp1100;
    regs[200] = (long long int)(*temp1101);
    long long int temp1102 = (long long int)(regs[200] + 16);
    long long int *temp1103 = (long long int *)temp1102;
    regs[106] = (long long int)(*temp1103);
    long long int temp1104 = (long long int)(regs[106] + 32);
    int *temp1105 = (int *)temp1104;
    *temp1105 = (int)(0);
    long long int temp1106 = (long long int)(rbp + -24);
    long long int *temp1107 = (long long int *)temp1106;
    regs[201] = (long long int)(*temp1107);
    long long int temp1108 = (long long int)(regs[201] + 24);
    long long int *temp1109 = (long long int *)temp1108;
    regs[107] = (long long int)(*temp1109);
    long long int temp1110 = (long long int)(regs[107] + 32);
    int *temp1111 = (int *)temp1110;
    *temp1111 = (int)(0);
    long long int temp1112 = (long long int)(rbp + -60);
    int *temp1113 = (int *)temp1112;
    long long int temp1114 = (long long int)*temp1113;
    long long int temp1115 = (long long int)0;
    int temp1116;
    if (temp1114 == temp1115) temp1116 = 0;
    else if (temp1114 < temp1115) temp1116 = -1;
    else temp1116 = 1;
    rflags = (long long int)(temp1116);
    bool temp1117 = (rflags == 0);
    if (temp1117) goto label355;
    // THERE WAS A NOTE HERE
    long long int temp1118 = (long long int)(rbp + -56);
    long long int *temp1119 = (long long int *)temp1118;
    regs[202] = (long long int)(*temp1119);
    long long int temp1120 = (long long int)(regs[202] + 16);
    long long int *temp1121 = (long long int *)temp1120;
    regs[108] = (long long int)(*temp1121);
    long long int temp1122 = (long long int)regs[108];
    long long int temp1123 = (long long int)0;
    int temp1124;
    if (temp1122 == temp1123) temp1124 = 0;
    else if (temp1122 < temp1123) temp1124 = -1;
    else temp1124 = 1;
    rflags = (long long int)(temp1124);
    bool temp1125 = (rflags == 0);
    if (temp1125) goto label168;
    // THERE WAS A NOTE HERE
    long long int temp1126 = (long long int)(rbp + -56);
    long long int *temp1127 = (long long int *)temp1126;
    regs[203] = (long long int)(*temp1127);
    long long int temp1128 = (long long int)(regs[203] + 16);
    long long int *temp1129 = (long long int *)temp1128;
    regs[109] = (long long int)(*temp1129);
    long long int temp1130 = (long long int)(rbp + -24);
    long long int *temp1131 = (long long int *)temp1130;
    regs[204] = (long long int)(*temp1131);
    long long int temp1132 = (long long int)(regs[204] + 24);
    long long int *temp1133 = (long long int *)temp1132;
    regs[110] = (long long int)(*temp1133);
    long long int temp1134 = (long long int)(regs[109] + 8);
    long long int *temp1135 = (long long int *)temp1134;
    *temp1135 = (long long int)(regs[110]);
    label168:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1136 = (long long int)(rbp + -24);
    long long int *temp1137 = (long long int *)temp1136;
    regs[205] = (long long int)(*temp1137);
    long long int temp1138 = (long long int)(regs[205] + 24);
    long long int *temp1139 = (long long int *)temp1138;
    regs[111] = (long long int)(*temp1139);
    long long int temp1140 = (long long int)(rbp + -56);
    long long int *temp1141 = (long long int *)temp1140;
    regs[206] = (long long int)(*temp1141);
    long long int temp1142 = (long long int)(regs[206] + 16);
    long long int *temp1143 = (long long int *)temp1142;
    regs[112] = (long long int)(*temp1143);
    long long int temp1144 = (long long int)(regs[111] + 24);
    long long int *temp1145 = (long long int *)temp1144;
    *temp1145 = (long long int)(regs[112]);
    long long int temp1146 = (long long int)(rbp + -56);
    long long int *temp1147 = (long long int *)temp1146;
    regs[207] = (long long int)(*temp1147);
    rdi = (long long int)(regs[207]);
    free(rdi);
    goto label355;
    // THERE WAS A BARRIER HERE
    label182:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1148 = (long long int)(rbp + -24);
    long long int *temp1149 = (long long int *)temp1148;
    regs[208] = (long long int)(*temp1149);
    long long int temp1150 = (long long int)(regs[208] + 32);
    int *temp1151 = (int *)temp1150;
    regs[209] = (int)(*temp1151);
    long long int temp1152 = (long long int)(rbp + -28);
    int *temp1153 = (int *)temp1152;
    *temp1153 = (int)(regs[209]);
    long long int temp1154 = (long long int)(rbp + -8);
    long long int *temp1155 = (long long int *)temp1154;
    regs[210] = (long long int)(*temp1155);
    rdi = (long long int)(regs[210]);
    long long int temp1156 = leftRotate(rdi);
    rax = (long long int)temp1156;
    regs[211] = (long long int)(rax);
    long long int temp1157 = (long long int)(rbp + -24);
    long long int *temp1158 = (long long int *)temp1157;
    *temp1158 = (long long int)(regs[211]);
    long long int temp1159 = (long long int)(rbp + -24);
    long long int *temp1160 = (long long int *)temp1159;
    regs[212] = (long long int)(*temp1160);
    long long int temp1161 = (long long int)(regs[212] + 8);
    long long int *temp1162 = (long long int *)temp1161;
    regs[113] = (long long int)(*temp1162);
    long long int temp1163 = (long long int)regs[113];
    long long int temp1164 = (long long int)0;
    int temp1165;
    if (temp1163 == temp1164) temp1165 = 0;
    else if (temp1163 < temp1164) temp1165 = -1;
    else temp1165 = 1;
    rflags = (long long int)(temp1165);
    bool temp1166 = (rflags != 0);
    if (temp1166) goto label200;
    // THERE WAS A NOTE HERE
    long long int temp1167 = (long long int)(rbp + -72);
    long long int *temp1168 = (long long int *)temp1167;
    regs[213] = (long long int)(*temp1168);
    long long int temp1169 = (long long int)(rbp + -24);
    long long int *temp1170 = (long long int *)temp1169;
    regs[214] = (long long int)(*temp1170);
    long long int *temp1171 = (long long int *)regs[213];
    *temp1171 = (long long int)(regs[214]);
    label200:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1172 = (long long int)(rbp + -24);
    long long int *temp1173 = (long long int *)temp1172;
    regs[215] = (long long int)(*temp1173);
    long long int temp1174 = (long long int)(rbp + -28);
    int *temp1175 = (int *)temp1174;
    regs[216] = (int)(*temp1175);
    long long int temp1176 = (long long int)(regs[215] + 32);
    int *temp1177 = (int *)temp1176;
    *temp1177 = (int)(regs[216]);
    long long int temp1178 = (long long int)(rbp + -24);
    long long int *temp1179 = (long long int *)temp1178;
    regs[217] = (long long int)(*temp1179);
    long long int temp1180 = (long long int)(regs[217] + 16);
    long long int *temp1181 = (long long int *)temp1180;
    regs[114] = (long long int)(*temp1181);
    long long int temp1182 = (long long int)(regs[114] + 32);
    int *temp1183 = (int *)temp1182;
    *temp1183 = (int)(0);
    long long int temp1184 = (long long int)(rbp + -24);
    long long int *temp1185 = (long long int *)temp1184;
    regs[218] = (long long int)(*temp1185);
    long long int temp1186 = (long long int)(regs[218] + 24);
    long long int *temp1187 = (long long int *)temp1186;
    regs[115] = (long long int)(*temp1187);
    long long int temp1188 = (long long int)(regs[115] + 32);
    int *temp1189 = (int *)temp1188;
    *temp1189 = (int)(0);
    long long int temp1190 = (long long int)(rbp + -60);
    int *temp1191 = (int *)temp1190;
    long long int temp1192 = (long long int)*temp1191;
    long long int temp1193 = (long long int)0;
    int temp1194;
    if (temp1192 == temp1193) temp1194 = 0;
    else if (temp1192 < temp1193) temp1194 = -1;
    else temp1194 = 1;
    rflags = (long long int)(temp1194);
    bool temp1195 = (rflags == 0);
    if (temp1195) goto label355;
    // THERE WAS A NOTE HERE
    long long int temp1196 = (long long int)(rbp + -56);
    long long int *temp1197 = (long long int *)temp1196;
    regs[219] = (long long int)(*temp1197);
    long long int temp1198 = (long long int)(regs[219] + 24);
    long long int *temp1199 = (long long int *)temp1198;
    regs[116] = (long long int)(*temp1199);
    long long int temp1200 = (long long int)regs[116];
    long long int temp1201 = (long long int)0;
    int temp1202;
    if (temp1200 == temp1201) temp1202 = 0;
    else if (temp1200 < temp1201) temp1202 = -1;
    else temp1202 = 1;
    rflags = (long long int)(temp1202);
    bool temp1203 = (rflags == 0);
    if (temp1203) goto label224;
    // THERE WAS A NOTE HERE
    long long int temp1204 = (long long int)(rbp + -56);
    long long int *temp1205 = (long long int *)temp1204;
    regs[220] = (long long int)(*temp1205);
    long long int temp1206 = (long long int)(regs[220] + 24);
    long long int *temp1207 = (long long int *)temp1206;
    regs[117] = (long long int)(*temp1207);
    long long int temp1208 = (long long int)(rbp + -24);
    long long int *temp1209 = (long long int *)temp1208;
    regs[221] = (long long int)(*temp1209);
    long long int temp1210 = (long long int)(regs[221] + 16);
    long long int *temp1211 = (long long int *)temp1210;
    regs[118] = (long long int)(*temp1211);
    long long int temp1212 = (long long int)(regs[117] + 8);
    long long int *temp1213 = (long long int *)temp1212;
    *temp1213 = (long long int)(regs[118]);
    label224:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1214 = (long long int)(rbp + -24);
    long long int *temp1215 = (long long int *)temp1214;
    regs[222] = (long long int)(*temp1215);
    long long int temp1216 = (long long int)(regs[222] + 16);
    long long int *temp1217 = (long long int *)temp1216;
    regs[119] = (long long int)(*temp1217);
    long long int temp1218 = (long long int)(rbp + -56);
    long long int *temp1219 = (long long int *)temp1218;
    regs[223] = (long long int)(*temp1219);
    long long int temp1220 = (long long int)(regs[223] + 16);
    long long int *temp1221 = (long long int *)temp1220;
    regs[120] = (long long int)(*temp1221);
    long long int temp1222 = (long long int)(regs[119] + 16);
    long long int *temp1223 = (long long int *)temp1222;
    *temp1223 = (long long int)(regs[120]);
    long long int temp1224 = (long long int)(rbp + -56);
    long long int *temp1225 = (long long int *)temp1224;
    regs[224] = (long long int)(*temp1225);
    rdi = (long long int)(regs[224]);
    free(rdi);
    goto label355;
    // THERE WAS A BARRIER HERE
    label238:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1226 = (long long int)(rbp + -12);
    int *temp1227 = (int *)temp1226;
    long long int temp1228 = (long long int)*temp1227;
    long long int temp1229 = (long long int)0;
    int temp1230;
    if (temp1228 == temp1229) temp1230 = 0;
    else if (temp1228 < temp1229) temp1230 = -1;
    else temp1230 = 1;
    rflags = (long long int)(temp1230);
    bool temp1231 = (rflags != 0);
    if (temp1231) goto label303;
    // THERE WAS A NOTE HERE
    long long int temp1232 = (long long int)(rbp + -24);
    long long int *temp1233 = (long long int *)temp1232;
    regs[225] = (long long int)(*temp1233);
    long long int temp1234 = (long long int)(regs[225] + 32);
    int *temp1235 = (int *)temp1234;
    regs[226] = (int)(*temp1235);
    long long int temp1236 = (long long int)(rbp + -40);
    int *temp1237 = (int *)temp1236;
    *temp1237 = (int)(regs[226]);
    long long int temp1238 = (long long int)(rbp + -8);
    long long int *temp1239 = (long long int *)temp1238;
    regs[227] = (long long int)(*temp1239);
    long long int temp1240 = (long long int)(regs[227] + 16);
    long long int *temp1241 = (long long int *)temp1240;
    regs[121] = (long long int)(*temp1241);
    rdi = (long long int)(regs[121]);
    long long int temp1242 = rightRotate(rdi);
    rax = (long long int)temp1242;
    regs[228] = (long long int)(rax);
    long long int temp1243 = (long long int)(rbp + -8);
    long long int *temp1244 = (long long int *)temp1243;
    *temp1244 = (long long int)(regs[228]);
    long long int temp1245 = (long long int)(rbp + -8);
    long long int *temp1246 = (long long int *)temp1245;
    regs[229] = (long long int)(*temp1246);
    rdi = (long long int)(regs[229]);
    long long int temp1247 = leftRotate(rdi);
    rax = (long long int)temp1247;
    regs[230] = (long long int)(rax);
    long long int temp1248 = (long long int)(rbp + -24);
    long long int *temp1249 = (long long int *)temp1248;
    *temp1249 = (long long int)(regs[230]);
    long long int temp1250 = (long long int)(rbp + -24);
    long long int *temp1251 = (long long int *)temp1250;
    regs[231] = (long long int)(*temp1251);
    long long int temp1252 = (long long int)(regs[231] + 8);
    long long int *temp1253 = (long long int *)temp1252;
    regs[122] = (long long int)(*temp1253);
    long long int temp1254 = (long long int)regs[122];
    long long int temp1255 = (long long int)0;
    int temp1256;
    if (temp1254 == temp1255) temp1256 = 0;
    else if (temp1254 < temp1255) temp1256 = -1;
    else temp1256 = 1;
    rflags = (long long int)(temp1256);
    bool temp1257 = (rflags != 0);
    if (temp1257) goto label265;
    // THERE WAS A NOTE HERE
    long long int temp1258 = (long long int)(rbp + -72);
    long long int *temp1259 = (long long int *)temp1258;
    regs[232] = (long long int)(*temp1259);
    long long int temp1260 = (long long int)(rbp + -24);
    long long int *temp1261 = (long long int *)temp1260;
    regs[233] = (long long int)(*temp1261);
    long long int *temp1262 = (long long int *)regs[232];
    *temp1262 = (long long int)(regs[233]);
    label265:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1263 = (long long int)(rbp + -24);
    long long int *temp1264 = (long long int *)temp1263;
    regs[234] = (long long int)(*temp1264);
    long long int temp1265 = (long long int)(rbp + -40);
    int *temp1266 = (int *)temp1265;
    regs[235] = (int)(*temp1266);
    long long int temp1267 = (long long int)(regs[234] + 32);
    int *temp1268 = (int *)temp1267;
    *temp1268 = (int)(regs[235]);
    long long int temp1269 = (long long int)(rbp + -24);
    long long int *temp1270 = (long long int *)temp1269;
    regs[236] = (long long int)(*temp1270);
    long long int temp1271 = (long long int)(regs[236] + 16);
    long long int *temp1272 = (long long int *)temp1271;
    regs[123] = (long long int)(*temp1272);
    long long int temp1273 = (long long int)(regs[123] + 32);
    int *temp1274 = (int *)temp1273;
    *temp1274 = (int)(0);
    long long int temp1275 = (long long int)(rbp + -24);
    long long int *temp1276 = (long long int *)temp1275;
    regs[237] = (long long int)(*temp1276);
    long long int temp1277 = (long long int)(regs[237] + 24);
    long long int *temp1278 = (long long int *)temp1277;
    regs[124] = (long long int)(*temp1278);
    long long int temp1279 = (long long int)(regs[124] + 32);
    int *temp1280 = (int *)temp1279;
    *temp1280 = (int)(0);
    long long int temp1281 = (long long int)(rbp + -60);
    int *temp1282 = (int *)temp1281;
    long long int temp1283 = (long long int)*temp1282;
    long long int temp1284 = (long long int)0;
    int temp1285;
    if (temp1283 == temp1284) temp1285 = 0;
    else if (temp1283 < temp1284) temp1285 = -1;
    else temp1285 = 1;
    rflags = (long long int)(temp1285);
    bool temp1286 = (rflags == 0);
    if (temp1286) goto label533;
    // THERE WAS A NOTE HERE
    long long int temp1287 = (long long int)(rbp + -56);
    long long int *temp1288 = (long long int *)temp1287;
    regs[238] = (long long int)(*temp1288);
    long long int temp1289 = (long long int)(regs[238] + 24);
    long long int *temp1290 = (long long int *)temp1289;
    regs[125] = (long long int)(*temp1290);
    long long int temp1291 = (long long int)regs[125];
    long long int temp1292 = (long long int)0;
    int temp1293;
    if (temp1291 == temp1292) temp1293 = 0;
    else if (temp1291 < temp1292) temp1293 = -1;
    else temp1293 = 1;
    rflags = (long long int)(temp1293);
    bool temp1294 = (rflags == 0);
    if (temp1294) goto label289;
    // THERE WAS A NOTE HERE
    long long int temp1295 = (long long int)(rbp + -56);
    long long int *temp1296 = (long long int *)temp1295;
    regs[239] = (long long int)(*temp1296);
    long long int temp1297 = (long long int)(regs[239] + 24);
    long long int *temp1298 = (long long int *)temp1297;
    regs[126] = (long long int)(*temp1298);
    long long int temp1299 = (long long int)(rbp + -24);
    long long int *temp1300 = (long long int *)temp1299;
    regs[240] = (long long int)(*temp1300);
    long long int temp1301 = (long long int)(regs[240] + 16);
    long long int *temp1302 = (long long int *)temp1301;
    regs[127] = (long long int)(*temp1302);
    long long int temp1303 = (long long int)(regs[126] + 8);
    long long int *temp1304 = (long long int *)temp1303;
    *temp1304 = (long long int)(regs[127]);
    label289:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1305 = (long long int)(rbp + -24);
    long long int *temp1306 = (long long int *)temp1305;
    regs[241] = (long long int)(*temp1306);
    long long int temp1307 = (long long int)(regs[241] + 16);
    long long int *temp1308 = (long long int *)temp1307;
    regs[128] = (long long int)(*temp1308);
    long long int temp1309 = (long long int)(rbp + -56);
    long long int *temp1310 = (long long int *)temp1309;
    regs[242] = (long long int)(*temp1310);
    long long int temp1311 = (long long int)(regs[242] + 24);
    long long int *temp1312 = (long long int *)temp1311;
    regs[129] = (long long int)(*temp1312);
    long long int temp1313 = (long long int)(regs[128] + 16);
    long long int *temp1314 = (long long int *)temp1313;
    *temp1314 = (long long int)(regs[129]);
    long long int temp1315 = (long long int)(rbp + -56);
    long long int *temp1316 = (long long int *)temp1315;
    regs[243] = (long long int)(*temp1316);
    rdi = (long long int)(regs[243]);
    free(rdi);
    goto label533;
    // THERE WAS A BARRIER HERE
    label303:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1317 = (long long int)(rbp + -24);
    long long int *temp1318 = (long long int *)temp1317;
    regs[244] = (long long int)(*temp1318);
    long long int temp1319 = (long long int)(regs[244] + 32);
    int *temp1320 = (int *)temp1319;
    regs[245] = (int)(*temp1320);
    long long int temp1321 = (long long int)(rbp + -36);
    int *temp1322 = (int *)temp1321;
    *temp1322 = (int)(regs[245]);
    long long int temp1323 = (long long int)(rbp + -8);
    long long int *temp1324 = (long long int *)temp1323;
    regs[246] = (long long int)(*temp1324);
    rdi = (long long int)(regs[246]);
    long long int temp1325 = rightRotate(rdi);
    rax = (long long int)temp1325;
    regs[247] = (long long int)(rax);
    long long int temp1326 = (long long int)(rbp + -24);
    long long int *temp1327 = (long long int *)temp1326;
    *temp1327 = (long long int)(regs[247]);
    long long int temp1328 = (long long int)(rbp + -24);
    long long int *temp1329 = (long long int *)temp1328;
    regs[248] = (long long int)(*temp1329);
    long long int temp1330 = (long long int)(regs[248] + 8);
    long long int *temp1331 = (long long int *)temp1330;
    regs[130] = (long long int)(*temp1331);
    long long int temp1332 = (long long int)regs[130];
    long long int temp1333 = (long long int)0;
    int temp1334;
    if (temp1332 == temp1333) temp1334 = 0;
    else if (temp1332 < temp1333) temp1334 = -1;
    else temp1334 = 1;
    rflags = (long long int)(temp1334);
    bool temp1335 = (rflags != 0);
    if (temp1335) goto label321;
    // THERE WAS A NOTE HERE
    long long int temp1336 = (long long int)(rbp + -72);
    long long int *temp1337 = (long long int *)temp1336;
    regs[249] = (long long int)(*temp1337);
    long long int temp1338 = (long long int)(rbp + -24);
    long long int *temp1339 = (long long int *)temp1338;
    regs[250] = (long long int)(*temp1339);
    long long int *temp1340 = (long long int *)regs[249];
    *temp1340 = (long long int)(regs[250]);
    label321:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1341 = (long long int)(rbp + -24);
    long long int *temp1342 = (long long int *)temp1341;
    regs[251] = (long long int)(*temp1342);
    long long int temp1343 = (long long int)(rbp + -36);
    int *temp1344 = (int *)temp1343;
    regs[252] = (int)(*temp1344);
    long long int temp1345 = (long long int)(regs[251] + 32);
    int *temp1346 = (int *)temp1345;
    *temp1346 = (int)(regs[252]);
    long long int temp1347 = (long long int)(rbp + -24);
    long long int *temp1348 = (long long int *)temp1347;
    regs[253] = (long long int)(*temp1348);
    long long int temp1349 = (long long int)(regs[253] + 16);
    long long int *temp1350 = (long long int *)temp1349;
    regs[131] = (long long int)(*temp1350);
    long long int temp1351 = (long long int)(regs[131] + 32);
    int *temp1352 = (int *)temp1351;
    *temp1352 = (int)(0);
    long long int temp1353 = (long long int)(rbp + -24);
    long long int *temp1354 = (long long int *)temp1353;
    regs[254] = (long long int)(*temp1354);
    long long int temp1355 = (long long int)(regs[254] + 24);
    long long int *temp1356 = (long long int *)temp1355;
    regs[132] = (long long int)(*temp1356);
    long long int temp1357 = (long long int)(regs[132] + 32);
    int *temp1358 = (int *)temp1357;
    *temp1358 = (int)(0);
    long long int temp1359 = (long long int)(rbp + -60);
    int *temp1360 = (int *)temp1359;
    long long int temp1361 = (long long int)*temp1360;
    long long int temp1362 = (long long int)0;
    int temp1363;
    if (temp1361 == temp1362) temp1363 = 0;
    else if (temp1361 < temp1362) temp1363 = -1;
    else temp1363 = 1;
    rflags = (long long int)(temp1363);
    bool temp1364 = (rflags == 0);
    if (temp1364) goto label533;
    // THERE WAS A NOTE HERE
    long long int temp1365 = (long long int)(rbp + -56);
    long long int *temp1366 = (long long int *)temp1365;
    regs[255] = (long long int)(*temp1366);
    long long int temp1367 = (long long int)(regs[255] + 16);
    long long int *temp1368 = (long long int *)temp1367;
    regs[133] = (long long int)(*temp1368);
    long long int temp1369 = (long long int)regs[133];
    long long int temp1370 = (long long int)0;
    int temp1371;
    if (temp1369 == temp1370) temp1371 = 0;
    else if (temp1369 < temp1370) temp1371 = -1;
    else temp1371 = 1;
    rflags = (long long int)(temp1371);
    bool temp1372 = (rflags == 0);
    if (temp1372) goto label345;
    // THERE WAS A NOTE HERE
    long long int temp1373 = (long long int)(rbp + -56);
    long long int *temp1374 = (long long int *)temp1373;
    regs[256] = (long long int)(*temp1374);
    long long int temp1375 = (long long int)(regs[256] + 16);
    long long int *temp1376 = (long long int *)temp1375;
    regs[134] = (long long int)(*temp1376);
    long long int temp1377 = (long long int)(rbp + -24);
    long long int *temp1378 = (long long int *)temp1377;
    regs[257] = (long long int)(*temp1378);
    long long int temp1379 = (long long int)(regs[257] + 24);
    long long int *temp1380 = (long long int *)temp1379;
    regs[135] = (long long int)(*temp1380);
    long long int temp1381 = (long long int)(regs[134] + 8);
    long long int *temp1382 = (long long int *)temp1381;
    *temp1382 = (long long int)(regs[135]);
    label345:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1383 = (long long int)(rbp + -24);
    long long int *temp1384 = (long long int *)temp1383;
    regs[258] = (long long int)(*temp1384);
    long long int temp1385 = (long long int)(regs[258] + 24);
    long long int *temp1386 = (long long int *)temp1385;
    regs[136] = (long long int)(*temp1386);
    long long int temp1387 = (long long int)(rbp + -56);
    long long int *temp1388 = (long long int *)temp1387;
    regs[259] = (long long int)(*temp1388);
    long long int temp1389 = (long long int)(regs[259] + 16);
    long long int *temp1390 = (long long int *)temp1389;
    regs[137] = (long long int)(*temp1390);
    long long int temp1391 = (long long int)(regs[136] + 24);
    long long int *temp1392 = (long long int *)temp1391;
    *temp1392 = (long long int)(regs[137]);
    long long int temp1393 = (long long int)(rbp + -56);
    long long int *temp1394 = (long long int *)temp1393;
    regs[260] = (long long int)(*temp1394);
    rdi = (long long int)(regs[260]);
    free(rdi);
    label355:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    goto label533;
    // THERE WAS A BARRIER HERE
    label359:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1395 = (long long int)(rbp + -8);
    long long int *temp1396 = (long long int *)temp1395;
    regs[261] = (long long int)(*temp1396);
    long long int temp1397 = (long long int)(regs[261] + 32);
    int *temp1398 = (int *)temp1397;
    regs[138] = (int)(*temp1398);
    long long int temp1399 = (long long int)regs[138];
    long long int temp1400 = (long long int)0;
    int temp1401;
    if (temp1399 == temp1400) temp1401 = 0;
    else if (temp1399 < temp1400) temp1401 = -1;
    else temp1401 = 1;
    rflags = (long long int)(temp1401);
    bool temp1402 = (rflags != 0);
    if (temp1402) goto label422;
    // THERE WAS A NOTE HERE
    long long int temp1403 = (long long int)(rbp + -8);
    long long int *temp1404 = (long long int *)temp1403;
    regs[262] = (long long int)(*temp1404);
    long long int temp1405 = (long long int)(regs[262] + 32);
    int *temp1406 = (int *)temp1405;
    *temp1406 = (int)(1);
    long long int temp1407 = (long long int)(rbp + -60);
    int *temp1408 = (int *)temp1407;
    long long int temp1409 = (long long int)*temp1408;
    long long int temp1410 = (long long int)0;
    int temp1411;
    if (temp1409 == temp1410) temp1411 = 0;
    else if (temp1409 < temp1410) temp1411 = -1;
    else temp1411 = 1;
    rflags = (long long int)(temp1411);
    bool temp1412 = (rflags == 0);
    if (temp1412) goto label410;
    // THERE WAS A NOTE HERE
    long long int temp1413 = (long long int)(rbp + -12);
    int *temp1414 = (int *)temp1413;
    long long int temp1415 = (long long int)*temp1414;
    long long int temp1416 = (long long int)0;
    int temp1417;
    if (temp1415 == temp1416) temp1417 = 0;
    else if (temp1415 < temp1416) temp1417 = -1;
    else temp1417 = 1;
    rflags = (long long int)(temp1417);
    bool temp1418 = (rflags == 0);
    if (temp1418) goto label393;
    // THERE WAS A NOTE HERE
    long long int temp1419 = (long long int)(rbp + -56);
    long long int *temp1420 = (long long int *)temp1419;
    regs[263] = (long long int)(*temp1420);
    long long int temp1421 = (long long int)(regs[263] + 8);
    long long int *temp1422 = (long long int *)temp1421;
    regs[139] = (long long int)(*temp1422);
    long long int temp1423 = (long long int)(rbp + -56);
    long long int *temp1424 = (long long int *)temp1423;
    regs[264] = (long long int)(*temp1424);
    long long int temp1425 = (long long int)(regs[264] + 16);
    long long int *temp1426 = (long long int *)temp1425;
    regs[140] = (long long int)(*temp1426);
    long long int temp1427 = (long long int)(regs[139] + 24);
    long long int *temp1428 = (long long int *)temp1427;
    *temp1428 = (long long int)(regs[140]);
    long long int temp1429 = (long long int)(rbp + -56);
    long long int *temp1430 = (long long int *)temp1429;
    regs[265] = (long long int)(*temp1430);
    long long int temp1431 = (long long int)(regs[265] + 16);
    long long int *temp1432 = (long long int *)temp1431;
    regs[141] = (long long int)(*temp1432);
    long long int temp1433 = (long long int)regs[141];
    long long int temp1434 = (long long int)0;
    int temp1435;
    if (temp1433 == temp1434) temp1435 = 0;
    else if (temp1433 < temp1434) temp1435 = -1;
    else temp1435 = 1;
    rflags = (long long int)(temp1435);
    bool temp1436 = (rflags == 0);
    if (temp1436) goto label410;
    // THERE WAS A NOTE HERE
    long long int temp1437 = (long long int)(rbp + -56);
    long long int *temp1438 = (long long int *)temp1437;
    regs[266] = (long long int)(*temp1438);
    long long int temp1439 = (long long int)(regs[266] + 16);
    long long int *temp1440 = (long long int *)temp1439;
    regs[142] = (long long int)(*temp1440);
    long long int temp1441 = (long long int)(rbp + -56);
    long long int *temp1442 = (long long int *)temp1441;
    regs[267] = (long long int)(*temp1442);
    long long int temp1443 = (long long int)(regs[267] + 8);
    long long int *temp1444 = (long long int *)temp1443;
    regs[143] = (long long int)(*temp1444);
    long long int temp1445 = (long long int)(regs[142] + 8);
    long long int *temp1446 = (long long int *)temp1445;
    *temp1446 = (long long int)(regs[143]);
    goto label410;
    // THERE WAS A BARRIER HERE
    label393:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1447 = (long long int)(rbp + -56);
    long long int *temp1448 = (long long int *)temp1447;
    regs[268] = (long long int)(*temp1448);
    long long int temp1449 = (long long int)(regs[268] + 8);
    long long int *temp1450 = (long long int *)temp1449;
    regs[144] = (long long int)(*temp1450);
    long long int temp1451 = (long long int)(rbp + -56);
    long long int *temp1452 = (long long int *)temp1451;
    regs[269] = (long long int)(*temp1452);
    long long int temp1453 = (long long int)(regs[269] + 24);
    long long int *temp1454 = (long long int *)temp1453;
    regs[145] = (long long int)(*temp1454);
    long long int temp1455 = (long long int)(regs[144] + 16);
    long long int *temp1456 = (long long int *)temp1455;
    *temp1456 = (long long int)(regs[145]);
    long long int temp1457 = (long long int)(rbp + -56);
    long long int *temp1458 = (long long int *)temp1457;
    regs[270] = (long long int)(*temp1458);
    long long int temp1459 = (long long int)(regs[270] + 24);
    long long int *temp1460 = (long long int *)temp1459;
    regs[146] = (long long int)(*temp1460);
    long long int temp1461 = (long long int)regs[146];
    long long int temp1462 = (long long int)0;
    int temp1463;
    if (temp1461 == temp1462) temp1463 = 0;
    else if (temp1461 < temp1462) temp1463 = -1;
    else temp1463 = 1;
    rflags = (long long int)(temp1463);
    bool temp1464 = (rflags == 0);
    if (temp1464) goto label410;
    // THERE WAS A NOTE HERE
    long long int temp1465 = (long long int)(rbp + -56);
    long long int *temp1466 = (long long int *)temp1465;
    regs[271] = (long long int)(*temp1466);
    long long int temp1467 = (long long int)(regs[271] + 24);
    long long int *temp1468 = (long long int *)temp1467;
    regs[147] = (long long int)(*temp1468);
    long long int temp1469 = (long long int)(rbp + -56);
    long long int *temp1470 = (long long int *)temp1469;
    regs[272] = (long long int)(*temp1470);
    long long int temp1471 = (long long int)(regs[272] + 8);
    long long int *temp1472 = (long long int *)temp1471;
    regs[148] = (long long int)(*temp1472);
    long long int temp1473 = (long long int)(regs[147] + 8);
    long long int *temp1474 = (long long int *)temp1473;
    *temp1474 = (long long int)(regs[148]);
    label410:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1475 = (long long int)(rbp + -72);
    long long int *temp1476 = (long long int *)temp1475;
    regs[273] = (long long int)(*temp1476);
    long long int temp1477 = (long long int)(rbp + -12);
    int *temp1478 = (int *)temp1477;
    regs[274] = (int)(*temp1478);
    long long int temp1479 = (long long int)(rbp + -24);
    long long int *temp1480 = (long long int *)temp1479;
    regs[275] = (long long int)(*temp1480);
    rcx = (long long int)(regs[273]);
    rdx = (int)(regs[274]);
    rsi = (int)(0);
    rdi = (long long int)(regs[275]);
    checkForCase2(rdi, (int)rsi, (int)rdx, rcx);
    goto label533;
    // THERE WAS A BARRIER HERE
    label422:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1481 = (long long int)(rbp + -12);
    int *temp1482 = (int *)temp1481;
    long long int temp1483 = (long long int)*temp1482;
    long long int temp1484 = (long long int)0;
    int temp1485;
    if (temp1483 == temp1484) temp1485 = 0;
    else if (temp1483 < temp1484) temp1485 = -1;
    else temp1485 = 1;
    rflags = (long long int)(temp1485);
    bool temp1486 = (rflags == 0);
    if (temp1486) goto label474;
    // THERE WAS A NOTE HERE
    long long int temp1487 = (long long int)(rbp + -56);
    long long int *temp1488 = (long long int *)temp1487;
    regs[276] = (long long int)(*temp1488);
    long long int temp1489 = (long long int)(regs[276] + 8);
    long long int *temp1490 = (long long int *)temp1489;
    regs[149] = (long long int)(*temp1490);
    long long int temp1491 = (long long int)(rbp + -56);
    long long int *temp1492 = (long long int *)temp1491;
    regs[277] = (long long int)(*temp1492);
    long long int temp1493 = (long long int)(regs[277] + 16);
    long long int *temp1494 = (long long int *)temp1493;
    regs[150] = (long long int)(*temp1494);
    long long int temp1495 = (long long int)(regs[149] + 24);
    long long int *temp1496 = (long long int *)temp1495;
    *temp1496 = (long long int)(regs[150]);
    long long int temp1497 = (long long int)(rbp + -56);
    long long int *temp1498 = (long long int *)temp1497;
    regs[278] = (long long int)(*temp1498);
    long long int temp1499 = (long long int)(regs[278] + 16);
    long long int *temp1500 = (long long int *)temp1499;
    regs[151] = (long long int)(*temp1500);
    long long int temp1501 = (long long int)regs[151];
    long long int temp1502 = (long long int)0;
    int temp1503;
    if (temp1501 == temp1502) temp1503 = 0;
    else if (temp1501 < temp1502) temp1503 = -1;
    else temp1503 = 1;
    rflags = (long long int)(temp1503);
    bool temp1504 = (rflags == 0);
    if (temp1504) goto label442;
    // THERE WAS A NOTE HERE
    long long int temp1505 = (long long int)(rbp + -56);
    long long int *temp1506 = (long long int *)temp1505;
    regs[279] = (long long int)(*temp1506);
    long long int temp1507 = (long long int)(regs[279] + 16);
    long long int *temp1508 = (long long int *)temp1507;
    regs[152] = (long long int)(*temp1508);
    long long int temp1509 = (long long int)(rbp + -56);
    long long int *temp1510 = (long long int *)temp1509;
    regs[280] = (long long int)(*temp1510);
    long long int temp1511 = (long long int)(regs[280] + 8);
    long long int *temp1512 = (long long int *)temp1511;
    regs[153] = (long long int)(*temp1512);
    long long int temp1513 = (long long int)(regs[152] + 8);
    long long int *temp1514 = (long long int *)temp1513;
    *temp1514 = (long long int)(regs[153]);
    label442:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1515 = (long long int)(rbp + -8);
    long long int *temp1516 = (long long int *)temp1515;
    regs[281] = (long long int)(*temp1516);
    rdi = (long long int)(regs[281]);
    long long int temp1517 = rightRotate(rdi);
    rax = (long long int)temp1517;
    regs[282] = (long long int)(rax);
    long long int temp1518 = (long long int)(rbp + -24);
    long long int *temp1519 = (long long int *)temp1518;
    *temp1519 = (long long int)(regs[282]);
    long long int temp1520 = (long long int)(rbp + -24);
    long long int *temp1521 = (long long int *)temp1520;
    regs[283] = (long long int)(*temp1521);
    long long int temp1522 = (long long int)(regs[283] + 8);
    long long int *temp1523 = (long long int *)temp1522;
    regs[154] = (long long int)(*temp1523);
    long long int temp1524 = (long long int)regs[154];
    long long int temp1525 = (long long int)0;
    int temp1526;
    if (temp1524 == temp1525) temp1526 = 0;
    else if (temp1524 < temp1525) temp1526 = -1;
    else temp1526 = 1;
    rflags = (long long int)(temp1526);
    bool temp1527 = (rflags != 0);
    if (temp1527) goto label457;
    // THERE WAS A NOTE HERE
    long long int temp1528 = (long long int)(rbp + -72);
    long long int *temp1529 = (long long int *)temp1528;
    regs[284] = (long long int)(*temp1529);
    long long int temp1530 = (long long int)(rbp + -24);
    long long int *temp1531 = (long long int *)temp1530;
    regs[285] = (long long int)(*temp1531);
    long long int *temp1532 = (long long int *)regs[284];
    *temp1532 = (long long int)(regs[285]);
    label457:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1533 = (long long int)(rbp + -24);
    long long int *temp1534 = (long long int *)temp1533;
    regs[286] = (long long int)(*temp1534);
    long long int temp1535 = (long long int)(regs[286] + 32);
    int *temp1536 = (int *)temp1535;
    *temp1536 = (int)(0);
    long long int temp1537 = (long long int)(rbp + -24);
    long long int *temp1538 = (long long int *)temp1537;
    regs[287] = (long long int)(*temp1538);
    long long int temp1539 = (long long int)(regs[287] + 24);
    long long int *temp1540 = (long long int *)temp1539;
    regs[155] = (long long int)(*temp1540);
    long long int temp1541 = (long long int)(regs[155] + 32);
    int *temp1542 = (int *)temp1541;
    *temp1542 = (int)(1);
    long long int temp1543 = (long long int)(rbp + -24);
    long long int *temp1544 = (long long int *)temp1543;
    regs[288] = (long long int)(*temp1544);
    long long int temp1545 = (long long int)(regs[288] + 24);
    long long int *temp1546 = (long long int *)temp1545;
    regs[156] = (long long int)(*temp1546);
    long long int temp1547 = (long long int)(rbp + -72);
    long long int *temp1548 = (long long int *)temp1547;
    regs[289] = (long long int)(*temp1548);
    rcx = (long long int)(regs[289]);
    rdx = (int)(1);
    rsi = (int)(0);
    rdi = (long long int)(regs[156]);
    checkForCase2(rdi, (int)rsi, (int)rdx, rcx);
    goto label533;
    // THERE WAS A BARRIER HERE
    label474:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1549 = (long long int)(rbp + -56);
    long long int *temp1550 = (long long int *)temp1549;
    regs[290] = (long long int)(*temp1550);
    long long int temp1551 = (long long int)(regs[290] + 8);
    long long int *temp1552 = (long long int *)temp1551;
    regs[157] = (long long int)(*temp1552);
    long long int temp1553 = (long long int)(rbp + -56);
    long long int *temp1554 = (long long int *)temp1553;
    regs[291] = (long long int)(*temp1554);
    long long int temp1555 = (long long int)(regs[291] + 24);
    long long int *temp1556 = (long long int *)temp1555;
    regs[158] = (long long int)(*temp1556);
    long long int temp1557 = (long long int)(regs[157] + 16);
    long long int *temp1558 = (long long int *)temp1557;
    *temp1558 = (long long int)(regs[158]);
    long long int temp1559 = (long long int)(rbp + -56);
    long long int *temp1560 = (long long int *)temp1559;
    regs[292] = (long long int)(*temp1560);
    long long int temp1561 = (long long int)(regs[292] + 24);
    long long int *temp1562 = (long long int *)temp1561;
    regs[159] = (long long int)(*temp1562);
    long long int temp1563 = (long long int)regs[159];
    long long int temp1564 = (long long int)0;
    int temp1565;
    if (temp1563 == temp1564) temp1565 = 0;
    else if (temp1563 < temp1564) temp1565 = -1;
    else temp1565 = 1;
    rflags = (long long int)(temp1565);
    bool temp1566 = (rflags == 0);
    if (temp1566) goto label491;
    // THERE WAS A NOTE HERE
    long long int temp1567 = (long long int)(rbp + -56);
    long long int *temp1568 = (long long int *)temp1567;
    regs[293] = (long long int)(*temp1568);
    long long int temp1569 = (long long int)(regs[293] + 24);
    long long int *temp1570 = (long long int *)temp1569;
    regs[160] = (long long int)(*temp1570);
    long long int temp1571 = (long long int)(rbp + -56);
    long long int *temp1572 = (long long int *)temp1571;
    regs[294] = (long long int)(*temp1572);
    long long int temp1573 = (long long int)(regs[294] + 8);
    long long int *temp1574 = (long long int *)temp1573;
    regs[161] = (long long int)(*temp1574);
    long long int temp1575 = (long long int)(regs[160] + 8);
    long long int *temp1576 = (long long int *)temp1575;
    *temp1576 = (long long int)(regs[161]);
    label491:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1577 = (long long int)(rbp + -8);
    long long int *temp1578 = (long long int *)temp1577;
    regs[295] = (long long int)(*temp1578);
    rdi = (long long int)(regs[295]);
    long long int temp1579 = leftRotate(rdi);
    rax = (long long int)temp1579;
    regs[296] = (long long int)(rax);
    long long int temp1580 = (long long int)(rbp + -24);
    long long int *temp1581 = (long long int *)temp1580;
    *temp1581 = (long long int)(regs[296]);
    long long int temp1582 = (long long int)(rbp + -24);
    long long int *temp1583 = (long long int *)temp1582;
    regs[297] = (long long int)(*temp1583);
    long long int temp1584 = (long long int)(regs[297] + 8);
    long long int *temp1585 = (long long int *)temp1584;
    regs[162] = (long long int)(*temp1585);
    long long int temp1586 = (long long int)regs[162];
    long long int temp1587 = (long long int)0;
    int temp1588;
    if (temp1586 == temp1587) temp1588 = 0;
    else if (temp1586 < temp1587) temp1588 = -1;
    else temp1588 = 1;
    rflags = (long long int)(temp1588);
    bool temp1589 = (rflags != 0);
    if (temp1589) goto label506;
    // THERE WAS A NOTE HERE
    long long int temp1590 = (long long int)(rbp + -72);
    long long int *temp1591 = (long long int *)temp1590;
    regs[298] = (long long int)(*temp1591);
    long long int temp1592 = (long long int)(rbp + -24);
    long long int *temp1593 = (long long int *)temp1592;
    regs[299] = (long long int)(*temp1593);
    long long int *temp1594 = (long long int *)regs[298];
    *temp1594 = (long long int)(regs[299]);
    label506:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1595 = (long long int)(rbp + -24);
    long long int *temp1596 = (long long int *)temp1595;
    regs[300] = (long long int)(*temp1596);
    long long int temp1597 = (long long int)(regs[300] + 16);
    long long int *temp1598 = (long long int *)temp1597;
    regs[163] = (long long int)(*temp1598);
    int *temp1599 = (int *)regs[163];
    regs[164] = (int)(*temp1599);
    long long int temp1600 = (long long int)(rbp + -24);
    long long int *temp1601 = (long long int *)temp1600;
    regs[301] = (long long int)(*temp1601);
    int *temp1602 = (int *)regs[301];
    regs[165] = (int)(*temp1602);
    rdx = (int)(regs[164]);
    rsi = (int)(regs[165]);
    long long int temp1603 = (long long int)symbol0;
    rdi = (long long int)(temp1603);
    rax = (char)(0);
    int temp1604 = printf((const char *)rdi, (int)rsi, (int)rdx);
    rax = (long long int)temp1604;
    long long int temp1605 = (long long int)(rbp + -24);
    long long int *temp1606 = (long long int *)temp1605;
    regs[302] = (long long int)(*temp1606);
    long long int temp1607 = (long long int)(regs[302] + 32);
    int *temp1608 = (int *)temp1607;
    *temp1608 = (int)(0);
    long long int temp1609 = (long long int)(rbp + -24);
    long long int *temp1610 = (long long int *)temp1609;
    regs[303] = (long long int)(*temp1610);
    long long int temp1611 = (long long int)(regs[303] + 16);
    long long int *temp1612 = (long long int *)temp1611;
    regs[166] = (long long int)(*temp1612);
    long long int temp1613 = (long long int)(regs[166] + 32);
    int *temp1614 = (int *)temp1613;
    *temp1614 = (int)(1);
    long long int temp1615 = (long long int)(rbp + -24);
    long long int *temp1616 = (long long int *)temp1615;
    regs[304] = (long long int)(*temp1616);
    long long int temp1617 = (long long int)(regs[304] + 16);
    long long int *temp1618 = (long long int *)temp1617;
    regs[167] = (long long int)(*temp1618);
    long long int temp1619 = (long long int)(rbp + -72);
    long long int *temp1620 = (long long int *)temp1619;
    regs[305] = (long long int)(*temp1620);
    rcx = (long long int)(regs[305]);
    rdx = (int)(0);
    rsi = (int)(0);
    rdi = (long long int)(regs[167]);
    checkForCase2(rdi, (int)rsi, (int)rdx, rcx);
    label533:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void deleteNode(int arg0, long long int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1621 = (long long int)(rbp + -20);
    int *temp1622 = (int *)temp1621;
    *temp1622 = (int)(rdi);
    long long int temp1623 = (long long int)(rbp + -32);
    long long int *temp1624 = (long long int *)temp1623;
    *temp1624 = (long long int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp1625 = (long long int)(rbp + -32);
    long long int *temp1626 = (long long int *)temp1625;
    regs[125] = (long long int)(*temp1626);
    long long int *temp1627 = (long long int *)regs[125];
    regs[126] = (long long int)(*temp1627);
    long long int temp1628 = (long long int)(rbp + -8);
    long long int *temp1629 = (long long int *)temp1628;
    *temp1629 = (long long int)(regs[126]);
    label63:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1630 = (long long int)(rbp + -8);
    long long int *temp1631 = (long long int *)temp1630;
    regs[127] = (long long int)(*temp1631);
    int *temp1632 = (int *)regs[127];
    regs[87] = (int)(*temp1632);
    long long int temp1633 = (long long int)(rbp + -20);
    int *temp1634 = (int *)temp1633;
    long long int temp1635 = (long long int)*temp1634;
    long long int temp1636 = (long long int)regs[87];
    int temp1637;
    if (temp1635 == temp1636) temp1637 = 0;
    else if (temp1635 < temp1636) temp1637 = -1;
    else temp1637 = 1;
    rflags = (long long int)(temp1637);
    bool temp1638 = (rflags != 0);
    if (temp1638) goto label18;
    // THERE WAS A NOTE HERE
    goto label66;
    // THERE WAS A BARRIER HERE
    label18:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1639 = (long long int)(rbp + -8);
    long long int *temp1640 = (long long int *)temp1639;
    regs[128] = (long long int)(*temp1640);
    int *temp1641 = (int *)regs[128];
    regs[88] = (int)(*temp1641);
    long long int temp1642 = (long long int)(rbp + -20);
    int *temp1643 = (int *)temp1642;
    long long int temp1644 = (long long int)*temp1643;
    long long int temp1645 = (long long int)regs[88];
    int temp1646;
    if (temp1644 == temp1645) temp1646 = 0;
    else if (temp1644 < temp1645) temp1646 = -1;
    else temp1646 = 1;
    rflags = (long long int)(temp1646);
    bool temp1647 = (rflags <= 0);
    if (temp1647) goto label42;
    // THERE WAS A NOTE HERE
    long long int temp1648 = (long long int)(rbp + -8);
    long long int *temp1649 = (long long int *)temp1648;
    regs[129] = (long long int)(*temp1649);
    long long int temp1650 = (long long int)(regs[129] + 24);
    long long int *temp1651 = (long long int *)temp1650;
    regs[89] = (long long int)(*temp1651);
    long long int temp1652 = (long long int)regs[89];
    long long int temp1653 = (long long int)0;
    int temp1654;
    if (temp1652 == temp1653) temp1654 = 0;
    else if (temp1652 < temp1653) temp1654 = -1;
    else temp1654 = 1;
    rflags = (long long int)(temp1654);
    bool temp1655 = (rflags == 0);
    if (temp1655) goto label35;
    // THERE WAS A NOTE HERE
    long long int temp1656 = (long long int)(rbp + -8);
    long long int *temp1657 = (long long int *)temp1656;
    regs[130] = (long long int)(*temp1657);
    long long int temp1658 = (long long int)(regs[130] + 24);
    long long int *temp1659 = (long long int *)temp1658;
    regs[131] = (long long int)(*temp1659);
    long long int temp1660 = (long long int)(rbp + -8);
    long long int *temp1661 = (long long int *)temp1660;
    *temp1661 = (long long int)(regs[131]);
    goto label61;
    // THERE WAS A BARRIER HERE
    label35:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1662 = (long long int)symbol1;
    rdi = (long long int)(temp1662);
    rax = (char)(0);
    int temp1663 = printf((const char *)rdi);
    rax = (long long int)temp1663;
    goto label257;
    // THERE WAS A BARRIER HERE
    label42:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1664 = (long long int)(rbp + -8);
    long long int *temp1665 = (long long int *)temp1664;
    regs[132] = (long long int)(*temp1665);
    long long int temp1666 = (long long int)(regs[132] + 16);
    long long int *temp1667 = (long long int *)temp1666;
    regs[90] = (long long int)(*temp1667);
    long long int temp1668 = (long long int)regs[90];
    long long int temp1669 = (long long int)0;
    int temp1670;
    if (temp1668 == temp1669) temp1670 = 0;
    else if (temp1668 < temp1669) temp1670 = -1;
    else temp1670 = 1;
    rflags = (long long int)(temp1670);
    bool temp1671 = (rflags == 0);
    if (temp1671) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp1672 = (long long int)(rbp + -8);
    long long int *temp1673 = (long long int *)temp1672;
    regs[133] = (long long int)(*temp1673);
    long long int temp1674 = (long long int)(regs[133] + 16);
    long long int *temp1675 = (long long int *)temp1674;
    regs[134] = (long long int)(*temp1675);
    long long int temp1676 = (long long int)(rbp + -8);
    long long int *temp1677 = (long long int *)temp1676;
    *temp1677 = (long long int)(regs[134]);
    goto label61;
    // THERE WAS A BARRIER HERE
    label54:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1678 = (long long int)symbol1;
    rdi = (long long int)(temp1678);
    rax = (char)(0);
    int temp1679 = printf((const char *)rdi);
    rax = (long long int)temp1679;
    goto label257;
    // THERE WAS A BARRIER HERE
    label61:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    goto label63;
    // THERE WAS A BARRIER HERE
    label66:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1680 = (long long int)(rbp + -8);
    long long int *temp1681 = (long long int *)temp1680;
    regs[135] = (long long int)(*temp1681);
    long long int temp1682 = (long long int)(rbp + -16);
    long long int *temp1683 = (long long int *)temp1682;
    *temp1683 = (long long int)(regs[135]);
    long long int temp1684 = (long long int)(rbp + -16);
    long long int *temp1685 = (long long int *)temp1684;
    regs[136] = (long long int)(*temp1685);
    long long int temp1686 = (long long int)(regs[136] + 16);
    long long int *temp1687 = (long long int *)temp1686;
    regs[91] = (long long int)(*temp1687);
    long long int temp1688 = (long long int)regs[91];
    long long int temp1689 = (long long int)0;
    int temp1690;
    if (temp1688 == temp1689) temp1690 = 0;
    else if (temp1688 < temp1689) temp1690 = -1;
    else temp1690 = 1;
    rflags = (long long int)(temp1690);
    bool temp1691 = (rflags == 0);
    if (temp1691) goto label94;
    // THERE WAS A NOTE HERE
    long long int temp1692 = (long long int)(rbp + -16);
    long long int *temp1693 = (long long int *)temp1692;
    regs[137] = (long long int)(*temp1693);
    long long int temp1694 = (long long int)(regs[137] + 16);
    long long int *temp1695 = (long long int *)temp1694;
    regs[138] = (long long int)(*temp1695);
    long long int temp1696 = (long long int)(rbp + -16);
    long long int *temp1697 = (long long int *)temp1696;
    *temp1697 = (long long int)(regs[138]);
    goto label84;
    // THERE WAS A BARRIER HERE
    label88:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1698 = (long long int)(rbp + -16);
    long long int *temp1699 = (long long int *)temp1698;
    regs[139] = (long long int)(*temp1699);
    long long int temp1700 = (long long int)(regs[139] + 24);
    long long int *temp1701 = (long long int *)temp1700;
    regs[140] = (long long int)(*temp1701);
    long long int temp1702 = (long long int)(rbp + -16);
    long long int *temp1703 = (long long int *)temp1702;
    *temp1703 = (long long int)(regs[140]);
    label84:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1704 = (long long int)(rbp + -16);
    long long int *temp1705 = (long long int *)temp1704;
    regs[141] = (long long int)(*temp1705);
    long long int temp1706 = (long long int)(regs[141] + 24);
    long long int *temp1707 = (long long int *)temp1706;
    regs[92] = (long long int)(*temp1707);
    long long int temp1708 = (long long int)regs[92];
    long long int temp1709 = (long long int)0;
    int temp1710;
    if (temp1708 == temp1709) temp1710 = 0;
    else if (temp1708 < temp1709) temp1710 = -1;
    else temp1710 = 1;
    rflags = (long long int)(temp1710);
    bool temp1711 = (rflags != 0);
    if (temp1711) goto label88;
    // THERE WAS A NOTE HERE
    goto label117;
    // THERE WAS A BARRIER HERE
    label94:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1712 = (long long int)(rbp + -16);
    long long int *temp1713 = (long long int *)temp1712;
    regs[142] = (long long int)(*temp1713);
    long long int temp1714 = (long long int)(regs[142] + 24);
    long long int *temp1715 = (long long int *)temp1714;
    regs[93] = (long long int)(*temp1715);
    long long int temp1716 = (long long int)regs[93];
    long long int temp1717 = (long long int)0;
    int temp1718;
    if (temp1716 == temp1717) temp1718 = 0;
    else if (temp1716 < temp1717) temp1718 = -1;
    else temp1718 = 1;
    rflags = (long long int)(temp1718);
    bool temp1719 = (rflags == 0);
    if (temp1719) goto label117;
    // THERE WAS A NOTE HERE
    long long int temp1720 = (long long int)(rbp + -16);
    long long int *temp1721 = (long long int *)temp1720;
    regs[143] = (long long int)(*temp1721);
    long long int temp1722 = (long long int)(regs[143] + 24);
    long long int *temp1723 = (long long int *)temp1722;
    regs[144] = (long long int)(*temp1723);
    long long int temp1724 = (long long int)(rbp + -16);
    long long int *temp1725 = (long long int *)temp1724;
    *temp1725 = (long long int)(regs[144]);
    goto label110;
    // THERE WAS A BARRIER HERE
    label114:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1726 = (long long int)(rbp + -16);
    long long int *temp1727 = (long long int *)temp1726;
    regs[145] = (long long int)(*temp1727);
    long long int temp1728 = (long long int)(regs[145] + 16);
    long long int *temp1729 = (long long int *)temp1728;
    regs[146] = (long long int)(*temp1729);
    long long int temp1730 = (long long int)(rbp + -16);
    long long int *temp1731 = (long long int *)temp1730;
    *temp1731 = (long long int)(regs[146]);
    label110:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1732 = (long long int)(rbp + -16);
    long long int *temp1733 = (long long int *)temp1732;
    regs[147] = (long long int)(*temp1733);
    long long int temp1734 = (long long int)(regs[147] + 16);
    long long int *temp1735 = (long long int *)temp1734;
    regs[94] = (long long int)(*temp1735);
    long long int temp1736 = (long long int)regs[94];
    long long int temp1737 = (long long int)0;
    int temp1738;
    if (temp1736 == temp1737) temp1738 = 0;
    else if (temp1736 < temp1737) temp1738 = -1;
    else temp1738 = 1;
    rflags = (long long int)(temp1738);
    bool temp1739 = (rflags != 0);
    if (temp1739) goto label114;
    label117:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1740 = (long long int)(rbp + -32);
    long long int *temp1741 = (long long int *)temp1740;
    regs[148] = (long long int)(*temp1741);
    long long int *temp1742 = (long long int *)regs[148];
    regs[95] = (long long int)(*temp1742);
    long long int temp1743 = (long long int)(rbp + -16);
    long long int *temp1744 = (long long int *)temp1743;
    long long int temp1745 = (long long int)*temp1744;
    long long int temp1746 = (long long int)regs[95];
    int temp1747;
    if (temp1745 == temp1746) temp1747 = 0;
    else if (temp1745 < temp1746) temp1747 = -1;
    else temp1747 = 1;
    rflags = (long long int)(temp1747);
    bool temp1748 = (rflags != 0);
    if (temp1748) goto label128;
    // THERE WAS A NOTE HERE
    long long int temp1749 = (long long int)(rbp + -32);
    long long int *temp1750 = (long long int *)temp1749;
    regs[149] = (long long int)(*temp1750);
    long long int *temp1751 = (long long int *)regs[149];
    *temp1751 = (long long int)(0);
    goto label257;
    // THERE WAS A BARRIER HERE
    label128:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1752 = (long long int)(rbp + -16);
    long long int *temp1753 = (long long int *)temp1752;
    regs[150] = (long long int)(*temp1753);
    int *temp1754 = (int *)regs[150];
    regs[96] = (int)(*temp1754);
    long long int temp1755 = (long long int)(rbp + -8);
    long long int *temp1756 = (long long int *)temp1755;
    regs[151] = (long long int)(*temp1756);
    int *temp1757 = (int *)regs[151];
    *temp1757 = (int)(regs[96]);
    long long int temp1758 = (long long int)(rbp + -16);
    long long int *temp1759 = (long long int *)temp1758;
    regs[152] = (long long int)(*temp1759);
    long long int temp1760 = (long long int)(rbp + -20);
    int *temp1761 = (int *)temp1760;
    regs[153] = (int)(*temp1761);
    int *temp1762 = (int *)regs[152];
    *temp1762 = (int)(regs[153]);
    long long int temp1763 = (long long int)(rbp + -16);
    long long int *temp1764 = (long long int *)temp1763;
    regs[154] = (long long int)(*temp1764);
    long long int temp1765 = (long long int)(regs[154] + 32);
    int *temp1766 = (int *)temp1765;
    regs[97] = (int)(*temp1766);
    long long int temp1767 = (long long int)regs[97];
    long long int temp1768 = (long long int)1;
    int temp1769;
    if (temp1767 == temp1768) temp1769 = 0;
    else if (temp1767 < temp1768) temp1769 = -1;
    else temp1769 = 1;
    rflags = (long long int)(temp1769);
    bool temp1770 = (rflags == 0);
    if (temp1770) goto label164;
    // THERE WAS A NOTE HERE
    long long int temp1771 = (long long int)(rbp + -16);
    long long int *temp1772 = (long long int *)temp1771;
    regs[155] = (long long int)(*temp1772);
    long long int temp1773 = (long long int)(regs[155] + 16);
    long long int *temp1774 = (long long int *)temp1773;
    regs[98] = (long long int)(*temp1774);
    long long int temp1775 = (long long int)regs[98];
    long long int temp1776 = (long long int)0;
    int temp1777;
    if (temp1775 == temp1776) temp1777 = 0;
    else if (temp1775 < temp1776) temp1777 = -1;
    else temp1777 = 1;
    rflags = (long long int)(temp1777);
    bool temp1778 = (rflags == 0);
    if (temp1778) goto label152;
    // THERE WAS A NOTE HERE
    long long int temp1779 = (long long int)(rbp + -16);
    long long int *temp1780 = (long long int *)temp1779;
    regs[156] = (long long int)(*temp1780);
    long long int temp1781 = (long long int)(regs[156] + 16);
    long long int *temp1782 = (long long int *)temp1781;
    regs[99] = (long long int)(*temp1782);
    long long int temp1783 = (long long int)(regs[99] + 32);
    int *temp1784 = (int *)temp1783;
    regs[100] = (int)(*temp1784);
    long long int temp1785 = (long long int)regs[100];
    long long int temp1786 = (long long int)1;
    int temp1787;
    if (temp1785 == temp1786) temp1787 = 0;
    else if (temp1785 < temp1786) temp1787 = -1;
    else temp1787 = 1;
    rflags = (long long int)(temp1787);
    bool temp1788 = (rflags == 0);
    if (temp1788) goto label164;
    label152:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1789 = (long long int)(rbp + -16);
    long long int *temp1790 = (long long int *)temp1789;
    regs[157] = (long long int)(*temp1790);
    long long int temp1791 = (long long int)(regs[157] + 24);
    long long int *temp1792 = (long long int *)temp1791;
    regs[101] = (long long int)(*temp1792);
    long long int temp1793 = (long long int)regs[101];
    long long int temp1794 = (long long int)0;
    int temp1795;
    if (temp1793 == temp1794) temp1795 = 0;
    else if (temp1793 < temp1794) temp1795 = -1;
    else temp1795 = 1;
    rflags = (long long int)(temp1795);
    bool temp1796 = (rflags == 0);
    if (temp1796) goto label240;
    // THERE WAS A NOTE HERE
    long long int temp1797 = (long long int)(rbp + -16);
    long long int *temp1798 = (long long int *)temp1797;
    regs[158] = (long long int)(*temp1798);
    long long int temp1799 = (long long int)(regs[158] + 24);
    long long int *temp1800 = (long long int *)temp1799;
    regs[102] = (long long int)(*temp1800);
    long long int temp1801 = (long long int)(regs[102] + 32);
    int *temp1802 = (int *)temp1801;
    regs[103] = (int)(*temp1802);
    long long int temp1803 = (long long int)regs[103];
    long long int temp1804 = (long long int)1;
    int temp1805;
    if (temp1803 == temp1804) temp1805 = 0;
    else if (temp1803 < temp1804) temp1805 = -1;
    else temp1805 = 1;
    rflags = (long long int)(temp1805);
    bool temp1806 = (rflags != 0);
    if (temp1806) goto label240;
    label164:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1807 = (long long int)(rbp + -16);
    long long int *temp1808 = (long long int *)temp1807;
    regs[159] = (long long int)(*temp1808);
    long long int temp1809 = (long long int)(regs[159] + 16);
    long long int *temp1810 = (long long int *)temp1809;
    regs[104] = (long long int)(*temp1810);
    long long int temp1811 = (long long int)regs[104];
    long long int temp1812 = (long long int)0;
    int temp1813;
    if (temp1811 == temp1812) temp1813 = 0;
    else if (temp1811 < temp1812) temp1813 = -1;
    else temp1813 = 1;
    rflags = (long long int)(temp1813);
    bool temp1814 = (rflags != 0);
    if (temp1814) goto label196;
    // THERE WAS A NOTE HERE
    long long int temp1815 = (long long int)(rbp + -16);
    long long int *temp1816 = (long long int *)temp1815;
    regs[160] = (long long int)(*temp1816);
    long long int temp1817 = (long long int)(regs[160] + 24);
    long long int *temp1818 = (long long int *)temp1817;
    regs[105] = (long long int)(*temp1818);
    long long int temp1819 = (long long int)regs[105];
    long long int temp1820 = (long long int)0;
    int temp1821;
    if (temp1819 == temp1820) temp1821 = 0;
    else if (temp1819 < temp1820) temp1821 = -1;
    else temp1821 = 1;
    rflags = (long long int)(temp1821);
    bool temp1822 = (rflags != 0);
    if (temp1822) goto label196;
    // THERE WAS A NOTE HERE
    long long int temp1823 = (long long int)(rbp + -16);
    long long int *temp1824 = (long long int *)temp1823;
    regs[161] = (long long int)(*temp1824);
    long long int temp1825 = (long long int)(regs[161] + 8);
    long long int *temp1826 = (long long int *)temp1825;
    regs[106] = (long long int)(*temp1826);
    long long int temp1827 = (long long int)(regs[106] + 16);
    long long int *temp1828 = (long long int *)temp1827;
    regs[107] = (long long int)(*temp1828);
    long long int temp1829 = (long long int)(rbp + -16);
    long long int *temp1830 = (long long int *)temp1829;
    long long int temp1831 = (long long int)*temp1830;
    long long int temp1832 = (long long int)regs[107];
    int temp1833;
    if (temp1831 == temp1832) temp1833 = 0;
    else if (temp1831 < temp1832) temp1833 = -1;
    else temp1833 = 1;
    rflags = (long long int)(temp1833);
    bool temp1834 = (rflags != 0);
    if (temp1834) goto label187;
    // THERE WAS A NOTE HERE
    long long int temp1835 = (long long int)(rbp + -16);
    long long int *temp1836 = (long long int *)temp1835;
    regs[162] = (long long int)(*temp1836);
    long long int temp1837 = (long long int)(regs[162] + 8);
    long long int *temp1838 = (long long int *)temp1837;
    regs[108] = (long long int)(*temp1838);
    long long int temp1839 = (long long int)(regs[108] + 16);
    long long int *temp1840 = (long long int *)temp1839;
    *temp1840 = (long long int)(0);
    goto label233;
    // THERE WAS A BARRIER HERE
    label187:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1841 = (long long int)(rbp + -16);
    long long int *temp1842 = (long long int *)temp1841;
    regs[163] = (long long int)(*temp1842);
    long long int temp1843 = (long long int)(regs[163] + 8);
    long long int *temp1844 = (long long int *)temp1843;
    regs[109] = (long long int)(*temp1844);
    long long int temp1845 = (long long int)(regs[109] + 24);
    long long int *temp1846 = (long long int *)temp1845;
    *temp1846 = (long long int)(0);
    goto label233;
    // THERE WAS A BARRIER HERE
    label196:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1847 = (long long int)(rbp + -16);
    long long int *temp1848 = (long long int *)temp1847;
    regs[164] = (long long int)(*temp1848);
    long long int temp1849 = (long long int)(regs[164] + 16);
    long long int *temp1850 = (long long int *)temp1849;
    regs[110] = (long long int)(*temp1850);
    long long int temp1851 = (long long int)regs[110];
    long long int temp1852 = (long long int)0;
    int temp1853;
    if (temp1851 == temp1852) temp1853 = 0;
    else if (temp1851 < temp1852) temp1853 = -1;
    else temp1853 = 1;
    rflags = (long long int)(temp1853);
    bool temp1854 = (rflags == 0);
    if (temp1854) goto label218;
    // THERE WAS A NOTE HERE
    long long int temp1855 = (long long int)(rbp + -16);
    long long int *temp1856 = (long long int *)temp1855;
    regs[165] = (long long int)(*temp1856);
    long long int temp1857 = (long long int)(regs[165] + 8);
    long long int *temp1858 = (long long int *)temp1857;
    regs[111] = (long long int)(*temp1858);
    long long int temp1859 = (long long int)(rbp + -16);
    long long int *temp1860 = (long long int *)temp1859;
    regs[166] = (long long int)(*temp1860);
    long long int temp1861 = (long long int)(regs[166] + 16);
    long long int *temp1862 = (long long int *)temp1861;
    regs[112] = (long long int)(*temp1862);
    long long int temp1863 = (long long int)(regs[111] + 24);
    long long int *temp1864 = (long long int *)temp1863;
    *temp1864 = (long long int)(regs[112]);
    long long int temp1865 = (long long int)(rbp + -16);
    long long int *temp1866 = (long long int *)temp1865;
    regs[167] = (long long int)(*temp1866);
    long long int temp1867 = (long long int)(regs[167] + 16);
    long long int *temp1868 = (long long int *)temp1867;
    regs[113] = (long long int)(*temp1868);
    long long int temp1869 = (long long int)(rbp + -16);
    long long int *temp1870 = (long long int *)temp1869;
    regs[168] = (long long int)(*temp1870);
    long long int temp1871 = (long long int)(regs[168] + 8);
    long long int *temp1872 = (long long int *)temp1871;
    regs[114] = (long long int)(*temp1872);
    long long int temp1873 = (long long int)(regs[113] + 8);
    long long int *temp1874 = (long long int *)temp1873;
    *temp1874 = (long long int)(regs[114]);
    long long int temp1875 = (long long int)(rbp + -16);
    long long int *temp1876 = (long long int *)temp1875;
    regs[169] = (long long int)(*temp1876);
    long long int temp1877 = (long long int)(regs[169] + 16);
    long long int *temp1878 = (long long int *)temp1877;
    regs[115] = (long long int)(*temp1878);
    long long int temp1879 = (long long int)(regs[115] + 32);
    int *temp1880 = (int *)temp1879;
    *temp1880 = (int)(1);
    goto label233;
    // THERE WAS A BARRIER HERE
    label218:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1881 = (long long int)(rbp + -16);
    long long int *temp1882 = (long long int *)temp1881;
    regs[170] = (long long int)(*temp1882);
    long long int temp1883 = (long long int)(regs[170] + 8);
    long long int *temp1884 = (long long int *)temp1883;
    regs[116] = (long long int)(*temp1884);
    long long int temp1885 = (long long int)(rbp + -16);
    long long int *temp1886 = (long long int *)temp1885;
    regs[171] = (long long int)(*temp1886);
    long long int temp1887 = (long long int)(regs[171] + 24);
    long long int *temp1888 = (long long int *)temp1887;
    regs[117] = (long long int)(*temp1888);
    long long int temp1889 = (long long int)(regs[116] + 16);
    long long int *temp1890 = (long long int *)temp1889;
    *temp1890 = (long long int)(regs[117]);
    long long int temp1891 = (long long int)(rbp + -16);
    long long int *temp1892 = (long long int *)temp1891;
    regs[172] = (long long int)(*temp1892);
    long long int temp1893 = (long long int)(regs[172] + 24);
    long long int *temp1894 = (long long int *)temp1893;
    regs[118] = (long long int)(*temp1894);
    long long int temp1895 = (long long int)(rbp + -16);
    long long int *temp1896 = (long long int *)temp1895;
    regs[173] = (long long int)(*temp1896);
    long long int temp1897 = (long long int)(regs[173] + 8);
    long long int *temp1898 = (long long int *)temp1897;
    regs[119] = (long long int)(*temp1898);
    long long int temp1899 = (long long int)(regs[118] + 8);
    long long int *temp1900 = (long long int *)temp1899;
    *temp1900 = (long long int)(regs[119]);
    long long int temp1901 = (long long int)(rbp + -16);
    long long int *temp1902 = (long long int *)temp1901;
    regs[174] = (long long int)(*temp1902);
    long long int temp1903 = (long long int)(regs[174] + 24);
    long long int *temp1904 = (long long int *)temp1903;
    regs[120] = (long long int)(*temp1904);
    long long int temp1905 = (long long int)(regs[120] + 32);
    int *temp1906 = (int *)temp1905;
    *temp1906 = (int)(1);
    label233:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1907 = (long long int)(rbp + -16);
    long long int *temp1908 = (long long int *)temp1907;
    regs[175] = (long long int)(*temp1908);
    rdi = (long long int)(regs[175]);
    free(rdi);
    goto label257;
    // THERE WAS A BARRIER HERE
    label240:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1909 = (long long int)(rbp + -16);
    long long int *temp1910 = (long long int *)temp1909;
    regs[176] = (long long int)(*temp1910);
    long long int temp1911 = (long long int)(regs[176] + 8);
    long long int *temp1912 = (long long int *)temp1911;
    regs[121] = (long long int)(*temp1912);
    long long int temp1913 = (long long int)(regs[121] + 24);
    long long int *temp1914 = (long long int *)temp1913;
    regs[122] = (long long int)(*temp1914);
    long long int temp1915 = (long long int)(rbp + -16);
    long long int *temp1916 = (long long int *)temp1915;
    long long int temp1917 = (long long int)*temp1916;
    long long int temp1918 = (long long int)regs[122];
    int temp1919;
    if (temp1917 == temp1918) temp1919 = 0;
    else if (temp1917 < temp1918) temp1919 = -1;
    else temp1919 = 1;
    rflags = (long long int)(temp1919);
    char temp1920 = (char)(rflags == 0);
    regs[123] = (char)(temp1920);
    regs[124] = (int)(regs[123]);
    long long int temp1921 = (long long int)(rbp + -32);
    long long int *temp1922 = (long long int *)temp1921;
    regs[177] = (long long int)(*temp1922);
    long long int temp1923 = (long long int)(rbp + -16);
    long long int *temp1924 = (long long int *)temp1923;
    regs[178] = (long long int)(*temp1924);
    rcx = (long long int)(regs[177]);
    rdx = (int)(regs[124]);
    rsi = (int)(1);
    rdi = (long long int)(regs[178]);
    checkForCase2(rdi, (int)rsi, (int)rdx, rcx);
    label257:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void printInorder(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1925 = (long long int)(rbp + -8);
    long long int *temp1926 = (long long int *)temp1925;
    *temp1926 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp1927 = (long long int)(rbp + -8);
    long long int *temp1928 = (long long int *)temp1927;
    long long int temp1929 = (long long int)*temp1928;
    long long int temp1930 = (long long int)0;
    int temp1931;
    if (temp1929 == temp1930) temp1931 = 0;
    else if (temp1929 < temp1930) temp1931 = -1;
    else temp1931 = 1;
    rflags = (long long int)(temp1931);
    bool temp1932 = (rflags == 0);
    if (temp1932) goto label28;
    // THERE WAS A NOTE HERE
    long long int temp1933 = (long long int)(rbp + -8);
    long long int *temp1934 = (long long int *)temp1933;
    regs[91] = (long long int)(*temp1934);
    long long int temp1935 = (long long int)(regs[91] + 16);
    long long int *temp1936 = (long long int *)temp1935;
    regs[87] = (long long int)(*temp1936);
    rdi = (long long int)(regs[87]);
    printInorder(rdi);
    long long int temp1937 = (long long int)(rbp + -8);
    long long int *temp1938 = (long long int *)temp1937;
    regs[92] = (long long int)(*temp1938);
    long long int temp1939 = (long long int)(regs[92] + 32);
    int *temp1940 = (int *)temp1939;
    regs[88] = (int)(*temp1940);
    long long int temp1941 = (long long int)(rbp + -8);
    long long int *temp1942 = (long long int *)temp1941;
    regs[93] = (long long int)(*temp1942);
    int *temp1943 = (int *)regs[93];
    regs[89] = (int)(*temp1943);
    rdx = (int)(regs[88]);
    rsi = (int)(regs[89]);
    long long int temp1944 = (long long int)symbol2;
    rdi = (long long int)(temp1944);
    rax = (char)(0);
    int temp1945 = printf((const char *)rdi, (int)rsi, (int)rdx);
    rax = (long long int)temp1945;
    long long int temp1946 = (long long int)(rbp + -8);
    long long int *temp1947 = (long long int *)temp1946;
    regs[94] = (long long int)(*temp1947);
    long long int temp1948 = (long long int)(regs[94] + 24);
    long long int *temp1949 = (long long int *)temp1948;
    regs[90] = (long long int)(*temp1949);
    rdi = (long long int)(regs[90]);
    printInorder(rdi);
    label28:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void checkBlack(long long int arg0, int arg1) {
    rdi = (long long int)arg0;
    rsi = (long long int)arg1;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1950 = (long long int)(rbp + -8);
    long long int *temp1951 = (long long int *)temp1950;
    *temp1951 = (long long int)(rdi);
    long long int temp1952 = (long long int)(rbp + -12);
    int *temp1953 = (int *)temp1952;
    *temp1953 = (int)(rsi);
    // THERE WAS A NOTE HERE
    long long int temp1954 = (long long int)(rbp + -8);
    long long int *temp1955 = (long long int *)temp1954;
    long long int temp1956 = (long long int)*temp1955;
    long long int temp1957 = (long long int)0;
    int temp1958;
    if (temp1956 == temp1957) temp1958 = 0;
    else if (temp1956 < temp1957) temp1958 = -1;
    else temp1958 = 1;
    rflags = (long long int)(temp1958);
    bool temp1959 = (rflags != 0);
    if (temp1959) goto label17;
    // THERE WAS A NOTE HERE
    long long int temp1960 = (long long int)(rbp + -12);
    int *temp1961 = (int *)temp1960;
    regs[90] = (int)(*temp1961);
    rsi = (int)(regs[90]);
    long long int temp1962 = (long long int)symbol3;
    rdi = (long long int)(temp1962);
    rax = (char)(0);
    int temp1963 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp1963;
    goto label41;
    // THERE WAS A BARRIER HERE
    label17:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1964 = (long long int)(rbp + -8);
    long long int *temp1965 = (long long int *)temp1964;
    regs[91] = (long long int)(*temp1965);
    long long int temp1966 = (long long int)(regs[91] + 32);
    int *temp1967 = (int *)temp1966;
    regs[87] = (int)(*temp1967);
    long long int temp1968 = (long long int)regs[87];
    long long int temp1969 = (long long int)0;
    int temp1970;
    if (temp1968 == temp1969) temp1970 = 0;
    else if (temp1968 < temp1969) temp1970 = -1;
    else temp1970 = 1;
    rflags = (long long int)(temp1970);
    bool temp1971 = (rflags != 0);
    if (temp1971) goto label25;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp1972 = (long long int)(rbp + -12);
    int *temp1973 = (int *)temp1972;
    long long int temp1974 = (long long int)(rbp + -12);
    int *temp1975 = (int *)temp1974;
    int temp1976 = (int)(*temp1975 + 1);
    *temp1973 = (int)(temp1976);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label25:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1977 = (long long int)(rbp + -8);
    long long int *temp1978 = (long long int *)temp1977;
    regs[92] = (long long int)(*temp1978);
    long long int temp1979 = (long long int)(regs[92] + 16);
    long long int *temp1980 = (long long int *)temp1979;
    regs[88] = (long long int)(*temp1980);
    long long int temp1981 = (long long int)(rbp + -12);
    int *temp1982 = (int *)temp1981;
    regs[93] = (int)(*temp1982);
    rsi = (int)(regs[93]);
    rdi = (long long int)(regs[88]);
    checkBlack(rdi, (int)rsi);
    long long int temp1983 = (long long int)(rbp + -8);
    long long int *temp1984 = (long long int *)temp1983;
    regs[94] = (long long int)(*temp1984);
    long long int temp1985 = (long long int)(regs[94] + 24);
    long long int *temp1986 = (long long int *)temp1985;
    regs[89] = (long long int)(*temp1986);
    long long int temp1987 = (long long int)(rbp + -12);
    int *temp1988 = (int *)temp1987;
    regs[95] = (int)(*temp1988);
    rsi = (int)(regs[95]);
    rdi = (long long int)(regs[89]);
    checkBlack(rdi, (int)rsi);
    label41:
    0; // NO-OP to keep gcc happy
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
    long long int temp1989 = (long long int)(rbp + -8);
    long long int *temp1990 = (long long int *)temp1989;
    *temp1990 = (long long int)(0);
    long long int temp1991 = (long long int)(rbp + -16);
    int *temp1992 = (int *)temp1991;
    *temp1992 = (int)(1);
    long long int temp1993 = (long long int)symbol4;
    rdi = (long long int)(temp1993);
    rax = (char)(0);
    int temp1994 = printf((const char *)rdi);
    rax = (long long int)temp1994;
    // PARALLEL COMMAND BEGIN
    long long int temp1995 = (long long int)(rbp + -16);
    regs[103] = (long long int)(temp1995);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[103]);
    long long int temp1996 = (long long int)symbol5;
    rdi = (long long int)(temp1996);
    rax = (char)(0);
    int temp1997 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp1997;
    goto label123;
    // THERE WAS A BARRIER HERE
    label126:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp1998 = (long long int)(rbp + -16);
    int *temp1999 = (int *)temp1998;
    regs[87] = (int)(*temp1999);
    long long int temp2000 = (long long int)regs[87];
    long long int temp2001 = (long long int)2;
    int temp2002;
    if (temp2000 == temp2001) temp2002 = 0;
    else if (temp2000 < temp2001) temp2002 = -1;
    else temp2002 = 1;
    rflags = (long long int)(temp2002);
    bool temp2003 = (rflags == 0);
    if (temp2003) goto label67;
    // THERE WAS A NOTE HERE
    long long int temp2004 = (long long int)regs[87];
    long long int temp2005 = (long long int)3;
    int temp2006;
    if (temp2004 == temp2005) temp2006 = 0;
    else if (temp2004 < temp2005) temp2006 = -1;
    else temp2006 = 1;
    rflags = (long long int)(temp2006);
    bool temp2007 = (rflags == 0);
    if (temp2007) goto label89;
    // THERE WAS A NOTE HERE
    long long int temp2008 = (long long int)regs[87];
    long long int temp2009 = (long long int)1;
    int temp2010;
    if (temp2008 == temp2009) temp2010 = 0;
    else if (temp2008 < temp2009) temp2010 = -1;
    else temp2010 = 1;
    rflags = (long long int)(temp2010);
    bool temp2011 = (rflags == 0);
    if (temp2011) goto label27;
    // THERE WAS A NOTE HERE
    goto label101;
    // THERE WAS A BARRIER HERE
    label27:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2012 = (long long int)symbol6;
    rdi = (long long int)(temp2012);
    rax = (char)(0);
    int temp2013 = printf((const char *)rdi);
    rax = (long long int)temp2013;
    // PARALLEL COMMAND BEGIN
    long long int temp2014 = (long long int)(rbp + -12);
    regs[104] = (long long int)(temp2014);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[104]);
    long long int temp2015 = (long long int)symbol5;
    rdi = (long long int)(temp2015);
    rax = (char)(0);
    int temp2016 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp2016;
    long long int temp2017 = (long long int)(rbp + -8);
    long long int *temp2018 = (long long int *)temp2017;
    regs[88] = (long long int)(*temp2018);
    long long int temp2019 = (long long int)regs[88];
    long long int temp2020 = (long long int)0;
    int temp2021;
    if (temp2019 == temp2020) temp2021 = 0;
    else if (temp2019 < temp2020) temp2021 = -1;
    else temp2021 = 1;
    rflags = (long long int)(temp2021);
    bool temp2022 = (rflags != 0);
    if (temp2022) goto label51;
    // THERE WAS A NOTE HERE
    long long int temp2023 = (long long int)(rbp + -12);
    int *temp2024 = (int *)temp2023;
    regs[89] = (int)(*temp2024);
    rsi = (long long int)(0);
    rdi = (int)(regs[89]);
    long long int temp2025 = newNode((int)rdi, rsi);
    rax = (long long int)temp2025;
    regs[90] = (long long int)(rax);
    long long int temp2026 = (long long int)(rbp + -8);
    long long int *temp2027 = (long long int *)temp2026;
    *temp2027 = (long long int)(regs[90]);
    long long int temp2028 = (long long int)(rbp + -8);
    long long int *temp2029 = (long long int *)temp2028;
    regs[91] = (long long int)(*temp2029);
    long long int temp2030 = (long long int)(regs[91] + 32);
    int *temp2031 = (int *)temp2030;
    *temp2031 = (int)(0);
    goto label58;
    // THERE WAS A BARRIER HERE
    label51:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2032 = (long long int)(rbp + -12);
    int *temp2033 = (int *)temp2032;
    regs[92] = (int)(*temp2033);
    // PARALLEL COMMAND BEGIN
    long long int temp2034 = (long long int)(rbp + -8);
    regs[105] = (long long int)(temp2034);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[105]);
    rdi = (int)(regs[92]);
    insertNode((int)rdi, rsi);
    label58:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2035 = (long long int)(rbp + -12);
    int *temp2036 = (int *)temp2035;
    regs[93] = (int)(*temp2036);
    rsi = (int)(regs[93]);
    long long int temp2037 = (long long int)symbol7;
    rdi = (long long int)(temp2037);
    rax = (char)(0);
    int temp2038 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp2038;
    goto label113;
    // THERE WAS A BARRIER HERE
    label67:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2039 = (long long int)symbol8;
    rdi = (long long int)(temp2039);
    rax = (char)(0);
    int temp2040 = printf((const char *)rdi);
    rax = (long long int)temp2040;
    // PARALLEL COMMAND BEGIN
    long long int temp2041 = (long long int)(rbp + -12);
    regs[106] = (long long int)(temp2041);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[106]);
    long long int temp2042 = (long long int)symbol5;
    rdi = (long long int)(temp2042);
    rax = (char)(0);
    int temp2043 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp2043;
    long long int temp2044 = (long long int)(rbp + -12);
    int *temp2045 = (int *)temp2044;
    regs[94] = (int)(*temp2045);
    // PARALLEL COMMAND BEGIN
    long long int temp2046 = (long long int)(rbp + -8);
    regs[107] = (long long int)(temp2046);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[107]);
    rdi = (int)(regs[94]);
    deleteNode((int)rdi, rsi);
    long long int temp2047 = (long long int)(rbp + -12);
    int *temp2048 = (int *)temp2047;
    regs[95] = (int)(*temp2048);
    rsi = (int)(regs[95]);
    long long int temp2049 = (long long int)symbol7;
    rdi = (long long int)(temp2049);
    rax = (char)(0);
    int temp2050 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp2050;
    goto label113;
    // THERE WAS A BARRIER HERE
    label89:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2051 = (long long int)symbol9;
    rdi = (long long int)(temp2051);
    rax = (char)(0);
    int temp2052 = printf((const char *)rdi);
    rax = (long long int)temp2052;
    long long int temp2053 = (long long int)(rbp + -8);
    long long int *temp2054 = (long long int *)temp2053;
    regs[96] = (long long int)(*temp2054);
    rdi = (long long int)(regs[96]);
    printInorder(rdi);
    long long int temp2055 = (long long int)symbol10;
    rdi = (long long int)(temp2055);
    int temp2056 = puts(rdi);
    rax = (long long int)temp2056;
    goto label113;
    // THERE WAS A BARRIER HERE
    label101:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2057 = (long long int)(rbp + -8);
    long long int *temp2058 = (long long int *)temp2057;
    regs[97] = (long long int)(*temp2058);
    long long int temp2059 = (long long int)regs[97];
    long long int temp2060 = (long long int)0;
    int temp2061;
    if (temp2059 == temp2060) temp2061 = 0;
    else if (temp2059 < temp2060) temp2061 = -1;
    else temp2061 = 1;
    rflags = (long long int)(temp2061);
    bool temp2062 = (rflags == 0);
    if (temp2062) goto label113;
    // THERE WAS A NOTE HERE
    long long int temp2063 = (long long int)(rbp + -8);
    long long int *temp2064 = (long long int *)temp2063;
    regs[98] = (long long int)(*temp2064);
    int *temp2065 = (int *)regs[98];
    regs[99] = (int)(*temp2065);
    rsi = (int)(regs[99]);
    long long int temp2066 = (long long int)symbol11;
    rdi = (long long int)(temp2066);
    rax = (char)(0);
    int temp2067 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp2067;
    label113:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2068 = (long long int)symbol4;
    rdi = (long long int)(temp2068);
    rax = (char)(0);
    int temp2069 = printf((const char *)rdi);
    rax = (long long int)temp2069;
    // PARALLEL COMMAND BEGIN
    long long int temp2070 = (long long int)(rbp + -16);
    regs[108] = (long long int)(temp2070);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[108]);
    long long int temp2071 = (long long int)symbol5;
    rdi = (long long int)(temp2071);
    rax = (char)(0);
    int temp2072 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp2072;
    label123:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp2073 = (long long int)(rbp + -16);
    int *temp2074 = (int *)temp2073;
    regs[100] = (int)(*temp2074);
    long long int temp2075 = (long long int)regs[100];
    long long int temp2076 = (long long int)0;
    int temp2077;
    if (temp2075 == temp2076) temp2077 = 0;
    else if (temp2075 < temp2076) temp2077 = -1;
    else temp2077 = 1;
    rflags = (long long int)(temp2077);
    bool temp2078 = (rflags != 0);
    if (temp2078) goto label126;
    // THERE WAS A NOTE HERE
    regs[101] = (int)(0);
    regs[102] = (int)(regs[101]);
    rax = (int)(regs[102]);
    return (int)(rax);
}
