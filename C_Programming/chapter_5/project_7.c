// Write a program that finds the largest and smallest of four integers entered
// by the user: Enter four integers: 21 43 10 35 Largest: 43 Smallest: 10 Use as
// few if statements as possible. Hint: Four if statements are sufficient.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, n3, n4, largest_1, largest_2, smallest_1, smallest_2;

  printf("Type four integers, separated by spaces: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  largest_1 = ((n1 + n2) + abs(n1 - n2)) / 2;
  smallest_1 = ((n1 + n2) - abs(n1 - n2)) / 2;

  largest_2 = ((n3 + n4) + abs(n3 - n4)) / 2;
  smallest_2 = ((n3 + n4) - abs(n3 - n4)) / 2;

  printf("Largest: %d\n", largest_1 > largest_2 ? largest_1 : largest_2);
  printf("Smallest: %d\n", smallest_1 < smallest_2 ? smallest_1 : smallest_2);

  return 0;
}
