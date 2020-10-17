#include <iostream>
using namespace std;

char inttochar(int a) {
	char ch = a-97+'a'; // only lowercase
	return;
}

int main() {
	int c;
	cin >> c;
	char ch = inttochar(c);
	cout << ch << endl;
	return 0;
}