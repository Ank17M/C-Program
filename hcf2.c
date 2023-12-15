#include <stdio.h>

void main() {
    int num1, num2, hcf, i;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    for(i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i ==0)
        {
            hcf = i;
        }
    }

    printf("HCF is: %d\n",hcf);

}
