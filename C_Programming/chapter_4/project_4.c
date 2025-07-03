#include <stdio.h>

int main(void)
{
	int decimal_number, octal_number;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &decimal_number);
	octal_number = decimal_number%8
		+ decimal_number/8%8*10
		+ decimal_number/8/8%8*100
		+ decimal_number/8/8/8%8*1000
		+ decimal_number/8/8/8/8%8*10000;
	printf("In octal, your number is: %d\n", octal_number);
	return 0;
}
