#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

void my_free(long long int arg0) {
    regs[5] = (long long int)arg0;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(regs[20] + -24);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(regs[5]);
    // THERE WAS A NOTE HERE
    long long int temp2 = (long long int)(regs[20] + -24);
    long long int *temp3 = (long long int *)temp2;
    long long int temp4 = (long long int)*temp3;
    long long int temp5 = (long long int)0;
    int temp6;
    if (temp4 == temp5) temp6 = 0;
    else if (temp4 < temp5) temp6 = -1;
    else temp6 = 1;
    regs[17] = (long long int)(temp6);
    bool temp7 = (regs[17] != 0);
    if (temp7) goto label11;
    // THERE WAS A NOTE HERE
    goto label143;
    // THERE WAS A BARRIER HERE
    label11:
    // THERE WAS A NOTE HERE
    long long int temp8 = (long long int)(regs[20] + -24);
    long long int *temp9 = (long long int *)temp8;
    regs[129] = (long long int)(*temp9);
    // PARALLEL COMMAND BEGIN
    long long int temp10 = (long long int)(regs[129] + -24);
    regs[128] = (long long int)(temp10);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp11 = (long long int)(regs[20] + -8);
    long long int *temp12 = (long long int *)temp11;
    *temp12 = (long long int)(regs[128]);
    long long int temp13 = (long long int)(regs[20] + -8);
    long long int *temp14 = (long long int *)temp13;
    regs[130] = (long long int)(*temp14);
    long long int temp15 = (long long int)(regs[130] + 20);
    temp15 = (int)(0);
    long long int temp16 = (long long int)externSymbolTable["tail"];
    long long int *temp17 = (long long int *)temp16;
    regs[87] = (long long int)(*temp17);
    long long int temp18 = (long long int)(regs[20] + -8);
    long long int *temp19 = (long long int *)temp18;
    long long int temp20 = (long long int)*temp19;
    long long int temp21 = (long long int)regs[87];
    int temp22;
    if (temp20 == temp21) temp22 = 0;
    else if (temp20 < temp21) temp22 = -1;
    else temp22 = 1;
    regs[17] = (long long int)(temp22);
    bool temp23 = (regs[17] != 0);
    if (temp23) goto label53;
    // THERE WAS A NOTE HERE
    long long int temp24 = (long long int)externSymbolTable["head"];
    long long int *temp25 = (long long int *)temp24;
    regs[88] = (long long int)(*temp25);
    long long int temp26 = (long long int)(regs[20] + -8);
    long long int *temp27 = (long long int *)temp26;
    long long int temp28 = (long long int)*temp27;
    long long int temp29 = (long long int)regs[88];
    int temp30;
    if (temp28 == temp29) temp30 = 0;
    else if (temp28 < temp29) temp30 = -1;
    else temp30 = 1;
    regs[17] = (long long int)(temp30);
    bool temp31 = (regs[17] == 0);
    if (temp31) goto label53;
    // THERE WAS A NOTE HERE
    long long int temp32 = (long long int)(regs[20] + -8);
    long long int *temp33 = (long long int *)temp32;
    regs[131] = (long long int)(*temp33);
    long long int temp34 = (long long int)(regs[131] + 8);
    regs[89] = (long long int)(temp34);
    long long int temp35 = (long long int)externSymbolTable["tail"];
    long long int *temp36 = (long long int *)temp35;
    *temp36 = (long long int)(regs[89]);
    long long int temp37 = (long long int)externSymbolTable["tail"];
    long long int *temp38 = (long long int *)temp37;
    regs[90] = (long long int)(*temp38);
    regs[90] = (long long int)(0);
    long long int temp39 = (long long int)(regs[20] + -8);
    long long int *temp40 = (long long int *)temp39;
    regs[132] = (long long int)(*temp40);
    long long int temp41 = (long long int)(regs[132] + 16);
    regs[91] = (int)(temp41);
    // PARALLEL COMMAND BEGIN
    regs[92] = (int)();
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[93] = (long long int)(regs[92]);
    regs[5] = (long long int)(regs[93]);
    long long int temp42 = sbrk(regs[5]);
    regs[0] = (long long int)temp42;
    long long int temp43 = (long long int)externSymbolTable["tail"];
    long long int *temp44 = (long long int *)temp43;
    regs[94] = (long long int)(*temp44);
    long long int temp45 = (long long int)(regs[94] + 20);
    regs[95] = (int)(temp45);
    long long int temp46 = (long long int)regs[95];
    long long int temp47 = (long long int)0;
    int temp48;
    if (temp46 == temp47) temp48 = 0;
    else if (temp46 < temp47) temp48 = -1;
    else temp48 = 1;
    regs[17] = (long long int)(temp48);
    bool temp49 = (regs[17] != 0);
    if (temp49) goto label143;
    // THERE WAS A NOTE HERE
    long long int temp50 = (long long int)externSymbolTable["tail"];
    long long int *temp51 = (long long int *)temp50;
    regs[96] = (long long int)(*temp51);
    // PARALLEL COMMAND BEGIN
    long long int temp52 = (long long int)(regs[96] + 24);
    regs[97] = (long long int)(temp52);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[5] = (long long int)(regs[97]);
    my_free(regs[5]);
    goto label143;
    // THERE WAS A BARRIER HERE
    label53:
    // THERE WAS A NOTE HERE
    long long int temp53 = (long long int)externSymbolTable["tail"];
    long long int *temp54 = (long long int *)temp53;
    regs[98] = (long long int)(*temp54);
    long long int temp55 = (long long int)(regs[20] + -8);
    long long int *temp56 = (long long int *)temp55;
    long long int temp57 = (long long int)*temp56;
    long long int temp58 = (long long int)regs[98];
    int temp59;
    if (temp57 == temp58) temp59 = 0;
    else if (temp57 < temp58) temp59 = -1;
    else temp59 = 1;
    regs[17] = (long long int)(temp59);
    bool temp60 = (regs[17] != 0);
    if (temp60) goto label74;
    // THERE WAS A NOTE HERE
    long long int temp61 = (long long int)externSymbolTable["head"];
    long long int *temp62 = (long long int *)temp61;
    regs[99] = (long long int)(*temp62);
    long long int temp63 = (long long int)(regs[20] + -8);
    long long int *temp64 = (long long int *)temp63;
    long long int temp65 = (long long int)*temp64;
    long long int temp66 = (long long int)regs[99];
    int temp67;
    if (temp65 == temp66) temp67 = 0;
    else if (temp65 < temp66) temp67 = -1;
    else temp67 = 1;
    regs[17] = (long long int)(temp67);
    bool temp68 = (regs[17] != 0);
    if (temp68) goto label74;
    // THERE WAS A NOTE HERE
    long long int temp69 = (long long int)externSymbolTable["tail"];
    long long int *temp70 = (long long int *)temp69;
    *temp70 = (long long int)(0);
    long long int temp71 = (long long int)externSymbolTable["tail"];
    long long int *temp72 = (long long int *)temp71;
    regs[100] = (long long int)(*temp72);
    long long int temp73 = (long long int)externSymbolTable["head"];
    long long int *temp74 = (long long int *)temp73;
    *temp74 = (long long int)(regs[100]);
    long long int temp75 = (long long int)(regs[20] + -8);
    long long int *temp76 = (long long int *)temp75;
    regs[133] = (long long int)(*temp76);
    long long int temp77 = (long long int)(regs[133] + 16);
    regs[101] = (int)(temp77);
    // PARALLEL COMMAND BEGIN
    regs[102] = (int)();
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[103] = (long long int)(regs[102]);
    regs[5] = (long long int)(regs[103]);
    long long int temp78 = sbrk(regs[5]);
    regs[0] = (long long int)temp78;
    goto label143;
    // THERE WAS A BARRIER HERE
    label74:
    // THERE WAS A NOTE HERE
    long long int temp79 = (long long int)(regs[20] + -8);
    long long int *temp80 = (long long int *)temp79;
    regs[134] = (long long int)(*temp80);
    regs[104] = (long long int)(regs[134]);
    long long int temp81 = (long long int)(regs[104] + 20);
    regs[105] = (int)(temp81);
    long long int temp82 = (long long int)regs[105];
    long long int temp83 = (long long int)0;
    int temp84;
    if (temp82 == temp83) temp84 = 0;
    else if (temp82 < temp83) temp84 = -1;
    else temp84 = 1;
    regs[17] = (long long int)(temp84);
    bool temp85 = (regs[17] != 0);
    if (temp85) goto label110;
    // THERE WAS A NOTE HERE
    long long int temp86 = (long long int)(regs[20] + -8);
    long long int *temp87 = (long long int *)temp86;
    regs[135] = (long long int)(*temp87);
    long long int temp88 = (long long int)(regs[135] + 16);
    regs[106] = (int)(temp88);
    long long int temp89 = (long long int)(regs[20] + -8);
    long long int *temp90 = (long long int *)temp89;
    regs[136] = (long long int)(*temp90);
    regs[107] = (long long int)(regs[136]);
    long long int temp91 = (long long int)(regs[107] + 16);
    regs[108] = (int)(temp91);
    // PARALLEL COMMAND BEGIN
    int temp92 = (int)(regs[106] + regs[108]);
    regs[109] = (int)(temp92);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp93 = (long long int)(regs[20] + -8);
    long long int *temp94 = (long long int *)temp93;
    regs[137] = (long long int)(*temp94);
    long long int temp95 = (long long int)(regs[137] + 16);
    temp95 = (int)(regs[109]);
    long long int temp96 = (long long int)(regs[20] + -8);
    long long int *temp97 = (long long int *)temp96;
    regs[138] = (long long int)(*temp97);
    regs[110] = (long long int)(regs[138]);
    regs[111] = (long long int)(regs[110]);
    long long int temp98 = (long long int)(regs[20] + -8);
    long long int *temp99 = (long long int *)temp98;
    regs[139] = (long long int)(*temp99);
    regs[139] = (long long int)(regs[111]);
    long long int temp100 = (long long int)(regs[20] + -8);
    long long int *temp101 = (long long int *)temp100;
    regs[140] = (long long int)(*temp101);
    regs[112] = (long long int)(regs[140]);
    long long int temp102 = (long long int)regs[112];
    long long int temp103 = (long long int)0;
    int temp104;
    if (temp102 == temp103) temp104 = 0;
    else if (temp102 < temp103) temp104 = -1;
    else temp104 = 1;
    regs[17] = (long long int)(temp104);
    bool temp105 = (regs[17] != 0);
    if (temp105) goto label104;
    // THERE WAS A NOTE HERE
    long long int temp106 = (long long int)(regs[20] + -8);
    long long int *temp107 = (long long int *)temp106;
    regs[141] = (long long int)(*temp107);
    long long int temp108 = (long long int)externSymbolTable["tail"];
    long long int *temp109 = (long long int *)temp108;
    *temp109 = (long long int)(regs[141]);
    goto label110;
    // THERE WAS A BARRIER HERE
    label104:
    // THERE WAS A NOTE HERE
    long long int temp110 = (long long int)(regs[20] + -8);
    long long int *temp111 = (long long int *)temp110;
    regs[142] = (long long int)(*temp111);
    regs[113] = (long long int)(regs[142]);
    long long int temp112 = (long long int)(regs[20] + -8);
    long long int *temp113 = (long long int *)temp112;
    regs[143] = (long long int)(*temp113);
    long long int temp114 = (long long int)(regs[113] + 8);
    temp114 = (long long int)(regs[143]);
    label110:
    // THERE WAS A NOTE HERE
    long long int temp115 = (long long int)externSymbolTable["head"];
    long long int *temp116 = (long long int *)temp115;
    regs[114] = (long long int)(*temp116);
    long long int temp117 = (long long int)(regs[20] + -8);
    long long int *temp118 = (long long int *)temp117;
    long long int temp119 = (long long int)*temp118;
    long long int temp120 = (long long int)regs[114];
    int temp121;
    if (temp119 == temp120) temp121 = 0;
    else if (temp119 < temp120) temp121 = -1;
    else temp121 = 1;
    regs[17] = (long long int)(temp121);
    bool temp122 = (regs[17] == 0);
    if (temp122) goto label143;
    // THERE WAS A NOTE HERE
    long long int temp123 = (long long int)(regs[20] + -8);
    long long int *temp124 = (long long int *)temp123;
    regs[144] = (long long int)(*temp124);
    long long int temp125 = (long long int)(regs[144] + 8);
    regs[115] = (long long int)(temp125);
    long long int temp126 = (long long int)(regs[115] + 20);
    regs[116] = (int)(temp126);
    long long int temp127 = (long long int)regs[116];
    long long int temp128 = (long long int)0;
    int temp129;
    if (temp127 == temp128) temp129 = 0;
    else if (temp127 < temp128) temp129 = -1;
    else temp129 = 1;
    regs[17] = (long long int)(temp129);
    bool temp130 = (regs[17] != 0);
    if (temp130) goto label143;
    // THERE WAS A NOTE HERE
    long long int temp131 = (long long int)(regs[20] + -8);
    long long int *temp132 = (long long int *)temp131;
    regs[145] = (long long int)(*temp132);
    long long int temp133 = (long long int)(regs[145] + 8);
    regs[117] = (long long int)(temp133);
    long long int temp134 = (long long int)(regs[117] + 16);
    regs[118] = (int)(temp134);
    long long int temp135 = (long long int)(regs[20] + -8);
    long long int *temp136 = (long long int *)temp135;
    regs[146] = (long long int)(*temp136);
    long long int temp137 = (long long int)(regs[146] + 16);
    regs[119] = (int)(temp137);
    long long int temp138 = (long long int)(regs[20] + -8);
    long long int *temp139 = (long long int *)temp138;
    regs[147] = (long long int)(*temp139);
    long long int temp140 = (long long int)(regs[147] + 8);
    regs[120] = (long long int)(temp140);
    // PARALLEL COMMAND BEGIN
    int temp141 = (int)(regs[118] + regs[119]);
    regs[121] = (int)(temp141);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp142 = (long long int)(regs[120] + 16);
    temp142 = (int)(regs[121]);
    long long int temp143 = (long long int)(regs[20] + -8);
    long long int *temp144 = (long long int *)temp143;
    regs[148] = (long long int)(*temp144);
    long long int temp145 = (long long int)(regs[148] + 8);
    regs[122] = (long long int)(temp145);
    long long int temp146 = (long long int)(regs[20] + -8);
    long long int *temp147 = (long long int *)temp146;
    regs[149] = (long long int)(*temp147);
    regs[123] = (long long int)(regs[149]);
    regs[122] = (long long int)(regs[123]);
    long long int temp148 = (long long int)(regs[20] + -8);
    long long int *temp149 = (long long int *)temp148;
    regs[150] = (long long int)(*temp149);
    regs[124] = (long long int)(regs[150]);
    long long int temp150 = (long long int)(regs[20] + -8);
    long long int *temp151 = (long long int *)temp150;
    regs[151] = (long long int)(*temp151);
    long long int temp152 = (long long int)(regs[151] + 8);
    regs[125] = (long long int)(temp152);
    long long int temp153 = (long long int)(regs[124] + 8);
    temp153 = (long long int)(regs[125]);
    label143:
    // THERE WAS A NOTE HERE
}
