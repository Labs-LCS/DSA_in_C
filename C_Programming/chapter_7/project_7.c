// Modify Programming Project 6 from Chapter 3 so that the user may add,
// subtract, multiply, or divide two fractions (by entering either +, -,
// *, or / between the fractions).

#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom;
  char operation, ch;
  printf("Enter two fractions [n1/d1, n2/d2]: ");
  scanf("%d/%d,%d/%d", &num1, &denom1, &num2, &denom2);
  ch = getchar();
  printf(
      "Which operation do you want to make?\n1. add [+]\t2. subtract [-]\t3. "
      "multiply[*]\t4. divide[/]\nOperation (choose number or sign): ");
  while ((operation = getchar()) != '\n') {
    switch (operation) {
    case '1':
    case '+':
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sum is %d/%d\n", result_num, result_denom);
      break;
    case '2':
    case '-':
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The subtraction is %d/%d\n", result_num, result_denom);
      break;
    case '3':
    case '*':
      result_num = num1 * num2;
      result_denom = denom1 * denom2;
      printf("The multiplication is %d/%d\n", result_num, result_denom);
      break;
    case '4':
    case '/':
      result_num = num1 * denom2;
      result_denom = denom1 * num2;
      printf("The division is %d/%d\n", result_num, result_denom);
      break;
    }
    return 0;
  }
}
