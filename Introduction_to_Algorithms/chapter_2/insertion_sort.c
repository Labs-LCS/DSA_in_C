// Implementation of the insertion sort algorithm as described in
// page 17 of the book.

#include <stdio.h>

int main(void) {

  int numbers[6], sorted_numbers[6];
  printf("Provide 6 integer numbers, separated by commas, in any order: ");
  scanf("%d,%d,%d,%d,%d,%d", &numbers[0], &numbers[1], &numbers[2], &numbers[3],
        &numbers[4], &numbers[5]);

  int key, j;
  for (int i = 1; i < 6; i++) {
    key = numbers[i];
    j = i - 1;
    while (j >= 0 && numbers[j] > key) {
      numbers[j + 1] = numbers[j];
      j = j - 1;
    }
    numbers[i + 1] = key;
  }

  printf("Sorted numbers: [%d, %d, %d, %d, %d, %d]\n", numbers[0], numbers[1],
         numbers[2], numbers[3], numbers[4], numbers[5]);
  return 0;
}

// First try:
//
// sorted_numbers[0] = numbers[0];
//
//	for (int j = 1; j < 6; j++) {
//
//	int i = j - 1;
//
//	while (numbers[j] > sorted_numbers[j-1] && i > 0)
//
//		if (numbers[j] > sorted_numbers[j-1]) {
//			sorted_numbers[j] = numbers[j];
//		} else {
//			sorted_numbers[j] = sorted_numbers[j-1];
//			sorted_numbers[j-1] = numbers[j];
//		}
//	}
