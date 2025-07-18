// Programming Project 8 in Chapter 2 asked you to write a program that
// calculates the remaining balance on a loan after the first, second, and third
// monthly payments. Modify the program so that it also asks the user to enter
// the number of payments and then displays the balance remaining after each of
// these payments.

#include <stdio.h>

int main(void) {
  float amount, interest, payment;
  int installments;

  printf("Enter the amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter number of installments: ");
  scanf("%d", &installments);

  for (int i = 1; i <= installments; i++) {
    if (amount < payment) {
      printf("Balance remaining after payment No. %d: $0.00\n", i);
      break;
    }
    amount = amount - payment + (amount * interest / 1200);
    printf("Balance remaining after payment No. %d: $%.2f\n", i, amount);
  }

  return 0;
}
