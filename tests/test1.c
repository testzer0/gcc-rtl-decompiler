#include <stdio.h>

int f() {
    return 2;
}

void g() {
    int a = 2;
}

int main() {
    int b = f();
    g();
    return 0;
}