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
long long int othersymbols[2];
long long int symbolhead = (long long int)&othersymbols[1];
long long int symboltail = (long long int)&othersymbols[0];
const char *symbol14 = "\n1. Create/Insert\n2. Display\n3. Delete\n4. Exit\n Choice: ";
const char *symbol13 = "\nDeleted data (%d)\n";
const char *symbol12 = "\n1. Forward(head -> tail)\n2. Backward(tail -> head)\n Choice: ";
const char *symbol11 = "\nList data(Backward): ";
const char *symbol10 = " %d";
const char *symbol9 = "\nList data: ";
const char *symbol8 = "\nNo data to display!";
const char *symbol7 = "\nWrong input!";
const char *symbol6 = "\n1. First\n2. Before (x)\n3. After (x)\n4. Last";
const char *symbol5 = "\nCreated List.";
const char *symbol4 = "\nEnter data: ";
const char *symbol3 = "\nNo data (%d)\nInserted to last\n";
const char *symbol2 = "\nInserted data (%d)\n";
const char *symbol1 = "%d";
const char *symbol0 = "\nEnter (x): ";

void insertBefore(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(rbp + -40);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp2 = (long long int)symbol0;
    rdi = (long long int)(temp2);
    rax = (char)(0);
    int temp3 = printf((const char *)rdi);
    rax = (long long int)temp3;
    // PARALLEL COMMAND BEGIN
    long long int temp4 = (long long int)(rbp + -20);
    regs[98] = (long long int)(temp4);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[98]);
    long long int temp5 = (long long int)symbol1;
    rdi = (long long int)(temp5);
    rax = (char)(0);
    int temp6 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp6;
    long long int temp7 = (long long int)symbolhead;
    long long int *temp8 = (long long int *)temp7;
    regs[87] = (long long int)(*temp8);
    int *temp9 = (int *)regs[87];
    regs[88] = (int)(*temp9);
    long long int temp10 = (long long int)(rbp + -20);
    int *temp11 = (int *)temp10;
    regs[89] = (int)(*temp11);
    long long int temp12 = (long long int)regs[88];
    long long int temp13 = (long long int)regs[89];
    int temp14;
    if (temp12 == temp13) temp14 = 0;
    else if (temp12 < temp13) temp14 = -1;
    else temp14 = 1;
    rflags = (long long int)(temp14);
    bool temp15 = (rflags != 0);
    if (temp15) goto label30;
    // THERE WAS A NOTE HERE
    long long int temp16 = (long long int)symbolhead;
    long long int *temp17 = (long long int *)temp16;
    regs[90] = (long long int)(*temp17);
    long long int temp18 = (long long int)(rbp + -40);
    long long int *temp19 = (long long int *)temp18;
    regs[99] = (long long int)(*temp19);
    long long int temp20 = (long long int)(regs[90] + 8);
    long long int *temp21 = (long long int *)temp20;
    *temp21 = (long long int)(regs[99]);
    long long int temp22 = (long long int)symbolhead;
    long long int *temp23 = (long long int *)temp22;
    regs[91] = (long long int)(*temp23);
    long long int temp24 = (long long int)(rbp + -40);
    long long int *temp25 = (long long int *)temp24;
    regs[100] = (long long int)(*temp25);
    long long int temp26 = (long long int)(regs[100] + 16);
    long long int *temp27 = (long long int *)temp26;
    *temp27 = (long long int)(regs[91]);
    long long int temp28 = (long long int)(rbp + -40);
    long long int *temp29 = (long long int *)temp28;
    regs[101] = (long long int)(*temp29);
    long long int temp30 = (long long int)symbolhead;
    long long int *temp31 = (long long int *)temp30;
    *temp31 = (long long int)(regs[101]);
    goto label96;
    // THERE WAS A BARRIER HERE
    label30:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp32 = (long long int)symbolhead;
    long long int *temp33 = (long long int *)temp32;
    regs[102] = (long long int)(*temp33);
    long long int temp34 = (long long int)(rbp + -8);
    long long int *temp35 = (long long int *)temp34;
    *temp35 = (long long int)(regs[102]);
    goto label71;
    // THERE WAS A BARRIER HERE
    label73:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp36 = (long long int)(rbp + -8);
    long long int *temp37 = (long long int *)temp36;
    regs[103] = (long long int)(*temp37);
    int *temp38 = (int *)regs[103];
    regs[92] = (int)(*temp38);
    long long int temp39 = (long long int)(rbp + -20);
    int *temp40 = (int *)temp39;
    regs[93] = (int)(*temp40);
    long long int temp41 = (long long int)regs[92];
    long long int temp42 = (long long int)regs[93];
    int temp43;
    if (temp41 == temp42) temp43 = 0;
    else if (temp41 < temp42) temp43 = -1;
    else temp43 = 1;
    rflags = (long long int)(temp43);
    bool temp44 = (rflags != 0);
    if (temp44) goto label66;
    // THERE WAS A NOTE HERE
    long long int temp45 = (long long int)(rbp + -8);
    long long int *temp46 = (long long int *)temp45;
    regs[104] = (long long int)(*temp46);
    long long int temp47 = (long long int)(regs[104] + 8);
    long long int *temp48 = (long long int *)temp47;
    regs[105] = (long long int)(*temp48);
    long long int temp49 = (long long int)(rbp + -16);
    long long int *temp50 = (long long int *)temp49;
    *temp50 = (long long int)(regs[105]);
    long long int temp51 = (long long int)(rbp + -8);
    long long int *temp52 = (long long int *)temp51;
    regs[106] = (long long int)(*temp52);
    long long int temp53 = (long long int)(rbp + -40);
    long long int *temp54 = (long long int *)temp53;
    regs[107] = (long long int)(*temp54);
    long long int temp55 = (long long int)(regs[106] + 8);
    long long int *temp56 = (long long int *)temp55;
    *temp56 = (long long int)(regs[107]);
    long long int temp57 = (long long int)(rbp + -40);
    long long int *temp58 = (long long int *)temp57;
    regs[108] = (long long int)(*temp58);
    long long int temp59 = (long long int)(rbp + -8);
    long long int *temp60 = (long long int *)temp59;
    regs[109] = (long long int)(*temp60);
    long long int temp61 = (long long int)(regs[108] + 16);
    long long int *temp62 = (long long int *)temp61;
    *temp62 = (long long int)(regs[109]);
    long long int temp63 = (long long int)(rbp + -40);
    long long int *temp64 = (long long int *)temp63;
    regs[110] = (long long int)(*temp64);
    long long int temp65 = (long long int)(rbp + -16);
    long long int *temp66 = (long long int *)temp65;
    regs[111] = (long long int)(*temp66);
    long long int temp67 = (long long int)(regs[110] + 8);
    long long int *temp68 = (long long int *)temp67;
    *temp68 = (long long int)(regs[111]);
    long long int temp69 = (long long int)(rbp + -16);
    long long int *temp70 = (long long int *)temp69;
    regs[112] = (long long int)(*temp70);
    long long int temp71 = (long long int)(rbp + -40);
    long long int *temp72 = (long long int *)temp71;
    regs[113] = (long long int)(*temp72);
    long long int temp73 = (long long int)(regs[112] + 16);
    long long int *temp74 = (long long int *)temp73;
    *temp74 = (long long int)(regs[113]);
    long long int temp75 = (long long int)(rbp + -40);
    long long int *temp76 = (long long int *)temp75;
    regs[114] = (long long int)(*temp76);
    int *temp77 = (int *)regs[114];
    regs[94] = (int)(*temp77);
    rsi = (int)(regs[94]);
    long long int temp78 = (long long int)symbol2;
    rdi = (long long int)(temp78);
    rax = (char)(0);
    int temp79 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp79;
    goto label96;
    // THERE WAS A BARRIER HERE
    label66:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp80 = (long long int)(rbp + -8);
    long long int *temp81 = (long long int *)temp80;
    regs[115] = (long long int)(*temp81);
    long long int temp82 = (long long int)(regs[115] + 16);
    long long int *temp83 = (long long int *)temp82;
    regs[116] = (long long int)(*temp83);
    long long int temp84 = (long long int)(rbp + -8);
    long long int *temp85 = (long long int *)temp84;
    *temp85 = (long long int)(regs[116]);
    label71:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp86 = (long long int)(rbp + -8);
    long long int *temp87 = (long long int *)temp86;
    long long int temp88 = (long long int)*temp87;
    long long int temp89 = (long long int)0;
    int temp90;
    if (temp88 == temp89) temp90 = 0;
    else if (temp88 < temp89) temp90 = -1;
    else temp90 = 1;
    rflags = (long long int)(temp90);
    bool temp91 = (rflags != 0);
    if (temp91) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp92 = (long long int)(rbp + -20);
    int *temp93 = (int *)temp92;
    regs[95] = (int)(*temp93);
    rsi = (int)(regs[95]);
    long long int temp94 = (long long int)symbol3;
    rdi = (long long int)(temp94);
    rax = (char)(0);
    int temp95 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp95;
    long long int temp96 = (long long int)symboltail;
    long long int *temp97 = (long long int *)temp96;
    regs[96] = (long long int)(*temp97);
    long long int temp98 = (long long int)(rbp + -40);
    long long int *temp99 = (long long int *)temp98;
    regs[117] = (long long int)(*temp99);
    long long int temp100 = (long long int)(regs[96] + 16);
    long long int *temp101 = (long long int *)temp100;
    *temp101 = (long long int)(regs[117]);
    long long int temp102 = (long long int)symboltail;
    long long int *temp103 = (long long int *)temp102;
    regs[97] = (long long int)(*temp103);
    long long int temp104 = (long long int)(rbp + -40);
    long long int *temp105 = (long long int *)temp104;
    regs[118] = (long long int)(*temp105);
    long long int temp106 = (long long int)(regs[118] + 8);
    long long int *temp107 = (long long int *)temp106;
    *temp107 = (long long int)(regs[97]);
    long long int temp108 = (long long int)(rbp + -40);
    long long int *temp109 = (long long int *)temp108;
    regs[119] = (long long int)(*temp109);
    long long int temp110 = (long long int)symboltail;
    long long int *temp111 = (long long int *)temp110;
    *temp111 = (long long int)(regs[119]);
    label96:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void insertAfter(long long int arg0) {
    rdi = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp112 = (long long int)(rbp + -40);
    long long int *temp113 = (long long int *)temp112;
    *temp113 = (long long int)(rdi);
    // THERE WAS A NOTE HERE
    long long int temp114 = (long long int)symbol0;
    rdi = (long long int)(temp114);
    rax = (char)(0);
    int temp115 = printf((const char *)rdi);
    rax = (long long int)temp115;
    // PARALLEL COMMAND BEGIN
    long long int temp116 = (long long int)(rbp + -20);
    regs[94] = (long long int)(temp116);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[94]);
    long long int temp117 = (long long int)symbol1;
    rdi = (long long int)(temp117);
    rax = (char)(0);
    int temp118 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp118;
    long long int temp119 = (long long int)symbolhead;
    long long int *temp120 = (long long int *)temp119;
    regs[95] = (long long int)(*temp120);
    long long int temp121 = (long long int)(rbp + -8);
    long long int *temp122 = (long long int *)temp121;
    *temp122 = (long long int)(regs[95]);
    goto label53;
    // THERE WAS A BARRIER HERE
    label56:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp123 = (long long int)(rbp + -8);
    long long int *temp124 = (long long int *)temp123;
    regs[96] = (long long int)(*temp124);
    int *temp125 = (int *)regs[96];
    regs[87] = (int)(*temp125);
    long long int temp126 = (long long int)(rbp + -20);
    int *temp127 = (int *)temp126;
    regs[88] = (int)(*temp127);
    long long int temp128 = (long long int)regs[87];
    long long int temp129 = (long long int)regs[88];
    int temp130;
    if (temp128 == temp129) temp130 = 0;
    else if (temp128 < temp129) temp130 = -1;
    else temp130 = 1;
    rflags = (long long int)(temp130);
    bool temp131 = (rflags != 0);
    if (temp131) goto label48;
    // THERE WAS A NOTE HERE
    long long int temp132 = (long long int)(rbp + -8);
    long long int *temp133 = (long long int *)temp132;
    regs[97] = (long long int)(*temp133);
    long long int temp134 = (long long int)(regs[97] + 16);
    long long int *temp135 = (long long int *)temp134;
    regs[98] = (long long int)(*temp135);
    long long int temp136 = (long long int)(rbp + -16);
    long long int *temp137 = (long long int *)temp136;
    *temp137 = (long long int)(regs[98]);
    long long int temp138 = (long long int)(rbp + -8);
    long long int *temp139 = (long long int *)temp138;
    regs[99] = (long long int)(*temp139);
    long long int temp140 = (long long int)(rbp + -40);
    long long int *temp141 = (long long int *)temp140;
    regs[100] = (long long int)(*temp141);
    long long int temp142 = (long long int)(regs[99] + 16);
    long long int *temp143 = (long long int *)temp142;
    *temp143 = (long long int)(regs[100]);
    long long int temp144 = (long long int)(rbp + -40);
    long long int *temp145 = (long long int *)temp144;
    regs[101] = (long long int)(*temp145);
    long long int temp146 = (long long int)(rbp + -8);
    long long int *temp147 = (long long int *)temp146;
    regs[102] = (long long int)(*temp147);
    long long int temp148 = (long long int)(regs[101] + 8);
    long long int *temp149 = (long long int *)temp148;
    *temp149 = (long long int)(regs[102]);
    long long int temp150 = (long long int)(rbp + -40);
    long long int *temp151 = (long long int *)temp150;
    regs[103] = (long long int)(*temp151);
    long long int temp152 = (long long int)(rbp + -16);
    long long int *temp153 = (long long int *)temp152;
    regs[104] = (long long int)(*temp153);
    long long int temp154 = (long long int)(regs[103] + 16);
    long long int *temp155 = (long long int *)temp154;
    *temp155 = (long long int)(regs[104]);
    long long int temp156 = (long long int)(rbp + -16);
    long long int *temp157 = (long long int *)temp156;
    regs[105] = (long long int)(*temp157);
    long long int temp158 = (long long int)(rbp + -40);
    long long int *temp159 = (long long int *)temp158;
    regs[106] = (long long int)(*temp159);
    long long int temp160 = (long long int)(regs[105] + 8);
    long long int *temp161 = (long long int *)temp160;
    *temp161 = (long long int)(regs[106]);
    long long int temp162 = (long long int)(rbp + -40);
    long long int *temp163 = (long long int *)temp162;
    regs[107] = (long long int)(*temp163);
    int *temp164 = (int *)regs[107];
    regs[89] = (int)(*temp164);
    rsi = (int)(regs[89]);
    long long int temp165 = (long long int)symbol2;
    rdi = (long long int)(temp165);
    rax = (char)(0);
    int temp166 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp166;
    goto label79;
    // THERE WAS A BARRIER HERE
    label48:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp167 = (long long int)(rbp + -8);
    long long int *temp168 = (long long int *)temp167;
    regs[108] = (long long int)(*temp168);
    long long int temp169 = (long long int)(regs[108] + 16);
    long long int *temp170 = (long long int *)temp169;
    regs[109] = (long long int)(*temp170);
    long long int temp171 = (long long int)(rbp + -8);
    long long int *temp172 = (long long int *)temp171;
    *temp172 = (long long int)(regs[109]);
    label53:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp173 = (long long int)symboltail;
    long long int *temp174 = (long long int *)temp173;
    regs[90] = (long long int)(*temp174);
    long long int temp175 = (long long int)(rbp + -8);
    long long int *temp176 = (long long int *)temp175;
    long long int temp177 = (long long int)*temp176;
    long long int temp178 = (long long int)regs[90];
    int temp179;
    if (temp177 == temp178) temp179 = 0;
    else if (temp177 < temp178) temp179 = -1;
    else temp179 = 1;
    rflags = (long long int)(temp179);
    bool temp180 = (rflags != 0);
    if (temp180) goto label56;
    // THERE WAS A NOTE HERE
    long long int temp181 = (long long int)(rbp + -20);
    int *temp182 = (int *)temp181;
    regs[91] = (int)(*temp182);
    rsi = (int)(regs[91]);
    long long int temp183 = (long long int)symbol3;
    rdi = (long long int)(temp183);
    rax = (char)(0);
    int temp184 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp184;
    long long int temp185 = (long long int)symboltail;
    long long int *temp186 = (long long int *)temp185;
    regs[92] = (long long int)(*temp186);
    long long int temp187 = (long long int)(rbp + -40);
    long long int *temp188 = (long long int *)temp187;
    regs[110] = (long long int)(*temp188);
    long long int temp189 = (long long int)(regs[92] + 16);
    long long int *temp190 = (long long int *)temp189;
    *temp190 = (long long int)(regs[110]);
    long long int temp191 = (long long int)symboltail;
    long long int *temp192 = (long long int *)temp191;
    regs[93] = (long long int)(*temp192);
    long long int temp193 = (long long int)(rbp + -40);
    long long int *temp194 = (long long int *)temp193;
    regs[111] = (long long int)(*temp194);
    long long int temp195 = (long long int)(regs[111] + 8);
    long long int *temp196 = (long long int *)temp195;
    *temp196 = (long long int)(regs[93]);
    long long int temp197 = (long long int)(rbp + -40);
    long long int *temp198 = (long long int *)temp197;
    regs[112] = (long long int)(*temp198);
    long long int temp199 = (long long int)symboltail;
    long long int *temp200 = (long long int *)temp199;
    *temp200 = (long long int)(regs[112]);
    label79:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void insert(char arg0) {
    rax = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp201 = (long long int)symbol4;
    rdi = (long long int)(temp201);
    rax = (char)(0);
    int temp202 = printf((const char *)rdi);
    rax = (long long int)temp202;
    // PARALLEL COMMAND BEGIN
    long long int temp203 = (long long int)(rbp + -12);
    regs[95] = (long long int)(temp203);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[95]);
    long long int temp204 = (long long int)symbol1;
    rdi = (long long int)(temp204);
    rax = (char)(0);
    int temp205 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp205;
    rdi = (long long int)(24);
    long long int temp206 = malloc(rdi);
    rax = (long long int)temp206;
    regs[96] = (long long int)(rax);
    long long int temp207 = (long long int)(rbp + -8);
    long long int *temp208 = (long long int *)temp207;
    *temp208 = (long long int)(regs[96]);
    long long int temp209 = (long long int)(rbp + -12);
    int *temp210 = (int *)temp209;
    regs[87] = (int)(*temp210);
    long long int temp211 = (long long int)(rbp + -8);
    long long int *temp212 = (long long int *)temp211;
    regs[97] = (long long int)(*temp212);
    int *temp213 = (int *)regs[97];
    *temp213 = (int)(regs[87]);
    long long int temp214 = (long long int)(rbp + -8);
    long long int *temp215 = (long long int *)temp214;
    regs[98] = (long long int)(*temp215);
    long long int temp216 = (long long int)(regs[98] + 8);
    long long int *temp217 = (long long int *)temp216;
    *temp217 = (long long int)(0);
    long long int temp218 = (long long int)(rbp + -8);
    long long int *temp219 = (long long int *)temp218;
    regs[99] = (long long int)(*temp219);
    long long int temp220 = (long long int)(regs[99] + 16);
    long long int *temp221 = (long long int *)temp220;
    *temp221 = (long long int)(0);
    long long int temp222 = (long long int)symbolhead;
    long long int *temp223 = (long long int *)temp222;
    regs[88] = (long long int)(*temp223);
    long long int temp224 = (long long int)regs[88];
    long long int temp225 = (long long int)0;
    int temp226;
    if (temp224 == temp225) temp226 = 0;
    else if (temp224 < temp225) temp226 = -1;
    else temp226 = 1;
    rflags = (long long int)(temp226);
    bool temp227 = (rflags != 0);
    if (temp227) goto label36;
    // THERE WAS A NOTE HERE
    long long int temp228 = (long long int)(rbp + -8);
    long long int *temp229 = (long long int *)temp228;
    regs[100] = (long long int)(*temp229);
    long long int temp230 = (long long int)symboltail;
    long long int *temp231 = (long long int *)temp230;
    *temp231 = (long long int)(regs[100]);
    long long int temp232 = (long long int)symboltail;
    long long int *temp233 = (long long int *)temp232;
    regs[89] = (long long int)(*temp233);
    long long int temp234 = (long long int)symbolhead;
    long long int *temp235 = (long long int *)temp234;
    *temp235 = (long long int)(regs[89]);
    long long int temp236 = (long long int)symbol5;
    rdi = (long long int)(temp236);
    int temp237 = puts(rdi);
    rax = (long long int)temp237;
    goto label108;
    // THERE WAS A BARRIER HERE
    label36:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp238 = (long long int)symbol6;
    rdi = (long long int)(temp238);
    int temp239 = puts(rdi);
    rax = (long long int)temp239;
    // PARALLEL COMMAND BEGIN
    long long int temp240 = (long long int)(rbp + -16);
    regs[101] = (long long int)(temp240);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[101]);
    long long int temp241 = (long long int)symbol1;
    rdi = (long long int)(temp241);
    rax = (char)(0);
    int temp242 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp242;
    long long int temp243 = (long long int)(rbp + -16);
    int *temp244 = (int *)temp243;
    regs[90] = (int)(*temp244);
    long long int temp245 = (long long int)regs[90];
    long long int temp246 = (long long int)2;
    int temp247;
    if (temp245 == temp246) temp247 = 0;
    else if (temp245 < temp246) temp247 = -1;
    else temp247 = 1;
    rflags = (long long int)(temp247);
    bool temp248 = (rflags == 0);
    if (temp248) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp249 = (long long int)regs[90];
    long long int temp250 = (long long int)2;
    int temp251;
    if (temp249 == temp250) temp251 = 0;
    else if (temp249 < temp250) temp251 = -1;
    else temp251 = 1;
    rflags = (long long int)(temp251);
    bool temp252 = (rflags > 0);
    if (temp252) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp253 = (long long int)regs[90];
    long long int temp254 = (long long int)1;
    int temp255;
    if (temp253 == temp254) temp255 = 0;
    else if (temp253 < temp254) temp255 = -1;
    else temp255 = 1;
    rflags = (long long int)(temp255);
    bool temp256 = (rflags == 0);
    if (temp256) goto label61;
    // THERE WAS A NOTE HERE
    goto label99;
    // THERE WAS A BARRIER HERE
    label54:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp257 = (long long int)regs[90];
    long long int temp258 = (long long int)3;
    int temp259;
    if (temp257 == temp258) temp259 = 0;
    else if (temp257 < temp258) temp259 = -1;
    else temp259 = 1;
    rflags = (long long int)(temp259);
    bool temp260 = (rflags == 0);
    if (temp260) goto label80;
    // THERE WAS A NOTE HERE
    long long int temp261 = (long long int)regs[90];
    long long int temp262 = (long long int)4;
    int temp263;
    if (temp261 == temp262) temp263 = 0;
    else if (temp261 < temp262) temp263 = -1;
    else temp263 = 1;
    rflags = (long long int)(temp263);
    bool temp264 = (rflags == 0);
    if (temp264) goto label87;
    // THERE WAS A NOTE HERE
    goto label99;
    // THERE WAS A BARRIER HERE
    label61:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp265 = (long long int)symbolhead;
    long long int *temp266 = (long long int *)temp265;
    regs[91] = (long long int)(*temp266);
    long long int temp267 = (long long int)(rbp + -8);
    long long int *temp268 = (long long int *)temp267;
    regs[102] = (long long int)(*temp268);
    long long int temp269 = (long long int)(regs[91] + 8);
    long long int *temp270 = (long long int *)temp269;
    *temp270 = (long long int)(regs[102]);
    long long int temp271 = (long long int)symbolhead;
    long long int *temp272 = (long long int *)temp271;
    regs[92] = (long long int)(*temp272);
    long long int temp273 = (long long int)(rbp + -8);
    long long int *temp274 = (long long int *)temp273;
    regs[103] = (long long int)(*temp274);
    long long int temp275 = (long long int)(regs[103] + 16);
    long long int *temp276 = (long long int *)temp275;
    *temp276 = (long long int)(regs[92]);
    long long int temp277 = (long long int)(rbp + -8);
    long long int *temp278 = (long long int *)temp277;
    regs[104] = (long long int)(*temp278);
    long long int temp279 = (long long int)symbolhead;
    long long int *temp280 = (long long int *)temp279;
    *temp280 = (long long int)(regs[104]);
    goto label106;
    // THERE WAS A BARRIER HERE
    label73:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp281 = (long long int)(rbp + -8);
    long long int *temp282 = (long long int *)temp281;
    regs[105] = (long long int)(*temp282);
    rdi = (long long int)(regs[105]);
    insertBefore(rdi);
    goto label106;
    // THERE WAS A BARRIER HERE
    label80:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp283 = (long long int)(rbp + -8);
    long long int *temp284 = (long long int *)temp283;
    regs[106] = (long long int)(*temp284);
    rdi = (long long int)(regs[106]);
    insertAfter(rdi);
    goto label106;
    // THERE WAS A BARRIER HERE
    label87:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp285 = (long long int)symboltail;
    long long int *temp286 = (long long int *)temp285;
    regs[93] = (long long int)(*temp286);
    long long int temp287 = (long long int)(rbp + -8);
    long long int *temp288 = (long long int *)temp287;
    regs[107] = (long long int)(*temp288);
    long long int temp289 = (long long int)(regs[93] + 16);
    long long int *temp290 = (long long int *)temp289;
    *temp290 = (long long int)(regs[107]);
    long long int temp291 = (long long int)symboltail;
    long long int *temp292 = (long long int *)temp291;
    regs[94] = (long long int)(*temp292);
    long long int temp293 = (long long int)(rbp + -8);
    long long int *temp294 = (long long int *)temp293;
    regs[108] = (long long int)(*temp294);
    long long int temp295 = (long long int)(regs[108] + 8);
    long long int *temp296 = (long long int *)temp295;
    *temp296 = (long long int)(regs[94]);
    long long int temp297 = (long long int)(rbp + -8);
    long long int *temp298 = (long long int *)temp297;
    regs[109] = (long long int)(*temp298);
    long long int temp299 = (long long int)symboltail;
    long long int *temp300 = (long long int *)temp299;
    *temp300 = (long long int)(regs[109]);
    goto label106;
    // THERE WAS A BARRIER HERE
    label99:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp301 = (long long int)symbol7;
    rdi = (long long int)(temp301);
    rax = (char)(0);
    int temp302 = printf((const char *)rdi);
    rax = (long long int)temp302;
    label106:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    label108:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void displayForward(char arg0) {
    rax = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp303 = (long long int)symbolhead;
    long long int *temp304 = (long long int *)temp303;
    regs[89] = (long long int)(*temp304);
    long long int temp305 = (long long int)(rbp + -8);
    long long int *temp306 = (long long int *)temp305;
    *temp306 = (long long int)(regs[89]);
    long long int temp307 = (long long int)symbolhead;
    long long int *temp308 = (long long int *)temp307;
    regs[87] = (long long int)(*temp308);
    long long int temp309 = (long long int)regs[87];
    long long int temp310 = (long long int)0;
    int temp311;
    if (temp309 == temp310) temp311 = 0;
    else if (temp309 < temp310) temp311 = -1;
    else temp311 = 1;
    rflags = (long long int)(temp311);
    bool temp312 = (rflags != 0);
    if (temp312) goto label16;
    // THERE WAS A NOTE HERE
    long long int temp313 = (long long int)symbol8;
    rdi = (long long int)(temp313);
    rax = (char)(0);
    int temp314 = printf((const char *)rdi);
    rax = (long long int)temp314;
    goto label40;
    // THERE WAS A BARRIER HERE
    label16:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp315 = (long long int)symbol9;
    rdi = (long long int)(temp315);
    rax = (char)(0);
    int temp316 = printf((const char *)rdi);
    rax = (long long int)temp316;
    goto label33;
    // THERE WAS A BARRIER HERE
    label35:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp317 = (long long int)(rbp + -8);
    long long int *temp318 = (long long int *)temp317;
    regs[90] = (long long int)(*temp318);
    int *temp319 = (int *)regs[90];
    regs[88] = (int)(*temp319);
    rsi = (int)(regs[88]);
    long long int temp320 = (long long int)symbol10;
    rdi = (long long int)(temp320);
    rax = (char)(0);
    int temp321 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp321;
    long long int temp322 = (long long int)(rbp + -8);
    long long int *temp323 = (long long int *)temp322;
    regs[91] = (long long int)(*temp323);
    long long int temp324 = (long long int)(regs[91] + 16);
    long long int *temp325 = (long long int *)temp324;
    regs[92] = (long long int)(*temp325);
    long long int temp326 = (long long int)(rbp + -8);
    long long int *temp327 = (long long int *)temp326;
    *temp327 = (long long int)(regs[92]);
    label33:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp328 = (long long int)(rbp + -8);
    long long int *temp329 = (long long int *)temp328;
    long long int temp330 = (long long int)*temp329;
    long long int temp331 = (long long int)0;
    int temp332;
    if (temp330 == temp331) temp332 = 0;
    else if (temp330 < temp331) temp332 = -1;
    else temp332 = 1;
    rflags = (long long int)(temp332);
    bool temp333 = (rflags != 0);
    if (temp333) goto label35;
    // THERE WAS A NOTE HERE
    label40:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void displayBackward(char arg0) {
    rax = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp334 = (long long int)symboltail;
    long long int *temp335 = (long long int *)temp334;
    regs[89] = (long long int)(*temp335);
    long long int temp336 = (long long int)(rbp + -8);
    long long int *temp337 = (long long int *)temp336;
    *temp337 = (long long int)(regs[89]);
    long long int temp338 = (long long int)symboltail;
    long long int *temp339 = (long long int *)temp338;
    regs[87] = (long long int)(*temp339);
    long long int temp340 = (long long int)regs[87];
    long long int temp341 = (long long int)0;
    int temp342;
    if (temp340 == temp341) temp342 = 0;
    else if (temp340 < temp341) temp342 = -1;
    else temp342 = 1;
    rflags = (long long int)(temp342);
    bool temp343 = (rflags != 0);
    if (temp343) goto label16;
    // THERE WAS A NOTE HERE
    long long int temp344 = (long long int)symbol8;
    rdi = (long long int)(temp344);
    rax = (char)(0);
    int temp345 = printf((const char *)rdi);
    rax = (long long int)temp345;
    goto label40;
    // THERE WAS A BARRIER HERE
    label16:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp346 = (long long int)symbol11;
    rdi = (long long int)(temp346);
    rax = (char)(0);
    int temp347 = printf((const char *)rdi);
    rax = (long long int)temp347;
    goto label33;
    // THERE WAS A BARRIER HERE
    label35:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp348 = (long long int)(rbp + -8);
    long long int *temp349 = (long long int *)temp348;
    regs[90] = (long long int)(*temp349);
    int *temp350 = (int *)regs[90];
    regs[88] = (int)(*temp350);
    rsi = (int)(regs[88]);
    long long int temp351 = (long long int)symbol10;
    rdi = (long long int)(temp351);
    rax = (char)(0);
    int temp352 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp352;
    long long int temp353 = (long long int)(rbp + -8);
    long long int *temp354 = (long long int *)temp353;
    regs[91] = (long long int)(*temp354);
    long long int temp355 = (long long int)(regs[91] + 8);
    long long int *temp356 = (long long int *)temp355;
    regs[92] = (long long int)(*temp356);
    long long int temp357 = (long long int)(rbp + -8);
    long long int *temp358 = (long long int *)temp357;
    *temp358 = (long long int)(regs[92]);
    label33:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp359 = (long long int)(rbp + -8);
    long long int *temp360 = (long long int *)temp359;
    long long int temp361 = (long long int)*temp360;
    long long int temp362 = (long long int)0;
    int temp363;
    if (temp361 == temp362) temp363 = 0;
    else if (temp361 < temp362) temp363 = -1;
    else temp363 = 1;
    rflags = (long long int)(temp363);
    bool temp364 = (rflags != 0);
    if (temp364) goto label35;
    // THERE WAS A NOTE HERE
    label40:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void display(char arg0) {
    rax = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp365 = (long long int)symbol12;
    rdi = (long long int)(temp365);
    rax = (char)(0);
    int temp366 = printf((const char *)rdi);
    rax = (long long int)temp366;
    // PARALLEL COMMAND BEGIN
    long long int temp367 = (long long int)(rbp + -4);
    regs[88] = (long long int)(temp367);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[88]);
    long long int temp368 = (long long int)symbol1;
    rdi = (long long int)(temp368);
    rax = (char)(0);
    int temp369 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp369;
    long long int temp370 = (long long int)(rbp + -4);
    int *temp371 = (int *)temp370;
    regs[87] = (int)(*temp371);
    long long int temp372 = (long long int)regs[87];
    long long int temp373 = (long long int)1;
    int temp374;
    if (temp372 == temp373) temp374 = 0;
    else if (temp372 < temp373) temp374 = -1;
    else temp374 = 1;
    rflags = (long long int)(temp374);
    bool temp375 = (rflags == 0);
    if (temp375) goto label20;
    // THERE WAS A NOTE HERE
    long long int temp376 = (long long int)regs[87];
    long long int temp377 = (long long int)2;
    int temp378;
    if (temp376 == temp377) temp378 = 0;
    else if (temp376 < temp377) temp378 = -1;
    else temp378 = 1;
    rflags = (long long int)(temp378);
    bool temp379 = (rflags == 0);
    if (temp379) goto label26;
    // THERE WAS A NOTE HERE
    goto label32;
    // THERE WAS A BARRIER HERE
    label20:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rax = (char)(0);
    displayForward((char)rax);
    goto label37;
    // THERE WAS A BARRIER HERE
    label26:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rax = (char)(0);
    displayBackward((char)rax);
    goto label37;
    // THERE WAS A BARRIER HERE
    label32:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp380 = (long long int)symbol7;
    rdi = (long long int)(temp380);
    rax = (char)(0);
    int temp381 = printf((const char *)rdi);
    rax = (long long int)temp381;
    label37:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rbp += 0x100;
    rsp += 0x100;
}
void delete(char arg0) {
    rax = (long long int)arg0;
    rbp -= 0x100;
    rsp -= 0x100;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp382 = (long long int)symbol0;
    rdi = (long long int)(temp382);
    rax = (char)(0);
    int temp383 = printf((const char *)rdi);
    rax = (long long int)temp383;
    // PARALLEL COMMAND BEGIN
    long long int temp384 = (long long int)(rbp + -12);
    regs[112] = (long long int)(temp384);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[112]);
    long long int temp385 = (long long int)symbol1;
    rdi = (long long int)(temp385);
    rax = (char)(0);
    int temp386 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp386;
    long long int temp387 = (long long int)symbolhead;
    long long int *temp388 = (long long int *)temp387;
    regs[87] = (long long int)(*temp388);
    int *temp389 = (int *)regs[87];
    regs[88] = (int)(*temp389);
    long long int temp390 = (long long int)(rbp + -12);
    int *temp391 = (int *)temp390;
    regs[89] = (int)(*temp391);
    long long int temp392 = (long long int)regs[88];
    long long int temp393 = (long long int)regs[89];
    int temp394;
    if (temp392 == temp393) temp394 = 0;
    else if (temp392 < temp393) temp394 = -1;
    else temp394 = 1;
    rflags = (long long int)(temp394);
    bool temp395 = (rflags != 0);
    if (temp395) goto label35;
    // THERE WAS A NOTE HERE
    long long int temp396 = (long long int)symbolhead;
    long long int *temp397 = (long long int *)temp396;
    regs[90] = (long long int)(*temp397);
    long long int temp398 = (long long int)(regs[90] + 16);
    long long int *temp399 = (long long int *)temp398;
    regs[91] = (long long int)(*temp399);
    long long int temp400 = (long long int)(regs[91] + 8);
    long long int *temp401 = (long long int *)temp400;
    *temp401 = (long long int)(0);
    long long int temp402 = (long long int)symbolhead;
    long long int *temp403 = (long long int *)temp402;
    regs[92] = (long long int)(*temp403);
    long long int temp404 = (long long int)(regs[92] + 16);
    long long int *temp405 = (long long int *)temp404;
    regs[93] = (long long int)(*temp405);
    long long int temp406 = (long long int)symbolhead;
    long long int *temp407 = (long long int *)temp406;
    *temp407 = (long long int)(regs[93]);
    long long int temp408 = (long long int)symbolhead;
    long long int *temp409 = (long long int *)temp408;
    regs[94] = (long long int)(*temp409);
    rdi = (long long int)(regs[94]);
    free(rdi);
    long long int temp410 = (long long int)(rbp + -12);
    int *temp411 = (int *)temp410;
    regs[95] = (int)(*temp411);
    rsi = (int)(regs[95]);
    long long int temp412 = (long long int)symbol13;
    rdi = (long long int)(temp412);
    rax = (char)(0);
    int temp413 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp413;
    goto label109;
    // THERE WAS A BARRIER HERE
    label35:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp414 = (long long int)symboltail;
    long long int *temp415 = (long long int *)temp414;
    regs[96] = (long long int)(*temp415);
    int *temp416 = (int *)regs[96];
    regs[97] = (int)(*temp416);
    long long int temp417 = (long long int)(rbp + -12);
    int *temp418 = (int *)temp417;
    regs[98] = (int)(*temp418);
    long long int temp419 = (long long int)regs[97];
    long long int temp420 = (long long int)regs[98];
    int temp421;
    if (temp419 == temp420) temp421 = 0;
    else if (temp419 < temp420) temp421 = -1;
    else temp421 = 1;
    rflags = (long long int)(temp421);
    bool temp422 = (rflags != 0);
    if (temp422) goto label59;
    // THERE WAS A NOTE HERE
    long long int temp423 = (long long int)symboltail;
    long long int *temp424 = (long long int *)temp423;
    regs[99] = (long long int)(*temp424);
    long long int temp425 = (long long int)(regs[99] + 8);
    long long int *temp426 = (long long int *)temp425;
    regs[100] = (long long int)(*temp426);
    long long int temp427 = (long long int)(regs[100] + 16);
    long long int *temp428 = (long long int *)temp427;
    *temp428 = (long long int)(0);
    long long int temp429 = (long long int)symboltail;
    long long int *temp430 = (long long int *)temp429;
    regs[101] = (long long int)(*temp430);
    long long int temp431 = (long long int)(regs[101] + 8);
    long long int *temp432 = (long long int *)temp431;
    regs[102] = (long long int)(*temp432);
    long long int temp433 = (long long int)symboltail;
    long long int *temp434 = (long long int *)temp433;
    *temp434 = (long long int)(regs[102]);
    long long int temp435 = (long long int)symboltail;
    long long int *temp436 = (long long int *)temp435;
    regs[103] = (long long int)(*temp436);
    rdi = (long long int)(regs[103]);
    free(rdi);
    long long int temp437 = (long long int)(rbp + -12);
    int *temp438 = (int *)temp437;
    regs[104] = (int)(*temp438);
    rsi = (int)(regs[104]);
    long long int temp439 = (long long int)symbol13;
    rdi = (long long int)(temp439);
    rax = (char)(0);
    int temp440 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp440;
    goto label109;
    // THERE WAS A BARRIER HERE
    label59:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp441 = (long long int)symbolhead;
    long long int *temp442 = (long long int *)temp441;
    regs[113] = (long long int)(*temp442);
    long long int temp443 = (long long int)(rbp + -8);
    long long int *temp444 = (long long int *)temp443;
    *temp444 = (long long int)(regs[113]);
    goto label97;
    // THERE WAS A BARRIER HERE
    label99:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp445 = (long long int)(rbp + -8);
    long long int *temp446 = (long long int *)temp445;
    regs[114] = (long long int)(*temp446);
    int *temp447 = (int *)regs[114];
    regs[105] = (int)(*temp447);
    long long int temp448 = (long long int)(rbp + -12);
    int *temp449 = (int *)temp448;
    regs[106] = (int)(*temp449);
    long long int temp450 = (long long int)regs[105];
    long long int temp451 = (long long int)regs[106];
    int temp452;
    if (temp450 == temp451) temp452 = 0;
    else if (temp450 < temp451) temp452 = -1;
    else temp452 = 1;
    rflags = (long long int)(temp452);
    bool temp453 = (rflags != 0);
    if (temp453) goto label92;
    // THERE WAS A NOTE HERE
    long long int temp454 = (long long int)(rbp + -8);
    long long int *temp455 = (long long int *)temp454;
    regs[115] = (long long int)(*temp455);
    long long int temp456 = (long long int)(regs[115] + 8);
    long long int *temp457 = (long long int *)temp456;
    regs[107] = (long long int)(*temp457);
    long long int temp458 = (long long int)(rbp + -8);
    long long int *temp459 = (long long int *)temp458;
    regs[116] = (long long int)(*temp459);
    long long int temp460 = (long long int)(regs[116] + 16);
    long long int *temp461 = (long long int *)temp460;
    regs[108] = (long long int)(*temp461);
    long long int temp462 = (long long int)(regs[107] + 16);
    long long int *temp463 = (long long int *)temp462;
    *temp463 = (long long int)(regs[108]);
    long long int temp464 = (long long int)(rbp + -8);
    long long int *temp465 = (long long int *)temp464;
    regs[117] = (long long int)(*temp465);
    long long int temp466 = (long long int)(regs[117] + 16);
    long long int *temp467 = (long long int *)temp466;
    regs[109] = (long long int)(*temp467);
    long long int temp468 = (long long int)(rbp + -8);
    long long int *temp469 = (long long int *)temp468;
    regs[118] = (long long int)(*temp469);
    long long int temp470 = (long long int)(regs[118] + 8);
    long long int *temp471 = (long long int *)temp470;
    regs[110] = (long long int)(*temp471);
    long long int temp472 = (long long int)(regs[109] + 8);
    long long int *temp473 = (long long int *)temp472;
    *temp473 = (long long int)(regs[110]);
    long long int temp474 = (long long int)(rbp + -8);
    long long int *temp475 = (long long int *)temp474;
    regs[119] = (long long int)(*temp475);
    rdi = (long long int)(regs[119]);
    free(rdi);
    long long int temp476 = (long long int)(rbp + -12);
    int *temp477 = (int *)temp476;
    regs[111] = (int)(*temp477);
    rsi = (int)(regs[111]);
    long long int temp478 = (long long int)symbol13;
    rdi = (long long int)(temp478);
    rax = (char)(0);
    int temp479 = printf((const char *)rdi, (int)rsi);
    rax = (long long int)temp479;
    goto label109;
    // THERE WAS A BARRIER HERE
    label92:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp480 = (long long int)(rbp + -8);
    long long int *temp481 = (long long int *)temp480;
    regs[120] = (long long int)(*temp481);
    long long int temp482 = (long long int)(regs[120] + 16);
    long long int *temp483 = (long long int *)temp482;
    regs[121] = (long long int)(*temp483);
    long long int temp484 = (long long int)(rbp + -8);
    long long int *temp485 = (long long int *)temp484;
    *temp485 = (long long int)(regs[121]);
    label97:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp486 = (long long int)(rbp + -8);
    long long int *temp487 = (long long int *)temp486;
    long long int temp488 = (long long int)*temp487;
    long long int temp489 = (long long int)0;
    int temp490;
    if (temp488 == temp489) temp490 = 0;
    else if (temp488 < temp489) temp490 = -1;
    else temp490 = 1;
    rflags = (long long int)(temp490);
    bool temp491 = (rflags != 0);
    if (temp491) goto label99;
    // THERE WAS A NOTE HERE
    label109:
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
    label59:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp492 = (long long int)symbol14;
    rdi = (long long int)(temp492);
    rax = (char)(0);
    int temp493 = printf((const char *)rdi);
    rax = (long long int)temp493;
    // PARALLEL COMMAND BEGIN
    long long int temp494 = (long long int)(rbp + -4);
    regs[88] = (long long int)(temp494);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    rsi = (long long int)(regs[88]);
    long long int temp495 = (long long int)symbol1;
    rdi = (long long int)(temp495);
    rax = (char)(0);
    int temp496 = scanf((const char *)rdi, rsi);
    rax = (long long int)temp496;
    long long int temp497 = (long long int)(rbp + -4);
    int *temp498 = (int *)temp497;
    regs[87] = (int)(*temp498);
    long long int temp499 = (long long int)regs[87];
    long long int temp500 = (long long int)2;
    int temp501;
    if (temp499 == temp500) temp501 = 0;
    else if (temp499 < temp500) temp501 = -1;
    else temp501 = 1;
    rflags = (long long int)(temp501);
    bool temp502 = (rflags == 0);
    if (temp502) goto label35;
    // THERE WAS A NOTE HERE
    long long int temp503 = (long long int)regs[87];
    long long int temp504 = (long long int)2;
    int temp505;
    if (temp503 == temp504) temp505 = 0;
    else if (temp503 < temp504) temp505 = -1;
    else temp505 = 1;
    rflags = (long long int)(temp505);
    bool temp506 = (rflags > 0);
    if (temp506) goto label22;
    // THERE WAS A NOTE HERE
    long long int temp507 = (long long int)regs[87];
    long long int temp508 = (long long int)1;
    int temp509;
    if (temp507 == temp508) temp509 = 0;
    else if (temp507 < temp508) temp509 = -1;
    else temp509 = 1;
    rflags = (long long int)(temp509);
    bool temp510 = (rflags == 0);
    if (temp510) goto label29;
    // THERE WAS A NOTE HERE
    goto label52;
    // THERE WAS A BARRIER HERE
    label22:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp511 = (long long int)regs[87];
    long long int temp512 = (long long int)3;
    int temp513;
    if (temp511 == temp512) temp513 = 0;
    else if (temp511 < temp512) temp513 = -1;
    else temp513 = 1;
    rflags = (long long int)(temp513);
    bool temp514 = (rflags == 0);
    if (temp514) goto label41;
    // THERE WAS A NOTE HERE
    long long int temp515 = (long long int)regs[87];
    long long int temp516 = (long long int)4;
    int temp517;
    if (temp515 == temp516) temp517 = 0;
    else if (temp515 < temp516) temp517 = -1;
    else temp517 = 1;
    rflags = (long long int)(temp517);
    bool temp518 = (rflags == 0);
    if (temp518) goto label47;
    // THERE WAS A NOTE HERE
    goto label52;
    // THERE WAS A BARRIER HERE
    label29:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rax = (char)(0);
    insert((char)rax);
    goto label57;
    // THERE WAS A BARRIER HERE
    label35:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rax = (char)(0);
    display((char)rax);
    goto label57;
    // THERE WAS A BARRIER HERE
    label41:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rax = (char)(0);
    delete((char)rax);
    goto label57;
    // THERE WAS A BARRIER HERE
    label47:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    rdi = (int)(0);
    exit((int)rdi);
    // THERE WAS A BARRIER HERE
    label52:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    long long int temp519 = (long long int)symbol7;
    rdi = (long long int)(temp519);
    rax = (char)(0);
    int temp520 = printf((const char *)rdi);
    rax = (long long int)temp520;
    label57:
    0; // NO-OP to keep gcc happy
    // THERE WAS A NOTE HERE
    goto label59;
    // THERE WAS A BARRIER HERE
    return (int)(rax);
}
