#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

long long int newNode(int arg0, int arg1) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(regs[20] + -20);
    int *temp1 = (int *)temp0;
    *temp1 = (int)(regs[5]);
    long long int temp2 = (long long int)(regs[20] + -32);
    long long int *temp3 = (long long int *)temp2;
    *temp3 = (long long int)(regs[4]);
    // THERE WAS A NOTE HERE
    regs[5] = (long long int)(40);
    long long int temp4 = malloc(regs[5]);
    regs[0] = (long long int)temp4;
    regs[88] = (long long int)(regs[0]);
    long long int temp5 = (long long int)(regs[20] + -8);
    long long int *temp6 = (long long int *)temp5;
    *temp6 = (long long int)(regs[88]);
    long long int temp7 = (long long int)(regs[20] + -8);
    long long int *temp8 = (long long int *)temp7;
    regs[89] = (long long int)(*temp8);
    long long int temp9 = (long long int)(regs[20] + -20);
    int *temp10 = (int *)temp9;
    regs[90] = (int)(*temp10);
    regs[89] = (int)(regs[90]);
    long long int temp11 = (long long int)(regs[20] + -8);
    long long int *temp12 = (long long int *)temp11;
    regs[91] = (long long int)(*temp12);
    long long int temp13 = (long long int)(regs[20] + -32);
    long long int *temp14 = (long long int *)temp13;
    regs[92] = (long long int)(*temp14);
    long long int temp15 = (long long int)(regs[91] + 8);
    temp15 = (long long int)(regs[92]);
    long long int temp16 = (long long int)(regs[20] + -8);
    long long int *temp17 = (long long int *)temp16;
    regs[93] = (long long int)(*temp17);
    long long int temp18 = (long long int)(regs[93] + 16);
    temp18 = (long long int)(0);
    long long int temp19 = (long long int)(regs[20] + -8);
    long long int *temp20 = (long long int *)temp19;
    regs[94] = (long long int)(*temp20);
    long long int temp21 = (long long int)(regs[94] + 24);
    temp21 = (long long int)(0);
    long long int temp22 = (long long int)(regs[20] + -8);
    long long int *temp23 = (long long int *)temp22;
    regs[95] = (long long int)(*temp23);
    long long int temp24 = (long long int)(regs[95] + 32);
    temp24 = (int)(1);
    // CLOBBER COMMAND
    // CLOBBER COMMAND
    regs[0] = (long long int)(regs[87]);
    return (long long int)(regs[0]);
}
long long int leftRotate(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp25 = (long long int)(regs[20] + -24);
    long long int *temp26 = (long long int *)temp25;
    *temp26 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp27 = (long long int)(regs[20] + -24);
    long long int *temp28 = (long long int *)temp27;
    regs[93] = (long long int)(*temp28);
    long long int temp29 = (long long int)(regs[93] + 8);
    regs[94] = (long long int)(temp29);
    long long int temp30 = (long long int)(regs[20] + -8);
    long long int *temp31 = (long long int *)temp30;
    *temp31 = (long long int)(regs[94]);
    long long int temp32 = (long long int)(regs[20] + -8);
    long long int *temp33 = (long long int *)temp32;
    regs[95] = (long long int)(*temp33);
    long long int temp34 = (long long int)(regs[95] + 8);
    regs[96] = (long long int)(temp34);
    long long int temp35 = (long long int)(regs[20] + -16);
    long long int *temp36 = (long long int *)temp35;
    *temp36 = (long long int)(regs[96]);
    long long int temp37 = (long long int)(regs[20] + -24);
    long long int *temp38 = (long long int *)temp37;
    regs[97] = (long long int)(*temp38);
    long long int temp39 = (long long int)(regs[97] + 16);
    regs[87] = (long long int)(temp39);
    long long int temp40 = (long long int)(regs[20] + -8);
    long long int *temp41 = (long long int *)temp40;
    regs[98] = (long long int)(*temp41);
    long long int temp42 = (long long int)(regs[98] + 24);
    temp42 = (long long int)(regs[87]);
    long long int temp43 = (long long int)(regs[20] + -24);
    long long int *temp44 = (long long int *)temp43;
    regs[99] = (long long int)(*temp44);
    long long int temp45 = (long long int)(regs[99] + 16);
    regs[88] = (long long int)(temp45);
    long long int temp46 = (long long int)regs[88];
    long long int temp47 = (long long int)0;
    int temp48;
    if (temp46 == temp47) temp48 = 0;
    else if (temp46 < temp47) temp48 = -1;
    else temp48 = 1;
    regs[17] = (long long int)(temp48);
    bool temp49 = (regs[17] == 0);
    if (temp49) goto label25;
    // THERE WAS A NOTE HERE
    long long int temp50 = (long long int)(regs[20] + -24);
    long long int *temp51 = (long long int *)temp50;
    regs[100] = (long long int)(*temp51);
    long long int temp52 = (long long int)(regs[100] + 16);
    regs[89] = (long long int)(temp52);
    long long int temp53 = (long long int)(regs[20] + -8);
    long long int *temp54 = (long long int *)temp53;
    regs[101] = (long long int)(*temp54);
    long long int temp55 = (long long int)(regs[89] + 8);
    temp55 = (long long int)(regs[101]);
    label25:
    // THERE WAS A NOTE HERE
    long long int temp56 = (long long int)(regs[20] + -24);
    long long int *temp57 = (long long int *)temp56;
    regs[102] = (long long int)(*temp57);
    long long int temp58 = (long long int)(regs[20] + -16);
    long long int *temp59 = (long long int *)temp58;
    regs[103] = (long long int)(*temp59);
    long long int temp60 = (long long int)(regs[102] + 8);
    temp60 = (long long int)(regs[103]);
    long long int temp61 = (long long int)(regs[20] + -8);
    long long int *temp62 = (long long int *)temp61;
    regs[104] = (long long int)(*temp62);
    long long int temp63 = (long long int)(regs[20] + -24);
    long long int *temp64 = (long long int *)temp63;
    regs[105] = (long long int)(*temp64);
    long long int temp65 = (long long int)(regs[104] + 8);
    temp65 = (long long int)(regs[105]);
    long long int temp66 = (long long int)(regs[20] + -24);
    long long int *temp67 = (long long int *)temp66;
    regs[106] = (long long int)(*temp67);
    long long int temp68 = (long long int)(regs[20] + -8);
    long long int *temp69 = (long long int *)temp68;
    regs[107] = (long long int)(*temp69);
    long long int temp70 = (long long int)(regs[106] + 16);
    temp70 = (long long int)(regs[107]);
    long long int temp71 = (long long int)(regs[20] + -16);
    long long int *temp72 = (long long int *)temp71;
    long long int temp73 = (long long int)*temp72;
    long long int temp74 = (long long int)0;
    int temp75;
    if (temp73 == temp74) temp75 = 0;
    else if (temp73 < temp74) temp75 = -1;
    else temp75 = 1;
    regs[17] = (long long int)(temp75);
    bool temp76 = (regs[17] == 0);
    if (temp76) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp77 = (long long int)(regs[20] + -16);
    long long int *temp78 = (long long int *)temp77;
    regs[108] = (long long int)(*temp78);
    long long int temp79 = (long long int)(regs[108] + 24);
    regs[90] = (long long int)(temp79);
    long long int temp80 = (long long int)(regs[20] + -8);
    long long int *temp81 = (long long int *)temp80;
    long long int temp82 = (long long int)*temp81;
    long long int temp83 = (long long int)regs[90];
    int temp84;
    if (temp82 == temp83) temp84 = 0;
    else if (temp82 < temp83) temp84 = -1;
    else temp84 = 1;
    regs[17] = (long long int)(temp84);
    bool temp85 = (regs[17] != 0);
    if (temp85) goto label49;
    // THERE WAS A NOTE HERE
    long long int temp86 = (long long int)(regs[20] + -16);
    long long int *temp87 = (long long int *)temp86;
    regs[109] = (long long int)(*temp87);
    long long int temp88 = (long long int)(regs[20] + -24);
    long long int *temp89 = (long long int *)temp88;
    regs[110] = (long long int)(*temp89);
    long long int temp90 = (long long int)(regs[109] + 24);
    temp90 = (long long int)(regs[110]);
    goto label54;
    // THERE WAS A BARRIER HERE
    label49:
    // THERE WAS A NOTE HERE
    long long int temp91 = (long long int)(regs[20] + -16);
    long long int *temp92 = (long long int *)temp91;
    regs[111] = (long long int)(*temp92);
    long long int temp93 = (long long int)(regs[20] + -24);
    long long int *temp94 = (long long int *)temp93;
    regs[112] = (long long int)(*temp94);
    long long int temp95 = (long long int)(regs[111] + 16);
    temp95 = (long long int)(regs[112]);
    label54:
    // THERE WAS A NOTE HERE
    long long int temp96 = (long long int)(regs[20] + -24);
    long long int *temp97 = (long long int *)temp96;
    regs[91] = (long long int)(*temp97);
    regs[92] = (long long int)(regs[91]);
    regs[0] = (long long int)(regs[92]);
    return (long long int)(regs[0]);
}
long long int rightRotate(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp98 = (long long int)(regs[20] + -24);
    long long int *temp99 = (long long int *)temp98;
    *temp99 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp100 = (long long int)(regs[20] + -24);
    long long int *temp101 = (long long int *)temp100;
    regs[93] = (long long int)(*temp101);
    long long int temp102 = (long long int)(regs[93] + 8);
    regs[94] = (long long int)(temp102);
    long long int temp103 = (long long int)(regs[20] + -8);
    long long int *temp104 = (long long int *)temp103;
    *temp104 = (long long int)(regs[94]);
    long long int temp105 = (long long int)(regs[20] + -8);
    long long int *temp106 = (long long int *)temp105;
    regs[95] = (long long int)(*temp106);
    long long int temp107 = (long long int)(regs[95] + 8);
    regs[96] = (long long int)(temp107);
    long long int temp108 = (long long int)(regs[20] + -16);
    long long int *temp109 = (long long int *)temp108;
    *temp109 = (long long int)(regs[96]);
    long long int temp110 = (long long int)(regs[20] + -24);
    long long int *temp111 = (long long int *)temp110;
    regs[97] = (long long int)(*temp111);
    long long int temp112 = (long long int)(regs[97] + 24);
    regs[87] = (long long int)(temp112);
    long long int temp113 = (long long int)(regs[20] + -8);
    long long int *temp114 = (long long int *)temp113;
    regs[98] = (long long int)(*temp114);
    long long int temp115 = (long long int)(regs[98] + 16);
    temp115 = (long long int)(regs[87]);
    long long int temp116 = (long long int)(regs[20] + -24);
    long long int *temp117 = (long long int *)temp116;
    regs[99] = (long long int)(*temp117);
    long long int temp118 = (long long int)(regs[99] + 24);
    regs[88] = (long long int)(temp118);
    long long int temp119 = (long long int)regs[88];
    long long int temp120 = (long long int)0;
    int temp121;
    if (temp119 == temp120) temp121 = 0;
    else if (temp119 < temp120) temp121 = -1;
    else temp121 = 1;
    regs[17] = (long long int)(temp121);
    bool temp122 = (regs[17] == 0);
    if (temp122) goto label25;
    // THERE WAS A NOTE HERE
    long long int temp123 = (long long int)(regs[20] + -24);
    long long int *temp124 = (long long int *)temp123;
    regs[100] = (long long int)(*temp124);
    long long int temp125 = (long long int)(regs[100] + 24);
    regs[89] = (long long int)(temp125);
    long long int temp126 = (long long int)(regs[20] + -8);
    long long int *temp127 = (long long int *)temp126;
    regs[101] = (long long int)(*temp127);
    long long int temp128 = (long long int)(regs[89] + 8);
    temp128 = (long long int)(regs[101]);
    label25:
    // THERE WAS A NOTE HERE
    long long int temp129 = (long long int)(regs[20] + -24);
    long long int *temp130 = (long long int *)temp129;
    regs[102] = (long long int)(*temp130);
    long long int temp131 = (long long int)(regs[20] + -16);
    long long int *temp132 = (long long int *)temp131;
    regs[103] = (long long int)(*temp132);
    long long int temp133 = (long long int)(regs[102] + 8);
    temp133 = (long long int)(regs[103]);
    long long int temp134 = (long long int)(regs[20] + -8);
    long long int *temp135 = (long long int *)temp134;
    regs[104] = (long long int)(*temp135);
    long long int temp136 = (long long int)(regs[20] + -24);
    long long int *temp137 = (long long int *)temp136;
    regs[105] = (long long int)(*temp137);
    long long int temp138 = (long long int)(regs[104] + 8);
    temp138 = (long long int)(regs[105]);
    long long int temp139 = (long long int)(regs[20] + -24);
    long long int *temp140 = (long long int *)temp139;
    regs[106] = (long long int)(*temp140);
    long long int temp141 = (long long int)(regs[20] + -8);
    long long int *temp142 = (long long int *)temp141;
    regs[107] = (long long int)(*temp142);
    long long int temp143 = (long long int)(regs[106] + 24);
    temp143 = (long long int)(regs[107]);
    long long int temp144 = (long long int)(regs[20] + -16);
    long long int *temp145 = (long long int *)temp144;
    long long int temp146 = (long long int)*temp145;
    long long int temp147 = (long long int)0;
    int temp148;
    if (temp146 == temp147) temp148 = 0;
    else if (temp146 < temp147) temp148 = -1;
    else temp148 = 1;
    regs[17] = (long long int)(temp148);
    bool temp149 = (regs[17] == 0);
    if (temp149) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp150 = (long long int)(regs[20] + -16);
    long long int *temp151 = (long long int *)temp150;
    regs[108] = (long long int)(*temp151);
    long long int temp152 = (long long int)(regs[108] + 24);
    regs[90] = (long long int)(temp152);
    long long int temp153 = (long long int)(regs[20] + -8);
    long long int *temp154 = (long long int *)temp153;
    long long int temp155 = (long long int)*temp154;
    long long int temp156 = (long long int)regs[90];
    int temp157;
    if (temp155 == temp156) temp157 = 0;
    else if (temp155 < temp156) temp157 = -1;
    else temp157 = 1;
    regs[17] = (long long int)(temp157);
    bool temp158 = (regs[17] != 0);
    if (temp158) goto label49;
    // THERE WAS A NOTE HERE
    long long int temp159 = (long long int)(regs[20] + -16);
    long long int *temp160 = (long long int *)temp159;
    regs[109] = (long long int)(*temp160);
    long long int temp161 = (long long int)(regs[20] + -24);
    long long int *temp162 = (long long int *)temp161;
    regs[110] = (long long int)(*temp162);
    long long int temp163 = (long long int)(regs[109] + 24);
    temp163 = (long long int)(regs[110]);
    goto label54;
    // THERE WAS A BARRIER HERE
    label49:
    // THERE WAS A NOTE HERE
    long long int temp164 = (long long int)(regs[20] + -16);
    long long int *temp165 = (long long int *)temp164;
    regs[111] = (long long int)(*temp165);
    long long int temp166 = (long long int)(regs[20] + -24);
    long long int *temp167 = (long long int *)temp166;
    regs[112] = (long long int)(*temp167);
    long long int temp168 = (long long int)(regs[111] + 16);
    temp168 = (long long int)(regs[112]);
    label54:
    // THERE WAS A NOTE HERE
    long long int temp169 = (long long int)(regs[20] + -24);
    long long int *temp170 = (long long int *)temp169;
    regs[91] = (long long int)(*temp170);
    regs[92] = (long long int)(regs[91]);
    regs[0] = (long long int)(regs[92]);
    return (long long int)(regs[0]);
}
void checkNode(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp171 = (long long int)(regs[20] + -40);
    long long int *temp172 = (long long int *)temp171;
    *temp172 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp173 = (long long int)(regs[20] + -40);
    long long int *temp174 = (long long int *)temp173;
    long long int temp175 = (long long int)*temp174;
    long long int temp176 = (long long int)0;
    int temp177;
    if (temp175 == temp176) temp177 = 0;
    else if (temp175 < temp176) temp177 = -1;
    else temp177 = 1;
    regs[17] = (long long int)(temp177);
    bool temp178 = (regs[17] == 0);
    if (temp178) goto label374;
    // THERE WAS A NOTE HERE
    long long int temp179 = (long long int)(regs[20] + -40);
    long long int *temp180 = (long long int *)temp179;
    regs[128] = (long long int)(*temp180);
    long long int temp181 = (long long int)(regs[128] + 8);
    regs[87] = (long long int)(temp181);
    long long int temp182 = (long long int)regs[87];
    long long int temp183 = (long long int)0;
    int temp184;
    if (temp182 == temp183) temp184 = 0;
    else if (temp182 < temp183) temp184 = -1;
    else temp184 = 1;
    regs[17] = (long long int)(temp184);
    bool temp185 = (regs[17] != 0);
    if (temp185) goto label17;
    // THERE WAS A NOTE HERE
    goto label374;
    // THERE WAS A BARRIER HERE
    label17:
    // THERE WAS A NOTE HERE
    long long int temp186 = (long long int)(regs[20] + -40);
    long long int *temp187 = (long long int *)temp186;
    regs[129] = (long long int)(*temp187);
    long long int temp188 = (long long int)(regs[20] + -8);
    long long int *temp189 = (long long int *)temp188;
    *temp189 = (long long int)(regs[129]);
    long long int temp190 = (long long int)(regs[20] + -40);
    long long int *temp191 = (long long int *)temp190;
    regs[130] = (long long int)(*temp191);
    long long int temp192 = (long long int)(regs[130] + 32);
    regs[88] = (int)(temp192);
    long long int temp193 = (long long int)regs[88];
    long long int temp194 = (long long int)0;
    int temp195;
    if (temp193 == temp194) temp195 = 0;
    else if (temp193 < temp194) temp195 = -1;
    else temp195 = 1;
    regs[17] = (long long int)(temp195);
    bool temp196 = (regs[17] == 0);
    if (temp196) goto label374;
    // THERE WAS A NOTE HERE
    long long int temp197 = (long long int)(regs[20] + -40);
    long long int *temp198 = (long long int *)temp197;
    regs[131] = (long long int)(*temp198);
    long long int temp199 = (long long int)(regs[131] + 8);
    regs[89] = (long long int)(temp199);
    long long int temp200 = (long long int)(regs[89] + 32);
    regs[90] = (int)(temp200);
    long long int temp201 = (long long int)regs[90];
    long long int temp202 = (long long int)0;
    int temp203;
    if (temp201 == temp202) temp203 = 0;
    else if (temp201 < temp202) temp203 = -1;
    else temp203 = 1;
    regs[17] = (long long int)(temp203);
    bool temp204 = (regs[17] != 0);
    if (temp204) goto label35;
    // THERE WAS A NOTE HERE
    goto label374;
    // THERE WAS A BARRIER HERE
    label35:
    // THERE WAS A NOTE HERE
    long long int temp205 = (long long int)(regs[20] + -40);
    long long int *temp206 = (long long int *)temp205;
    regs[132] = (long long int)(*temp206);
    long long int temp207 = (long long int)(regs[132] + 8);
    regs[133] = (long long int)(temp207);
    long long int temp208 = (long long int)(regs[20] + -16);
    long long int *temp209 = (long long int *)temp208;
    *temp209 = (long long int)(regs[133]);
    long long int temp210 = (long long int)(regs[20] + -16);
    long long int *temp211 = (long long int *)temp210;
    regs[134] = (long long int)(*temp211);
    long long int temp212 = (long long int)(regs[134] + 8);
    regs[135] = (long long int)(temp212);
    long long int temp213 = (long long int)(regs[20] + -24);
    long long int *temp214 = (long long int *)temp213;
    *temp214 = (long long int)(regs[135]);
    long long int temp215 = (long long int)(regs[20] + -24);
    long long int *temp216 = (long long int *)temp215;
    long long int temp217 = (long long int)*temp216;
    long long int temp218 = (long long int)0;
    int temp219;
    if (temp217 == temp218) temp219 = 0;
    else if (temp217 < temp218) temp219 = -1;
    else temp219 = 1;
    regs[17] = (long long int)(temp219);
    bool temp220 = (regs[17] != 0);
    if (temp220) goto label50;
    // THERE WAS A NOTE HERE
    long long int temp221 = (long long int)(regs[20] + -16);
    long long int *temp222 = (long long int *)temp221;
    regs[136] = (long long int)(*temp222);
    long long int temp223 = (long long int)(regs[136] + 32);
    temp223 = (int)(0);
    goto label374;
    // THERE WAS A BARRIER HERE
    label50:
    // THERE WAS A NOTE HERE
    long long int temp224 = (long long int)(regs[20] + -24);
    long long int *temp225 = (long long int *)temp224;
    regs[137] = (long long int)(*temp225);
    long long int temp226 = (long long int)(regs[137] + 24);
    regs[91] = (long long int)(temp226);
    long long int temp227 = (long long int)regs[91];
    long long int temp228 = (long long int)0;
    int temp229;
    if (temp227 == temp228) temp229 = 0;
    else if (temp227 < temp228) temp229 = -1;
    else temp229 = 1;
    regs[17] = (long long int)(temp229);
    bool temp230 = (regs[17] == 0);
    if (temp230) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp231 = (long long int)(regs[20] + -24);
    long long int *temp232 = (long long int *)temp231;
    regs[138] = (long long int)(*temp232);
    long long int temp233 = (long long int)(regs[138] + 24);
    regs[92] = (long long int)(temp233);
    long long int temp234 = (long long int)(regs[92] + 32);
    regs[93] = (int)(temp234);
    long long int temp235 = (long long int)regs[93];
    long long int temp236 = (long long int)1;
    int temp237;
    if (temp235 == temp236) temp237 = 0;
    else if (temp235 < temp236) temp237 = -1;
    else temp237 = 1;
    regs[17] = (long long int)(temp237);
    bool temp238 = (regs[17] != 0);
    if (temp238) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp239 = (long long int)(regs[20] + -24);
    long long int *temp240 = (long long int *)temp239;
    regs[139] = (long long int)(*temp240);
    long long int temp241 = (long long int)(regs[139] + 16);
    regs[94] = (long long int)(temp241);
    long long int temp242 = (long long int)regs[94];
    long long int temp243 = (long long int)0;
    int temp244;
    if (temp242 == temp243) temp244 = 0;
    else if (temp242 < temp243) temp244 = -1;
    else temp244 = 1;
    regs[17] = (long long int)(temp244);
    bool temp245 = (regs[17] == 0);
    if (temp245) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp246 = (long long int)(regs[20] + -24);
    long long int *temp247 = (long long int *)temp246;
    regs[140] = (long long int)(*temp247);
    long long int temp248 = (long long int)(regs[140] + 16);
    regs[95] = (long long int)(temp248);
    long long int temp249 = (long long int)(regs[95] + 32);
    regs[96] = (int)(temp249);
    long long int temp250 = (long long int)regs[96];
    long long int temp251 = (long long int)1;
    int temp252;
    if (temp250 == temp251) temp252 = 0;
    else if (temp250 < temp251) temp252 = -1;
    else temp252 = 1;
    regs[17] = (long long int)(temp252);
    bool temp253 = (regs[17] != 0);
    if (temp253) goto label84;
    // THERE WAS A NOTE HERE
    long long int temp254 = (long long int)(regs[20] + -24);
    long long int *temp255 = (long long int *)temp254;
    regs[141] = (long long int)(*temp255);
    long long int temp256 = (long long int)(regs[141] + 24);
    regs[97] = (long long int)(temp256);
    long long int temp257 = (long long int)(regs[97] + 32);
    temp257 = (int)(0);
    long long int temp258 = (long long int)(regs[20] + -24);
    long long int *temp259 = (long long int *)temp258;
    regs[142] = (long long int)(*temp259);
    long long int temp260 = (long long int)(regs[142] + 16);
    regs[98] = (long long int)(temp260);
    long long int temp261 = (long long int)(regs[98] + 32);
    temp261 = (int)(0);
    long long int temp262 = (long long int)(regs[20] + -24);
    long long int *temp263 = (long long int *)temp262;
    regs[143] = (long long int)(*temp263);
    long long int temp264 = (long long int)(regs[143] + 32);
    temp264 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label84:
    // THERE WAS A NOTE HERE
    long long int temp265 = (long long int)(regs[20] + -24);
    long long int *temp266 = (long long int *)temp265;
    regs[144] = (long long int)(*temp266);
    long long int temp267 = (long long int)(regs[144] + 8);
    regs[145] = (long long int)(temp267);
    long long int temp268 = (long long int)(regs[20] + -32);
    long long int *temp269 = (long long int *)temp268;
    *temp269 = (long long int)(regs[145]);
    long long int temp270 = (long long int)(regs[20] + -24);
    long long int *temp271 = (long long int *)temp270;
    regs[146] = (long long int)(*temp271);
    long long int temp272 = (long long int)(regs[146] + 24);
    regs[99] = (long long int)(temp272);
    long long int temp273 = (long long int)(regs[20] + -16);
    long long int *temp274 = (long long int *)temp273;
    long long int temp275 = (long long int)*temp274;
    long long int temp276 = (long long int)regs[99];
    int temp277;
    if (temp275 == temp276) temp277 = 0;
    else if (temp275 < temp276) temp277 = -1;
    else temp277 = 1;
    regs[17] = (long long int)(temp277);
    bool temp278 = (regs[17] != 0);
    if (temp278) goto label234;
    // THERE WAS A NOTE HERE
    long long int temp279 = (long long int)(regs[20] + -16);
    long long int *temp280 = (long long int *)temp279;
    regs[147] = (long long int)(*temp280);
    long long int temp281 = (long long int)(regs[147] + 24);
    regs[100] = (long long int)(temp281);
    long long int temp282 = (long long int)(regs[20] + -40);
    long long int *temp283 = (long long int *)temp282;
    long long int temp284 = (long long int)*temp283;
    long long int temp285 = (long long int)regs[100];
    int temp286;
    if (temp284 == temp285) temp286 = 0;
    else if (temp284 < temp285) temp286 = -1;
    else temp286 = 1;
    regs[17] = (long long int)(temp286);
    bool temp287 = (regs[17] != 0);
    if (temp287) goto label154;
    // THERE WAS A NOTE HERE
    long long int temp288 = (long long int)(regs[20] + -16);
    long long int *temp289 = (long long int *)temp288;
    regs[148] = (long long int)(*temp289);
    long long int temp290 = (long long int)(regs[148] + 16);
    regs[101] = (long long int)(temp290);
    long long int temp291 = (long long int)(regs[20] + -24);
    long long int *temp292 = (long long int *)temp291;
    regs[149] = (long long int)(*temp292);
    long long int temp293 = (long long int)(regs[149] + 24);
    temp293 = (long long int)(regs[101]);
    long long int temp294 = (long long int)(regs[20] + -16);
    long long int *temp295 = (long long int *)temp294;
    regs[150] = (long long int)(*temp295);
    long long int temp296 = (long long int)(regs[150] + 16);
    regs[102] = (long long int)(temp296);
    long long int temp297 = (long long int)regs[102];
    long long int temp298 = (long long int)0;
    int temp299;
    if (temp297 == temp298) temp299 = 0;
    else if (temp297 < temp298) temp299 = -1;
    else temp299 = 1;
    regs[17] = (long long int)(temp299);
    bool temp300 = (regs[17] == 0);
    if (temp300) goto label112;
    // THERE WAS A NOTE HERE
    long long int temp301 = (long long int)(regs[20] + -16);
    long long int *temp302 = (long long int *)temp301;
    regs[151] = (long long int)(*temp302);
    long long int temp303 = (long long int)(regs[151] + 16);
    regs[103] = (long long int)(temp303);
    long long int temp304 = (long long int)(regs[20] + -24);
    long long int *temp305 = (long long int *)temp304;
    regs[152] = (long long int)(*temp305);
    long long int temp306 = (long long int)(regs[103] + 8);
    temp306 = (long long int)(regs[152]);
    label112:
    // THERE WAS A NOTE HERE
    long long int temp307 = (long long int)(regs[20] + -16);
    long long int *temp308 = (long long int *)temp307;
    regs[153] = (long long int)(*temp308);
    long long int temp309 = (long long int)(regs[20] + -24);
    long long int *temp310 = (long long int *)temp309;
    regs[154] = (long long int)(*temp310);
    long long int temp311 = (long long int)(regs[153] + 16);
    temp311 = (long long int)(regs[154]);
    long long int temp312 = (long long int)(regs[20] + -24);
    long long int *temp313 = (long long int *)temp312;
    regs[155] = (long long int)(*temp313);
    long long int temp314 = (long long int)(regs[20] + -16);
    long long int *temp315 = (long long int *)temp314;
    regs[156] = (long long int)(*temp315);
    long long int temp316 = (long long int)(regs[155] + 8);
    temp316 = (long long int)(regs[156]);
    long long int temp317 = (long long int)(regs[20] + -16);
    long long int *temp318 = (long long int *)temp317;
    regs[157] = (long long int)(*temp318);
    long long int temp319 = (long long int)(regs[20] + -32);
    long long int *temp320 = (long long int *)temp319;
    regs[158] = (long long int)(*temp320);
    long long int temp321 = (long long int)(regs[157] + 8);
    temp321 = (long long int)(regs[158]);
    long long int temp322 = (long long int)(regs[20] + -32);
    long long int *temp323 = (long long int *)temp322;
    long long int temp324 = (long long int)*temp323;
    long long int temp325 = (long long int)0;
    int temp326;
    if (temp324 == temp325) temp326 = 0;
    else if (temp324 < temp325) temp326 = -1;
    else temp326 = 1;
    regs[17] = (long long int)(temp326);
    bool temp327 = (regs[17] == 0);
    if (temp327) goto label146;
    // THERE WAS A NOTE HERE
    long long int temp328 = (long long int)(regs[20] + -32);
    long long int *temp329 = (long long int *)temp328;
    regs[159] = (long long int)(*temp329);
    long long int temp330 = (long long int)(regs[159] + 16);
    regs[104] = (long long int)(temp330);
    long long int temp331 = (long long int)regs[104];
    long long int temp332 = (long long int)0;
    int temp333;
    if (temp331 == temp332) temp333 = 0;
    else if (temp331 < temp332) temp333 = -1;
    else temp333 = 1;
    regs[17] = (long long int)(temp333);
    bool temp334 = (regs[17] == 0);
    if (temp334) goto label141;
    // THERE WAS A NOTE HERE
    long long int temp335 = (long long int)(regs[20] + -32);
    long long int *temp336 = (long long int *)temp335;
    regs[160] = (long long int)(*temp336);
    long long int temp337 = (long long int)(regs[160] + 16);
    regs[105] = (long long int)(temp337);
    long long int temp338 = (long long int)(regs[20] + -24);
    long long int *temp339 = (long long int *)temp338;
    long long int temp340 = (long long int)*temp339;
    long long int temp341 = (long long int)regs[105];
    int temp342;
    if (temp340 == temp341) temp342 = 0;
    else if (temp340 < temp341) temp342 = -1;
    else temp342 = 1;
    regs[17] = (long long int)(temp342);
    bool temp343 = (regs[17] != 0);
    if (temp343) goto label141;
    // THERE WAS A NOTE HERE
    long long int temp344 = (long long int)(regs[20] + -32);
    long long int *temp345 = (long long int *)temp344;
    regs[161] = (long long int)(*temp345);
    long long int temp346 = (long long int)(regs[20] + -16);
    long long int *temp347 = (long long int *)temp346;
    regs[162] = (long long int)(*temp347);
    long long int temp348 = (long long int)(regs[161] + 16);
    temp348 = (long long int)(regs[162]);
    goto label146;
    // THERE WAS A BARRIER HERE
    label141:
    // THERE WAS A NOTE HERE
    long long int temp349 = (long long int)(regs[20] + -32);
    long long int *temp350 = (long long int *)temp349;
    regs[163] = (long long int)(*temp350);
    long long int temp351 = (long long int)(regs[20] + -16);
    long long int *temp352 = (long long int *)temp351;
    regs[164] = (long long int)(*temp352);
    long long int temp353 = (long long int)(regs[163] + 24);
    temp353 = (long long int)(regs[164]);
    label146:
    // THERE WAS A NOTE HERE
    long long int temp354 = (long long int)(regs[20] + -16);
    long long int *temp355 = (long long int *)temp354;
    regs[165] = (long long int)(*temp355);
    long long int temp356 = (long long int)(regs[165] + 32);
    temp356 = (int)(0);
    long long int temp357 = (long long int)(regs[20] + -24);
    long long int *temp358 = (long long int *)temp357;
    regs[166] = (long long int)(*temp358);
    long long int temp359 = (long long int)(regs[166] + 32);
    temp359 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label154:
    // THERE WAS A NOTE HERE
    long long int temp360 = (long long int)(regs[20] + -8);
    long long int *temp361 = (long long int *)temp360;
    regs[167] = (long long int)(*temp361);
    long long int temp362 = (long long int)(regs[167] + 24);
    regs[106] = (long long int)(temp362);
    long long int temp363 = (long long int)(regs[20] + -16);
    long long int *temp364 = (long long int *)temp363;
    regs[168] = (long long int)(*temp364);
    long long int temp365 = (long long int)(regs[168] + 16);
    temp365 = (long long int)(regs[106]);
    long long int temp366 = (long long int)(regs[20] + -8);
    long long int *temp367 = (long long int *)temp366;
    regs[169] = (long long int)(*temp367);
    long long int temp368 = (long long int)(regs[169] + 24);
    regs[107] = (long long int)(temp368);
    long long int temp369 = (long long int)regs[107];
    long long int temp370 = (long long int)0;
    int temp371;
    if (temp369 == temp370) temp371 = 0;
    else if (temp369 < temp370) temp371 = -1;
    else temp371 = 1;
    regs[17] = (long long int)(temp371);
    bool temp372 = (regs[17] == 0);
    if (temp372) goto label169;
    // THERE WAS A NOTE HERE
    long long int temp373 = (long long int)(regs[20] + -8);
    long long int *temp374 = (long long int *)temp373;
    regs[170] = (long long int)(*temp374);
    long long int temp375 = (long long int)(regs[170] + 24);
    regs[108] = (long long int)(temp375);
    long long int temp376 = (long long int)(regs[20] + -16);
    long long int *temp377 = (long long int *)temp376;
    regs[171] = (long long int)(*temp377);
    long long int temp378 = (long long int)(regs[108] + 8);
    temp378 = (long long int)(regs[171]);
    label169:
    // THERE WAS A NOTE HERE
    long long int temp379 = (long long int)(regs[20] + -8);
    long long int *temp380 = (long long int *)temp379;
    regs[172] = (long long int)(*temp380);
    long long int temp381 = (long long int)(regs[20] + -16);
    long long int *temp382 = (long long int *)temp381;
    regs[173] = (long long int)(*temp382);
    long long int temp383 = (long long int)(regs[172] + 24);
    temp383 = (long long int)(regs[173]);
    long long int temp384 = (long long int)(regs[20] + -16);
    long long int *temp385 = (long long int *)temp384;
    regs[174] = (long long int)(*temp385);
    long long int temp386 = (long long int)(regs[20] + -8);
    long long int *temp387 = (long long int *)temp386;
    regs[175] = (long long int)(*temp387);
    long long int temp388 = (long long int)(regs[174] + 8);
    temp388 = (long long int)(regs[175]);
    long long int temp389 = (long long int)(regs[20] + -8);
    long long int *temp390 = (long long int *)temp389;
    regs[176] = (long long int)(*temp390);
    long long int temp391 = (long long int)(regs[176] + 16);
    regs[109] = (long long int)(temp391);
    long long int temp392 = (long long int)(regs[20] + -24);
    long long int *temp393 = (long long int *)temp392;
    regs[177] = (long long int)(*temp393);
    long long int temp394 = (long long int)(regs[177] + 24);
    temp394 = (long long int)(regs[109]);
    long long int temp395 = (long long int)(regs[20] + -8);
    long long int *temp396 = (long long int *)temp395;
    regs[178] = (long long int)(*temp396);
    long long int temp397 = (long long int)(regs[178] + 16);
    regs[110] = (long long int)(temp397);
    long long int temp398 = (long long int)regs[110];
    long long int temp399 = (long long int)0;
    int temp400;
    if (temp398 == temp399) temp400 = 0;
    else if (temp398 < temp399) temp400 = -1;
    else temp400 = 1;
    regs[17] = (long long int)(temp400);
    bool temp401 = (regs[17] == 0);
    if (temp401) goto label190;
    // THERE WAS A NOTE HERE
    long long int temp402 = (long long int)(regs[20] + -8);
    long long int *temp403 = (long long int *)temp402;
    regs[179] = (long long int)(*temp403);
    long long int temp404 = (long long int)(regs[179] + 16);
    regs[111] = (long long int)(temp404);
    long long int temp405 = (long long int)(regs[20] + -24);
    long long int *temp406 = (long long int *)temp405;
    regs[180] = (long long int)(*temp406);
    long long int temp407 = (long long int)(regs[111] + 8);
    temp407 = (long long int)(regs[180]);
    label190:
    // THERE WAS A NOTE HERE
    long long int temp408 = (long long int)(regs[20] + -8);
    long long int *temp409 = (long long int *)temp408;
    regs[181] = (long long int)(*temp409);
    long long int temp410 = (long long int)(regs[20] + -24);
    long long int *temp411 = (long long int *)temp410;
    regs[182] = (long long int)(*temp411);
    long long int temp412 = (long long int)(regs[181] + 16);
    temp412 = (long long int)(regs[182]);
    long long int temp413 = (long long int)(regs[20] + -24);
    long long int *temp414 = (long long int *)temp413;
    regs[183] = (long long int)(*temp414);
    long long int temp415 = (long long int)(regs[20] + -8);
    long long int *temp416 = (long long int *)temp415;
    regs[184] = (long long int)(*temp416);
    long long int temp417 = (long long int)(regs[183] + 8);
    temp417 = (long long int)(regs[184]);
    long long int temp418 = (long long int)(regs[20] + -8);
    long long int *temp419 = (long long int *)temp418;
    regs[185] = (long long int)(*temp419);
    long long int temp420 = (long long int)(regs[20] + -32);
    long long int *temp421 = (long long int *)temp420;
    regs[186] = (long long int)(*temp421);
    long long int temp422 = (long long int)(regs[185] + 8);
    temp422 = (long long int)(regs[186]);
    long long int temp423 = (long long int)(regs[20] + -32);
    long long int *temp424 = (long long int *)temp423;
    long long int temp425 = (long long int)*temp424;
    long long int temp426 = (long long int)0;
    int temp427;
    if (temp425 == temp426) temp427 = 0;
    else if (temp425 < temp426) temp427 = -1;
    else temp427 = 1;
    regs[17] = (long long int)(temp427);
    bool temp428 = (regs[17] == 0);
    if (temp428) goto label224;
    // THERE WAS A NOTE HERE
    long long int temp429 = (long long int)(regs[20] + -32);
    long long int *temp430 = (long long int *)temp429;
    regs[187] = (long long int)(*temp430);
    long long int temp431 = (long long int)(regs[187] + 16);
    regs[112] = (long long int)(temp431);
    long long int temp432 = (long long int)regs[112];
    long long int temp433 = (long long int)0;
    int temp434;
    if (temp432 == temp433) temp434 = 0;
    else if (temp432 < temp433) temp434 = -1;
    else temp434 = 1;
    regs[17] = (long long int)(temp434);
    bool temp435 = (regs[17] == 0);
    if (temp435) goto label219;
    // THERE WAS A NOTE HERE
    long long int temp436 = (long long int)(regs[20] + -32);
    long long int *temp437 = (long long int *)temp436;
    regs[188] = (long long int)(*temp437);
    long long int temp438 = (long long int)(regs[188] + 16);
    regs[113] = (long long int)(temp438);
    long long int temp439 = (long long int)(regs[20] + -24);
    long long int *temp440 = (long long int *)temp439;
    long long int temp441 = (long long int)*temp440;
    long long int temp442 = (long long int)regs[113];
    int temp443;
    if (temp441 == temp442) temp443 = 0;
    else if (temp441 < temp442) temp443 = -1;
    else temp443 = 1;
    regs[17] = (long long int)(temp443);
    bool temp444 = (regs[17] != 0);
    if (temp444) goto label219;
    // THERE WAS A NOTE HERE
    long long int temp445 = (long long int)(regs[20] + -32);
    long long int *temp446 = (long long int *)temp445;
    regs[189] = (long long int)(*temp446);
    long long int temp447 = (long long int)(regs[20] + -8);
    long long int *temp448 = (long long int *)temp447;
    regs[190] = (long long int)(*temp448);
    long long int temp449 = (long long int)(regs[189] + 16);
    temp449 = (long long int)(regs[190]);
    goto label224;
    // THERE WAS A BARRIER HERE
    label219:
    // THERE WAS A NOTE HERE
    long long int temp450 = (long long int)(regs[20] + -32);
    long long int *temp451 = (long long int *)temp450;
    regs[191] = (long long int)(*temp451);
    long long int temp452 = (long long int)(regs[20] + -8);
    long long int *temp453 = (long long int *)temp452;
    regs[192] = (long long int)(*temp453);
    long long int temp454 = (long long int)(regs[191] + 24);
    temp454 = (long long int)(regs[192]);
    label224:
    // THERE WAS A NOTE HERE
    long long int temp455 = (long long int)(regs[20] + -8);
    long long int *temp456 = (long long int *)temp455;
    regs[193] = (long long int)(*temp456);
    long long int temp457 = (long long int)(regs[193] + 32);
    temp457 = (int)(0);
    long long int temp458 = (long long int)(regs[20] + -24);
    long long int *temp459 = (long long int *)temp458;
    regs[194] = (long long int)(*temp459);
    long long int temp460 = (long long int)(regs[194] + 32);
    temp460 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label234:
    // THERE WAS A NOTE HERE
    long long int temp461 = (long long int)(regs[20] + -16);
    long long int *temp462 = (long long int *)temp461;
    regs[195] = (long long int)(*temp462);
    long long int temp463 = (long long int)(regs[195] + 16);
    regs[114] = (long long int)(temp463);
    long long int temp464 = (long long int)(regs[20] + -40);
    long long int *temp465 = (long long int *)temp464;
    long long int temp466 = (long long int)*temp465;
    long long int temp467 = (long long int)regs[114];
    int temp468;
    if (temp466 == temp467) temp468 = 0;
    else if (temp466 < temp467) temp468 = -1;
    else temp468 = 1;
    regs[17] = (long long int)(temp468);
    bool temp469 = (regs[17] != 0);
    if (temp469) goto label296;
    // THERE WAS A NOTE HERE
    long long int temp470 = (long long int)(regs[20] + -16);
    long long int *temp471 = (long long int *)temp470;
    regs[196] = (long long int)(*temp471);
    long long int temp472 = (long long int)(regs[196] + 24);
    regs[115] = (long long int)(temp472);
    long long int temp473 = (long long int)(regs[20] + -24);
    long long int *temp474 = (long long int *)temp473;
    regs[197] = (long long int)(*temp474);
    long long int temp475 = (long long int)(regs[197] + 16);
    temp475 = (long long int)(regs[115]);
    long long int temp476 = (long long int)(regs[20] + -16);
    long long int *temp477 = (long long int *)temp476;
    regs[198] = (long long int)(*temp477);
    long long int temp478 = (long long int)(regs[198] + 24);
    regs[116] = (long long int)(temp478);
    long long int temp479 = (long long int)regs[116];
    long long int temp480 = (long long int)0;
    int temp481;
    if (temp479 == temp480) temp481 = 0;
    else if (temp479 < temp480) temp481 = -1;
    else temp481 = 1;
    regs[17] = (long long int)(temp481);
    bool temp482 = (regs[17] == 0);
    if (temp482) goto label254;
    // THERE WAS A NOTE HERE
    long long int temp483 = (long long int)(regs[20] + -16);
    long long int *temp484 = (long long int *)temp483;
    regs[199] = (long long int)(*temp484);
    long long int temp485 = (long long int)(regs[199] + 24);
    regs[117] = (long long int)(temp485);
    long long int temp486 = (long long int)(regs[20] + -24);
    long long int *temp487 = (long long int *)temp486;
    regs[200] = (long long int)(*temp487);
    long long int temp488 = (long long int)(regs[117] + 8);
    temp488 = (long long int)(regs[200]);
    label254:
    // THERE WAS A NOTE HERE
    long long int temp489 = (long long int)(regs[20] + -16);
    long long int *temp490 = (long long int *)temp489;
    regs[201] = (long long int)(*temp490);
    long long int temp491 = (long long int)(regs[20] + -24);
    long long int *temp492 = (long long int *)temp491;
    regs[202] = (long long int)(*temp492);
    long long int temp493 = (long long int)(regs[201] + 24);
    temp493 = (long long int)(regs[202]);
    long long int temp494 = (long long int)(regs[20] + -24);
    long long int *temp495 = (long long int *)temp494;
    regs[203] = (long long int)(*temp495);
    long long int temp496 = (long long int)(regs[20] + -16);
    long long int *temp497 = (long long int *)temp496;
    regs[204] = (long long int)(*temp497);
    long long int temp498 = (long long int)(regs[203] + 8);
    temp498 = (long long int)(regs[204]);
    long long int temp499 = (long long int)(regs[20] + -16);
    long long int *temp500 = (long long int *)temp499;
    regs[205] = (long long int)(*temp500);
    long long int temp501 = (long long int)(regs[20] + -32);
    long long int *temp502 = (long long int *)temp501;
    regs[206] = (long long int)(*temp502);
    long long int temp503 = (long long int)(regs[205] + 8);
    temp503 = (long long int)(regs[206]);
    long long int temp504 = (long long int)(regs[20] + -32);
    long long int *temp505 = (long long int *)temp504;
    long long int temp506 = (long long int)*temp505;
    long long int temp507 = (long long int)0;
    int temp508;
    if (temp506 == temp507) temp508 = 0;
    else if (temp506 < temp507) temp508 = -1;
    else temp508 = 1;
    regs[17] = (long long int)(temp508);
    bool temp509 = (regs[17] == 0);
    if (temp509) goto label288;
    // THERE WAS A NOTE HERE
    long long int temp510 = (long long int)(regs[20] + -32);
    long long int *temp511 = (long long int *)temp510;
    regs[207] = (long long int)(*temp511);
    long long int temp512 = (long long int)(regs[207] + 16);
    regs[118] = (long long int)(temp512);
    long long int temp513 = (long long int)regs[118];
    long long int temp514 = (long long int)0;
    int temp515;
    if (temp513 == temp514) temp515 = 0;
    else if (temp513 < temp514) temp515 = -1;
    else temp515 = 1;
    regs[17] = (long long int)(temp515);
    bool temp516 = (regs[17] == 0);
    if (temp516) goto label283;
    // THERE WAS A NOTE HERE
    long long int temp517 = (long long int)(regs[20] + -32);
    long long int *temp518 = (long long int *)temp517;
    regs[208] = (long long int)(*temp518);
    long long int temp519 = (long long int)(regs[208] + 16);
    regs[119] = (long long int)(temp519);
    long long int temp520 = (long long int)(regs[20] + -24);
    long long int *temp521 = (long long int *)temp520;
    long long int temp522 = (long long int)*temp521;
    long long int temp523 = (long long int)regs[119];
    int temp524;
    if (temp522 == temp523) temp524 = 0;
    else if (temp522 < temp523) temp524 = -1;
    else temp524 = 1;
    regs[17] = (long long int)(temp524);
    bool temp525 = (regs[17] != 0);
    if (temp525) goto label283;
    // THERE WAS A NOTE HERE
    long long int temp526 = (long long int)(regs[20] + -32);
    long long int *temp527 = (long long int *)temp526;
    regs[209] = (long long int)(*temp527);
    long long int temp528 = (long long int)(regs[20] + -16);
    long long int *temp529 = (long long int *)temp528;
    regs[210] = (long long int)(*temp529);
    long long int temp530 = (long long int)(regs[209] + 16);
    temp530 = (long long int)(regs[210]);
    goto label288;
    // THERE WAS A BARRIER HERE
    label283:
    // THERE WAS A NOTE HERE
    long long int temp531 = (long long int)(regs[20] + -32);
    long long int *temp532 = (long long int *)temp531;
    regs[211] = (long long int)(*temp532);
    long long int temp533 = (long long int)(regs[20] + -16);
    long long int *temp534 = (long long int *)temp533;
    regs[212] = (long long int)(*temp534);
    long long int temp535 = (long long int)(regs[211] + 24);
    temp535 = (long long int)(regs[212]);
    label288:
    // THERE WAS A NOTE HERE
    long long int temp536 = (long long int)(regs[20] + -16);
    long long int *temp537 = (long long int *)temp536;
    regs[213] = (long long int)(*temp537);
    long long int temp538 = (long long int)(regs[213] + 32);
    temp538 = (int)(0);
    long long int temp539 = (long long int)(regs[20] + -24);
    long long int *temp540 = (long long int *)temp539;
    regs[214] = (long long int)(*temp540);
    long long int temp541 = (long long int)(regs[214] + 32);
    temp541 = (int)(1);
    goto label374;
    // THERE WAS A BARRIER HERE
    label296:
    // THERE WAS A NOTE HERE
    long long int temp542 = (long long int)(regs[20] + -8);
    long long int *temp543 = (long long int *)temp542;
    regs[215] = (long long int)(*temp543);
    long long int temp544 = (long long int)(regs[215] + 16);
    regs[120] = (long long int)(temp544);
    long long int temp545 = (long long int)(regs[20] + -16);
    long long int *temp546 = (long long int *)temp545;
    regs[216] = (long long int)(*temp546);
    long long int temp547 = (long long int)(regs[216] + 24);
    temp547 = (long long int)(regs[120]);
    long long int temp548 = (long long int)(regs[20] + -8);
    long long int *temp549 = (long long int *)temp548;
    regs[217] = (long long int)(*temp549);
    long long int temp550 = (long long int)(regs[217] + 16);
    regs[121] = (long long int)(temp550);
    long long int temp551 = (long long int)regs[121];
    long long int temp552 = (long long int)0;
    int temp553;
    if (temp551 == temp552) temp553 = 0;
    else if (temp551 < temp552) temp553 = -1;
    else temp553 = 1;
    regs[17] = (long long int)(temp553);
    bool temp554 = (regs[17] == 0);
    if (temp554) goto label311;
    // THERE WAS A NOTE HERE
    long long int temp555 = (long long int)(regs[20] + -8);
    long long int *temp556 = (long long int *)temp555;
    regs[218] = (long long int)(*temp556);
    long long int temp557 = (long long int)(regs[218] + 16);
    regs[122] = (long long int)(temp557);
    long long int temp558 = (long long int)(regs[20] + -16);
    long long int *temp559 = (long long int *)temp558;
    regs[219] = (long long int)(*temp559);
    long long int temp560 = (long long int)(regs[122] + 8);
    temp560 = (long long int)(regs[219]);
    label311:
    // THERE WAS A NOTE HERE
    long long int temp561 = (long long int)(regs[20] + -8);
    long long int *temp562 = (long long int *)temp561;
    regs[220] = (long long int)(*temp562);
    long long int temp563 = (long long int)(regs[20] + -16);
    long long int *temp564 = (long long int *)temp563;
    regs[221] = (long long int)(*temp564);
    long long int temp565 = (long long int)(regs[220] + 16);
    temp565 = (long long int)(regs[221]);
    long long int temp566 = (long long int)(regs[20] + -16);
    long long int *temp567 = (long long int *)temp566;
    regs[222] = (long long int)(*temp567);
    long long int temp568 = (long long int)(regs[20] + -8);
    long long int *temp569 = (long long int *)temp568;
    regs[223] = (long long int)(*temp569);
    long long int temp570 = (long long int)(regs[222] + 8);
    temp570 = (long long int)(regs[223]);
    long long int temp571 = (long long int)(regs[20] + -8);
    long long int *temp572 = (long long int *)temp571;
    regs[224] = (long long int)(*temp572);
    long long int temp573 = (long long int)(regs[224] + 24);
    regs[123] = (long long int)(temp573);
    long long int temp574 = (long long int)(regs[20] + -24);
    long long int *temp575 = (long long int *)temp574;
    regs[225] = (long long int)(*temp575);
    long long int temp576 = (long long int)(regs[225] + 16);
    temp576 = (long long int)(regs[123]);
    long long int temp577 = (long long int)(regs[20] + -8);
    long long int *temp578 = (long long int *)temp577;
    regs[226] = (long long int)(*temp578);
    long long int temp579 = (long long int)(regs[226] + 24);
    regs[124] = (long long int)(temp579);
    long long int temp580 = (long long int)regs[124];
    long long int temp581 = (long long int)0;
    int temp582;
    if (temp580 == temp581) temp582 = 0;
    else if (temp580 < temp581) temp582 = -1;
    else temp582 = 1;
    regs[17] = (long long int)(temp582);
    bool temp583 = (regs[17] == 0);
    if (temp583) goto label332;
    // THERE WAS A NOTE HERE
    long long int temp584 = (long long int)(regs[20] + -8);
    long long int *temp585 = (long long int *)temp584;
    regs[227] = (long long int)(*temp585);
    long long int temp586 = (long long int)(regs[227] + 24);
    regs[125] = (long long int)(temp586);
    long long int temp587 = (long long int)(regs[20] + -24);
    long long int *temp588 = (long long int *)temp587;
    regs[228] = (long long int)(*temp588);
    long long int temp589 = (long long int)(regs[125] + 8);
    temp589 = (long long int)(regs[228]);
    label332:
    // THERE WAS A NOTE HERE
    long long int temp590 = (long long int)(regs[20] + -8);
    long long int *temp591 = (long long int *)temp590;
    regs[229] = (long long int)(*temp591);
    long long int temp592 = (long long int)(regs[20] + -24);
    long long int *temp593 = (long long int *)temp592;
    regs[230] = (long long int)(*temp593);
    long long int temp594 = (long long int)(regs[229] + 24);
    temp594 = (long long int)(regs[230]);
    long long int temp595 = (long long int)(regs[20] + -24);
    long long int *temp596 = (long long int *)temp595;
    regs[231] = (long long int)(*temp596);
    long long int temp597 = (long long int)(regs[20] + -8);
    long long int *temp598 = (long long int *)temp597;
    regs[232] = (long long int)(*temp598);
    long long int temp599 = (long long int)(regs[231] + 8);
    temp599 = (long long int)(regs[232]);
    long long int temp600 = (long long int)(regs[20] + -8);
    long long int *temp601 = (long long int *)temp600;
    regs[233] = (long long int)(*temp601);
    long long int temp602 = (long long int)(regs[20] + -32);
    long long int *temp603 = (long long int *)temp602;
    regs[234] = (long long int)(*temp603);
    long long int temp604 = (long long int)(regs[233] + 8);
    temp604 = (long long int)(regs[234]);
    long long int temp605 = (long long int)(regs[20] + -32);
    long long int *temp606 = (long long int *)temp605;
    long long int temp607 = (long long int)*temp606;
    long long int temp608 = (long long int)0;
    int temp609;
    if (temp607 == temp608) temp609 = 0;
    else if (temp607 < temp608) temp609 = -1;
    else temp609 = 1;
    regs[17] = (long long int)(temp609);
    bool temp610 = (regs[17] == 0);
    if (temp610) goto label366;
    // THERE WAS A NOTE HERE
    long long int temp611 = (long long int)(regs[20] + -32);
    long long int *temp612 = (long long int *)temp611;
    regs[235] = (long long int)(*temp612);
    long long int temp613 = (long long int)(regs[235] + 16);
    regs[126] = (long long int)(temp613);
    long long int temp614 = (long long int)regs[126];
    long long int temp615 = (long long int)0;
    int temp616;
    if (temp614 == temp615) temp616 = 0;
    else if (temp614 < temp615) temp616 = -1;
    else temp616 = 1;
    regs[17] = (long long int)(temp616);
    bool temp617 = (regs[17] == 0);
    if (temp617) goto label361;
    // THERE WAS A NOTE HERE
    long long int temp618 = (long long int)(regs[20] + -32);
    long long int *temp619 = (long long int *)temp618;
    regs[236] = (long long int)(*temp619);
    long long int temp620 = (long long int)(regs[236] + 16);
    regs[127] = (long long int)(temp620);
    long long int temp621 = (long long int)(regs[20] + -24);
    long long int *temp622 = (long long int *)temp621;
    long long int temp623 = (long long int)*temp622;
    long long int temp624 = (long long int)regs[127];
    int temp625;
    if (temp623 == temp624) temp625 = 0;
    else if (temp623 < temp624) temp625 = -1;
    else temp625 = 1;
    regs[17] = (long long int)(temp625);
    bool temp626 = (regs[17] != 0);
    if (temp626) goto label361;
    // THERE WAS A NOTE HERE
    long long int temp627 = (long long int)(regs[20] + -32);
    long long int *temp628 = (long long int *)temp627;
    regs[237] = (long long int)(*temp628);
    long long int temp629 = (long long int)(regs[20] + -8);
    long long int *temp630 = (long long int *)temp629;
    regs[238] = (long long int)(*temp630);
    long long int temp631 = (long long int)(regs[237] + 16);
    temp631 = (long long int)(regs[238]);
    goto label366;
    // THERE WAS A BARRIER HERE
    label361:
    // THERE WAS A NOTE HERE
    long long int temp632 = (long long int)(regs[20] + -32);
    long long int *temp633 = (long long int *)temp632;
    regs[239] = (long long int)(*temp633);
    long long int temp634 = (long long int)(regs[20] + -8);
    long long int *temp635 = (long long int *)temp634;
    regs[240] = (long long int)(*temp635);
    long long int temp636 = (long long int)(regs[239] + 24);
    temp636 = (long long int)(regs[240]);
    label366:
    // THERE WAS A NOTE HERE
    long long int temp637 = (long long int)(regs[20] + -8);
    long long int *temp638 = (long long int *)temp637;
    regs[241] = (long long int)(*temp638);
    long long int temp639 = (long long int)(regs[241] + 32);
    temp639 = (int)(0);
    long long int temp640 = (long long int)(regs[20] + -24);
    long long int *temp641 = (long long int *)temp640;
    regs[242] = (long long int)(*temp641);
    long long int temp642 = (long long int)(regs[242] + 32);
    temp642 = (int)(1);
    label374:
    // THERE WAS A NOTE HERE
}
void insertNode(int arg0, int arg1) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp643 = (long long int)(regs[20] + -36);
    int *temp644 = (int *)temp643;
    *temp644 = (int)(regs[5]);
    long long int temp645 = (long long int)(regs[20] + -48);
    long long int *temp646 = (long long int *)temp645;
    *temp646 = (long long int)(regs[4]);
    // THERE WAS A NOTE HERE
    long long int temp647 = (long long int)(regs[20] + -48);
    long long int *temp648 = (long long int *)temp647;
    regs[93] = (long long int)(*temp648);
    regs[94] = (long long int)(regs[93]);
    long long int temp649 = (long long int)(regs[20] + -8);
    long long int *temp650 = (long long int *)temp649;
    *temp650 = (long long int)(regs[94]);
    goto label72;
    // THERE WAS A BARRIER HERE
    label74:
    // THERE WAS A NOTE HERE
    long long int temp651 = (long long int)(regs[20] + -8);
    long long int *temp652 = (long long int *)temp651;
    regs[95] = (long long int)(*temp652);
    regs[87] = (int)(regs[95]);
    long long int temp653 = (long long int)(regs[20] + -36);
    int *temp654 = (int *)temp653;
    long long int temp655 = (long long int)*temp654;
    long long int temp656 = (long long int)regs[87];
    int temp657;
    if (temp655 == temp656) temp657 = 0;
    else if (temp655 < temp656) temp657 = -1;
    else temp657 = 1;
    regs[17] = (long long int)(temp657);
    bool temp658 = (regs[17] >= 0);
    if (temp658) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp659 = (long long int)(regs[20] + -8);
    long long int *temp660 = (long long int *)temp659;
    regs[96] = (long long int)(*temp660);
    long long int temp661 = (long long int)(regs[96] + 16);
    regs[88] = (long long int)(temp661);
    long long int temp662 = (long long int)regs[88];
    long long int temp663 = (long long int)0;
    int temp664;
    if (temp662 == temp663) temp664 = 0;
    else if (temp662 < temp663) temp664 = -1;
    else temp664 = 1;
    regs[17] = (long long int)(temp664);
    bool temp665 = (regs[17] == 0);
    if (temp665) goto label28;
    // THERE WAS A NOTE HERE
    long long int temp666 = (long long int)(regs[20] + -8);
    long long int *temp667 = (long long int *)temp666;
    regs[97] = (long long int)(*temp667);
    long long int temp668 = (long long int)(regs[97] + 16);
    regs[98] = (long long int)(temp668);
    long long int temp669 = (long long int)(regs[20] + -8);
    long long int *temp670 = (long long int *)temp669;
    *temp670 = (long long int)(regs[98]);
    goto label72;
    // THERE WAS A BARRIER HERE
    label28:
    // THERE WAS A NOTE HERE
    long long int temp671 = (long long int)(regs[20] + -8);
    long long int *temp672 = (long long int *)temp671;
    regs[99] = (long long int)(*temp672);
    long long int temp673 = (long long int)(regs[20] + -36);
    int *temp674 = (int *)temp673;
    regs[100] = (int)(*temp674);
    regs[4] = (long long int)(regs[99]);
    regs[5] = (int)(regs[100]);
    long long int temp675 = newNode((int)regs[5], regs[4]);
    regs[0] = (long long int)temp675;
    regs[101] = (long long int)(regs[0]);
    long long int temp676 = (long long int)(regs[20] + -24);
    long long int *temp677 = (long long int *)temp676;
    *temp677 = (long long int)(regs[101]);
    long long int temp678 = (long long int)(regs[20] + -8);
    long long int *temp679 = (long long int *)temp678;
    regs[102] = (long long int)(*temp679);
    long long int temp680 = (long long int)(regs[20] + -24);
    long long int *temp681 = (long long int *)temp680;
    regs[103] = (long long int)(*temp681);
    long long int temp682 = (long long int)(regs[102] + 16);
    temp682 = (long long int)(regs[103]);
    long long int temp683 = (long long int)(regs[20] + -24);
    long long int *temp684 = (long long int *)temp683;
    regs[104] = (long long int)(*temp684);
    long long int temp685 = (long long int)(regs[20] + -8);
    long long int *temp686 = (long long int *)temp685;
    *temp686 = (long long int)(regs[104]);
    goto label77;
    // THERE WAS A BARRIER HERE
    label44:
    // THERE WAS A NOTE HERE
    long long int temp687 = (long long int)(regs[20] + -8);
    long long int *temp688 = (long long int *)temp687;
    regs[105] = (long long int)(*temp688);
    long long int temp689 = (long long int)(regs[105] + 24);
    regs[89] = (long long int)(temp689);
    long long int temp690 = (long long int)regs[89];
    long long int temp691 = (long long int)0;
    int temp692;
    if (temp690 == temp691) temp692 = 0;
    else if (temp690 < temp691) temp692 = -1;
    else temp692 = 1;
    regs[17] = (long long int)(temp692);
    bool temp693 = (regs[17] == 0);
    if (temp693) goto label56;
    // THERE WAS A NOTE HERE
    long long int temp694 = (long long int)(regs[20] + -8);
    long long int *temp695 = (long long int *)temp694;
    regs[106] = (long long int)(*temp695);
    long long int temp696 = (long long int)(regs[106] + 24);
    regs[107] = (long long int)(temp696);
    long long int temp697 = (long long int)(regs[20] + -8);
    long long int *temp698 = (long long int *)temp697;
    *temp698 = (long long int)(regs[107]);
    goto label72;
    // THERE WAS A BARRIER HERE
    label56:
    // THERE WAS A NOTE HERE
    long long int temp699 = (long long int)(regs[20] + -8);
    long long int *temp700 = (long long int *)temp699;
    regs[108] = (long long int)(*temp700);
    long long int temp701 = (long long int)(regs[20] + -36);
    int *temp702 = (int *)temp701;
    regs[109] = (int)(*temp702);
    regs[4] = (long long int)(regs[108]);
    regs[5] = (int)(regs[109]);
    long long int temp703 = newNode((int)regs[5], regs[4]);
    regs[0] = (long long int)temp703;
    regs[110] = (long long int)(regs[0]);
    long long int temp704 = (long long int)(regs[20] + -16);
    long long int *temp705 = (long long int *)temp704;
    *temp705 = (long long int)(regs[110]);
    long long int temp706 = (long long int)(regs[20] + -8);
    long long int *temp707 = (long long int *)temp706;
    regs[111] = (long long int)(*temp707);
    long long int temp708 = (long long int)(regs[20] + -16);
    long long int *temp709 = (long long int *)temp708;
    regs[112] = (long long int)(*temp709);
    long long int temp710 = (long long int)(regs[111] + 24);
    temp710 = (long long int)(regs[112]);
    long long int temp711 = (long long int)(regs[20] + -16);
    long long int *temp712 = (long long int *)temp711;
    regs[113] = (long long int)(*temp712);
    long long int temp713 = (long long int)(regs[20] + -8);
    long long int *temp714 = (long long int *)temp713;
    *temp714 = (long long int)(regs[113]);
    goto label77;
    // THERE WAS A BARRIER HERE
    label72:
    // THERE WAS A NOTE HERE
    long long int temp715 = (long long int)(regs[20] + -8);
    long long int *temp716 = (long long int *)temp715;
    long long int temp717 = (long long int)*temp716;
    long long int temp718 = (long long int)0;
    int temp719;
    if (temp717 == temp718) temp719 = 0;
    else if (temp717 < temp718) temp719 = -1;
    else temp719 = 1;
    regs[17] = (long long int)(temp719);
    bool temp720 = (regs[17] != 0);
    if (temp720) goto label74;
    label77:
    // THERE WAS A NOTE HERE
    goto label107;
    // THERE WAS A BARRIER HERE
    label111:
    // THERE WAS A NOTE HERE
    long long int temp721 = (long long int)(regs[20] + -8);
    long long int *temp722 = (long long int *)temp721;
    regs[114] = (long long int)(*temp722);
    regs[5] = (long long int)(regs[114]);
    checkNode(regs[5]);
    long long int temp723 = (long long int)(regs[20] + -8);
    long long int *temp724 = (long long int *)temp723;
    regs[115] = (long long int)(*temp724);
    long long int temp725 = (long long int)(regs[115] + 8);
    regs[90] = (long long int)(temp725);
    long long int temp726 = (long long int)regs[90];
    long long int temp727 = (long long int)0;
    int temp728;
    if (temp726 == temp727) temp728 = 0;
    else if (temp726 < temp727) temp728 = -1;
    else temp728 = 1;
    regs[17] = (long long int)(temp728);
    bool temp729 = (regs[17] != 0);
    if (temp729) goto label95;
    // THERE WAS A NOTE HERE
    long long int temp730 = (long long int)(regs[20] + -48);
    long long int *temp731 = (long long int *)temp730;
    regs[116] = (long long int)(*temp731);
    long long int temp732 = (long long int)(regs[20] + -8);
    long long int *temp733 = (long long int *)temp732;
    regs[117] = (long long int)(*temp733);
    regs[116] = (long long int)(regs[117]);
    goto label114;
    // THERE WAS A BARRIER HERE
    label95:
    // THERE WAS A NOTE HERE
    long long int temp734 = (long long int)(regs[20] + -8);
    long long int *temp735 = (long long int *)temp734;
    regs[118] = (long long int)(*temp735);
    long long int temp736 = (long long int)(regs[118] + 8);
    regs[119] = (long long int)(temp736);
    long long int temp737 = (long long int)(regs[20] + -8);
    long long int *temp738 = (long long int *)temp737;
    *temp738 = (long long int)(regs[119]);
    long long int temp739 = (long long int)(regs[20] + -48);
    long long int *temp740 = (long long int *)temp739;
    regs[120] = (long long int)(*temp740);
    regs[91] = (long long int)(regs[120]);
    long long int temp741 = (long long int)(regs[20] + -8);
    long long int *temp742 = (long long int *)temp741;
    long long int temp743 = (long long int)*temp742;
    long long int temp744 = (long long int)regs[91];
    int temp745;
    if (temp743 == temp744) temp745 = 0;
    else if (temp743 < temp744) temp745 = -1;
    else temp745 = 1;
    regs[17] = (long long int)(temp745);
    bool temp746 = (regs[17] != 0);
    if (temp746) goto label107;
    // THERE WAS A NOTE HERE
    long long int temp747 = (long long int)(regs[20] + -8);
    long long int *temp748 = (long long int *)temp747;
    regs[121] = (long long int)(*temp748);
    long long int temp749 = (long long int)(regs[121] + 32);
    temp749 = (int)(0);
    label107:
    // THERE WAS A NOTE HERE
    long long int temp750 = (long long int)(regs[20] + -48);
    long long int *temp751 = (long long int *)temp750;
    regs[122] = (long long int)(*temp751);
    regs[92] = (long long int)(regs[122]);
    long long int temp752 = (long long int)(regs[20] + -8);
    long long int *temp753 = (long long int *)temp752;
    long long int temp754 = (long long int)*temp753;
    long long int temp755 = (long long int)regs[92];
    int temp756;
    if (temp754 == temp755) temp756 = 0;
    else if (temp754 < temp755) temp756 = -1;
    else temp756 = 1;
    regs[17] = (long long int)(temp756);
    bool temp757 = (regs[17] != 0);
    if (temp757) goto label111;
    label114:
    // THERE WAS A NOTE HERE
}
void checkForCase2(long long int arg0, int arg1, int arg2, long long int arg3) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    regs[1] = (long long int)arg2;
    regs[2] = (long long int)arg3;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp758 = (long long int)(regs[20] + -56);
    long long int *temp759 = (long long int *)temp758;
    *temp759 = (long long int)(regs[5]);
    long long int temp760 = (long long int)(regs[20] + -60);
    int *temp761 = (int *)temp760;
    *temp761 = (int)(regs[4]);
    long long int temp762 = (long long int)(regs[20] + -64);
    int *temp763 = (int *)temp762;
    *temp763 = (int)(regs[1]);
    long long int temp764 = (long long int)(regs[20] + -72);
    long long int *temp765 = (long long int *)temp764;
    *temp765 = (long long int)(regs[2]);
    // THERE WAS A NOTE HERE
    long long int temp766 = (long long int)(regs[20] + -72);
    long long int *temp767 = (long long int *)temp766;
    regs[168] = (long long int)(*temp767);
    regs[87] = (long long int)(regs[168]);
    long long int temp768 = (long long int)(regs[20] + -56);
    long long int *temp769 = (long long int *)temp768;
    long long int temp770 = (long long int)*temp769;
    long long int temp771 = (long long int)regs[87];
    int temp772;
    if (temp770 == temp771) temp772 = 0;
    else if (temp770 < temp771) temp772 = -1;
    else temp772 = 1;
    regs[17] = (long long int)(temp772);
    bool temp773 = (regs[17] != 0);
    if (temp773) goto label19;
    // THERE WAS A NOTE HERE
    long long int temp774 = (long long int)(regs[20] + -72);
    long long int *temp775 = (long long int *)temp774;
    regs[169] = (long long int)(*temp775);
    regs[88] = (long long int)(regs[169]);
    long long int temp776 = (long long int)(regs[88] + 32);
    temp776 = (int)(0);
    goto label533;
    // THERE WAS A BARRIER HERE
    label19:
    // THERE WAS A NOTE HERE
    long long int temp777 = (long long int)(regs[20] + -60);
    int *temp778 = (int *)temp777;
    long long int temp779 = (long long int)*temp778;
    long long int temp780 = (long long int)0;
    int temp781;
    if (temp779 == temp780) temp781 = 0;
    else if (temp779 < temp780) temp781 = -1;
    else temp781 = 1;
    regs[17] = (long long int)(temp781);
    bool temp782 = (regs[17] != 0);
    if (temp782) goto label60;
    // THERE WAS A NOTE HERE
    long long int temp783 = (long long int)(regs[20] + -56);
    long long int *temp784 = (long long int *)temp783;
    regs[170] = (long long int)(*temp784);
    long long int temp785 = (long long int)(regs[170] + 32);
    regs[89] = (int)(temp785);
    long long int temp786 = (long long int)regs[89];
    long long int temp787 = (long long int)1;
    int temp788;
    if (temp786 == temp787) temp788 = 0;
    else if (temp786 < temp787) temp788 = -1;
    else temp788 = 1;
    regs[17] = (long long int)(temp788);
    bool temp789 = (regs[17] != 0);
    if (temp789) goto label60;
    // THERE WAS A NOTE HERE
    long long int temp790 = (long long int)(regs[20] + -64);
    int *temp791 = (int *)temp790;
    long long int temp792 = (long long int)*temp791;
    long long int temp793 = (long long int)0;
    int temp794;
    if (temp792 == temp793) temp794 = 0;
    else if (temp792 < temp793) temp794 = -1;
    else temp794 = 1;
    regs[17] = (long long int)(temp794);
    bool temp795 = (regs[17] != 0);
    if (temp795) goto label44;
    // THERE WAS A NOTE HERE
    long long int temp796 = (long long int)(regs[20] + -56);
    long long int *temp797 = (long long int *)temp796;
    regs[171] = (long long int)(*temp797);
    long long int temp798 = (long long int)(regs[171] + 24);
    regs[90] = (long long int)(temp798);
    long long int temp799 = (long long int)regs[90];
    long long int temp800 = (long long int)0;
    int temp801;
    if (temp799 == temp800) temp801 = 0;
    else if (temp799 < temp800) temp801 = -1;
    else temp801 = 1;
    regs[17] = (long long int)(temp801);
    bool temp802 = (regs[17] == 0);
    if (temp802) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp803 = (long long int)(regs[20] + -56);
    long long int *temp804 = (long long int *)temp803;
    regs[172] = (long long int)(*temp804);
    long long int temp805 = (long long int)(regs[172] + 24);
    regs[91] = (long long int)(temp805);
    long long int temp806 = (long long int)(regs[91] + 32);
    temp806 = (int)(1);
    goto label54;
    // THERE WAS A BARRIER HERE
    label44:
    // THERE WAS A NOTE HERE
    long long int temp807 = (long long int)(regs[20] + -56);
    long long int *temp808 = (long long int *)temp807;
    regs[173] = (long long int)(*temp808);
    long long int temp809 = (long long int)(regs[173] + 16);
    regs[92] = (long long int)(temp809);
    long long int temp810 = (long long int)regs[92];
    long long int temp811 = (long long int)0;
    int temp812;
    if (temp810 == temp811) temp812 = 0;
    else if (temp810 < temp811) temp812 = -1;
    else temp812 = 1;
    regs[17] = (long long int)(temp812);
    bool temp813 = (regs[17] == 0);
    if (temp813) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp814 = (long long int)(regs[20] + -56);
    long long int *temp815 = (long long int *)temp814;
    regs[174] = (long long int)(*temp815);
    long long int temp816 = (long long int)(regs[174] + 16);
    regs[93] = (long long int)(temp816);
    long long int temp817 = (long long int)(regs[93] + 32);
    temp817 = (int)(1);
    label54:
    // THERE WAS A NOTE HERE
    long long int temp818 = (long long int)(regs[20] + -56);
    long long int *temp819 = (long long int *)temp818;
    regs[175] = (long long int)(*temp819);
    long long int temp820 = (long long int)(regs[175] + 32);
    temp820 = (int)(0);
    goto label533;
    // THERE WAS A BARRIER HERE
    label60:
    // THERE WAS A NOTE HERE
    long long int temp821 = (long long int)(regs[20] + -56);
    long long int *temp822 = (long long int *)temp821;
    regs[176] = (long long int)(*temp822);
    long long int temp823 = (long long int)(regs[176] + 8);
    regs[177] = (long long int)(temp823);
    long long int temp824 = (long long int)(regs[20] + -24);
    long long int *temp825 = (long long int *)temp824;
    *temp825 = (long long int)(regs[177]);
    long long int temp826 = (long long int)(regs[20] + -12);
    int *temp827 = (int *)temp826;
    *temp827 = (int)(0);
    long long int temp828 = (long long int)(regs[20] + -24);
    long long int *temp829 = (long long int *)temp828;
    regs[178] = (long long int)(*temp829);
    long long int temp830 = (long long int)(regs[178] + 24);
    regs[94] = (long long int)(temp830);
    long long int temp831 = (long long int)(regs[20] + -56);
    long long int *temp832 = (long long int *)temp831;
    long long int temp833 = (long long int)*temp832;
    long long int temp834 = (long long int)regs[94];
    int temp835;
    if (temp833 == temp834) temp835 = 0;
    else if (temp833 < temp834) temp835 = -1;
    else temp835 = 1;
    regs[17] = (long long int)(temp835);
    bool temp836 = (regs[17] != 0);
    if (temp836) goto label77;
    // THERE WAS A NOTE HERE
    long long int temp837 = (long long int)(regs[20] + -24);
    long long int *temp838 = (long long int *)temp837;
    regs[179] = (long long int)(*temp838);
    long long int temp839 = (long long int)(regs[179] + 16);
    regs[180] = (long long int)(temp839);
    long long int temp840 = (long long int)(regs[20] + -8);
    long long int *temp841 = (long long int *)temp840;
    *temp841 = (long long int)(regs[180]);
    long long int temp842 = (long long int)(regs[20] + -12);
    int *temp843 = (int *)temp842;
    *temp843 = (int)(1);
    goto label82;
    // THERE WAS A BARRIER HERE
    label77:
    // THERE WAS A NOTE HERE
    long long int temp844 = (long long int)(regs[20] + -24);
    long long int *temp845 = (long long int *)temp844;
    regs[181] = (long long int)(*temp845);
    long long int temp846 = (long long int)(regs[181] + 24);
    regs[182] = (long long int)(temp846);
    long long int temp847 = (long long int)(regs[20] + -8);
    long long int *temp848 = (long long int *)temp847;
    *temp848 = (long long int)(regs[182]);
    label82:
    // THERE WAS A NOTE HERE
    long long int temp849 = (long long int)(regs[20] + -8);
    long long int *temp850 = (long long int *)temp849;
    regs[183] = (long long int)(*temp850);
    long long int temp851 = (long long int)(regs[183] + 24);
    regs[95] = (long long int)(temp851);
    long long int temp852 = (long long int)regs[95];
    long long int temp853 = (long long int)0;
    int temp854;
    if (temp852 == temp853) temp854 = 0;
    else if (temp852 < temp853) temp854 = -1;
    else temp854 = 1;
    regs[17] = (long long int)(temp854);
    bool temp855 = (regs[17] == 0);
    if (temp855) goto label94;
    // THERE WAS A NOTE HERE
    long long int temp856 = (long long int)(regs[20] + -8);
    long long int *temp857 = (long long int *)temp856;
    regs[184] = (long long int)(*temp857);
    long long int temp858 = (long long int)(regs[184] + 24);
    regs[96] = (long long int)(temp858);
    long long int temp859 = (long long int)(regs[96] + 32);
    regs[97] = (int)(temp859);
    long long int temp860 = (long long int)regs[97];
    long long int temp861 = (long long int)1;
    int temp862;
    if (temp860 == temp861) temp862 = 0;
    else if (temp860 < temp861) temp862 = -1;
    else temp862 = 1;
    regs[17] = (long long int)(temp862);
    bool temp863 = (regs[17] == 0);
    if (temp863) goto label106;
    label94:
    // THERE WAS A NOTE HERE
    long long int temp864 = (long long int)(regs[20] + -8);
    long long int *temp865 = (long long int *)temp864;
    regs[185] = (long long int)(*temp865);
    long long int temp866 = (long long int)(regs[185] + 16);
    regs[98] = (long long int)(temp866);
    long long int temp867 = (long long int)regs[98];
    long long int temp868 = (long long int)0;
    int temp869;
    if (temp867 == temp868) temp869 = 0;
    else if (temp867 < temp868) temp869 = -1;
    else temp869 = 1;
    regs[17] = (long long int)(temp869);
    bool temp870 = (regs[17] == 0);
    if (temp870) goto label359;
    // THERE WAS A NOTE HERE
    long long int temp871 = (long long int)(regs[20] + -8);
    long long int *temp872 = (long long int *)temp871;
    regs[186] = (long long int)(*temp872);
    long long int temp873 = (long long int)(regs[186] + 16);
    regs[99] = (long long int)(temp873);
    long long int temp874 = (long long int)(regs[99] + 32);
    regs[100] = (int)(temp874);
    long long int temp875 = (long long int)regs[100];
    long long int temp876 = (long long int)1;
    int temp877;
    if (temp875 == temp876) temp877 = 0;
    else if (temp875 < temp876) temp877 = -1;
    else temp877 = 1;
    regs[17] = (long long int)(temp877);
    bool temp878 = (regs[17] != 0);
    if (temp878) goto label359;
    label106:
    // THERE WAS A NOTE HERE
    long long int temp879 = (long long int)(regs[20] + -8);
    long long int *temp880 = (long long int *)temp879;
    regs[187] = (long long int)(*temp880);
    long long int temp881 = (long long int)(regs[187] + 24);
    regs[101] = (long long int)(temp881);
    long long int temp882 = (long long int)regs[101];
    long long int temp883 = (long long int)0;
    int temp884;
    if (temp882 == temp883) temp884 = 0;
    else if (temp882 < temp883) temp884 = -1;
    else temp884 = 1;
    regs[17] = (long long int)(temp884);
    bool temp885 = (regs[17] == 0);
    if (temp885) goto label238;
    // THERE WAS A NOTE HERE
    long long int temp886 = (long long int)(regs[20] + -8);
    long long int *temp887 = (long long int *)temp886;
    regs[188] = (long long int)(*temp887);
    long long int temp888 = (long long int)(regs[188] + 24);
    regs[102] = (long long int)(temp888);
    long long int temp889 = (long long int)(regs[102] + 32);
    regs[103] = (int)(temp889);
    long long int temp890 = (long long int)regs[103];
    long long int temp891 = (long long int)1;
    int temp892;
    if (temp890 == temp891) temp892 = 0;
    else if (temp890 < temp891) temp892 = -1;
    else temp892 = 1;
    regs[17] = (long long int)(temp892);
    bool temp893 = (regs[17] != 0);
    if (temp893) goto label238;
    // THERE WAS A NOTE HERE
    long long int temp894 = (long long int)(regs[20] + -12);
    int *temp895 = (int *)temp894;
    long long int temp896 = (long long int)*temp895;
    long long int temp897 = (long long int)1;
    int temp898;
    if (temp896 == temp897) temp898 = 0;
    else if (temp896 < temp897) temp898 = -1;
    else temp898 = 1;
    regs[17] = (long long int)(temp898);
    bool temp899 = (regs[17] != 0);
    if (temp899) goto label182;
    // THERE WAS A NOTE HERE
    long long int temp900 = (long long int)(regs[20] + -24);
    long long int *temp901 = (long long int *)temp900;
    regs[189] = (long long int)(*temp901);
    long long int temp902 = (long long int)(regs[189] + 32);
    regs[190] = (int)(temp902);
    long long int temp903 = (long long int)(regs[20] + -32);
    int *temp904 = (int *)temp903;
    *temp904 = (int)(regs[190]);
    long long int temp905 = (long long int)(regs[20] + -8);
    long long int *temp906 = (long long int *)temp905;
    regs[191] = (long long int)(*temp906);
    long long int temp907 = (long long int)(regs[191] + 24);
    regs[104] = (long long int)(temp907);
    regs[5] = (long long int)(regs[104]);
    long long int temp908 = leftRotate(regs[5]);
    regs[0] = (long long int)temp908;
    regs[192] = (long long int)(regs[0]);
    long long int temp909 = (long long int)(regs[20] + -8);
    long long int *temp910 = (long long int *)temp909;
    *temp910 = (long long int)(regs[192]);
    long long int temp911 = (long long int)(regs[20] + -8);
    long long int *temp912 = (long long int *)temp911;
    regs[193] = (long long int)(*temp912);
    regs[5] = (long long int)(regs[193]);
    long long int temp913 = rightRotate(regs[5]);
    regs[0] = (long long int)temp913;
    regs[194] = (long long int)(regs[0]);
    long long int temp914 = (long long int)(regs[20] + -24);
    long long int *temp915 = (long long int *)temp914;
    *temp915 = (long long int)(regs[194]);
    long long int temp916 = (long long int)(regs[20] + -24);
    long long int *temp917 = (long long int *)temp916;
    regs[195] = (long long int)(*temp917);
    long long int temp918 = (long long int)(regs[195] + 8);
    regs[105] = (long long int)(temp918);
    long long int temp919 = (long long int)regs[105];
    long long int temp920 = (long long int)0;
    int temp921;
    if (temp919 == temp920) temp921 = 0;
    else if (temp919 < temp920) temp921 = -1;
    else temp921 = 1;
    regs[17] = (long long int)(temp921);
    bool temp922 = (regs[17] != 0);
    if (temp922) goto label144;
    // THERE WAS A NOTE HERE
    long long int temp923 = (long long int)(regs[20] + -72);
    long long int *temp924 = (long long int *)temp923;
    regs[196] = (long long int)(*temp924);
    long long int temp925 = (long long int)(regs[20] + -24);
    long long int *temp926 = (long long int *)temp925;
    regs[197] = (long long int)(*temp926);
    regs[196] = (long long int)(regs[197]);
    label144:
    // THERE WAS A NOTE HERE
    long long int temp927 = (long long int)(regs[20] + -24);
    long long int *temp928 = (long long int *)temp927;
    regs[198] = (long long int)(*temp928);
    long long int temp929 = (long long int)(regs[20] + -32);
    int *temp930 = (int *)temp929;
    regs[199] = (int)(*temp930);
    long long int temp931 = (long long int)(regs[198] + 32);
    temp931 = (int)(regs[199]);
    long long int temp932 = (long long int)(regs[20] + -24);
    long long int *temp933 = (long long int *)temp932;
    regs[200] = (long long int)(*temp933);
    long long int temp934 = (long long int)(regs[200] + 16);
    regs[106] = (long long int)(temp934);
    long long int temp935 = (long long int)(regs[106] + 32);
    temp935 = (int)(0);
    long long int temp936 = (long long int)(regs[20] + -24);
    long long int *temp937 = (long long int *)temp936;
    regs[201] = (long long int)(*temp937);
    long long int temp938 = (long long int)(regs[201] + 24);
    regs[107] = (long long int)(temp938);
    long long int temp939 = (long long int)(regs[107] + 32);
    temp939 = (int)(0);
    long long int temp940 = (long long int)(regs[20] + -60);
    int *temp941 = (int *)temp940;
    long long int temp942 = (long long int)*temp941;
    long long int temp943 = (long long int)0;
    int temp944;
    if (temp942 == temp943) temp944 = 0;
    else if (temp942 < temp943) temp944 = -1;
    else temp944 = 1;
    regs[17] = (long long int)(temp944);
    bool temp945 = (regs[17] == 0);
    if (temp945) goto label355;
    // THERE WAS A NOTE HERE
    long long int temp946 = (long long int)(regs[20] + -56);
    long long int *temp947 = (long long int *)temp946;
    regs[202] = (long long int)(*temp947);
    long long int temp948 = (long long int)(regs[202] + 16);
    regs[108] = (long long int)(temp948);
    long long int temp949 = (long long int)regs[108];
    long long int temp950 = (long long int)0;
    int temp951;
    if (temp949 == temp950) temp951 = 0;
    else if (temp949 < temp950) temp951 = -1;
    else temp951 = 1;
    regs[17] = (long long int)(temp951);
    bool temp952 = (regs[17] == 0);
    if (temp952) goto label168;
    // THERE WAS A NOTE HERE
    long long int temp953 = (long long int)(regs[20] + -56);
    long long int *temp954 = (long long int *)temp953;
    regs[203] = (long long int)(*temp954);
    long long int temp955 = (long long int)(regs[203] + 16);
    regs[109] = (long long int)(temp955);
    long long int temp956 = (long long int)(regs[20] + -24);
    long long int *temp957 = (long long int *)temp956;
    regs[204] = (long long int)(*temp957);
    long long int temp958 = (long long int)(regs[204] + 24);
    regs[110] = (long long int)(temp958);
    long long int temp959 = (long long int)(regs[109] + 8);
    temp959 = (long long int)(regs[110]);
    label168:
    // THERE WAS A NOTE HERE
    long long int temp960 = (long long int)(regs[20] + -24);
    long long int *temp961 = (long long int *)temp960;
    regs[205] = (long long int)(*temp961);
    long long int temp962 = (long long int)(regs[205] + 24);
    regs[111] = (long long int)(temp962);
    long long int temp963 = (long long int)(regs[20] + -56);
    long long int *temp964 = (long long int *)temp963;
    regs[206] = (long long int)(*temp964);
    long long int temp965 = (long long int)(regs[206] + 16);
    regs[112] = (long long int)(temp965);
    long long int temp966 = (long long int)(regs[111] + 24);
    temp966 = (long long int)(regs[112]);
    long long int temp967 = (long long int)(regs[20] + -56);
    long long int *temp968 = (long long int *)temp967;
    regs[207] = (long long int)(*temp968);
    regs[5] = (long long int)(regs[207]);
    free(regs[5]);
    goto label355;
    // THERE WAS A BARRIER HERE
    label182:
    // THERE WAS A NOTE HERE
    long long int temp969 = (long long int)(regs[20] + -24);
    long long int *temp970 = (long long int *)temp969;
    regs[208] = (long long int)(*temp970);
    long long int temp971 = (long long int)(regs[208] + 32);
    regs[209] = (int)(temp971);
    long long int temp972 = (long long int)(regs[20] + -28);
    int *temp973 = (int *)temp972;
    *temp973 = (int)(regs[209]);
    long long int temp974 = (long long int)(regs[20] + -8);
    long long int *temp975 = (long long int *)temp974;
    regs[210] = (long long int)(*temp975);
    regs[5] = (long long int)(regs[210]);
    long long int temp976 = leftRotate(regs[5]);
    regs[0] = (long long int)temp976;
    regs[211] = (long long int)(regs[0]);
    long long int temp977 = (long long int)(regs[20] + -24);
    long long int *temp978 = (long long int *)temp977;
    *temp978 = (long long int)(regs[211]);
    long long int temp979 = (long long int)(regs[20] + -24);
    long long int *temp980 = (long long int *)temp979;
    regs[212] = (long long int)(*temp980);
    long long int temp981 = (long long int)(regs[212] + 8);
    regs[113] = (long long int)(temp981);
    long long int temp982 = (long long int)regs[113];
    long long int temp983 = (long long int)0;
    int temp984;
    if (temp982 == temp983) temp984 = 0;
    else if (temp982 < temp983) temp984 = -1;
    else temp984 = 1;
    regs[17] = (long long int)(temp984);
    bool temp985 = (regs[17] != 0);
    if (temp985) goto label200;
    // THERE WAS A NOTE HERE
    long long int temp986 = (long long int)(regs[20] + -72);
    long long int *temp987 = (long long int *)temp986;
    regs[213] = (long long int)(*temp987);
    long long int temp988 = (long long int)(regs[20] + -24);
    long long int *temp989 = (long long int *)temp988;
    regs[214] = (long long int)(*temp989);
    regs[213] = (long long int)(regs[214]);
    label200:
    // THERE WAS A NOTE HERE
    long long int temp990 = (long long int)(regs[20] + -24);
    long long int *temp991 = (long long int *)temp990;
    regs[215] = (long long int)(*temp991);
    long long int temp992 = (long long int)(regs[20] + -28);
    int *temp993 = (int *)temp992;
    regs[216] = (int)(*temp993);
    long long int temp994 = (long long int)(regs[215] + 32);
    temp994 = (int)(regs[216]);
    long long int temp995 = (long long int)(regs[20] + -24);
    long long int *temp996 = (long long int *)temp995;
    regs[217] = (long long int)(*temp996);
    long long int temp997 = (long long int)(regs[217] + 16);
    regs[114] = (long long int)(temp997);
    long long int temp998 = (long long int)(regs[114] + 32);
    temp998 = (int)(0);
    long long int temp999 = (long long int)(regs[20] + -24);
    long long int *temp1000 = (long long int *)temp999;
    regs[218] = (long long int)(*temp1000);
    long long int temp1001 = (long long int)(regs[218] + 24);
    regs[115] = (long long int)(temp1001);
    long long int temp1002 = (long long int)(regs[115] + 32);
    temp1002 = (int)(0);
    long long int temp1003 = (long long int)(regs[20] + -60);
    int *temp1004 = (int *)temp1003;
    long long int temp1005 = (long long int)*temp1004;
    long long int temp1006 = (long long int)0;
    int temp1007;
    if (temp1005 == temp1006) temp1007 = 0;
    else if (temp1005 < temp1006) temp1007 = -1;
    else temp1007 = 1;
    regs[17] = (long long int)(temp1007);
    bool temp1008 = (regs[17] == 0);
    if (temp1008) goto label355;
    // THERE WAS A NOTE HERE
    long long int temp1009 = (long long int)(regs[20] + -56);
    long long int *temp1010 = (long long int *)temp1009;
    regs[219] = (long long int)(*temp1010);
    long long int temp1011 = (long long int)(regs[219] + 24);
    regs[116] = (long long int)(temp1011);
    long long int temp1012 = (long long int)regs[116];
    long long int temp1013 = (long long int)0;
    int temp1014;
    if (temp1012 == temp1013) temp1014 = 0;
    else if (temp1012 < temp1013) temp1014 = -1;
    else temp1014 = 1;
    regs[17] = (long long int)(temp1014);
    bool temp1015 = (regs[17] == 0);
    if (temp1015) goto label224;
    // THERE WAS A NOTE HERE
    long long int temp1016 = (long long int)(regs[20] + -56);
    long long int *temp1017 = (long long int *)temp1016;
    regs[220] = (long long int)(*temp1017);
    long long int temp1018 = (long long int)(regs[220] + 24);
    regs[117] = (long long int)(temp1018);
    long long int temp1019 = (long long int)(regs[20] + -24);
    long long int *temp1020 = (long long int *)temp1019;
    regs[221] = (long long int)(*temp1020);
    long long int temp1021 = (long long int)(regs[221] + 16);
    regs[118] = (long long int)(temp1021);
    long long int temp1022 = (long long int)(regs[117] + 8);
    temp1022 = (long long int)(regs[118]);
    label224:
    // THERE WAS A NOTE HERE
    long long int temp1023 = (long long int)(regs[20] + -24);
    long long int *temp1024 = (long long int *)temp1023;
    regs[222] = (long long int)(*temp1024);
    long long int temp1025 = (long long int)(regs[222] + 16);
    regs[119] = (long long int)(temp1025);
    long long int temp1026 = (long long int)(regs[20] + -56);
    long long int *temp1027 = (long long int *)temp1026;
    regs[223] = (long long int)(*temp1027);
    long long int temp1028 = (long long int)(regs[223] + 16);
    regs[120] = (long long int)(temp1028);
    long long int temp1029 = (long long int)(regs[119] + 16);
    temp1029 = (long long int)(regs[120]);
    long long int temp1030 = (long long int)(regs[20] + -56);
    long long int *temp1031 = (long long int *)temp1030;
    regs[224] = (long long int)(*temp1031);
    regs[5] = (long long int)(regs[224]);
    free(regs[5]);
    goto label355;
    // THERE WAS A BARRIER HERE
    label238:
    // THERE WAS A NOTE HERE
    long long int temp1032 = (long long int)(regs[20] + -12);
    int *temp1033 = (int *)temp1032;
    long long int temp1034 = (long long int)*temp1033;
    long long int temp1035 = (long long int)0;
    int temp1036;
    if (temp1034 == temp1035) temp1036 = 0;
    else if (temp1034 < temp1035) temp1036 = -1;
    else temp1036 = 1;
    regs[17] = (long long int)(temp1036);
    bool temp1037 = (regs[17] != 0);
    if (temp1037) goto label303;
    // THERE WAS A NOTE HERE
    long long int temp1038 = (long long int)(regs[20] + -24);
    long long int *temp1039 = (long long int *)temp1038;
    regs[225] = (long long int)(*temp1039);
    long long int temp1040 = (long long int)(regs[225] + 32);
    regs[226] = (int)(temp1040);
    long long int temp1041 = (long long int)(regs[20] + -40);
    int *temp1042 = (int *)temp1041;
    *temp1042 = (int)(regs[226]);
    long long int temp1043 = (long long int)(regs[20] + -8);
    long long int *temp1044 = (long long int *)temp1043;
    regs[227] = (long long int)(*temp1044);
    long long int temp1045 = (long long int)(regs[227] + 16);
    regs[121] = (long long int)(temp1045);
    regs[5] = (long long int)(regs[121]);
    long long int temp1046 = rightRotate(regs[5]);
    regs[0] = (long long int)temp1046;
    regs[228] = (long long int)(regs[0]);
    long long int temp1047 = (long long int)(regs[20] + -8);
    long long int *temp1048 = (long long int *)temp1047;
    *temp1048 = (long long int)(regs[228]);
    long long int temp1049 = (long long int)(regs[20] + -8);
    long long int *temp1050 = (long long int *)temp1049;
    regs[229] = (long long int)(*temp1050);
    regs[5] = (long long int)(regs[229]);
    long long int temp1051 = leftRotate(regs[5]);
    regs[0] = (long long int)temp1051;
    regs[230] = (long long int)(regs[0]);
    long long int temp1052 = (long long int)(regs[20] + -24);
    long long int *temp1053 = (long long int *)temp1052;
    *temp1053 = (long long int)(regs[230]);
    long long int temp1054 = (long long int)(regs[20] + -24);
    long long int *temp1055 = (long long int *)temp1054;
    regs[231] = (long long int)(*temp1055);
    long long int temp1056 = (long long int)(regs[231] + 8);
    regs[122] = (long long int)(temp1056);
    long long int temp1057 = (long long int)regs[122];
    long long int temp1058 = (long long int)0;
    int temp1059;
    if (temp1057 == temp1058) temp1059 = 0;
    else if (temp1057 < temp1058) temp1059 = -1;
    else temp1059 = 1;
    regs[17] = (long long int)(temp1059);
    bool temp1060 = (regs[17] != 0);
    if (temp1060) goto label265;
    // THERE WAS A NOTE HERE
    long long int temp1061 = (long long int)(regs[20] + -72);
    long long int *temp1062 = (long long int *)temp1061;
    regs[232] = (long long int)(*temp1062);
    long long int temp1063 = (long long int)(regs[20] + -24);
    long long int *temp1064 = (long long int *)temp1063;
    regs[233] = (long long int)(*temp1064);
    regs[232] = (long long int)(regs[233]);
    label265:
    // THERE WAS A NOTE HERE
    long long int temp1065 = (long long int)(regs[20] + -24);
    long long int *temp1066 = (long long int *)temp1065;
    regs[234] = (long long int)(*temp1066);
    long long int temp1067 = (long long int)(regs[20] + -40);
    int *temp1068 = (int *)temp1067;
    regs[235] = (int)(*temp1068);
    long long int temp1069 = (long long int)(regs[234] + 32);
    temp1069 = (int)(regs[235]);
    long long int temp1070 = (long long int)(regs[20] + -24);
    long long int *temp1071 = (long long int *)temp1070;
    regs[236] = (long long int)(*temp1071);
    long long int temp1072 = (long long int)(regs[236] + 16);
    regs[123] = (long long int)(temp1072);
    long long int temp1073 = (long long int)(regs[123] + 32);
    temp1073 = (int)(0);
    long long int temp1074 = (long long int)(regs[20] + -24);
    long long int *temp1075 = (long long int *)temp1074;
    regs[237] = (long long int)(*temp1075);
    long long int temp1076 = (long long int)(regs[237] + 24);
    regs[124] = (long long int)(temp1076);
    long long int temp1077 = (long long int)(regs[124] + 32);
    temp1077 = (int)(0);
    long long int temp1078 = (long long int)(regs[20] + -60);
    int *temp1079 = (int *)temp1078;
    long long int temp1080 = (long long int)*temp1079;
    long long int temp1081 = (long long int)0;
    int temp1082;
    if (temp1080 == temp1081) temp1082 = 0;
    else if (temp1080 < temp1081) temp1082 = -1;
    else temp1082 = 1;
    regs[17] = (long long int)(temp1082);
    bool temp1083 = (regs[17] == 0);
    if (temp1083) goto label533;
    // THERE WAS A NOTE HERE
    long long int temp1084 = (long long int)(regs[20] + -56);
    long long int *temp1085 = (long long int *)temp1084;
    regs[238] = (long long int)(*temp1085);
    long long int temp1086 = (long long int)(regs[238] + 24);
    regs[125] = (long long int)(temp1086);
    long long int temp1087 = (long long int)regs[125];
    long long int temp1088 = (long long int)0;
    int temp1089;
    if (temp1087 == temp1088) temp1089 = 0;
    else if (temp1087 < temp1088) temp1089 = -1;
    else temp1089 = 1;
    regs[17] = (long long int)(temp1089);
    bool temp1090 = (regs[17] == 0);
    if (temp1090) goto label289;
    // THERE WAS A NOTE HERE
    long long int temp1091 = (long long int)(regs[20] + -56);
    long long int *temp1092 = (long long int *)temp1091;
    regs[239] = (long long int)(*temp1092);
    long long int temp1093 = (long long int)(regs[239] + 24);
    regs[126] = (long long int)(temp1093);
    long long int temp1094 = (long long int)(regs[20] + -24);
    long long int *temp1095 = (long long int *)temp1094;
    regs[240] = (long long int)(*temp1095);
    long long int temp1096 = (long long int)(regs[240] + 16);
    regs[127] = (long long int)(temp1096);
    long long int temp1097 = (long long int)(regs[126] + 8);
    temp1097 = (long long int)(regs[127]);
    label289:
    // THERE WAS A NOTE HERE
    long long int temp1098 = (long long int)(regs[20] + -24);
    long long int *temp1099 = (long long int *)temp1098;
    regs[241] = (long long int)(*temp1099);
    long long int temp1100 = (long long int)(regs[241] + 16);
    regs[128] = (long long int)(temp1100);
    long long int temp1101 = (long long int)(regs[20] + -56);
    long long int *temp1102 = (long long int *)temp1101;
    regs[242] = (long long int)(*temp1102);
    long long int temp1103 = (long long int)(regs[242] + 24);
    regs[129] = (long long int)(temp1103);
    long long int temp1104 = (long long int)(regs[128] + 16);
    temp1104 = (long long int)(regs[129]);
    long long int temp1105 = (long long int)(regs[20] + -56);
    long long int *temp1106 = (long long int *)temp1105;
    regs[243] = (long long int)(*temp1106);
    regs[5] = (long long int)(regs[243]);
    free(regs[5]);
    goto label533;
    // THERE WAS A BARRIER HERE
    label303:
    // THERE WAS A NOTE HERE
    long long int temp1107 = (long long int)(regs[20] + -24);
    long long int *temp1108 = (long long int *)temp1107;
    regs[244] = (long long int)(*temp1108);
    long long int temp1109 = (long long int)(regs[244] + 32);
    regs[245] = (int)(temp1109);
    long long int temp1110 = (long long int)(regs[20] + -36);
    int *temp1111 = (int *)temp1110;
    *temp1111 = (int)(regs[245]);
    long long int temp1112 = (long long int)(regs[20] + -8);
    long long int *temp1113 = (long long int *)temp1112;
    regs[246] = (long long int)(*temp1113);
    regs[5] = (long long int)(regs[246]);
    long long int temp1114 = rightRotate(regs[5]);
    regs[0] = (long long int)temp1114;
    regs[247] = (long long int)(regs[0]);
    long long int temp1115 = (long long int)(regs[20] + -24);
    long long int *temp1116 = (long long int *)temp1115;
    *temp1116 = (long long int)(regs[247]);
    long long int temp1117 = (long long int)(regs[20] + -24);
    long long int *temp1118 = (long long int *)temp1117;
    regs[248] = (long long int)(*temp1118);
    long long int temp1119 = (long long int)(regs[248] + 8);
    regs[130] = (long long int)(temp1119);
    long long int temp1120 = (long long int)regs[130];
    long long int temp1121 = (long long int)0;
    int temp1122;
    if (temp1120 == temp1121) temp1122 = 0;
    else if (temp1120 < temp1121) temp1122 = -1;
    else temp1122 = 1;
    regs[17] = (long long int)(temp1122);
    bool temp1123 = (regs[17] != 0);
    if (temp1123) goto label321;
    // THERE WAS A NOTE HERE
    long long int temp1124 = (long long int)(regs[20] + -72);
    long long int *temp1125 = (long long int *)temp1124;
    regs[249] = (long long int)(*temp1125);
    long long int temp1126 = (long long int)(regs[20] + -24);
    long long int *temp1127 = (long long int *)temp1126;
    regs[250] = (long long int)(*temp1127);
    regs[249] = (long long int)(regs[250]);
    label321:
    // THERE WAS A NOTE HERE
    long long int temp1128 = (long long int)(regs[20] + -24);
    long long int *temp1129 = (long long int *)temp1128;
    regs[251] = (long long int)(*temp1129);
    long long int temp1130 = (long long int)(regs[20] + -36);
    int *temp1131 = (int *)temp1130;
    regs[252] = (int)(*temp1131);
    long long int temp1132 = (long long int)(regs[251] + 32);
    temp1132 = (int)(regs[252]);
    long long int temp1133 = (long long int)(regs[20] + -24);
    long long int *temp1134 = (long long int *)temp1133;
    regs[253] = (long long int)(*temp1134);
    long long int temp1135 = (long long int)(regs[253] + 16);
    regs[131] = (long long int)(temp1135);
    long long int temp1136 = (long long int)(regs[131] + 32);
    temp1136 = (int)(0);
    long long int temp1137 = (long long int)(regs[20] + -24);
    long long int *temp1138 = (long long int *)temp1137;
    regs[254] = (long long int)(*temp1138);
    long long int temp1139 = (long long int)(regs[254] + 24);
    regs[132] = (long long int)(temp1139);
    long long int temp1140 = (long long int)(regs[132] + 32);
    temp1140 = (int)(0);
    long long int temp1141 = (long long int)(regs[20] + -60);
    int *temp1142 = (int *)temp1141;
    long long int temp1143 = (long long int)*temp1142;
    long long int temp1144 = (long long int)0;
    int temp1145;
    if (temp1143 == temp1144) temp1145 = 0;
    else if (temp1143 < temp1144) temp1145 = -1;
    else temp1145 = 1;
    regs[17] = (long long int)(temp1145);
    bool temp1146 = (regs[17] == 0);
    if (temp1146) goto label533;
    // THERE WAS A NOTE HERE
    long long int temp1147 = (long long int)(regs[20] + -56);
    long long int *temp1148 = (long long int *)temp1147;
    regs[255] = (long long int)(*temp1148);
    long long int temp1149 = (long long int)(regs[255] + 16);
    regs[133] = (long long int)(temp1149);
    long long int temp1150 = (long long int)regs[133];
    long long int temp1151 = (long long int)0;
    int temp1152;
    if (temp1150 == temp1151) temp1152 = 0;
    else if (temp1150 < temp1151) temp1152 = -1;
    else temp1152 = 1;
    regs[17] = (long long int)(temp1152);
    bool temp1153 = (regs[17] == 0);
    if (temp1153) goto label345;
    // THERE WAS A NOTE HERE
    long long int temp1154 = (long long int)(regs[20] + -56);
    long long int *temp1155 = (long long int *)temp1154;
    regs[256] = (long long int)(*temp1155);
    long long int temp1156 = (long long int)(regs[256] + 16);
    regs[134] = (long long int)(temp1156);
    long long int temp1157 = (long long int)(regs[20] + -24);
    long long int *temp1158 = (long long int *)temp1157;
    regs[257] = (long long int)(*temp1158);
    long long int temp1159 = (long long int)(regs[257] + 24);
    regs[135] = (long long int)(temp1159);
    long long int temp1160 = (long long int)(regs[134] + 8);
    temp1160 = (long long int)(regs[135]);
    label345:
    // THERE WAS A NOTE HERE
    long long int temp1161 = (long long int)(regs[20] + -24);
    long long int *temp1162 = (long long int *)temp1161;
    regs[258] = (long long int)(*temp1162);
    long long int temp1163 = (long long int)(regs[258] + 24);
    regs[136] = (long long int)(temp1163);
    long long int temp1164 = (long long int)(regs[20] + -56);
    long long int *temp1165 = (long long int *)temp1164;
    regs[259] = (long long int)(*temp1165);
    long long int temp1166 = (long long int)(regs[259] + 16);
    regs[137] = (long long int)(temp1166);
    long long int temp1167 = (long long int)(regs[136] + 24);
    temp1167 = (long long int)(regs[137]);
    long long int temp1168 = (long long int)(regs[20] + -56);
    long long int *temp1169 = (long long int *)temp1168;
    regs[260] = (long long int)(*temp1169);
    regs[5] = (long long int)(regs[260]);
    free(regs[5]);
    label355:
    // THERE WAS A NOTE HERE
    goto label533;
    // THERE WAS A BARRIER HERE
    label359:
    // THERE WAS A NOTE HERE
    long long int temp1170 = (long long int)(regs[20] + -8);
    long long int *temp1171 = (long long int *)temp1170;
    regs[261] = (long long int)(*temp1171);
    long long int temp1172 = (long long int)(regs[261] + 32);
    regs[138] = (int)(temp1172);
    long long int temp1173 = (long long int)regs[138];
    long long int temp1174 = (long long int)0;
    int temp1175;
    if (temp1173 == temp1174) temp1175 = 0;
    else if (temp1173 < temp1174) temp1175 = -1;
    else temp1175 = 1;
    regs[17] = (long long int)(temp1175);
    bool temp1176 = (regs[17] != 0);
    if (temp1176) goto label422;
    // THERE WAS A NOTE HERE
    long long int temp1177 = (long long int)(regs[20] + -8);
    long long int *temp1178 = (long long int *)temp1177;
    regs[262] = (long long int)(*temp1178);
    long long int temp1179 = (long long int)(regs[262] + 32);
    temp1179 = (int)(1);
    long long int temp1180 = (long long int)(regs[20] + -60);
    int *temp1181 = (int *)temp1180;
    long long int temp1182 = (long long int)*temp1181;
    long long int temp1183 = (long long int)0;
    int temp1184;
    if (temp1182 == temp1183) temp1184 = 0;
    else if (temp1182 < temp1183) temp1184 = -1;
    else temp1184 = 1;
    regs[17] = (long long int)(temp1184);
    bool temp1185 = (regs[17] == 0);
    if (temp1185) goto label410;
    // THERE WAS A NOTE HERE
    long long int temp1186 = (long long int)(regs[20] + -12);
    int *temp1187 = (int *)temp1186;
    long long int temp1188 = (long long int)*temp1187;
    long long int temp1189 = (long long int)0;
    int temp1190;
    if (temp1188 == temp1189) temp1190 = 0;
    else if (temp1188 < temp1189) temp1190 = -1;
    else temp1190 = 1;
    regs[17] = (long long int)(temp1190);
    bool temp1191 = (regs[17] == 0);
    if (temp1191) goto label393;
    // THERE WAS A NOTE HERE
    long long int temp1192 = (long long int)(regs[20] + -56);
    long long int *temp1193 = (long long int *)temp1192;
    regs[263] = (long long int)(*temp1193);
    long long int temp1194 = (long long int)(regs[263] + 8);
    regs[139] = (long long int)(temp1194);
    long long int temp1195 = (long long int)(regs[20] + -56);
    long long int *temp1196 = (long long int *)temp1195;
    regs[264] = (long long int)(*temp1196);
    long long int temp1197 = (long long int)(regs[264] + 16);
    regs[140] = (long long int)(temp1197);
    long long int temp1198 = (long long int)(regs[139] + 24);
    temp1198 = (long long int)(regs[140]);
    long long int temp1199 = (long long int)(regs[20] + -56);
    long long int *temp1200 = (long long int *)temp1199;
    regs[265] = (long long int)(*temp1200);
    long long int temp1201 = (long long int)(regs[265] + 16);
    regs[141] = (long long int)(temp1201);
    long long int temp1202 = (long long int)regs[141];
    long long int temp1203 = (long long int)0;
    int temp1204;
    if (temp1202 == temp1203) temp1204 = 0;
    else if (temp1202 < temp1203) temp1204 = -1;
    else temp1204 = 1;
    regs[17] = (long long int)(temp1204);
    bool temp1205 = (regs[17] == 0);
    if (temp1205) goto label410;
    // THERE WAS A NOTE HERE
    long long int temp1206 = (long long int)(regs[20] + -56);
    long long int *temp1207 = (long long int *)temp1206;
    regs[266] = (long long int)(*temp1207);
    long long int temp1208 = (long long int)(regs[266] + 16);
    regs[142] = (long long int)(temp1208);
    long long int temp1209 = (long long int)(regs[20] + -56);
    long long int *temp1210 = (long long int *)temp1209;
    regs[267] = (long long int)(*temp1210);
    long long int temp1211 = (long long int)(regs[267] + 8);
    regs[143] = (long long int)(temp1211);
    long long int temp1212 = (long long int)(regs[142] + 8);
    temp1212 = (long long int)(regs[143]);
    goto label410;
    // THERE WAS A BARRIER HERE
    label393:
    // THERE WAS A NOTE HERE
    long long int temp1213 = (long long int)(regs[20] + -56);
    long long int *temp1214 = (long long int *)temp1213;
    regs[268] = (long long int)(*temp1214);
    long long int temp1215 = (long long int)(regs[268] + 8);
    regs[144] = (long long int)(temp1215);
    long long int temp1216 = (long long int)(regs[20] + -56);
    long long int *temp1217 = (long long int *)temp1216;
    regs[269] = (long long int)(*temp1217);
    long long int temp1218 = (long long int)(regs[269] + 24);
    regs[145] = (long long int)(temp1218);
    long long int temp1219 = (long long int)(regs[144] + 16);
    temp1219 = (long long int)(regs[145]);
    long long int temp1220 = (long long int)(regs[20] + -56);
    long long int *temp1221 = (long long int *)temp1220;
    regs[270] = (long long int)(*temp1221);
    long long int temp1222 = (long long int)(regs[270] + 24);
    regs[146] = (long long int)(temp1222);
    long long int temp1223 = (long long int)regs[146];
    long long int temp1224 = (long long int)0;
    int temp1225;
    if (temp1223 == temp1224) temp1225 = 0;
    else if (temp1223 < temp1224) temp1225 = -1;
    else temp1225 = 1;
    regs[17] = (long long int)(temp1225);
    bool temp1226 = (regs[17] == 0);
    if (temp1226) goto label410;
    // THERE WAS A NOTE HERE
    long long int temp1227 = (long long int)(regs[20] + -56);
    long long int *temp1228 = (long long int *)temp1227;
    regs[271] = (long long int)(*temp1228);
    long long int temp1229 = (long long int)(regs[271] + 24);
    regs[147] = (long long int)(temp1229);
    long long int temp1230 = (long long int)(regs[20] + -56);
    long long int *temp1231 = (long long int *)temp1230;
    regs[272] = (long long int)(*temp1231);
    long long int temp1232 = (long long int)(regs[272] + 8);
    regs[148] = (long long int)(temp1232);
    long long int temp1233 = (long long int)(regs[147] + 8);
    temp1233 = (long long int)(regs[148]);
    label410:
    // THERE WAS A NOTE HERE
    long long int temp1234 = (long long int)(regs[20] + -72);
    long long int *temp1235 = (long long int *)temp1234;
    regs[273] = (long long int)(*temp1235);
    long long int temp1236 = (long long int)(regs[20] + -12);
    int *temp1237 = (int *)temp1236;
    regs[274] = (int)(*temp1237);
    long long int temp1238 = (long long int)(regs[20] + -24);
    long long int *temp1239 = (long long int *)temp1238;
    regs[275] = (long long int)(*temp1239);
    regs[2] = (long long int)(regs[273]);
    regs[1] = (int)(regs[274]);
    regs[4] = (int)(0);
    regs[5] = (long long int)(regs[275]);
    checkForCase2(regs[5], (int)regs[4], (int)regs[1], regs[2]);
    goto label533;
    // THERE WAS A BARRIER HERE
    label422:
    // THERE WAS A NOTE HERE
    long long int temp1240 = (long long int)(regs[20] + -12);
    int *temp1241 = (int *)temp1240;
    long long int temp1242 = (long long int)*temp1241;
    long long int temp1243 = (long long int)0;
    int temp1244;
    if (temp1242 == temp1243) temp1244 = 0;
    else if (temp1242 < temp1243) temp1244 = -1;
    else temp1244 = 1;
    regs[17] = (long long int)(temp1244);
    bool temp1245 = (regs[17] == 0);
    if (temp1245) goto label474;
    // THERE WAS A NOTE HERE
    long long int temp1246 = (long long int)(regs[20] + -56);
    long long int *temp1247 = (long long int *)temp1246;
    regs[276] = (long long int)(*temp1247);
    long long int temp1248 = (long long int)(regs[276] + 8);
    regs[149] = (long long int)(temp1248);
    long long int temp1249 = (long long int)(regs[20] + -56);
    long long int *temp1250 = (long long int *)temp1249;
    regs[277] = (long long int)(*temp1250);
    long long int temp1251 = (long long int)(regs[277] + 16);
    regs[150] = (long long int)(temp1251);
    long long int temp1252 = (long long int)(regs[149] + 24);
    temp1252 = (long long int)(regs[150]);
    long long int temp1253 = (long long int)(regs[20] + -56);
    long long int *temp1254 = (long long int *)temp1253;
    regs[278] = (long long int)(*temp1254);
    long long int temp1255 = (long long int)(regs[278] + 16);
    regs[151] = (long long int)(temp1255);
    long long int temp1256 = (long long int)regs[151];
    long long int temp1257 = (long long int)0;
    int temp1258;
    if (temp1256 == temp1257) temp1258 = 0;
    else if (temp1256 < temp1257) temp1258 = -1;
    else temp1258 = 1;
    regs[17] = (long long int)(temp1258);
    bool temp1259 = (regs[17] == 0);
    if (temp1259) goto label442;
    // THERE WAS A NOTE HERE
    long long int temp1260 = (long long int)(regs[20] + -56);
    long long int *temp1261 = (long long int *)temp1260;
    regs[279] = (long long int)(*temp1261);
    long long int temp1262 = (long long int)(regs[279] + 16);
    regs[152] = (long long int)(temp1262);
    long long int temp1263 = (long long int)(regs[20] + -56);
    long long int *temp1264 = (long long int *)temp1263;
    regs[280] = (long long int)(*temp1264);
    long long int temp1265 = (long long int)(regs[280] + 8);
    regs[153] = (long long int)(temp1265);
    long long int temp1266 = (long long int)(regs[152] + 8);
    temp1266 = (long long int)(regs[153]);
    label442:
    // THERE WAS A NOTE HERE
    long long int temp1267 = (long long int)(regs[20] + -8);
    long long int *temp1268 = (long long int *)temp1267;
    regs[281] = (long long int)(*temp1268);
    regs[5] = (long long int)(regs[281]);
    long long int temp1269 = rightRotate(regs[5]);
    regs[0] = (long long int)temp1269;
    regs[282] = (long long int)(regs[0]);
    long long int temp1270 = (long long int)(regs[20] + -24);
    long long int *temp1271 = (long long int *)temp1270;
    *temp1271 = (long long int)(regs[282]);
    long long int temp1272 = (long long int)(regs[20] + -24);
    long long int *temp1273 = (long long int *)temp1272;
    regs[283] = (long long int)(*temp1273);
    long long int temp1274 = (long long int)(regs[283] + 8);
    regs[154] = (long long int)(temp1274);
    long long int temp1275 = (long long int)regs[154];
    long long int temp1276 = (long long int)0;
    int temp1277;
    if (temp1275 == temp1276) temp1277 = 0;
    else if (temp1275 < temp1276) temp1277 = -1;
    else temp1277 = 1;
    regs[17] = (long long int)(temp1277);
    bool temp1278 = (regs[17] != 0);
    if (temp1278) goto label457;
    // THERE WAS A NOTE HERE
    long long int temp1279 = (long long int)(regs[20] + -72);
    long long int *temp1280 = (long long int *)temp1279;
    regs[284] = (long long int)(*temp1280);
    long long int temp1281 = (long long int)(regs[20] + -24);
    long long int *temp1282 = (long long int *)temp1281;
    regs[285] = (long long int)(*temp1282);
    regs[284] = (long long int)(regs[285]);
    label457:
    // THERE WAS A NOTE HERE
    long long int temp1283 = (long long int)(regs[20] + -24);
    long long int *temp1284 = (long long int *)temp1283;
    regs[286] = (long long int)(*temp1284);
    long long int temp1285 = (long long int)(regs[286] + 32);
    temp1285 = (int)(0);
    long long int temp1286 = (long long int)(regs[20] + -24);
    long long int *temp1287 = (long long int *)temp1286;
    regs[287] = (long long int)(*temp1287);
    long long int temp1288 = (long long int)(regs[287] + 24);
    regs[155] = (long long int)(temp1288);
    long long int temp1289 = (long long int)(regs[155] + 32);
    temp1289 = (int)(1);
    long long int temp1290 = (long long int)(regs[20] + -24);
    long long int *temp1291 = (long long int *)temp1290;
    regs[288] = (long long int)(*temp1291);
    long long int temp1292 = (long long int)(regs[288] + 24);
    regs[156] = (long long int)(temp1292);
    long long int temp1293 = (long long int)(regs[20] + -72);
    long long int *temp1294 = (long long int *)temp1293;
    regs[289] = (long long int)(*temp1294);
    regs[2] = (long long int)(regs[289]);
    regs[1] = (int)(1);
    regs[4] = (int)(0);
    regs[5] = (long long int)(regs[156]);
    checkForCase2(regs[5], (int)regs[4], (int)regs[1], regs[2]);
    goto label533;
    // THERE WAS A BARRIER HERE
    label474:
    // THERE WAS A NOTE HERE
    long long int temp1295 = (long long int)(regs[20] + -56);
    long long int *temp1296 = (long long int *)temp1295;
    regs[290] = (long long int)(*temp1296);
    long long int temp1297 = (long long int)(regs[290] + 8);
    regs[157] = (long long int)(temp1297);
    long long int temp1298 = (long long int)(regs[20] + -56);
    long long int *temp1299 = (long long int *)temp1298;
    regs[291] = (long long int)(*temp1299);
    long long int temp1300 = (long long int)(regs[291] + 24);
    regs[158] = (long long int)(temp1300);
    long long int temp1301 = (long long int)(regs[157] + 16);
    temp1301 = (long long int)(regs[158]);
    long long int temp1302 = (long long int)(regs[20] + -56);
    long long int *temp1303 = (long long int *)temp1302;
    regs[292] = (long long int)(*temp1303);
    long long int temp1304 = (long long int)(regs[292] + 24);
    regs[159] = (long long int)(temp1304);
    long long int temp1305 = (long long int)regs[159];
    long long int temp1306 = (long long int)0;
    int temp1307;
    if (temp1305 == temp1306) temp1307 = 0;
    else if (temp1305 < temp1306) temp1307 = -1;
    else temp1307 = 1;
    regs[17] = (long long int)(temp1307);
    bool temp1308 = (regs[17] == 0);
    if (temp1308) goto label491;
    // THERE WAS A NOTE HERE
    long long int temp1309 = (long long int)(regs[20] + -56);
    long long int *temp1310 = (long long int *)temp1309;
    regs[293] = (long long int)(*temp1310);
    long long int temp1311 = (long long int)(regs[293] + 24);
    regs[160] = (long long int)(temp1311);
    long long int temp1312 = (long long int)(regs[20] + -56);
    long long int *temp1313 = (long long int *)temp1312;
    regs[294] = (long long int)(*temp1313);
    long long int temp1314 = (long long int)(regs[294] + 8);
    regs[161] = (long long int)(temp1314);
    long long int temp1315 = (long long int)(regs[160] + 8);
    temp1315 = (long long int)(regs[161]);
    label491:
    // THERE WAS A NOTE HERE
    long long int temp1316 = (long long int)(regs[20] + -8);
    long long int *temp1317 = (long long int *)temp1316;
    regs[295] = (long long int)(*temp1317);
    regs[5] = (long long int)(regs[295]);
    long long int temp1318 = leftRotate(regs[5]);
    regs[0] = (long long int)temp1318;
    regs[296] = (long long int)(regs[0]);
    long long int temp1319 = (long long int)(regs[20] + -24);
    long long int *temp1320 = (long long int *)temp1319;
    *temp1320 = (long long int)(regs[296]);
    long long int temp1321 = (long long int)(regs[20] + -24);
    long long int *temp1322 = (long long int *)temp1321;
    regs[297] = (long long int)(*temp1322);
    long long int temp1323 = (long long int)(regs[297] + 8);
    regs[162] = (long long int)(temp1323);
    long long int temp1324 = (long long int)regs[162];
    long long int temp1325 = (long long int)0;
    int temp1326;
    if (temp1324 == temp1325) temp1326 = 0;
    else if (temp1324 < temp1325) temp1326 = -1;
    else temp1326 = 1;
    regs[17] = (long long int)(temp1326);
    bool temp1327 = (regs[17] != 0);
    if (temp1327) goto label506;
    // THERE WAS A NOTE HERE
    long long int temp1328 = (long long int)(regs[20] + -72);
    long long int *temp1329 = (long long int *)temp1328;
    regs[298] = (long long int)(*temp1329);
    long long int temp1330 = (long long int)(regs[20] + -24);
    long long int *temp1331 = (long long int *)temp1330;
    regs[299] = (long long int)(*temp1331);
    regs[298] = (long long int)(regs[299]);
    label506:
    // THERE WAS A NOTE HERE
    long long int temp1332 = (long long int)(regs[20] + -24);
    long long int *temp1333 = (long long int *)temp1332;
    regs[300] = (long long int)(*temp1333);
    long long int temp1334 = (long long int)(regs[300] + 16);
    regs[163] = (long long int)(temp1334);
    regs[164] = (int)(regs[163]);
    long long int temp1335 = (long long int)(regs[20] + -24);
    long long int *temp1336 = (long long int *)temp1335;
    regs[301] = (long long int)(*temp1336);
    regs[165] = (int)(regs[301]);
    regs[1] = (int)(regs[164]);
    regs[4] = (int)(regs[165]);
    long long int temp1337 = externSymbolTable["*.LC0"];
    regs[5] = (long long int)(temp1337);
    regs[0] = (char)(0);
    int temp1338 = printf((char)regs[0], regs[5], (int)regs[4], (int)regs[1]);
    regs[0] = (long long int)temp1338;
    long long int temp1339 = (long long int)(regs[20] + -24);
    long long int *temp1340 = (long long int *)temp1339;
    regs[302] = (long long int)(*temp1340);
    long long int temp1341 = (long long int)(regs[302] + 32);
    temp1341 = (int)(0);
    long long int temp1342 = (long long int)(regs[20] + -24);
    long long int *temp1343 = (long long int *)temp1342;
    regs[303] = (long long int)(*temp1343);
    long long int temp1344 = (long long int)(regs[303] + 16);
    regs[166] = (long long int)(temp1344);
    long long int temp1345 = (long long int)(regs[166] + 32);
    temp1345 = (int)(1);
    long long int temp1346 = (long long int)(regs[20] + -24);
    long long int *temp1347 = (long long int *)temp1346;
    regs[304] = (long long int)(*temp1347);
    long long int temp1348 = (long long int)(regs[304] + 16);
    regs[167] = (long long int)(temp1348);
    long long int temp1349 = (long long int)(regs[20] + -72);
    long long int *temp1350 = (long long int *)temp1349;
    regs[305] = (long long int)(*temp1350);
    regs[2] = (long long int)(regs[305]);
    regs[1] = (int)(0);
    regs[4] = (int)(0);
    regs[5] = (long long int)(regs[167]);
    checkForCase2(regs[5], (int)regs[4], (int)regs[1], regs[2]);
    label533:
    // THERE WAS A NOTE HERE
}
void deleteNode(int arg0, int arg1) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1351 = (long long int)(regs[20] + -20);
    int *temp1352 = (int *)temp1351;
    *temp1352 = (int)(regs[5]);
    long long int temp1353 = (long long int)(regs[20] + -32);
    long long int *temp1354 = (long long int *)temp1353;
    *temp1354 = (long long int)(regs[4]);
    // THERE WAS A NOTE HERE
    long long int temp1355 = (long long int)(regs[20] + -32);
    long long int *temp1356 = (long long int *)temp1355;
    regs[125] = (long long int)(*temp1356);
    regs[126] = (long long int)(regs[125]);
    long long int temp1357 = (long long int)(regs[20] + -8);
    long long int *temp1358 = (long long int *)temp1357;
    *temp1358 = (long long int)(regs[126]);
    label63:
    // THERE WAS A NOTE HERE
    long long int temp1359 = (long long int)(regs[20] + -8);
    long long int *temp1360 = (long long int *)temp1359;
    regs[127] = (long long int)(*temp1360);
    regs[87] = (int)(regs[127]);
    long long int temp1361 = (long long int)(regs[20] + -20);
    int *temp1362 = (int *)temp1361;
    long long int temp1363 = (long long int)*temp1362;
    long long int temp1364 = (long long int)regs[87];
    int temp1365;
    if (temp1363 == temp1364) temp1365 = 0;
    else if (temp1363 < temp1364) temp1365 = -1;
    else temp1365 = 1;
    regs[17] = (long long int)(temp1365);
    bool temp1366 = (regs[17] != 0);
    if (temp1366) goto label18;
    // THERE WAS A NOTE HERE
    goto label66;
    // THERE WAS A BARRIER HERE
    label18:
    // THERE WAS A NOTE HERE
    long long int temp1367 = (long long int)(regs[20] + -8);
    long long int *temp1368 = (long long int *)temp1367;
    regs[128] = (long long int)(*temp1368);
    regs[88] = (int)(regs[128]);
    long long int temp1369 = (long long int)(regs[20] + -20);
    int *temp1370 = (int *)temp1369;
    long long int temp1371 = (long long int)*temp1370;
    long long int temp1372 = (long long int)regs[88];
    int temp1373;
    if (temp1371 == temp1372) temp1373 = 0;
    else if (temp1371 < temp1372) temp1373 = -1;
    else temp1373 = 1;
    regs[17] = (long long int)(temp1373);
    bool temp1374 = (regs[17] <= 0);
    if (temp1374) goto label42;
    // THERE WAS A NOTE HERE
    long long int temp1375 = (long long int)(regs[20] + -8);
    long long int *temp1376 = (long long int *)temp1375;
    regs[129] = (long long int)(*temp1376);
    long long int temp1377 = (long long int)(regs[129] + 24);
    regs[89] = (long long int)(temp1377);
    long long int temp1378 = (long long int)regs[89];
    long long int temp1379 = (long long int)0;
    int temp1380;
    if (temp1378 == temp1379) temp1380 = 0;
    else if (temp1378 < temp1379) temp1380 = -1;
    else temp1380 = 1;
    regs[17] = (long long int)(temp1380);
    bool temp1381 = (regs[17] == 0);
    if (temp1381) goto label35;
    // THERE WAS A NOTE HERE
    long long int temp1382 = (long long int)(regs[20] + -8);
    long long int *temp1383 = (long long int *)temp1382;
    regs[130] = (long long int)(*temp1383);
    long long int temp1384 = (long long int)(regs[130] + 24);
    regs[131] = (long long int)(temp1384);
    long long int temp1385 = (long long int)(regs[20] + -8);
    long long int *temp1386 = (long long int *)temp1385;
    *temp1386 = (long long int)(regs[131]);
    goto label61;
    // THERE WAS A BARRIER HERE
    label35:
    // THERE WAS A NOTE HERE
    long long int temp1387 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp1387);
    regs[0] = (char)(0);
    int temp1388 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1388;
    goto label257;
    // THERE WAS A BARRIER HERE
    label42:
    // THERE WAS A NOTE HERE
    long long int temp1389 = (long long int)(regs[20] + -8);
    long long int *temp1390 = (long long int *)temp1389;
    regs[132] = (long long int)(*temp1390);
    long long int temp1391 = (long long int)(regs[132] + 16);
    regs[90] = (long long int)(temp1391);
    long long int temp1392 = (long long int)regs[90];
    long long int temp1393 = (long long int)0;
    int temp1394;
    if (temp1392 == temp1393) temp1394 = 0;
    else if (temp1392 < temp1393) temp1394 = -1;
    else temp1394 = 1;
    regs[17] = (long long int)(temp1394);
    bool temp1395 = (regs[17] == 0);
    if (temp1395) goto label54;
    // THERE WAS A NOTE HERE
    long long int temp1396 = (long long int)(regs[20] + -8);
    long long int *temp1397 = (long long int *)temp1396;
    regs[133] = (long long int)(*temp1397);
    long long int temp1398 = (long long int)(regs[133] + 16);
    regs[134] = (long long int)(temp1398);
    long long int temp1399 = (long long int)(regs[20] + -8);
    long long int *temp1400 = (long long int *)temp1399;
    *temp1400 = (long long int)(regs[134]);
    goto label61;
    // THERE WAS A BARRIER HERE
    label54:
    // THERE WAS A NOTE HERE
    long long int temp1401 = externSymbolTable["*.LC1"];
    regs[5] = (long long int)(temp1401);
    regs[0] = (char)(0);
    int temp1402 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1402;
    goto label257;
    // THERE WAS A BARRIER HERE
    label61:
    // THERE WAS A NOTE HERE
    goto label63;
    // THERE WAS A BARRIER HERE
    label66:
    // THERE WAS A NOTE HERE
    long long int temp1403 = (long long int)(regs[20] + -8);
    long long int *temp1404 = (long long int *)temp1403;
    regs[135] = (long long int)(*temp1404);
    long long int temp1405 = (long long int)(regs[20] + -16);
    long long int *temp1406 = (long long int *)temp1405;
    *temp1406 = (long long int)(regs[135]);
    long long int temp1407 = (long long int)(regs[20] + -16);
    long long int *temp1408 = (long long int *)temp1407;
    regs[136] = (long long int)(*temp1408);
    long long int temp1409 = (long long int)(regs[136] + 16);
    regs[91] = (long long int)(temp1409);
    long long int temp1410 = (long long int)regs[91];
    long long int temp1411 = (long long int)0;
    int temp1412;
    if (temp1410 == temp1411) temp1412 = 0;
    else if (temp1410 < temp1411) temp1412 = -1;
    else temp1412 = 1;
    regs[17] = (long long int)(temp1412);
    bool temp1413 = (regs[17] == 0);
    if (temp1413) goto label94;
    // THERE WAS A NOTE HERE
    long long int temp1414 = (long long int)(regs[20] + -16);
    long long int *temp1415 = (long long int *)temp1414;
    regs[137] = (long long int)(*temp1415);
    long long int temp1416 = (long long int)(regs[137] + 16);
    regs[138] = (long long int)(temp1416);
    long long int temp1417 = (long long int)(regs[20] + -16);
    long long int *temp1418 = (long long int *)temp1417;
    *temp1418 = (long long int)(regs[138]);
    goto label84;
    // THERE WAS A BARRIER HERE
    label88:
    // THERE WAS A NOTE HERE
    long long int temp1419 = (long long int)(regs[20] + -16);
    long long int *temp1420 = (long long int *)temp1419;
    regs[139] = (long long int)(*temp1420);
    long long int temp1421 = (long long int)(regs[139] + 24);
    regs[140] = (long long int)(temp1421);
    long long int temp1422 = (long long int)(regs[20] + -16);
    long long int *temp1423 = (long long int *)temp1422;
    *temp1423 = (long long int)(regs[140]);
    label84:
    // THERE WAS A NOTE HERE
    long long int temp1424 = (long long int)(regs[20] + -16);
    long long int *temp1425 = (long long int *)temp1424;
    regs[141] = (long long int)(*temp1425);
    long long int temp1426 = (long long int)(regs[141] + 24);
    regs[92] = (long long int)(temp1426);
    long long int temp1427 = (long long int)regs[92];
    long long int temp1428 = (long long int)0;
    int temp1429;
    if (temp1427 == temp1428) temp1429 = 0;
    else if (temp1427 < temp1428) temp1429 = -1;
    else temp1429 = 1;
    regs[17] = (long long int)(temp1429);
    bool temp1430 = (regs[17] != 0);
    if (temp1430) goto label88;
    // THERE WAS A NOTE HERE
    goto label117;
    // THERE WAS A BARRIER HERE
    label94:
    // THERE WAS A NOTE HERE
    long long int temp1431 = (long long int)(regs[20] + -16);
    long long int *temp1432 = (long long int *)temp1431;
    regs[142] = (long long int)(*temp1432);
    long long int temp1433 = (long long int)(regs[142] + 24);
    regs[93] = (long long int)(temp1433);
    long long int temp1434 = (long long int)regs[93];
    long long int temp1435 = (long long int)0;
    int temp1436;
    if (temp1434 == temp1435) temp1436 = 0;
    else if (temp1434 < temp1435) temp1436 = -1;
    else temp1436 = 1;
    regs[17] = (long long int)(temp1436);
    bool temp1437 = (regs[17] == 0);
    if (temp1437) goto label117;
    // THERE WAS A NOTE HERE
    long long int temp1438 = (long long int)(regs[20] + -16);
    long long int *temp1439 = (long long int *)temp1438;
    regs[143] = (long long int)(*temp1439);
    long long int temp1440 = (long long int)(regs[143] + 24);
    regs[144] = (long long int)(temp1440);
    long long int temp1441 = (long long int)(regs[20] + -16);
    long long int *temp1442 = (long long int *)temp1441;
    *temp1442 = (long long int)(regs[144]);
    goto label110;
    // THERE WAS A BARRIER HERE
    label114:
    // THERE WAS A NOTE HERE
    long long int temp1443 = (long long int)(regs[20] + -16);
    long long int *temp1444 = (long long int *)temp1443;
    regs[145] = (long long int)(*temp1444);
    long long int temp1445 = (long long int)(regs[145] + 16);
    regs[146] = (long long int)(temp1445);
    long long int temp1446 = (long long int)(regs[20] + -16);
    long long int *temp1447 = (long long int *)temp1446;
    *temp1447 = (long long int)(regs[146]);
    label110:
    // THERE WAS A NOTE HERE
    long long int temp1448 = (long long int)(regs[20] + -16);
    long long int *temp1449 = (long long int *)temp1448;
    regs[147] = (long long int)(*temp1449);
    long long int temp1450 = (long long int)(regs[147] + 16);
    regs[94] = (long long int)(temp1450);
    long long int temp1451 = (long long int)regs[94];
    long long int temp1452 = (long long int)0;
    int temp1453;
    if (temp1451 == temp1452) temp1453 = 0;
    else if (temp1451 < temp1452) temp1453 = -1;
    else temp1453 = 1;
    regs[17] = (long long int)(temp1453);
    bool temp1454 = (regs[17] != 0);
    if (temp1454) goto label114;
    label117:
    // THERE WAS A NOTE HERE
    long long int temp1455 = (long long int)(regs[20] + -32);
    long long int *temp1456 = (long long int *)temp1455;
    regs[148] = (long long int)(*temp1456);
    regs[95] = (long long int)(regs[148]);
    long long int temp1457 = (long long int)(regs[20] + -16);
    long long int *temp1458 = (long long int *)temp1457;
    long long int temp1459 = (long long int)*temp1458;
    long long int temp1460 = (long long int)regs[95];
    int temp1461;
    if (temp1459 == temp1460) temp1461 = 0;
    else if (temp1459 < temp1460) temp1461 = -1;
    else temp1461 = 1;
    regs[17] = (long long int)(temp1461);
    bool temp1462 = (regs[17] != 0);
    if (temp1462) goto label128;
    // THERE WAS A NOTE HERE
    long long int temp1463 = (long long int)(regs[20] + -32);
    long long int *temp1464 = (long long int *)temp1463;
    regs[149] = (long long int)(*temp1464);
    regs[149] = (long long int)(0);
    goto label257;
    // THERE WAS A BARRIER HERE
    label128:
    // THERE WAS A NOTE HERE
    long long int temp1465 = (long long int)(regs[20] + -16);
    long long int *temp1466 = (long long int *)temp1465;
    regs[150] = (long long int)(*temp1466);
    regs[96] = (int)(regs[150]);
    long long int temp1467 = (long long int)(regs[20] + -8);
    long long int *temp1468 = (long long int *)temp1467;
    regs[151] = (long long int)(*temp1468);
    regs[151] = (int)(regs[96]);
    long long int temp1469 = (long long int)(regs[20] + -16);
    long long int *temp1470 = (long long int *)temp1469;
    regs[152] = (long long int)(*temp1470);
    long long int temp1471 = (long long int)(regs[20] + -20);
    int *temp1472 = (int *)temp1471;
    regs[153] = (int)(*temp1472);
    regs[152] = (int)(regs[153]);
    long long int temp1473 = (long long int)(regs[20] + -16);
    long long int *temp1474 = (long long int *)temp1473;
    regs[154] = (long long int)(*temp1474);
    long long int temp1475 = (long long int)(regs[154] + 32);
    regs[97] = (int)(temp1475);
    long long int temp1476 = (long long int)regs[97];
    long long int temp1477 = (long long int)1;
    int temp1478;
    if (temp1476 == temp1477) temp1478 = 0;
    else if (temp1476 < temp1477) temp1478 = -1;
    else temp1478 = 1;
    regs[17] = (long long int)(temp1478);
    bool temp1479 = (regs[17] == 0);
    if (temp1479) goto label164;
    // THERE WAS A NOTE HERE
    long long int temp1480 = (long long int)(regs[20] + -16);
    long long int *temp1481 = (long long int *)temp1480;
    regs[155] = (long long int)(*temp1481);
    long long int temp1482 = (long long int)(regs[155] + 16);
    regs[98] = (long long int)(temp1482);
    long long int temp1483 = (long long int)regs[98];
    long long int temp1484 = (long long int)0;
    int temp1485;
    if (temp1483 == temp1484) temp1485 = 0;
    else if (temp1483 < temp1484) temp1485 = -1;
    else temp1485 = 1;
    regs[17] = (long long int)(temp1485);
    bool temp1486 = (regs[17] == 0);
    if (temp1486) goto label152;
    // THERE WAS A NOTE HERE
    long long int temp1487 = (long long int)(regs[20] + -16);
    long long int *temp1488 = (long long int *)temp1487;
    regs[156] = (long long int)(*temp1488);
    long long int temp1489 = (long long int)(regs[156] + 16);
    regs[99] = (long long int)(temp1489);
    long long int temp1490 = (long long int)(regs[99] + 32);
    regs[100] = (int)(temp1490);
    long long int temp1491 = (long long int)regs[100];
    long long int temp1492 = (long long int)1;
    int temp1493;
    if (temp1491 == temp1492) temp1493 = 0;
    else if (temp1491 < temp1492) temp1493 = -1;
    else temp1493 = 1;
    regs[17] = (long long int)(temp1493);
    bool temp1494 = (regs[17] == 0);
    if (temp1494) goto label164;
    label152:
    // THERE WAS A NOTE HERE
    long long int temp1495 = (long long int)(regs[20] + -16);
    long long int *temp1496 = (long long int *)temp1495;
    regs[157] = (long long int)(*temp1496);
    long long int temp1497 = (long long int)(regs[157] + 24);
    regs[101] = (long long int)(temp1497);
    long long int temp1498 = (long long int)regs[101];
    long long int temp1499 = (long long int)0;
    int temp1500;
    if (temp1498 == temp1499) temp1500 = 0;
    else if (temp1498 < temp1499) temp1500 = -1;
    else temp1500 = 1;
    regs[17] = (long long int)(temp1500);
    bool temp1501 = (regs[17] == 0);
    if (temp1501) goto label240;
    // THERE WAS A NOTE HERE
    long long int temp1502 = (long long int)(regs[20] + -16);
    long long int *temp1503 = (long long int *)temp1502;
    regs[158] = (long long int)(*temp1503);
    long long int temp1504 = (long long int)(regs[158] + 24);
    regs[102] = (long long int)(temp1504);
    long long int temp1505 = (long long int)(regs[102] + 32);
    regs[103] = (int)(temp1505);
    long long int temp1506 = (long long int)regs[103];
    long long int temp1507 = (long long int)1;
    int temp1508;
    if (temp1506 == temp1507) temp1508 = 0;
    else if (temp1506 < temp1507) temp1508 = -1;
    else temp1508 = 1;
    regs[17] = (long long int)(temp1508);
    bool temp1509 = (regs[17] != 0);
    if (temp1509) goto label240;
    label164:
    // THERE WAS A NOTE HERE
    long long int temp1510 = (long long int)(regs[20] + -16);
    long long int *temp1511 = (long long int *)temp1510;
    regs[159] = (long long int)(*temp1511);
    long long int temp1512 = (long long int)(regs[159] + 16);
    regs[104] = (long long int)(temp1512);
    long long int temp1513 = (long long int)regs[104];
    long long int temp1514 = (long long int)0;
    int temp1515;
    if (temp1513 == temp1514) temp1515 = 0;
    else if (temp1513 < temp1514) temp1515 = -1;
    else temp1515 = 1;
    regs[17] = (long long int)(temp1515);
    bool temp1516 = (regs[17] != 0);
    if (temp1516) goto label196;
    // THERE WAS A NOTE HERE
    long long int temp1517 = (long long int)(regs[20] + -16);
    long long int *temp1518 = (long long int *)temp1517;
    regs[160] = (long long int)(*temp1518);
    long long int temp1519 = (long long int)(regs[160] + 24);
    regs[105] = (long long int)(temp1519);
    long long int temp1520 = (long long int)regs[105];
    long long int temp1521 = (long long int)0;
    int temp1522;
    if (temp1520 == temp1521) temp1522 = 0;
    else if (temp1520 < temp1521) temp1522 = -1;
    else temp1522 = 1;
    regs[17] = (long long int)(temp1522);
    bool temp1523 = (regs[17] != 0);
    if (temp1523) goto label196;
    // THERE WAS A NOTE HERE
    long long int temp1524 = (long long int)(regs[20] + -16);
    long long int *temp1525 = (long long int *)temp1524;
    regs[161] = (long long int)(*temp1525);
    long long int temp1526 = (long long int)(regs[161] + 8);
    regs[106] = (long long int)(temp1526);
    long long int temp1527 = (long long int)(regs[106] + 16);
    regs[107] = (long long int)(temp1527);
    long long int temp1528 = (long long int)(regs[20] + -16);
    long long int *temp1529 = (long long int *)temp1528;
    long long int temp1530 = (long long int)*temp1529;
    long long int temp1531 = (long long int)regs[107];
    int temp1532;
    if (temp1530 == temp1531) temp1532 = 0;
    else if (temp1530 < temp1531) temp1532 = -1;
    else temp1532 = 1;
    regs[17] = (long long int)(temp1532);
    bool temp1533 = (regs[17] != 0);
    if (temp1533) goto label187;
    // THERE WAS A NOTE HERE
    long long int temp1534 = (long long int)(regs[20] + -16);
    long long int *temp1535 = (long long int *)temp1534;
    regs[162] = (long long int)(*temp1535);
    long long int temp1536 = (long long int)(regs[162] + 8);
    regs[108] = (long long int)(temp1536);
    long long int temp1537 = (long long int)(regs[108] + 16);
    temp1537 = (long long int)(0);
    goto label233;
    // THERE WAS A BARRIER HERE
    label187:
    // THERE WAS A NOTE HERE
    long long int temp1538 = (long long int)(regs[20] + -16);
    long long int *temp1539 = (long long int *)temp1538;
    regs[163] = (long long int)(*temp1539);
    long long int temp1540 = (long long int)(regs[163] + 8);
    regs[109] = (long long int)(temp1540);
    long long int temp1541 = (long long int)(regs[109] + 24);
    temp1541 = (long long int)(0);
    goto label233;
    // THERE WAS A BARRIER HERE
    label196:
    // THERE WAS A NOTE HERE
    long long int temp1542 = (long long int)(regs[20] + -16);
    long long int *temp1543 = (long long int *)temp1542;
    regs[164] = (long long int)(*temp1543);
    long long int temp1544 = (long long int)(regs[164] + 16);
    regs[110] = (long long int)(temp1544);
    long long int temp1545 = (long long int)regs[110];
    long long int temp1546 = (long long int)0;
    int temp1547;
    if (temp1545 == temp1546) temp1547 = 0;
    else if (temp1545 < temp1546) temp1547 = -1;
    else temp1547 = 1;
    regs[17] = (long long int)(temp1547);
    bool temp1548 = (regs[17] == 0);
    if (temp1548) goto label218;
    // THERE WAS A NOTE HERE
    long long int temp1549 = (long long int)(regs[20] + -16);
    long long int *temp1550 = (long long int *)temp1549;
    regs[165] = (long long int)(*temp1550);
    long long int temp1551 = (long long int)(regs[165] + 8);
    regs[111] = (long long int)(temp1551);
    long long int temp1552 = (long long int)(regs[20] + -16);
    long long int *temp1553 = (long long int *)temp1552;
    regs[166] = (long long int)(*temp1553);
    long long int temp1554 = (long long int)(regs[166] + 16);
    regs[112] = (long long int)(temp1554);
    long long int temp1555 = (long long int)(regs[111] + 24);
    temp1555 = (long long int)(regs[112]);
    long long int temp1556 = (long long int)(regs[20] + -16);
    long long int *temp1557 = (long long int *)temp1556;
    regs[167] = (long long int)(*temp1557);
    long long int temp1558 = (long long int)(regs[167] + 16);
    regs[113] = (long long int)(temp1558);
    long long int temp1559 = (long long int)(regs[20] + -16);
    long long int *temp1560 = (long long int *)temp1559;
    regs[168] = (long long int)(*temp1560);
    long long int temp1561 = (long long int)(regs[168] + 8);
    regs[114] = (long long int)(temp1561);
    long long int temp1562 = (long long int)(regs[113] + 8);
    temp1562 = (long long int)(regs[114]);
    long long int temp1563 = (long long int)(regs[20] + -16);
    long long int *temp1564 = (long long int *)temp1563;
    regs[169] = (long long int)(*temp1564);
    long long int temp1565 = (long long int)(regs[169] + 16);
    regs[115] = (long long int)(temp1565);
    long long int temp1566 = (long long int)(regs[115] + 32);
    temp1566 = (int)(1);
    goto label233;
    // THERE WAS A BARRIER HERE
    label218:
    // THERE WAS A NOTE HERE
    long long int temp1567 = (long long int)(regs[20] + -16);
    long long int *temp1568 = (long long int *)temp1567;
    regs[170] = (long long int)(*temp1568);
    long long int temp1569 = (long long int)(regs[170] + 8);
    regs[116] = (long long int)(temp1569);
    long long int temp1570 = (long long int)(regs[20] + -16);
    long long int *temp1571 = (long long int *)temp1570;
    regs[171] = (long long int)(*temp1571);
    long long int temp1572 = (long long int)(regs[171] + 24);
    regs[117] = (long long int)(temp1572);
    long long int temp1573 = (long long int)(regs[116] + 16);
    temp1573 = (long long int)(regs[117]);
    long long int temp1574 = (long long int)(regs[20] + -16);
    long long int *temp1575 = (long long int *)temp1574;
    regs[172] = (long long int)(*temp1575);
    long long int temp1576 = (long long int)(regs[172] + 24);
    regs[118] = (long long int)(temp1576);
    long long int temp1577 = (long long int)(regs[20] + -16);
    long long int *temp1578 = (long long int *)temp1577;
    regs[173] = (long long int)(*temp1578);
    long long int temp1579 = (long long int)(regs[173] + 8);
    regs[119] = (long long int)(temp1579);
    long long int temp1580 = (long long int)(regs[118] + 8);
    temp1580 = (long long int)(regs[119]);
    long long int temp1581 = (long long int)(regs[20] + -16);
    long long int *temp1582 = (long long int *)temp1581;
    regs[174] = (long long int)(*temp1582);
    long long int temp1583 = (long long int)(regs[174] + 24);
    regs[120] = (long long int)(temp1583);
    long long int temp1584 = (long long int)(regs[120] + 32);
    temp1584 = (int)(1);
    label233:
    // THERE WAS A NOTE HERE
    long long int temp1585 = (long long int)(regs[20] + -16);
    long long int *temp1586 = (long long int *)temp1585;
    regs[175] = (long long int)(*temp1586);
    regs[5] = (long long int)(regs[175]);
    free(regs[5]);
    goto label257;
    // THERE WAS A BARRIER HERE
    label240:
    // THERE WAS A NOTE HERE
    long long int temp1587 = (long long int)(regs[20] + -16);
    long long int *temp1588 = (long long int *)temp1587;
    regs[176] = (long long int)(*temp1588);
    long long int temp1589 = (long long int)(regs[176] + 8);
    regs[121] = (long long int)(temp1589);
    long long int temp1590 = (long long int)(regs[121] + 24);
    regs[122] = (long long int)(temp1590);
    long long int temp1591 = (long long int)(regs[20] + -16);
    long long int *temp1592 = (long long int *)temp1591;
    long long int temp1593 = (long long int)*temp1592;
    long long int temp1594 = (long long int)regs[122];
    int temp1595;
    if (temp1593 == temp1594) temp1595 = 0;
    else if (temp1593 < temp1594) temp1595 = -1;
    else temp1595 = 1;
    regs[17] = (long long int)(temp1595);
    temp1596 = (char)(regs[17] == 0);
    regs[123] = (char)(temp1596);
    regs[124] = (int)(regs[123]);
    long long int temp1597 = (long long int)(regs[20] + -32);
    long long int *temp1598 = (long long int *)temp1597;
    regs[177] = (long long int)(*temp1598);
    long long int temp1599 = (long long int)(regs[20] + -16);
    long long int *temp1600 = (long long int *)temp1599;
    regs[178] = (long long int)(*temp1600);
    regs[2] = (long long int)(regs[177]);
    regs[1] = (int)(regs[124]);
    regs[4] = (int)(1);
    regs[5] = (long long int)(regs[178]);
    checkForCase2(regs[5], (int)regs[4], (int)regs[1], regs[2]);
    label257:
    // THERE WAS A NOTE HERE
}
void printInorder(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1601 = (long long int)(regs[20] + -8);
    long long int *temp1602 = (long long int *)temp1601;
    *temp1602 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp1603 = (long long int)(regs[20] + -8);
    long long int *temp1604 = (long long int *)temp1603;
    long long int temp1605 = (long long int)*temp1604;
    long long int temp1606 = (long long int)0;
    int temp1607;
    if (temp1605 == temp1606) temp1607 = 0;
    else if (temp1605 < temp1606) temp1607 = -1;
    else temp1607 = 1;
    regs[17] = (long long int)(temp1607);
    bool temp1608 = (regs[17] == 0);
    if (temp1608) goto label28;
    // THERE WAS A NOTE HERE
    long long int temp1609 = (long long int)(regs[20] + -8);
    long long int *temp1610 = (long long int *)temp1609;
    regs[91] = (long long int)(*temp1610);
    long long int temp1611 = (long long int)(regs[91] + 16);
    regs[87] = (long long int)(temp1611);
    regs[5] = (long long int)(regs[87]);
    printInorder(regs[5]);
    long long int temp1612 = (long long int)(regs[20] + -8);
    long long int *temp1613 = (long long int *)temp1612;
    regs[92] = (long long int)(*temp1613);
    long long int temp1614 = (long long int)(regs[92] + 32);
    regs[88] = (int)(temp1614);
    long long int temp1615 = (long long int)(regs[20] + -8);
    long long int *temp1616 = (long long int *)temp1615;
    regs[93] = (long long int)(*temp1616);
    regs[89] = (int)(regs[93]);
    regs[1] = (int)(regs[88]);
    regs[4] = (int)(regs[89]);
    long long int temp1617 = externSymbolTable["*.LC2"];
    regs[5] = (long long int)(temp1617);
    regs[0] = (char)(0);
    int temp1618 = printf((char)regs[0], regs[5], (int)regs[4], (int)regs[1]);
    regs[0] = (long long int)temp1618;
    long long int temp1619 = (long long int)(regs[20] + -8);
    long long int *temp1620 = (long long int *)temp1619;
    regs[94] = (long long int)(*temp1620);
    long long int temp1621 = (long long int)(regs[94] + 24);
    regs[90] = (long long int)(temp1621);
    regs[5] = (long long int)(regs[90]);
    printInorder(regs[5]);
    label28:
    // THERE WAS A NOTE HERE
}
void checkBlack(long long int arg0, long long int arg1) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1622 = (long long int)(regs[20] + -8);
    long long int *temp1623 = (long long int *)temp1622;
    *temp1623 = (long long int)(regs[5]);
    long long int temp1624 = (long long int)(regs[20] + -12);
    int *temp1625 = (int *)temp1624;
    *temp1625 = (int)(regs[4]);
    // THERE WAS A NOTE HERE
    long long int temp1626 = (long long int)(regs[20] + -8);
    long long int *temp1627 = (long long int *)temp1626;
    long long int temp1628 = (long long int)*temp1627;
    long long int temp1629 = (long long int)0;
    int temp1630;
    if (temp1628 == temp1629) temp1630 = 0;
    else if (temp1628 < temp1629) temp1630 = -1;
    else temp1630 = 1;
    regs[17] = (long long int)(temp1630);
    bool temp1631 = (regs[17] != 0);
    if (temp1631) goto label17;
    // THERE WAS A NOTE HERE
    long long int temp1632 = (long long int)(regs[20] + -12);
    int *temp1633 = (int *)temp1632;
    regs[90] = (int)(*temp1633);
    regs[4] = (int)(regs[90]);
    long long int temp1634 = externSymbolTable["*.LC3"];
    regs[5] = (long long int)(temp1634);
    regs[0] = (char)(0);
    int temp1635 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp1635;
    goto label41;
    // THERE WAS A BARRIER HERE
    label17:
    // THERE WAS A NOTE HERE
    long long int temp1636 = (long long int)(regs[20] + -8);
    long long int *temp1637 = (long long int *)temp1636;
    regs[91] = (long long int)(*temp1637);
    long long int temp1638 = (long long int)(regs[91] + 32);
    regs[87] = (int)(temp1638);
    long long int temp1639 = (long long int)regs[87];
    long long int temp1640 = (long long int)0;
    int temp1641;
    if (temp1639 == temp1640) temp1641 = 0;
    else if (temp1639 < temp1640) temp1641 = -1;
    else temp1641 = 1;
    regs[17] = (long long int)(temp1641);
    bool temp1642 = (regs[17] != 0);
    if (temp1642) goto label25;
    // THERE WAS A NOTE HERE
    // PARALLEL COMMAND BEGIN
    long long int temp1643 = (long long int)(regs[20] + -12);
    int *temp1644 = (int *)temp1643;
    long long int temp1645 = (long long int)(regs[20] + -12);
    int *temp1646 = (int *)temp1645;
    int temp1647 = (int)(*temp1646 + 1);
    *temp1644 = (int)(temp1647);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    label25:
    // THERE WAS A NOTE HERE
    long long int temp1648 = (long long int)(regs[20] + -8);
    long long int *temp1649 = (long long int *)temp1648;
    regs[92] = (long long int)(*temp1649);
    long long int temp1650 = (long long int)(regs[92] + 16);
    regs[88] = (long long int)(temp1650);
    long long int temp1651 = (long long int)(regs[20] + -12);
    int *temp1652 = (int *)temp1651;
    regs[93] = (int)(*temp1652);
    regs[4] = (int)(regs[93]);
    regs[5] = (long long int)(regs[88]);
    checkBlack(regs[5], (int)regs[4]);
    long long int temp1653 = (long long int)(regs[20] + -8);
    long long int *temp1654 = (long long int *)temp1653;
    regs[94] = (long long int)(*temp1654);
    long long int temp1655 = (long long int)(regs[94] + 24);
    regs[89] = (long long int)(temp1655);
    long long int temp1656 = (long long int)(regs[20] + -12);
    int *temp1657 = (int *)temp1656;
    regs[95] = (int)(*temp1657);
    regs[4] = (int)(regs[95]);
    regs[5] = (long long int)(regs[89]);
    checkBlack(regs[5], (int)regs[4]);
    label41:
    // THERE WAS A NOTE HERE
}
int main(int argc, char **argv) {
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp1658 = (long long int)(regs[20] + -8);
    long long int *temp1659 = (long long int *)temp1658;
    *temp1659 = (long long int)(0);
    long long int temp1660 = (long long int)(regs[20] + -16);
    int *temp1661 = (int *)temp1660;
    *temp1661 = (int)(1);
    long long int temp1662 = externSymbolTable["*.LC4"];
    regs[5] = (long long int)(temp1662);
    regs[0] = (char)(0);
    int temp1663 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1663;
    // PARALLEL COMMAND BEGIN
    long long int temp1664 = (long long int)(regs[20] + -16);
    regs[103] = (long long int)(temp1664);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[103]);
    long long int temp1665 = externSymbolTable["*.LC5"];
    regs[5] = (long long int)(temp1665);
    regs[0] = (char)(0);
    int temp1666 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp1666;
    goto label123;
    // THERE WAS A BARRIER HERE
    label126:
    // THERE WAS A NOTE HERE
    long long int temp1667 = (long long int)(regs[20] + -16);
    int *temp1668 = (int *)temp1667;
    regs[87] = (int)(*temp1668);
    long long int temp1669 = (long long int)regs[87];
    long long int temp1670 = (long long int)2;
    int temp1671;
    if (temp1669 == temp1670) temp1671 = 0;
    else if (temp1669 < temp1670) temp1671 = -1;
    else temp1671 = 1;
    regs[17] = (long long int)(temp1671);
    bool temp1672 = (regs[17] == 0);
    if (temp1672) goto label67;
    // THERE WAS A NOTE HERE
    long long int temp1673 = (long long int)regs[87];
    long long int temp1674 = (long long int)3;
    int temp1675;
    if (temp1673 == temp1674) temp1675 = 0;
    else if (temp1673 < temp1674) temp1675 = -1;
    else temp1675 = 1;
    regs[17] = (long long int)(temp1675);
    bool temp1676 = (regs[17] == 0);
    if (temp1676) goto label89;
    // THERE WAS A NOTE HERE
    long long int temp1677 = (long long int)regs[87];
    long long int temp1678 = (long long int)1;
    int temp1679;
    if (temp1677 == temp1678) temp1679 = 0;
    else if (temp1677 < temp1678) temp1679 = -1;
    else temp1679 = 1;
    regs[17] = (long long int)(temp1679);
    bool temp1680 = (regs[17] == 0);
    if (temp1680) goto label27;
    // THERE WAS A NOTE HERE
    goto label101;
    // THERE WAS A BARRIER HERE
    label27:
    // THERE WAS A NOTE HERE
    long long int temp1681 = externSymbolTable["*.LC6"];
    regs[5] = (long long int)(temp1681);
    regs[0] = (char)(0);
    int temp1682 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1682;
    // PARALLEL COMMAND BEGIN
    long long int temp1683 = (long long int)(regs[20] + -12);
    regs[104] = (long long int)(temp1683);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[104]);
    long long int temp1684 = externSymbolTable["*.LC5"];
    regs[5] = (long long int)(temp1684);
    regs[0] = (char)(0);
    int temp1685 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp1685;
    long long int temp1686 = (long long int)(regs[20] + -8);
    long long int *temp1687 = (long long int *)temp1686;
    regs[88] = (long long int)(*temp1687);
    long long int temp1688 = (long long int)regs[88];
    long long int temp1689 = (long long int)0;
    int temp1690;
    if (temp1688 == temp1689) temp1690 = 0;
    else if (temp1688 < temp1689) temp1690 = -1;
    else temp1690 = 1;
    regs[17] = (long long int)(temp1690);
    bool temp1691 = (regs[17] != 0);
    if (temp1691) goto label51;
    // THERE WAS A NOTE HERE
    long long int temp1692 = (long long int)(regs[20] + -12);
    int *temp1693 = (int *)temp1692;
    regs[89] = (int)(*temp1693);
    regs[4] = (long long int)(0);
    regs[5] = (int)(regs[89]);
    long long int temp1694 = newNode((int)regs[5], regs[4]);
    regs[0] = (long long int)temp1694;
    regs[90] = (long long int)(regs[0]);
    long long int temp1695 = (long long int)(regs[20] + -8);
    long long int *temp1696 = (long long int *)temp1695;
    *temp1696 = (long long int)(regs[90]);
    long long int temp1697 = (long long int)(regs[20] + -8);
    long long int *temp1698 = (long long int *)temp1697;
    regs[91] = (long long int)(*temp1698);
    long long int temp1699 = (long long int)(regs[91] + 32);
    temp1699 = (int)(0);
    goto label58;
    // THERE WAS A BARRIER HERE
    label51:
    // THERE WAS A NOTE HERE
    long long int temp1700 = (long long int)(regs[20] + -12);
    int *temp1701 = (int *)temp1700;
    regs[92] = (int)(*temp1701);
    // PARALLEL COMMAND BEGIN
    long long int temp1702 = (long long int)(regs[20] + -8);
    regs[105] = (long long int)(temp1702);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[105]);
    regs[5] = (int)(regs[92]);
    insertNode((int)regs[5], regs[4]);
    label58:
    // THERE WAS A NOTE HERE
    long long int temp1703 = (long long int)(regs[20] + -12);
    int *temp1704 = (int *)temp1703;
    regs[93] = (int)(*temp1704);
    regs[4] = (int)(regs[93]);
    long long int temp1705 = externSymbolTable["*.LC7"];
    regs[5] = (long long int)(temp1705);
    regs[0] = (char)(0);
    int temp1706 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp1706;
    goto label113;
    // THERE WAS A BARRIER HERE
    label67:
    // THERE WAS A NOTE HERE
    long long int temp1707 = externSymbolTable["*.LC8"];
    regs[5] = (long long int)(temp1707);
    regs[0] = (char)(0);
    int temp1708 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1708;
    // PARALLEL COMMAND BEGIN
    long long int temp1709 = (long long int)(regs[20] + -12);
    regs[106] = (long long int)(temp1709);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[106]);
    long long int temp1710 = externSymbolTable["*.LC5"];
    regs[5] = (long long int)(temp1710);
    regs[0] = (char)(0);
    int temp1711 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp1711;
    long long int temp1712 = (long long int)(regs[20] + -12);
    int *temp1713 = (int *)temp1712;
    regs[94] = (int)(*temp1713);
    // PARALLEL COMMAND BEGIN
    long long int temp1714 = (long long int)(regs[20] + -8);
    regs[107] = (long long int)(temp1714);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[107]);
    regs[5] = (int)(regs[94]);
    deleteNode((int)regs[5], regs[4]);
    long long int temp1715 = (long long int)(regs[20] + -12);
    int *temp1716 = (int *)temp1715;
    regs[95] = (int)(*temp1716);
    regs[4] = (int)(regs[95]);
    long long int temp1717 = externSymbolTable["*.LC7"];
    regs[5] = (long long int)(temp1717);
    regs[0] = (char)(0);
    int temp1718 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp1718;
    goto label113;
    // THERE WAS A BARRIER HERE
    label89:
    // THERE WAS A NOTE HERE
    long long int temp1719 = externSymbolTable["*.LC9"];
    regs[5] = (long long int)(temp1719);
    regs[0] = (char)(0);
    int temp1720 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1720;
    long long int temp1721 = (long long int)(regs[20] + -8);
    long long int *temp1722 = (long long int *)temp1721;
    regs[96] = (long long int)(*temp1722);
    regs[5] = (long long int)(regs[96]);
    printInorder(regs[5]);
    long long int temp1723 = externSymbolTable["*.LC10"];
    regs[5] = (long long int)(temp1723);
    int temp1724 = puts(regs[5]);
    regs[0] = (long long int)temp1724;
    goto label113;
    // THERE WAS A BARRIER HERE
    label101:
    // THERE WAS A NOTE HERE
    long long int temp1725 = (long long int)(regs[20] + -8);
    long long int *temp1726 = (long long int *)temp1725;
    regs[97] = (long long int)(*temp1726);
    long long int temp1727 = (long long int)regs[97];
    long long int temp1728 = (long long int)0;
    int temp1729;
    if (temp1727 == temp1728) temp1729 = 0;
    else if (temp1727 < temp1728) temp1729 = -1;
    else temp1729 = 1;
    regs[17] = (long long int)(temp1729);
    bool temp1730 = (regs[17] == 0);
    if (temp1730) goto label113;
    // THERE WAS A NOTE HERE
    long long int temp1731 = (long long int)(regs[20] + -8);
    long long int *temp1732 = (long long int *)temp1731;
    regs[98] = (long long int)(*temp1732);
    regs[99] = (int)(regs[98]);
    regs[4] = (int)(regs[99]);
    long long int temp1733 = externSymbolTable["*.LC11"];
    regs[5] = (long long int)(temp1733);
    regs[0] = (char)(0);
    int temp1734 = printf((char)regs[0], regs[5], (int)regs[4]);
    regs[0] = (long long int)temp1734;
    label113:
    // THERE WAS A NOTE HERE
    long long int temp1735 = externSymbolTable["*.LC4"];
    regs[5] = (long long int)(temp1735);
    regs[0] = (char)(0);
    int temp1736 = printf((char)regs[0], regs[5]);
    regs[0] = (long long int)temp1736;
    // PARALLEL COMMAND BEGIN
    long long int temp1737 = (long long int)(regs[20] + -16);
    regs[108] = (long long int)(temp1737);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[4] = (long long int)(regs[108]);
    long long int temp1738 = externSymbolTable["*.LC5"];
    regs[5] = (long long int)(temp1738);
    regs[0] = (char)(0);
    int temp1739 = *__isoc99_scanf((char)regs[0], regs[5], regs[4]);
    regs[0] = (long long int)temp1739;
    label123:
    // THERE WAS A NOTE HERE
    long long int temp1740 = (long long int)(regs[20] + -16);
    int *temp1741 = (int *)temp1740;
    regs[100] = (int)(*temp1741);
    long long int temp1742 = (long long int)regs[100];
    long long int temp1743 = (long long int)0;
    int temp1744;
    if (temp1742 == temp1743) temp1744 = 0;
    else if (temp1742 < temp1743) temp1744 = -1;
    else temp1744 = 1;
    regs[17] = (long long int)(temp1744);
    bool temp1745 = (regs[17] != 0);
    if (temp1745) goto label126;
    // THERE WAS A NOTE HERE
    regs[101] = (int)(0);
    regs[102] = (int)(regs[101]);
    regs[0] = (int)(regs[102]);
    return (int)(regs[0]);
}
