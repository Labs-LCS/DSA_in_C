// 5. The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, …, where each number is the sum of the two preceding numbers. Write a program fragment that declares an array named fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint: Fill in the first two numbers individually, then use a loop to compute the remaining numbers.
//

#include <stdio.h>

int main(void) {
    int fib[40] = {[0] = 0, [1] = 1};
    int lenght = sizeof(fib) / sizeof(fib[0]);
    printf("Fibonacci no. 0 and 1 are: %d and %d\n", fib[0], fib[1]);
    for (int i = 2; i < lenght; i++) {
        fib[i] = fib[(i-1)] + fib[(i-2)];
        printf("Fibonacci no. %d is: %d\n", (i), fib[i]);
    }
    return 0;
}
