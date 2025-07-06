// Using Figure 2.2 as a model, illustrate the operation of
// Insertion-Sort on the Array A = [31, 41, 59, 26, 41, 58].

#include <stdio.h>
int main(void) {
  int A[6] = {31, 41, 59, 26, 41, 58};

  int i, j, key;
  // i ==> Represents the index of the current card.
  for (i = 1; i < 6; i++)
  // For each index in the range [i..6], 'i' being incremented in every
  // iteration.
  {
    key = A[i];
    // key ==> Represents the card I'm currently comparing to the other cards.
    j = i - 1;
    // j ==> Represents the index of the card immediately to the side of 'i'.
    while (j >= 0 && A[j] > key)
    // While the index of the card immediately to the side of 'i' is greater
    // than zero; And while the value of that card is greater than the card im
    // currently comparing to (which consequently implements a condition).
    {
      A[j + 1] = A[j];
      // Assign the value of the card in the index 'j' to the index 'j+1'.
      j = j - 1;
      // Decrement the index represented by 'j'.
    }
    A[j + 1] = key;
    // Assign the value of the card currently in analysis to the "position"
    // 'j+1'.
  }
  printf("Sorted array A[31, 41, 59, 26, 41, 58]: [%d, %d, %d, %d, %d, %d]\n",
         A[0], A[1], A[2], A[3], A[4], A[5]);
  return 0;
}

// In the first iteration:
//
/// In the for loop:
// i == 1
// key == A[i] == 41
// j == i-1 == 0
//
/// In the while loop:
// j == 0 >= 0 ==> true && A[j] == 41 > key == 41 ==> false
/// Out the while loop.
//
// A[j+1] == A[1] == 41 = key == A[i] == 41
//
/// i++
//
// ...
//
// In the third iteration: [31, 41, 59, 26, 41, 58]
//
/// In the for loop:
// i == 3
// key == 26
// j = 2
//
/// In the while loop:
// j >= 0 ==> true && A[j] > key ==> true
// [31, 41, 26, 59, 41, 58]
// A[j + 1] = A[j] == A[3] = A[2]
// j = j-1 == j = 1
//
// j >= 0 ==> true && A[j] > key ==> true
// A[j + 1] = A[j] == A[2] = A[1]
// [31, 26, 41, 59, 41, 58]
// j = j-1 == j = 0
//
// j >= 0 ==> true && A[j] > key ==> true
// A[j + 1] = A[j] == A[1] = A[0]
// [26, 31, 41, 59, 41, 58]
// j = j-1 == j = (-1)
//
// j >= 0 ==> false && A[j] > key ==> true
/// Out the while loop.
//
// A[j+1] = key == A[0] = 26
//
// ...
//
