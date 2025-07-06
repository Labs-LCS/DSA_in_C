// Rewrite the Insertion-Sort procedure to sort into nonincreasing instead of
// nondecreasing order.

#include <stdio.h>
int main(void) {
  int A[6] = {31, 41, 59, 26, 41, 58};

  int i, j, key;
  for (i = 1; i < 6; i++) {
    key = A[i];
    j = i - 1;
    while (j >= 0 && A[j] < key) {
      // The only adjust made from previous version (exercise_211.c) was
      // changing '>' to '<', so it will always swap positions when the
      // left-most number is smaller than the key.
      A[j + 1] = A[j];
      j = j - 1;
    }
    A[j + 1] = key;
  }
  printf("Sorted array A[31, 41, 59, 26, 41, 58]: [%d, %d, %d, %d, %d, %d]\n",
         A[0], A[1], A[2], A[3], A[4], A[5]);
  return 0;
}
