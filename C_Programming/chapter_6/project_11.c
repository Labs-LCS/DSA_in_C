// The value of the mathematical constant e can be expressed as an infinite
// series: e = 1 + 1/1! + 1/2! + 1/3! + … Write a program that approximates e by
// computing the value of 1 + 1/1! + 1/2! + 1/3! + … + 1/n! where n is an
// integer entered by the user.

#include <stdio.h>
int main(void) {
  int n;
  float fatorial = 1;
  float e = 1.0;

  printf("Enter a value 'n': ");
  scanf("%d", &n);

  // ULTRA INEFICIENTE!!!!!!!!!!!!
  // MUITO BURRO!!!!
  // acontece...
  // for (; n > 0; --n) {
  // fatorial = 1.0;
  //    for (int j = 1; j <= n; ++j) {
  //      fatorial = fatorial * j;
  //    }
  //    e = e + (1 / fatorial);
  //  }

  for (int i = 1; i <= n; ++i) {
    fatorial = fatorial * i;
    e = e + (1 / fatorial);
  }

  printf("e = %f\n", e);
  return 0;
}
