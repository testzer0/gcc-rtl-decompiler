#include <stdio.h>

int loopy(int a) {
	int b = a;
	while (b < 1000) {
		int c = 1;
		while (a > c) {
			c *= 2;
		}
		b += c;
		a -= c;
	}
	return b;
}


int main() {
	gotoboy:
	printf("Hey!\n");
	goto gotoboy;
	return 0;
}