// Modify the broker.c program of Section 5.2 by making both of the following
// changes: (a) Ask the user to enter the number of shares and the price per
// share, instead of the value of the trade. (b) Add statements that compute the
// commission charged by a rival broker ($33 plus 3¢ per share for fewer than
// 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display the
// rival’s commission as well as the commission charged by the original broker.

#include <stdio.h>

int main(void) {
  float rivalCommission, commission, value;
  int shareNumber;
  float shareValue;

  // Rival's broker commission:
  printf("Enter the number of shares: ");
  scanf("%d", &shareNumber);
  printf("Enter the value per share: ");
  scanf("%f", &shareValue);
  if (shareNumber < 2000) {
    rivalCommission = 33.00f + shareNumber * .03f;
  } else {
    rivalCommission = 33.00f + ((shareNumber - 1999) * .02f) + 1999 * .03f;
  }
  printf("The rival's commission for %d shares is $%.2f\n", shareNumber,
         rivalCommission);

  // Original broker commission:
  value = shareNumber * shareValue;
  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;
  if (commission < 39.00f)
    commission = 39.00f;
  printf("The original broker's commission is $%.2f\n", commission);

  return 0;
}
