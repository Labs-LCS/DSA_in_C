// Write a program that calculates how many digits a number contains:
// Enter a number: 374
// The number 374 has 3 digits
// You may assume that the number has no more than four digits. Hint: Use if
// statements to test the number. For example, if the number is between 0 and 9,
// it has one digit. If the num- ber is between 10 and 99, it has two digits

#include <stdio.h>
int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number > -10 && number < 10) {
    printf("The number %d has 1 digit\n", number);
  } else if ((number > -100 && number <= -10) || number >= 10 && number < 100) {
    printf("The number %d has 2 digits\n", number);
  } else if ((number > -1000 && number <= -100) ||
             number >= 100 && number < 1000) {
    printf("The number %d has 3 digits\n", number);
  } else if ((number > -10000 && number <= -1000) ||
             number >= 1000 && number < 10000) {
    printf("The number %d has 4 digits\n", number);
  } else {
    printf("The number %d is out of the scope of this project\n", number);
  }

  return 0;
}
