#include <stdio.h>

struct somestruct{
	int a;
	int b;
	char c;
};

int f(struct somestruct ss) {
	return ss.a+ss.b;
}

int main() {
	struct somestruct s;
	s.a = 2;
	s.b = 3;
	int c = f(s);
	printf("%d\n",c);
	return 0;
}