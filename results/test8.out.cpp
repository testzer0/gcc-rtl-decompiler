#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

void insertBefore(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(regs[20] + -40);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp2 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp2);
    regs[0] = (char)(0);
    int temp3 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp3;
    // PARALLEL COMMAND BEGIN
    long long int temp4 = (long long int)(regs[20] + -20);
    regs[98] = (long long int)(temp4);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[98]);
    long long int temp5 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp5);
    regs[0] = (char)(0);
    int temp6 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp6;
    long long int temp7 = (long long int)externSymbolTable["head"];
    long long int *temp8 = (long long int *)temp7;
    regs[87] = (long long int)(*temp8);
    regs[88] = (int)(regs[87]);
    long long int temp9 = (long long int)(regs[20] + -20);
    int *temp10 = (int *)temp9;
    regs[89] = (int)(*temp10);
    long long int temp11 = (long long int)regs[88];
    long long int temp12 = (long long int)regs[89];
    int temp13;
    if (temp11 == temp12) temp13 = 0;
    else if (temp11 < temp12) temp13 = -1;
    else temp13 = 1;
    regs[17] = (long long int)(temp13);
    bool temp14 = (regs[17] != 0);
    if (temp14) goto label30;
    // THERE WAS A NOTE HERE
    long long int temp15 = (long long int)externSymbolTable["head"];
    long long int *temp16 = (long long int *)temp15;
    regs[90] = (long long int)(*temp16);
    long long int temp17 = (long long int)(regs[20] + -40);
    long long int *temp18 = (long long int *)temp17;
    regs[99] = (long long int)(*temp18);
    long long int temp19 = (long long int)(regs[90] + 8);
    temp19 = (long long int)(regs[99]);
    long long int temp20 = (long long int)externSymbolTable["head"];
    long long int *temp21 = (long long int *)temp20;
    regs[91] = (long long int)(*temp21);
    long long int temp22 = (long long int)(regs[20] + -40);
    long long int *temp23 = (long long int *)temp22;
    regs[100] = (long long int)(*temp23);
    long long int temp24 = (long long int)(regs[100] + 16);
    temp24 = (long long int)(regs[91]);
    long long int temp25 = (long long int)(regs[20] + -40);
    long long int *temp26 = (long long int *)temp25;
    regs[101] = (long long int)(*temp26);
    long long int temp27 = (long long int)externSymbolTable["head"];
    long long int *temp28 = (long long int *)temp27;
    *temp28 = (long long int)(regs[101]);
    goto label96;
    // THERE WAS A BARRIER HERE
    label30:
    // THERE WAS A NOTE HERE
    long long int temp29 = (long long int)externSymbolTable["head"];
    long long int *temp30 = (long long int *)temp29;
    regs[102] = (long long int)(*temp30);
    long long int temp31 = (long long int)(regs[20] + -8);
    long long int *temp32 = (long long int *)temp31;
    *temp32 = (long long int)(regs[102]);
    goto label71;
    // THERE WAS A BARRIER HERE
    label73:
    // THERE WAS A NOTE HERE
    long long int temp33 = (long long int)(regs[20] + -8);
    long long int *temp34 = (long long int *)temp33;
    regs[103] = (long long int)(*temp34);
    regs[92] = (int)(regs[103]);
    long long int temp35 = (long long int)(regs[20] + -20);
    int *temp36 = (int *)temp35;
    regs[93] = (int)(*temp36);
    long long int temp37 = (long long int)regs[92];
    long long int temp38 = (long long int)regs[93];
    int temp39;
    if (temp37 == temp38) temp39 = 0;
    else if (temp37 < temp38) temp39 = -1;
    else temp39 = 1;
    regs[17] = (long long int)(temp39);
    bool temp40 = (regs[17] != 0);
    if (temp40) goto label66;
    // THERE WAS A NOTE HERE
    long long int temp41 = (long long int)(regs[20] + -8);
    long long int *temp42 = (long long int *)temp41;
    regs[104] = (long long int)(*temp42);
    long long int temp43 = (long long int)(regs[104] + 8);
    regs[105] = (long long int)(temp43);
    long long int temp44 = (long long int)(regs[20] + -16);
    long long int *temp45 = (long long int *)temp44;
    *temp45 = (long long int)(regs[105]);
    long long int temp46 = (long long int)(regs[20] + -8);
    long long int *temp47 = (long long int *)temp46;
    regs[106] = (long long int)(*temp47);
    long long int temp48 = (long long int)(regs[20] + -40);
    long long int *temp49 = (long long int *)temp48;
    regs[107] = (long long int)(*temp49);
    long long int temp50 = (long long int)(regs[106] + 8);
    temp50 = (long long int)(regs[107]);
    long long int temp51 = (long long int)(regs[20] + -40);
    long long int *temp52 = (long long int *)temp51;
    regs[108] = (long long int)(*temp52);
    long long int temp53 = (long long int)(regs[20] + -8);
    long long int *temp54 = (long long int *)temp53;
    regs[109] = (long long int)(*temp54);
    long long int temp55 = (long long int)(regs[108] + 16);
    temp55 = (long long int)(regs[109]);
    long long int temp56 = (long long int)(regs[20] + -40);
    long long int *temp57 = (long long int *)temp56;
    regs[110] = (long long int)(*temp57);
    long long int temp58 = (long long int)(regs[20] + -16);
    long long int *temp59 = (long long int *)temp58;
    regs[111] = (long long int)(*temp59);
    long long int temp60 = (long long int)(regs[110] + 8);
    temp60 = (long long int)(regs[111]);
    long long int temp61 = (long long int)(regs[20] + -16);
    long long int *temp62 = (long long int *)temp61;
    regs[112] = (long long int)(*temp62);
    long long int temp63 = (long long int)(regs[20] + -40);
    long long int *temp64 = (long long int *)temp63;
    regs[113] = (long long int)(*temp64);
    long long int temp65 = (long long int)(regs[112] + 16);
    temp65 = (long long int)(regs[113]);
    long long int temp66 = (long long int)(regs[20] + -40);
    long long int *temp67 = (long long int *)temp66;
    regs[114] = (long long int)(*temp67);
    regs[94] = (int)(regs[114]);
    regs[4] = (int)(regs[94]);
    long long int temp68 = externSymbolTable["*.LC2"];
    regs[5] = (long long int)(temp68);
    regs[0] = (char)(0);
    int temp69 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp69;
    goto label96;
    // THERE WAS A BARRIER HERE
    label66:
    // THERE WAS A NOTE HERE
    long long int temp70 = (long long int)(regs[20] + -8);
    long long int *temp71 = (long long int *)temp70;
    regs[115] = (long long int)(*temp71);
    long long int temp72 = (long long int)(regs[115] + 16);
    regs[116] = (long long int)(temp72);
    long long int temp73 = (long long int)(regs[20] + -8);
    long long int *temp74 = (long long int *)temp73;
    *temp74 = (long long int)(regs[116]);
    label71:
    // THERE WAS A NOTE HERE
    long long int temp75 = (long long int)(regs[20] + -8);
    long long int *temp76 = (long long int *)temp75;
    long long int temp77 = (long long int)*temp76;
    long long int temp78 = (long long int)0;
    int temp79;
    if (temp77 == temp78) temp79 = 0;
    else if (temp77 < temp78) temp79 = -1;
    else temp79 = 1;
    regs[17] = (long long int)(temp79);
    bool temp80 = (regs[17] != 0);
    if (temp80) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp81 = (long long int)(regs[20] + -20);
    int *temp82 = (int *)temp81;
    regs[95] = (int)(*temp82);
    regs[4] = (int)(regs[95]);
    long long int temp83 = externSymbolTable["*.LC3"];
    regs[5] = (long long int)(temp83);
    regs[0] = (char)(0);
    int temp84 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp84;
    long long int temp85 = (long long int)externSymbolTable["tail"];
    long long int *temp86 = (long long int *)temp85;
    regs[96] = (long long int)(*temp86);
    long long int temp87 = (long long int)(regs[20] + -40);
    long long int *temp88 = (long long int *)temp87;
    regs[117] = (long long int)(*temp88);
    long long int temp89 = (long long int)(regs[96] + 16);
    temp89 = (long long int)(regs[117]);
    long long int temp90 = (long long int)externSymbolTable["tail"];
    long long int *temp91 = (long long int *)temp90;
    regs[97] = (long long int)(*temp91);
    long long int temp92 = (long long int)(regs[20] + -40);
    long long int *temp93 = (long long int *)temp92;
    regs[118] = (long long int)(*temp93);
    long long int temp94 = (long long int)(regs[118] + 8);
    temp94 = (long long int)(regs[97]);
    long long int temp95 = (long long int)(regs[20] + -40);
    long long int *temp96 = (long long int *)temp95;
    regs[119] = (long long int)(*temp96);
    long long int temp97 = (long long int)externSymbolTable["tail"];
    long long int *temp98 = (long long int *)temp97;
    *temp98 = (long long int)(regs[119]);
    label96:
    // THERE WAS A NOTE HERE
}
void insertAfter(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp99 = (long long int)(regs[20] + -40);
    long long int *temp100 = (long long int *)temp99;
    *temp100 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp101 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp101);
    regs[0] = (char)(0);
    int temp102 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp102;
    // PARALLEL COMMAND BEGIN
    long long int temp103 = (long long int)(regs[20] + -20);
    regs[94] = (long long int)(temp103);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[94]);
    long long int temp104 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp104);
    regs[0] = (char)(0);
    int temp105 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp105;
    long long int temp106 = (long long int)externSymbolTable["head"];
    long long int *temp107 = (long long int *)temp106;
    regs[95] = (long long int)(*temp107);
    long long int temp108 = (long long int)(regs[20] + -8);
    long long int *temp109 = (long long int *)temp108;
    *temp109 = (long long int)(regs[95]);
    goto label53;
    // THERE WAS A BARRIER HERE
    label56:
    // THERE WAS A NOTE HERE
    long long int temp110 = (long long int)(regs[20] + -8);
    long long int *temp111 = (long long int *)temp110;
    regs[96] = (long long int)(*temp111);
    regs[87] = (int)(regs[96]);
    long long int temp112 = (long long int)(regs[20] + -20);
    int *temp113 = (int *)temp112;
    regs[88] = (int)(*temp113);
    long long int temp114 = (long long int)regs[87];
    long long int temp115 = (long long int)regs[88];
    int temp116;
    if (temp114 == temp115) temp116 = 0;
    else if (temp114 < temp115) temp116 = -1;
    else temp116 = 1;
    regs[17] = (long long int)(temp116);
    bool temp117 = (regs[17] != 0);
    if (temp117) goto label48;
    // THERE WAS A NOTE HERE
    long long int temp118 = (long long int)(regs[20] + -8);
    long long int *temp119 = (long long int *)temp118;
    regs[97] = (long long int)(*temp119);
    long long int temp120 = (long long int)(regs[97] + 16);
    regs[98] = (long long int)(temp120);
    long long int temp121 = (long long int)(regs[20] + -16);
    long long int *temp122 = (long long int *)temp121;
    *temp122 = (long long int)(regs[98]);
    long long int temp123 = (long long int)(regs[20] + -8);
    long long int *temp124 = (long long int *)temp123;
    regs[99] = (long long int)(*temp124);
    long long int temp125 = (long long int)(regs[20] + -40);
    long long int *temp126 = (long long int *)temp125;
    regs[100] = (long long int)(*temp126);
    long long int temp127 = (long long int)(regs[99] + 16);
    temp127 = (long long int)(regs[100]);
    long long int temp128 = (long long int)(regs[20] + -40);
    long long int *temp129 = (long long int *)temp128;
    regs[101] = (long long int)(*temp129);
    long long int temp130 = (long long int)(regs[20] + -8);
    long long int *temp131 = (long long int *)temp130;
    regs[102] = (long long int)(*temp131);
    long long int temp132 = (long long int)(regs[101] + 8);
    temp132 = (long long int)(regs[102]);
    long long int temp133 = (long long int)(regs[20] + -40);
    long long int *temp134 = (long long int *)temp133;
    regs[103] = (long long int)(*temp134);
    long long int temp135 = (long long int)(regs[20] + -16);
    long long int *temp136 = (long long int *)temp135;
    regs[104] = (long long int)(*temp136);
    long long int temp137 = (long long int)(regs[103] + 16);
    temp137 = (long long int)(regs[104]);
    long long int temp138 = (long long int)(regs[20] + -16);
    long long int *temp139 = (long long int *)temp138;
    regs[105] = (long long int)(*temp139);
    long long int temp140 = (long long int)(regs[20] + -40);
    long long int *temp141 = (long long int *)temp140;
    regs[106] = (long long int)(*temp141);
    long long int temp142 = (long long int)(regs[105] + 8);
    temp142 = (long long int)(regs[106]);
    long long int temp143 = (long long int)(regs[20] + -40);
    long long int *temp144 = (long long int *)temp143;
    regs[107] = (long long int)(*temp144);
    regs[89] = (int)(regs[107]);
    regs[4] = (int)(regs[89]);
    long long int temp145 = externSymbolTable["*.LC2"];
    regs[5] = (long long int)(temp145);
    regs[0] = (char)(0);
    int temp146 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp146;
    goto label79;
    // THERE WAS A BARRIER HERE
    label48:
    // THERE WAS A NOTE HERE
    long long int temp147 = (long long int)(regs[20] + -8);
    long long int *temp148 = (long long int *)temp147;
    regs[108] = (long long int)(*temp148);
    long long int temp149 = (long long int)(regs[108] + 16);
    regs[109] = (long long int)(temp149);
    long long int temp150 = (long long int)(regs[20] + -8);
    long long int *temp151 = (long long int *)temp150;
    *temp151 = (long long int)(regs[109]);
    label53:
    // THERE WAS A NOTE HERE
    long long int temp152 = (long long int)externSymbolTable["tail"];
    long long int *temp153 = (long long int *)temp152;
    regs[90] = (long long int)(*temp153);
    long long int temp154 = (long long int)(regs[20] + -8);
    long long int *temp155 = (long long int *)temp154;
    long long int temp156 = (long long int)*temp155;
    long long int temp157 = (long long int)regs[90];
    int temp158;
    if (temp156 == temp157) temp158 = 0;
    else if (temp156 < temp157) temp158 = -1;
    else temp158 = 1;
    regs[17] = (long long int)(temp158);
    bool temp159 = (regs[17] != 0);
    if (temp159) goto label56;
    // THERE WAS A NOTE HERE
    long long int temp160 = (long long int)(regs[20] + -20);
    int *temp161 = (int *)temp160;
    regs[91] = (int)(*temp161);
    regs[4] = (int)(regs[91]);
    long long int temp162 = externSymbolTable["*.LC3"];
    regs[5] = (long long int)(temp162);
    regs[0] = (char)(0);
    int temp163 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp163;
    long long int temp164 = (long long int)externSymbolTable["tail"];
    long long int *temp165 = (long long int *)temp164;
    regs[92] = (long long int)(*temp165);
    long long int temp166 = (long long int)(regs[20] + -40);
    long long int *temp167 = (long long int *)temp166;
    regs[110] = (long long int)(*temp167);
    long long int temp168 = (long long int)(regs[92] + 16);
    temp168 = (long long int)(regs[110]);
    long long int temp169 = (long long int)externSymbolTable["tail"];
    long long int *temp170 = (long long int *)temp169;
    regs[93] = (long long int)(*temp170);
    long long int temp171 = (long long int)(regs[20] + -40);
    long long int *temp172 = (long long int *)temp171;
    regs[111] = (long long int)(*temp172);
    long long int temp173 = (long long int)(regs[111] + 8);
    temp173 = (long long int)(regs[93]);
    long long int temp174 = (long long int)(regs[20] + -40);
    long long int *temp175 = (long long int *)temp174;
    regs[112] = (long long int)(*temp175);
    long long int temp176 = (long long int)externSymbolTable["tail"];
    long long int *temp177 = (long long int *)temp176;
    *temp177 = (long long int)(regs[112]);
    label79:
    // THERE WAS A NOTE HERE
}
void insert(char arg0) {
    regs[0] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp178 = externSymbolTable["*.LC4"];
    regs[5] = (long long int)(temp178);
    regs[0] = (char)(0);
    int temp179 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp179;
    // PARALLEL COMMAND BEGIN
    long long int temp180 = (long long int)(regs[20] + -12);
    regs[95] = (long long int)(temp180);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[95]);
    long long int temp181 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp181);
    regs[0] = (char)(0);
    int temp182 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp182;
    regs[5] = (long long int)(24);
    long long int temp183 = malloc(regs[5]);
    regs[0] = (long long int)temp183;
    regs[96] = (long long int)(regs[0]);
    long long int temp184 = (long long int)(regs[20] + -8);
    long long int *temp185 = (long long int *)temp184;
    *temp185 = (long long int)(regs[96]);
    long long int temp186 = (long long int)(regs[20] + -12);
    int *temp187 = (int *)temp186;
    regs[87] = (int)(*temp187);
    long long int temp188 = (long long int)(regs[20] + -8);
    long long int *temp189 = (long long int *)temp188;
    regs[97] = (long long int)(*temp189);
    regs[97] = (int)(regs[87]);
    long long int temp190 = (long long int)(regs[20] + -8);
    long long int *temp191 = (long long int *)temp190;
    regs[98] = (long long int)(*temp191);
    long long int temp192 = (long long int)(regs[98] + 8);
    temp192 = (long long int)(0);
    long long int temp193 = (long long int)(regs[20] + -8);
    long long int *temp194 = (long long int *)temp193;
    regs[99] = (long long int)(*temp194);
    long long int temp195 = (long long int)(regs[99] + 16);
    temp195 = (long long int)(0);
    long long int temp196 = (long long int)externSymbolTable["head"];
    long long int *temp197 = (long long int *)temp196;
    regs[88] = (long long int)(*temp197);
    long long int temp198 = (long long int)regs[88];
    long long int temp199 = (long long int)0;
    int temp200;
    if (temp198 == temp199) temp200 = 0;
    else if (temp198 < temp199) temp200 = -1;
    else temp200 = 1;
    regs[17] = (long long int)(temp200);
    bool temp201 = (regs[17] != 0);
    if (temp201) goto label36;
    // THERE WAS A NOTE HERE
    long long int temp202 = (long long int)(regs[20] + -8);
    long long int *temp203 = (long long int *)temp202;
    regs[100] = (long long int)(*temp203);
    long long int temp204 = (long long int)externSymbolTable["tail"];
    long long int *temp205 = (long long int *)temp204;
    *temp205 = (long long int)(regs[100]);
    long long int temp206 = (long long int)externSymbolTable["tail"];
    long long int *temp207 = (long long int *)temp206;
    regs[89] = (long long int)(*temp207);
    long long int temp208 = (long long int)externSymbolTable["head"];
    long long int *temp209 = (long long int *)temp208;
    *temp209 = (long long int)(regs[89]);
    long long int temp210 = externSymbolTable["*.LC5"];
    regs[5] = (long long int)(temp210);
    int temp211 = puts(regs[5]);
    regs[0] = (long long int)temp211;
    goto label108;
    // THERE WAS A BARRIER HERE
    label36:
    // THERE WAS A NOTE HERE
    long long int temp212 = externSymbolTable["*.LC6"];
    regs[5] = (long long int)(temp212);
    int temp213 = puts(regs[5]);
    regs[0] = (long long int)temp213;
    // PARALLEL COMMAND BEGIN
    long long int temp214 = (long long int)(regs[20] + -16);
    regs[101] = (long long int)(temp214);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[101]);
    long long int temp215 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp215);
    regs[0] = (char)(0);
    int temp216 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp216;
    long long int temp217 = (long long int)(regs[20] + -16);
    int *temp218 = (int *)temp217;
    regs[90] = (int)(*temp218);
    long long int temp219 = (long long int)regs[90];
    long long int temp220 = (long long int)2;
    int temp221;
    if (temp219 == temp220) temp221 = 0;
    else if (temp219 < temp220) temp221 = -1;
    else temp221 = 1;
    regs[17] = (long long int)(temp221);
    bool temp222 = (regs[17] == 0);
    if (temp222) goto label73;
    // THERE WAS A NOTE HERE
    long long int temp223 = (long long int)regs[90];
    long long int temp224 = (long long int)2;
    int temp225;
    if (temp223 == temp224) temp225 = 0;
    else if (temp223 < temp224) temp225 = -1;
    else temp225 = 1;
    regs[17] = (long long int)(temp225);
    bool temp226 = (regs[17] > 0);
    if (temp226) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp227 = (long long int)regs[90];
    long long int temp228 = (long long int)1;
    int temp229;
    if (temp227 == temp228) temp229 = 0;
    else if (temp227 < temp228) temp229 = -1;
    else temp229 = 1;
    regs[17] = (long long int)(temp229);
    bool temp230 = (regs[17] == 0);
    if (temp230) goto label61;
    // THERE WAS A NOTE HERE
    goto label99;
    // THERE WAS A BARRIER HERE
    label54:
    // THERE WAS A NOTE HERE
    long long int temp231 = (long long int)regs[90];
    long long int temp232 = (long long int)3;
    int temp233;
    if (temp231 == temp232) temp233 = 0;
    else if (temp231 < temp232) temp233 = -1;
    else temp233 = 1;
    regs[17] = (long long int)(temp233);
    bool temp234 = (regs[17] == 0);
    if (temp234) goto label80;
    // THERE WAS A NOTE HERE
    long long int temp235 = (long long int)regs[90];
    long long int temp236 = (long long int)4;
    int temp237;
    if (temp235 == temp236) temp237 = 0;
    else if (temp235 < temp236) temp237 = -1;
    else temp237 = 1;
    regs[17] = (long long int)(temp237);
    bool temp238 = (regs[17] == 0);
    if (temp238) goto label87;
    // THERE WAS A NOTE HERE
    goto label99;
    // THERE WAS A BARRIER HERE
    label61:
    // THERE WAS A NOTE HERE
    long long int temp239 = (long long int)externSymbolTable["head"];
    long long int *temp240 = (long long int *)temp239;
    regs[91] = (long long int)(*temp240);
    long long int temp241 = (long long int)(regs[20] + -8);
    long long int *temp242 = (long long int *)temp241;
    regs[102] = (long long int)(*temp242);
    long long int temp243 = (long long int)(regs[91] + 8);
    temp243 = (long long int)(regs[102]);
    long long int temp244 = (long long int)externSymbolTable["head"];
    long long int *temp245 = (long long int *)temp244;
    regs[92] = (long long int)(*temp245);
    long long int temp246 = (long long int)(regs[20] + -8);
    long long int *temp247 = (long long int *)temp246;
    regs[103] = (long long int)(*temp247);
    long long int temp248 = (long long int)(regs[103] + 16);
    temp248 = (long long int)(regs[92]);
    long long int temp249 = (long long int)(regs[20] + -8);
    long long int *temp250 = (long long int *)temp249;
    regs[104] = (long long int)(*temp250);
    long long int temp251 = (long long int)externSymbolTable["head"];
    long long int *temp252 = (long long int *)temp251;
    *temp252 = (long long int)(regs[104]);
    goto label106;
    // THERE WAS A BARRIER HERE
    label73:
    // THERE WAS A NOTE HERE
    long long int temp253 = (long long int)(regs[20] + -8);
    long long int *temp254 = (long long int *)temp253;
    regs[105] = (long long int)(*temp254);
    regs[5] = (long long int)(regs[105]);
    insertBefore(regs[5]);
    goto label106;
    // THERE WAS A BARRIER HERE
    label80:
    // THERE WAS A NOTE HERE
    long long int temp255 = (long long int)(regs[20] + -8);
    long long int *temp256 = (long long int *)temp255;
    regs[106] = (long long int)(*temp256);
    regs[5] = (long long int)(regs[106]);
    insertAfter(regs[5]);
    goto label106;
    // THERE WAS A BARRIER HERE
    label87:
    // THERE WAS A NOTE HERE
    long long int temp257 = (long long int)externSymbolTable["tail"];
    long long int *temp258 = (long long int *)temp257;
    regs[93] = (long long int)(*temp258);
    long long int temp259 = (long long int)(regs[20] + -8);
    long long int *temp260 = (long long int *)temp259;
    regs[107] = (long long int)(*temp260);
    long long int temp261 = (long long int)(regs[93] + 16);
    temp261 = (long long int)(regs[107]);
    long long int temp262 = (long long int)externSymbolTable["tail"];
    long long int *temp263 = (long long int *)temp262;
    regs[94] = (long long int)(*temp263);
    long long int temp264 = (long long int)(regs[20] + -8);
    long long int *temp265 = (long long int *)temp264;
    regs[108] = (long long int)(*temp265);
    long long int temp266 = (long long int)(regs[108] + 8);
    temp266 = (long long int)(regs[94]);
    long long int temp267 = (long long int)(regs[20] + -8);
    long long int *temp268 = (long long int *)temp267;
    regs[109] = (long long int)(*temp268);
    long long int temp269 = (long long int)externSymbolTable["tail"];
    long long int *temp270 = (long long int *)temp269;
    *temp270 = (long long int)(regs[109]);
    goto label106;
    // THERE WAS A BARRIER HERE
    label99:
    // THERE WAS A NOTE HERE
    long long int temp271 = externSymbolTable["*.LC7"];
    regs[5] = (long long int)(temp271);
    regs[0] = (char)(0);
    int temp272 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp272;
    label106:
    // THERE WAS A NOTE HERE
    label108:
    // THERE WAS A NOTE HERE
}
void displayForward(char arg0) {
    regs[0] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp273 = (long long int)externSymbolTable["head"];
    long long int *temp274 = (long long int *)temp273;
    regs[89] = (long long int)(*temp274);
    long long int temp275 = (long long int)(regs[20] + -8);
    long long int *temp276 = (long long int *)temp275;
    *temp276 = (long long int)(regs[89]);
    long long int temp277 = (long long int)externSymbolTable["head"];
    long long int *temp278 = (long long int *)temp277;
    regs[87] = (long long int)(*temp278);
    long long int temp279 = (long long int)regs[87];
    long long int temp280 = (long long int)0;
    int temp281;
    if (temp279 == temp280) temp281 = 0;
    else if (temp279 < temp280) temp281 = -1;
    else temp281 = 1;
    regs[17] = (long long int)(temp281);
    bool temp282 = (regs[17] != 0);
    if (temp282) goto label16;
    // THERE WAS A NOTE HERE
    long long int temp283 = externSymbolTable["*.LC8"];
    regs[5] = (long long int)(temp283);
    regs[0] = (char)(0);
    int temp284 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp284;
    goto label40;
    // THERE WAS A BARRIER HERE
    label16:
    // THERE WAS A NOTE HERE
    long long int temp285 = externSymbolTable["*.LC9"];
    regs[5] = (long long int)(temp285);
    regs[0] = (char)(0);
    int temp286 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp286;
    goto label33;
    // THERE WAS A BARRIER HERE
    label35:
    // THERE WAS A NOTE HERE
    long long int temp287 = (long long int)(regs[20] + -8);
    long long int *temp288 = (long long int *)temp287;
    regs[90] = (long long int)(*temp288);
    regs[88] = (int)(regs[90]);
    regs[4] = (int)(regs[88]);
    long long int temp289 = externSymbolTable["*.LC10"];
    regs[5] = (long long int)(temp289);
    regs[0] = (char)(0);
    int temp290 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp290;
    long long int temp291 = (long long int)(regs[20] + -8);
    long long int *temp292 = (long long int *)temp291;
    regs[91] = (long long int)(*temp292);
    long long int temp293 = (long long int)(regs[91] + 16);
    regs[92] = (long long int)(temp293);
    long long int temp294 = (long long int)(regs[20] + -8);
    long long int *temp295 = (long long int *)temp294;
    *temp295 = (long long int)(regs[92]);
    label33:
    // THERE WAS A NOTE HERE
    long long int temp296 = (long long int)(regs[20] + -8);
    long long int *temp297 = (long long int *)temp296;
    long long int temp298 = (long long int)*temp297;
    long long int temp299 = (long long int)0;
    int temp300;
    if (temp298 == temp299) temp300 = 0;
    else if (temp298 < temp299) temp300 = -1;
    else temp300 = 1;
    regs[17] = (long long int)(temp300);
    bool temp301 = (regs[17] != 0);
    if (temp301) goto label35;
    // THERE WAS A NOTE HERE
    label40:
    // THERE WAS A NOTE HERE
}
void displayBackward(char arg0) {
    regs[0] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp302 = (long long int)externSymbolTable["tail"];
    long long int *temp303 = (long long int *)temp302;
    regs[89] = (long long int)(*temp303);
    long long int temp304 = (long long int)(regs[20] + -8);
    long long int *temp305 = (long long int *)temp304;
    *temp305 = (long long int)(regs[89]);
    long long int temp306 = (long long int)externSymbolTable["tail"];
    long long int *temp307 = (long long int *)temp306;
    regs[87] = (long long int)(*temp307);
    long long int temp308 = (long long int)regs[87];
    long long int temp309 = (long long int)0;
    int temp310;
    if (temp308 == temp309) temp310 = 0;
    else if (temp308 < temp309) temp310 = -1;
    else temp310 = 1;
    regs[17] = (long long int)(temp310);
    bool temp311 = (regs[17] != 0);
    if (temp311) goto label16;
    // THERE WAS A NOTE HERE
    long long int temp312 = externSymbolTable["*.LC8"];
    regs[5] = (long long int)(temp312);
    regs[0] = (char)(0);
    int temp313 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp313;
    goto label40;
    // THERE WAS A BARRIER HERE
    label16:
    // THERE WAS A NOTE HERE
    long long int temp314 = externSymbolTable["*.LC11"];
    regs[5] = (long long int)(temp314);
    regs[0] = (char)(0);
    int temp315 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp315;
    goto label33;
    // THERE WAS A BARRIER HERE
    label35:
    // THERE WAS A NOTE HERE
    long long int temp316 = (long long int)(regs[20] + -8);
    long long int *temp317 = (long long int *)temp316;
    regs[90] = (long long int)(*temp317);
    regs[88] = (int)(regs[90]);
    regs[4] = (int)(regs[88]);
    long long int temp318 = externSymbolTable["*.LC10"];
    regs[5] = (long long int)(temp318);
    regs[0] = (char)(0);
    int temp319 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp319;
    long long int temp320 = (long long int)(regs[20] + -8);
    long long int *temp321 = (long long int *)temp320;
    regs[91] = (long long int)(*temp321);
    long long int temp322 = (long long int)(regs[91] + 8);
    regs[92] = (long long int)(temp322);
    long long int temp323 = (long long int)(regs[20] + -8);
    long long int *temp324 = (long long int *)temp323;
    *temp324 = (long long int)(regs[92]);
    label33:
    // THERE WAS A NOTE HERE
    long long int temp325 = (long long int)(regs[20] + -8);
    long long int *temp326 = (long long int *)temp325;
    long long int temp327 = (long long int)*temp326;
    long long int temp328 = (long long int)0;
    int temp329;
    if (temp327 == temp328) temp329 = 0;
    else if (temp327 < temp328) temp329 = -1;
    else temp329 = 1;
    regs[17] = (long long int)(temp329);
    bool temp330 = (regs[17] != 0);
    if (temp330) goto label35;
    // THERE WAS A NOTE HERE
    label40:
    // THERE WAS A NOTE HERE
}
void display(char arg0) {
    regs[0] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp331 = externSymbolTable["*.LC12"];
    regs[5] = (long long int)(temp331);
    regs[0] = (char)(0);
    int temp332 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp332;
    // PARALLEL COMMAND BEGIN
    long long int temp333 = (long long int)(regs[20] + -4);
    regs[88] = (long long int)(temp333);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[88]);
    long long int temp334 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp334);
    regs[0] = (char)(0);
    int temp335 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp335;
    long long int temp336 = (long long int)(regs[20] + -4);
    int *temp337 = (int *)temp336;
    regs[87] = (int)(*temp337);
    long long int temp338 = (long long int)regs[87];
    long long int temp339 = (long long int)1;
    int temp340;
    if (temp338 == temp339) temp340 = 0;
    else if (temp338 < temp339) temp340 = -1;
    else temp340 = 1;
    regs[17] = (long long int)(temp340);
    bool temp341 = (regs[17] == 0);
    if (temp341) goto label20;
    // THERE WAS A NOTE HERE
    long long int temp342 = (long long int)regs[87];
    long long int temp343 = (long long int)2;
    int temp344;
    if (temp342 == temp343) temp344 = 0;
    else if (temp342 < temp343) temp344 = -1;
    else temp344 = 1;
    regs[17] = (long long int)(temp344);
    bool temp345 = (regs[17] == 0);
    if (temp345) goto label26;
    // THERE WAS A NOTE HERE
    goto label32;
    // THERE WAS A BARRIER HERE
    label20:
    // THERE WAS A NOTE HERE
    regs[0] = (char)(0);
    displayForward((char)regs[0]);
    goto label37;
    // THERE WAS A BARRIER HERE
    label26:
    // THERE WAS A NOTE HERE
    regs[0] = (char)(0);
    displayBackward((char)regs[0]);
    goto label37;
    // THERE WAS A BARRIER HERE
    label32:
    // THERE WAS A NOTE HERE
    long long int temp346 = externSymbolTable["*.LC7"];
    regs[5] = (long long int)(temp346);
    regs[0] = (char)(0);
    int temp347 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp347;
    label37:
    // THERE WAS A NOTE HERE
}
void delete(char arg0) {
    regs[0] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp348 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp348);
    regs[0] = (char)(0);
    int temp349 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp349;
    // PARALLEL COMMAND BEGIN
    long long int temp350 = (long long int)(regs[20] + -12);
    regs[112] = (long long int)(temp350);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[112]);
    long long int temp351 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp351);
    regs[0] = (char)(0);
    int temp352 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp352;
    long long int temp353 = (long long int)externSymbolTable["head"];
    long long int *temp354 = (long long int *)temp353;
    regs[87] = (long long int)(*temp354);
    regs[88] = (int)(regs[87]);
    long long int temp355 = (long long int)(regs[20] + -12);
    int *temp356 = (int *)temp355;
    regs[89] = (int)(*temp356);
    long long int temp357 = (long long int)regs[88];
    long long int temp358 = (long long int)regs[89];
    int temp359;
    if (temp357 == temp358) temp359 = 0;
    else if (temp357 < temp358) temp359 = -1;
    else temp359 = 1;
    regs[17] = (long long int)(temp359);
    bool temp360 = (regs[17] != 0);
    if (temp360) goto label35;
    // THERE WAS A NOTE HERE
    long long int temp361 = (long long int)externSymbolTable["head"];
    long long int *temp362 = (long long int *)temp361;
    regs[90] = (long long int)(*temp362);
    long long int temp363 = (long long int)(regs[90] + 16);
    regs[91] = (long long int)(temp363);
    long long int temp364 = (long long int)(regs[91] + 8);
    temp364 = (long long int)(0);
    long long int temp365 = (long long int)externSymbolTable["head"];
    long long int *temp366 = (long long int *)temp365;
    regs[92] = (long long int)(*temp366);
    long long int temp367 = (long long int)(regs[92] + 16);
    regs[93] = (long long int)(temp367);
    long long int temp368 = (long long int)externSymbolTable["head"];
    long long int *temp369 = (long long int *)temp368;
    *temp369 = (long long int)(regs[93]);
    long long int temp370 = (long long int)externSymbolTable["head"];
    long long int *temp371 = (long long int *)temp370;
    regs[94] = (long long int)(*temp371);
    regs[5] = (long long int)(regs[94]);
    free(regs[5]);
    long long int temp372 = (long long int)(regs[20] + -12);
    int *temp373 = (int *)temp372;
    regs[95] = (int)(*temp373);
    regs[4] = (int)(regs[95]);
    long long int temp374 = externSymbolTable["*.LC13"];
    regs[5] = (long long int)(temp374);
    regs[0] = (char)(0);
    int temp375 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp375;
    goto label109;
    // THERE WAS A BARRIER HERE
    label35:
    // THERE WAS A NOTE HERE
    long long int temp376 = (long long int)externSymbolTable["tail"];
    long long int *temp377 = (long long int *)temp376;
    regs[96] = (long long int)(*temp377);
    regs[97] = (int)(regs[96]);
    long long int temp378 = (long long int)(regs[20] + -12);
    int *temp379 = (int *)temp378;
    regs[98] = (int)(*temp379);
    long long int temp380 = (long long int)regs[97];
    long long int temp381 = (long long int)regs[98];
    int temp382;
    if (temp380 == temp381) temp382 = 0;
    else if (temp380 < temp381) temp382 = -1;
    else temp382 = 1;
    regs[17] = (long long int)(temp382);
    bool temp383 = (regs[17] != 0);
    if (temp383) goto label59;
    // THERE WAS A NOTE HERE
    long long int temp384 = (long long int)externSymbolTable["tail"];
    long long int *temp385 = (long long int *)temp384;
    regs[99] = (long long int)(*temp385);
    long long int temp386 = (long long int)(regs[99] + 8);
    regs[100] = (long long int)(temp386);
    long long int temp387 = (long long int)(regs[100] + 16);
    temp387 = (long long int)(0);
    long long int temp388 = (long long int)externSymbolTable["tail"];
    long long int *temp389 = (long long int *)temp388;
    regs[101] = (long long int)(*temp389);
    long long int temp390 = (long long int)(regs[101] + 8);
    regs[102] = (long long int)(temp390);
    long long int temp391 = (long long int)externSymbolTable["tail"];
    long long int *temp392 = (long long int *)temp391;
    *temp392 = (long long int)(regs[102]);
    long long int temp393 = (long long int)externSymbolTable["tail"];
    long long int *temp394 = (long long int *)temp393;
    regs[103] = (long long int)(*temp394);
    regs[5] = (long long int)(regs[103]);
    free(regs[5]);
    long long int temp395 = (long long int)(regs[20] + -12);
    int *temp396 = (int *)temp395;
    regs[104] = (int)(*temp396);
    regs[4] = (int)(regs[104]);
    long long int temp397 = externSymbolTable["*.LC13"];
    regs[5] = (long long int)(temp397);
    regs[0] = (char)(0);
    int temp398 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp398;
    goto label109;
    // THERE WAS A BARRIER HERE
    label59:
    // THERE WAS A NOTE HERE
    long long int temp399 = (long long int)externSymbolTable["head"];
    long long int *temp400 = (long long int *)temp399;
    regs[113] = (long long int)(*temp400);
    long long int temp401 = (long long int)(regs[20] + -8);
    long long int *temp402 = (long long int *)temp401;
    *temp402 = (long long int)(regs[113]);
    goto label97;
    // THERE WAS A BARRIER HERE
    label99:
    // THERE WAS A NOTE HERE
    long long int temp403 = (long long int)(regs[20] + -8);
    long long int *temp404 = (long long int *)temp403;
    regs[114] = (long long int)(*temp404);
    regs[105] = (int)(regs[114]);
    long long int temp405 = (long long int)(regs[20] + -12);
    int *temp406 = (int *)temp405;
    regs[106] = (int)(*temp406);
    long long int temp407 = (long long int)regs[105];
    long long int temp408 = (long long int)regs[106];
    int temp409;
    if (temp407 == temp408) temp409 = 0;
    else if (temp407 < temp408) temp409 = -1;
    else temp409 = 1;
    regs[17] = (long long int)(temp409);
    bool temp410 = (regs[17] != 0);
    if (temp410) goto label92;
    // THERE WAS A NOTE HERE
    long long int temp411 = (long long int)(regs[20] + -8);
    long long int *temp412 = (long long int *)temp411;
    regs[115] = (long long int)(*temp412);
    long long int temp413 = (long long int)(regs[115] + 8);
    regs[107] = (long long int)(temp413);
    long long int temp414 = (long long int)(regs[20] + -8);
    long long int *temp415 = (long long int *)temp414;
    regs[116] = (long long int)(*temp415);
    long long int temp416 = (long long int)(regs[116] + 16);
    regs[108] = (long long int)(temp416);
    long long int temp417 = (long long int)(regs[107] + 16);
    temp417 = (long long int)(regs[108]);
    long long int temp418 = (long long int)(regs[20] + -8);
    long long int *temp419 = (long long int *)temp418;
    regs[117] = (long long int)(*temp419);
    long long int temp420 = (long long int)(regs[117] + 16);
    regs[109] = (long long int)(temp420);
    long long int temp421 = (long long int)(regs[20] + -8);
    long long int *temp422 = (long long int *)temp421;
    regs[118] = (long long int)(*temp422);
    long long int temp423 = (long long int)(regs[118] + 8);
    regs[110] = (long long int)(temp423);
    long long int temp424 = (long long int)(regs[109] + 8);
    temp424 = (long long int)(regs[110]);
    long long int temp425 = (long long int)(regs[20] + -8);
    long long int *temp426 = (long long int *)temp425;
    regs[119] = (long long int)(*temp426);
    regs[5] = (long long int)(regs[119]);
    free(regs[5]);
    long long int temp427 = (long long int)(regs[20] + -12);
    int *temp428 = (int *)temp427;
    regs[111] = (int)(*temp428);
    regs[4] = (int)(regs[111]);
    long long int temp429 = externSymbolTable["*.LC13"];
    regs[5] = (long long int)(temp429);
    regs[0] = (char)(0);
    int temp430 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp430;
    goto label109;
    // THERE WAS A BARRIER HERE
    label92:
    // THERE WAS A NOTE HERE
    long long int temp431 = (long long int)(regs[20] + -8);
    long long int *temp432 = (long long int *)temp431;
    regs[120] = (long long int)(*temp432);
    long long int temp433 = (long long int)(regs[120] + 16);
    regs[121] = (long long int)(temp433);
    long long int temp434 = (long long int)(regs[20] + -8);
    long long int *temp435 = (long long int *)temp434;
    *temp435 = (long long int)(regs[121]);
    label97:
    // THERE WAS A NOTE HERE
    long long int temp436 = (long long int)(regs[20] + -8);
    long long int *temp437 = (long long int *)temp436;
    long long int temp438 = (long long int)*temp437;
    long long int temp439 = (long long int)0;
    int temp440;
    if (temp438 == temp439) temp440 = 0;
    else if (temp438 < temp439) temp440 = -1;
    else temp440 = 1;
    regs[17] = (long long int)(temp440);
    bool temp441 = (regs[17] != 0);
    if (temp441) goto label99;
    // THERE WAS A NOTE HERE
    label109:
    // THERE WAS A NOTE HERE
}
int main(int argc, char **argv) {
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    label59:
    // THERE WAS A NOTE HERE
    long long int temp442 = externSymbolTable["*.LC14"];
    regs[5] = (long long int)(temp442);
    regs[0] = (char)(0);
    int temp443 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp443;
    // PARALLEL COMMAND BEGIN
    long long int temp444 = (long long int)(regs[20] + -4);
    regs[88] = (long long int)(temp444);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[88]);
    long long int temp445 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp445);
    regs[0] = (char)(0);
    int temp446 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp446;
    long long int temp447 = (long long int)(regs[20] + -4);
    int *temp448 = (int *)temp447;
    regs[87] = (int)(*temp448);
    long long int temp449 = (long long int)regs[87];
    long long int temp450 = (long long int)2;
    int temp451;
    if (temp449 == temp450) temp451 = 0;
    else if (temp449 < temp450) temp451 = -1;
    else temp451 = 1;
    regs[17] = (long long int)(temp451);
    bool temp452 = (regs[17] == 0);
    if (temp452) goto label35;
    // THERE WAS A NOTE HERE
    long long int temp453 = (long long int)regs[87];
    long long int temp454 = (long long int)2;
    int temp455;
    if (temp453 == temp454) temp455 = 0;
    else if (temp453 < temp454) temp455 = -1;
    else temp455 = 1;
    regs[17] = (long long int)(temp455);
    bool temp456 = (regs[17] > 0);
    if (temp456) goto label22;
    // THERE WAS A NOTE HERE
    long long int temp457 = (long long int)regs[87];
    long long int temp458 = (long long int)1;
    int temp459;
    if (temp457 == temp458) temp459 = 0;
    else if (temp457 < temp458) temp459 = -1;
    else temp459 = 1;
    regs[17] = (long long int)(temp459);
    bool temp460 = (regs[17] == 0);
    if (temp460) goto label29;
    // THERE WAS A NOTE HERE
    goto label52;
    // THERE WAS A BARRIER HERE
    label22:
    // THERE WAS A NOTE HERE
    long long int temp461 = (long long int)regs[87];
    long long int temp462 = (long long int)3;
    int temp463;
    if (temp461 == temp462) temp463 = 0;
    else if (temp461 < temp462) temp463 = -1;
    else temp463 = 1;
    regs[17] = (long long int)(temp463);
    bool temp464 = (regs[17] == 0);
    if (temp464) goto label41;
    // THERE WAS A NOTE HERE
    long long int temp465 = (long long int)regs[87];
    long long int temp466 = (long long int)4;
    int temp467;
    if (temp465 == temp466) temp467 = 0;
    else if (temp465 < temp466) temp467 = -1;
    else temp467 = 1;
    regs[17] = (long long int)(temp467);
    bool temp468 = (regs[17] == 0);
    if (temp468) goto label47;
    // THERE WAS A NOTE HERE
    goto label52;
    // THERE WAS A BARRIER HERE
    label29:
    // THERE WAS A NOTE HERE
    regs[0] = (char)(0);
    insert((char)regs[0]);
    goto label57;
    // THERE WAS A BARRIER HERE
    label35:
    // THERE WAS A NOTE HERE
    regs[0] = (char)(0);
    display((char)regs[0]);
    goto label57;
    // THERE WAS A BARRIER HERE
    label41:
    // THERE WAS A NOTE HERE
    regs[0] = (char)(0);
    delete((char)regs[0]);
    goto label57;
    // THERE WAS A BARRIER HERE
    label47:
    // THERE WAS A NOTE HERE
    regs[5] = (int)(0);
    exit((int)regs[5]);
    // THERE WAS A BARRIER HERE
    label52:
    // THERE WAS A NOTE HERE
    long long int temp469 = externSymbolTable["*.LC7"];
    regs[5] = (long long int)(temp469);
    regs[0] = (char)(0);
    int temp470 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp470;
    label57:
    // THERE WAS A NOTE HERE
    goto label59;
    // THERE WAS A BARRIER HERE
    return (int)(regs[0]);
}
