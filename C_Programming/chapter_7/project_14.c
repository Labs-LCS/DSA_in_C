// Write a program that uses Newton’s method to compute the square root of a
// positive float- ing-point number: Enter a positive number: 3 Square
// root: 1.73205 Let x be the number entered by the user. Newton’s method
// requires an initial guess y for the square root of x (we’ll use y = 1).
// Successive guesses are found by computing the average of y and x/y. The
// following table shows how the square root of 3 would be found: [see in the
// book] Note that the values of y get progressively closer to the true square
// root of x. For greater accuracy, your program should use variables of type
// double rather than float. Have the program terminate when the absolute value
// of the difference between the old value of y and the new value of y is less
// than the product of .00001 and y. Hint: Call the fabs function to find the
// absolute value of a double. (You’ll need to include the <math.h> header at
// the beginning of your program in order to use fabs.)

#include <math.h>
#include <stdio.h>
int main(void) {
  int x;
  double y = 1.0, average, sqroot;

  printf("Enter a positive number: ");
  scanf("%d", &x);

  while (1) {
    average = (y + (x / y)) / 2;
    if (fabs(y - average) < (.00001 * y)) {
      sqroot = y;
      break;
    }
    y = average;
  }

  printf("Square root: %lf\n", sqroot);
  return 0;
}
