// Write a program that finds the largest in a series of numbers entered by the
// user. The pro- gram must prompt the user to enter numbers one by one. When
// the user enters 0 or a nega- tive number, the program must display the
// largest nonnegative number entered: Enter a number: 60 Enter a number: 38.3
// Enter a number: 4.89
// Enter a number: 100.62
// Enter a number: 75.2295
// Enter a number: 0
// The largest number entered was 100.62
// Notice that the numbers aren’t necessarily integers.

#include <stdio.h>
int main(void) {
  float i = 0, tmp = 1;

  while (tmp > 0) {
    printf("Enter a number: ");
    scanf("%f", &tmp);

    if (i < tmp) {
      i = tmp;
    }
  }

  printf("The largest number entered was %f\n", i);
  return 0;
}
