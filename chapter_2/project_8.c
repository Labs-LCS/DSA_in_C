#include <stdio.h>

int main(void) {
	float amount, interest, payment;
	printf("Enter the amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	amount = amount - payment + (amount * interest / 1200);
	printf("Balance remaining after first payment: %.2f\n", amount);
	amount = amount - payment + (amount * interest / 1200);
	printf("Balance remaining after second payment: %.2f\n", amount);
	amount = amount - payment + (amount * interest / 1200);
	printf("Balance remaining after third payment: %.2f\n", amount);

	return 0;
}
