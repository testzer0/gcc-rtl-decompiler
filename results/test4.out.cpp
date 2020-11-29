#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

int binary_search(long long int arg0, int arg1, int arg2, long long int arg3) {
    regs[5] = (long long int)arg0;
    regs[4] = (long long int)arg1;
    regs[1] = (long long int)arg2;
    regs[2] = (long long int)arg3;
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp0 = (long long int)(regs[20] + -24);
    long long int *temp1 = (long long int *)temp0;
    *temp1 = (long long int)(regs[5]);
    long long int temp2 = (long long int)(regs[20] + -28);
    int *temp3 = (int *)temp2;
    *temp3 = (int)(regs[4]);
    long long int temp4 = (long long int)(regs[20] + -32);
    int *temp5 = (int *)temp4;
    *temp5 = (int)(regs[1]);
    long long int temp6 = (long long int)(regs[20] + -36);
    int *temp7 = (int *)temp6;
    *temp7 = (int)(regs[2]);
    // THERE WAS A NOTE HERE
    long long int temp8 = (long long int)(regs[20] + -28);
    int *temp9 = (int *)temp8;
    regs[101] = (int)(*temp9);
    long long int temp10 = (long long int)(regs[20] + -32);
    int *temp11 = (int *)temp10;
    long long int temp12 = (long long int)regs[101];
    long long int temp13 = (long long int)*temp11;
    int temp14;
    if (temp12 == temp13) temp14 = 0;
    else if (temp12 < temp13) temp14 = -1;
    else temp14 = 1;
    regs[17] = (long long int)(temp14);
    bool temp15 = (regs[17] <= 0);
    if (temp15) goto label16;
    // THERE WAS A NOTE HERE
    regs[99] = (int)(-1);
    goto label79;
    // THERE WAS A BARRIER HERE
    label16:
    // THERE WAS A NOTE HERE
    long long int temp16 = (long long int)(regs[20] + -32);
    int *temp17 = (int *)temp16;
    regs[102] = (int)(*temp17);
    // PARALLEL COMMAND BEGIN
    long long int temp18 = (long long int)(regs[20] + -28);
    int *temp19 = (int *)temp18;
    int temp20 = (int)(regs[102] - *temp19);
    regs[87] = (int)(temp20);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp21 = (int)(regs[87] >> 31);
    regs[103] = (int)(temp21);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp22 = (int)(regs[103] + regs[87]);
    regs[104] = (int)(temp22);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    // PARALLEL COMMAND BEGIN
    int temp23 = (int)(regs[104] >> 1);
    regs[105] = (int)(temp23);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[88] = (int)(regs[105]);
    long long int temp24 = (long long int)(regs[20] + -28);
    int *temp25 = (int *)temp24;
    regs[109] = (int)(*temp25);
    // PARALLEL COMMAND BEGIN
    int temp26 = (int)(regs[88] + regs[109]);
    regs[108] = (int)(temp26);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp27 = (long long int)(regs[20] + -4);
    int *temp28 = (int *)temp27;
    *temp28 = (int)(regs[108]);
    long long int temp29 = (long long int)(regs[20] + -4);
    int *temp30 = (int *)temp29;
    regs[110] = (int)(*temp30);
    regs[89] = (long long int)(regs[110]);
    // PARALLEL COMMAND BEGIN
    long long int temp31 = (long long int)(regs[89] << 2);
    regs[90] = (long long int)(temp31);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp32 = (long long int)(regs[20] + -24);
    long long int *temp33 = (long long int *)temp32;
    regs[111] = (long long int)(*temp33);
    // PARALLEL COMMAND BEGIN
    long long int temp34 = (long long int)(regs[90] + regs[111]);
    regs[91] = (long long int)(temp34);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[92] = (int)(regs[91]);
    long long int temp35 = (long long int)(regs[20] + -36);
    int *temp36 = (int *)temp35;
    long long int temp37 = (long long int)*temp36;
    long long int temp38 = (long long int)regs[92];
    int temp39;
    if (temp37 == temp38) temp39 = 0;
    else if (temp37 < temp38) temp39 = -1;
    else temp39 = 1;
    regs[17] = (long long int)(temp39);
    bool temp40 = (regs[17] != 0);
    if (temp40) goto label42;
    // THERE WAS A NOTE HERE
    long long int temp41 = (long long int)(regs[20] + -4);
    int *temp42 = (int *)temp41;
    regs[99] = (int)(*temp42);
    goto label79;
    // THERE WAS A BARRIER HERE
    label42:
    // THERE WAS A NOTE HERE
    long long int temp43 = (long long int)(regs[20] + -4);
    int *temp44 = (int *)temp43;
    regs[112] = (int)(*temp44);
    regs[93] = (long long int)(regs[112]);
    // PARALLEL COMMAND BEGIN
    long long int temp45 = (long long int)(regs[93] << 2);
    regs[94] = (long long int)(temp45);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp46 = (long long int)(regs[20] + -24);
    long long int *temp47 = (long long int *)temp46;
    regs[113] = (long long int)(*temp47);
    // PARALLEL COMMAND BEGIN
    long long int temp48 = (long long int)(regs[94] + regs[113]);
    regs[95] = (long long int)(temp48);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[96] = (int)(regs[95]);
    long long int temp49 = (long long int)(regs[20] + -36);
    int *temp50 = (int *)temp49;
    long long int temp51 = (long long int)*temp50;
    long long int temp52 = (long long int)regs[96];
    int temp53;
    if (temp51 == temp52) temp53 = 0;
    else if (temp51 < temp52) temp53 = -1;
    else temp53 = 1;
    regs[17] = (long long int)(temp53);
    bool temp54 = (regs[17] <= 0);
    if (temp54) goto label66;
    // THERE WAS A NOTE HERE
    long long int temp55 = (long long int)(regs[20] + -4);
    int *temp56 = (int *)temp55;
    regs[114] = (int)(*temp56);
    // PARALLEL COMMAND BEGIN
    int temp57 = (int)(regs[114] + 1);
    regs[97] = (int)(temp57);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp58 = (long long int)(regs[20] + -36);
    int *temp59 = (int *)temp58;
    regs[115] = (int)(*temp59);
    long long int temp60 = (long long int)(regs[20] + -32);
    int *temp61 = (int *)temp60;
    regs[116] = (int)(*temp61);
    long long int temp62 = (long long int)(regs[20] + -24);
    long long int *temp63 = (long long int *)temp62;
    regs[117] = (long long int)(*temp63);
    regs[2] = (int)(regs[115]);
    regs[1] = (int)(regs[116]);
    regs[4] = (int)(regs[97]);
    regs[5] = (long long int)(regs[117]);
    int temp64 = binary_search(regs[5], (int)regs[4], (int)regs[1], (int)regs[2]);
    regs[0] = (long long int)temp64;
    regs[99] = (int)(regs[0]);
    goto label79;
    // THERE WAS A BARRIER HERE
    label66:
    // THERE WAS A NOTE HERE
    long long int temp65 = (long long int)(regs[20] + -4);
    int *temp66 = (int *)temp65;
    regs[118] = (int)(*temp66);
    // PARALLEL COMMAND BEGIN
    int temp67 = (int)(regs[118] + -1);
    regs[98] = (int)(temp67);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    long long int temp68 = (long long int)(regs[20] + -36);
    int *temp69 = (int *)temp68;
    regs[119] = (int)(*temp69);
    long long int temp70 = (long long int)(regs[20] + -28);
    int *temp71 = (int *)temp70;
    regs[120] = (int)(*temp71);
    long long int temp72 = (long long int)(regs[20] + -24);
    long long int *temp73 = (long long int *)temp72;
    regs[121] = (long long int)(*temp73);
    regs[2] = (int)(regs[119]);
    regs[1] = (int)(regs[98]);
    regs[4] = (int)(regs[120]);
    regs[5] = (long long int)(regs[121]);
    int temp74 = binary_search(regs[5], (int)regs[4], (int)regs[1], (int)regs[2]);
    regs[0] = (long long int)temp74;
    regs[99] = (int)(regs[0]);
    label79:
    // THERE WAS A NOTE HERE
    regs[100] = (int)(regs[99]);
    regs[0] = (int)(regs[100]);
    return (int)(regs[0]);
}
int main(int argc, char **argv) {
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    long long int temp75 = (long long int)(regs[20] + -32);
    int *temp76 = (int *)temp75;
    *temp76 = (int)(3);
    long long int temp77 = (long long int)(regs[20] + -28);
    int *temp78 = (int *)temp77;
    *temp78 = (int)(5);
    long long int temp79 = (long long int)(regs[20] + -24);
    int *temp80 = (int *)temp79;
    *temp80 = (int)(11);
    long long int temp81 = (long long int)(regs[20] + -20);
    int *temp82 = (int *)temp81;
    *temp82 = (int)(33);
    long long int temp83 = (long long int)(regs[20] + -16);
    int *temp84 = (int *)temp83;
    *temp84 = (int)(71);
    // PARALLEL COMMAND BEGIN
    long long int temp85 = (long long int)(regs[20] + -32);
    regs[89] = (long long int)(temp85);
    // CLOBBER COMMAND
    // PARALLEL COMMAND END
    regs[2] = (int)(33);
    regs[1] = (int)(4);
    regs[4] = (int)(0);
    regs[5] = (long long int)(regs[89]);
    int temp86 = binary_search(regs[5], (int)regs[4], (int)regs[1], (int)regs[2]);
    regs[0] = (long long int)temp86;
    regs[90] = (int)(regs[0]);
    long long int temp87 = (long long int)(regs[20] + -4);
    int *temp88 = (int *)temp87;
    *temp88 = (int)(regs[90]);
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    regs[0] = (int)(regs[88]);
    return (int)(regs[0]);
}
