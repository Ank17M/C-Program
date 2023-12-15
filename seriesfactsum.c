#include <stdio.h>

void main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    int sum = 0;
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }

    printf("The sum of factorials from 1 to %d is: %d\n", n, sum);
}
