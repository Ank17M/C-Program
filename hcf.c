#include <stdio.h>

void main() {
    int num1, num2, hcf, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    hcf = num1;

    printf("HCF is: %d\n",hcf);

}
