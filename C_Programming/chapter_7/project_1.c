// The square2.c program of Section 6.3 will fail (usually by printing strange
// answers) if i* i exceeds the maximum int value. Run the program and determine
// the smallest value of n that causes failure. Try changing the type of i to
// short and running the program again. (Don’t forget to update the conversion
// specifications in the call of printf!) Then try long. From these experiments,
// what can you conclude about the number of bits used to store integer types on
// your machine?

#include <stdio.h>
int main(void) {
  long int i, n;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);
  for (i = 1; i <= n; i++)
    printf("%10ld%10ld\n", i, i * i);
  return 0;
}
// When using int, the program fails once i exceeds 2,147,483,647, which is the
// maximum value for a 32-bit signed integer (even on a 64-bit machine, int is
// typically still 32 bits). When using short int, the program fails once i
// exceeds 32,767, the maximum value for a 16-bit signed integer. With long int,
// the program didn’t crash, but it didn’t behave correctly either. It continued
// running and attempted the calculations, but this was due to integer overflow
// the value wrapped around, giving the impression that it worked. In all cases,
// the loop stops or misbehaves after overflow. This happens because the
// variable often becomes negative, which causes the loop condition to fail or
// behave unexpectedly.
