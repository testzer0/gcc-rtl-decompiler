#include <bits/stdc++.h>
using namespace std;

long long int regs[512];
map<string, long long int> externSymbolTable;

int main(int argc, char **argv) {
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    // THERE WAS A NOTE HERE
    regs[87] = (int)(0);
    regs[88] = (int)(regs[87]);
    regs[0] = (int)(regs[88]);
    return (int)(regs[0]);
}
