#include <stdio.h>

int main(void)
{
	int u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, u12, first_sum, second_sum, check_digit;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	       &u1, &u2, &u3, &u4, &u5, &u6, &u7, &u8, &u9, &u10, &u11, &u12);

	first_sum = u2 + u4 + u6 + u8 + u10 + u12;
	second_sum = u1 + u3 + u5 + u7 + u9 + u11;

	check_digit = 9 - (((first_sum * 3 + second_sum) - 1) % 10);

	printf("Check digit: %d\n", check_digit);
	return 0;
}
