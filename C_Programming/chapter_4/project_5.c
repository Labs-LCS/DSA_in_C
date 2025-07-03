#include <stdio.h>

int main(void)
{
	int u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, first_sum, second_sum, check_digit;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	       &u1, &u2, &u3, &u4, &u5, &u6, &u7, &u8, &u9, &u10, &u11);

		first_sum = u1 + u3 + u5 + u7 + u9 + u11;
	second_sum = u2 + u4 + u6 + u8 + u10;
	check_digit = 9 - (((first_sum * 3 + second_sum) - 1) % 10);

	printf("Check digit: %d\n", check_digit);
	return 0;
}
