#include <stdio.h>

int binary_search(int *a, int l, int r, int find) {
	if (l > r)
		return -1;
	int m = l+(r-l)/2;
	if (a[m] == find) {
		return m;
	}
	else if (a[m] < find)
		return binary_search(a,m+1,r,find);
	else return binary_search(a,l,m-1,find);
}

int main() {
	int a[5] = {3,5,11,33,71};
	int pos = binary_search(a,0,4,33);
	printf("Pos is %d\n",pos);
	return 0;
}