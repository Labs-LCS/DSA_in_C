// Write a program that prompts the user to enter a number n, then prints all
// even squares between 1 and n. For example, if the user enters 100, the
// program should print the following:
// 4
// 16
// 36
// 64
// 100

#include <stdio.h>
int main(void) {
  int i, n = 2;

  printf("Enter a number: ");
  scanf("%d", &i);

  while (n * n < i) {
    printf("%d\n", n * n);
    n += 2;
  }

  printf("%d\n", i);

  return 0;
}
