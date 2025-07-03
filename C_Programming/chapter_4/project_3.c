#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter a three digit number: ");
	scanf("%d", &number);
	printf("The reversal is: %d\n",
		(number%100%10*100)
		+ (number-(number/100*100)-(number%10))
		+ (number/100));
	return 0;
}
