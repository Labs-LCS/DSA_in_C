// Modify Programming Project 11 so that the program continues adding terms
// until the current term becomes less than ε, where ε is a small
// (floating-point) number entered by the user

#include <stdio.h>
int main(void) {
  float n, fatorial = 1.0, e = 1.0;
  int i = 1;

  printf("Enter a decimal value 'n' (e.g.: 0.034): ");
  scanf("%f", &n);

  while ((1 / fatorial) >= n) {
    fatorial = fatorial * i;
    e = e + (1 / fatorial);
    ++i;
  }

  printf("e = %f for %d iterations\n", e, i);

  return 0;
}
