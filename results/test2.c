#include <stdio.h>

char inttochar(int a) {
	char ch = a-97+'a'; // only lowercase
	return ch;
}

int main() {
	int c;
	scanf("%d",&c);
	char ch = inttochar(c);
	printf("%c\n",ch);
	return 0;
}