#include <stdio.h>

int f(int a) {
	int b;
	if (a < 3)
		b = 2;
	else b = 3;
	return b;
}

int main() {
    int b = f(3);
    return 0;
}