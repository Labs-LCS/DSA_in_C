#include <stdio.h>

int main(void){
	printf("%6d,%4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .0000009979);

	int i, j, b, k, l, m, o, p, q;
	float x, a, c;

	printf("Exercise 2: ");
	scanf("%d-%d-%d", &k, &l, &m);
	printf("%d-%d-%d\n", k, l, m);

	printf("Exercise 2': ");
	scanf("%d -%d -%d", &o, &p, &q);
	printf("%d-%d-%d\n", o, p, q);

	printf("Exercise 4: ");
	scanf("%d%f%d", &i, &x, &j);
	printf("%d %f %d\n", i, x, j);

	printf("Exercise 5: ");
	scanf("%f%d%f", &a, &b, &c);
	printf("%f %d %f\n", a, b, c);

	return 0;
}
