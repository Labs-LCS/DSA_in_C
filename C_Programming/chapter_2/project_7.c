#include <stdio.h>

int main(void) {
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	int twenty, ten, five, one;
	twenty = amount / 20;
	ten = (amount - 20*twenty) / 10;
	five = (amount - 20*twenty - 10*ten) / 5;
	one = (amount - 20*twenty - 10*ten - 5*five);
	printf("$20 dollar bills: %d\n$10 dollar bills: %d\n$5 dollar bills: %d\n$1 dollar bills: %d\n",
	twenty, ten, five, one);
	return 0;
}
