#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
	printf("\n%d\t%d\t%d\t%d\n", a, b, c, d);
	printf("%d\t%d\t%d\t%d\n", e, f, g, h);
	printf("%d\t%d\t%d\t%d\n", i, j, k, l);
	printf("%d\t%d\t%d\t%d\n\n", m, n, o, p);

	int row_1_sum = a + b + c + d,
		row_2_sum = e + f + g + h,
		row_3_sum = i + j + k + l,
		row_4_sum = m + n + o + p;
	int column_1_sum = a + e + i + m,
		column_2_sum = b + f + j + n,
		column_3_sum = c + g + k + o,
		column_4_sum = d + h + l + p;
	int diagonal_1_sum = a + f + k + p,
		diagonal_2_sum = m + j + g + d;
	printf("Row sums: %d %d %d %d\n", row_1_sum, row_2_sum, row_3_sum, row_4_sum);
	printf("Column sums: %d %d %d %d\n", column_1_sum, column_2_sum, column_3_sum, column_4_sum);
	printf("Diagonal sums: %d %d\n", diagonal_1_sum, diagonal_2_sum);
}
