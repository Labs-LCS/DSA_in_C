// Write a program that asks the user for a 24-hour time, then display
// the time in 12-hour form:
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM
// Be careful not to display 12:00 as 0:00.

#include <stdio.h>
int main(void) {
  int hour, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hour, &minutes);

  if (hour < 12) {
    printf("Equivalent 12-hour time: %02d:%02d AM\n",
           hour == 0 ? hour = 12 : hour, minutes);
  } else {
    printf("Equivalent 12-hour time: %02d:%02d PM\n",
           (hour == 12 ? hour : hour - 12), minutes);
  }

  return 0;
}
