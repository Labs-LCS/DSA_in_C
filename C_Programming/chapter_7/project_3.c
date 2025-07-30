// Modify the sum2.c program of Section 7.1 to sum a series of double values.

#include <stdio.h>
int main(void) {
  double n, sum = 0;
  printf("This program sums a series of double values.\n");
  printf("Enter a number with decimal point (0 to terminate): ");
  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %f\n", sum); // see comment below, from p. 182.
  return 0;
}

// "Why do we use %lf to read a double value but %f to print it? [p. 134]
// This is a tough question to answer. First, notice that scanf and printf are
// unusual functions in that they aren’t restricted to a fixed number of
// arguments. We say that scanf and printf have variable-length argument lists.
// When functions with variable-length argument lists are called, the compiler
// arranges for float arguments to be converted automatically to type double. As
// a result, printf can’t distinguish between float and double arguments. This
// explains why %f works for both float and double arguments in calls of printf.
// scanf, on the other hand, is passed a pointer to a variable. %f tells scanf
// to store a float value at the address passed to it, while %lf tells scanf to
// store a double value at that address. The distinction between float and
// double is crucial here. If given the wrong conversion specification, scanf
// will likely store the wrong number of bytes (not to mention the fact that the
// bit pattern for a float isn’t the same as that for a double)."
