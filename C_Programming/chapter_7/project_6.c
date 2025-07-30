// Write a program that prints the values of sizeof(int), sizeof(short),
// sizeof(long), sizeof(float), sizeof(double) and sizeof(long dou-
// ble).

#include <stdio.h>
int main(void) {
  printf("sizeof(int): %lu\n", sizeof(int));
  printf("sizeof(short): %lu\n", sizeof(short));
  printf("sizeof(long): %lu\n", sizeof(long));
  printf("sizeof(float): %lu\n", sizeof(float));
  printf("sizeof(double): %lu\n", sizeof(double));
  printf("sizeof(long double): %lu\n", sizeof(long double));
  return 0;
}
