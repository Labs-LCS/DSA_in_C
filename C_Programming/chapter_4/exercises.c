#include <stdio.h>

int main(void) {
	int i = 8, j = 5;
	float ii = 8, jj = 5;
	printf("%d, %f\n%d, %f\n%d, %f\n%d, %f\n",
	(i%j), (ii/jj),
	(-i/j), (-ii/jj),
	(i/-j), (ii/-jj),
	(-i/-j), (-ii/-jj)
	);
//	int a = 5, b = 3;
//	printf("%d %d\n", a / b, a % b);
//	int c = 2, d = 3;
//	printf("%d\n", (c + 10) % d);
//	int e = 7, f = 8, g = 9;
//	printf("%d\n", (e + 10) % g / f);
//	int h = 1, i = 2, j = 3;
//	printf("%d\n", (h + 5) % (i + 2) / j);
	return 0;
}
