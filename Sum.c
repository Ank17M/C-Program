#include<stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter First number: ");
    scanf("%d",&num1);
    printf("Enter Second number: ");
    scanf("%d",&num2);

    num3 = num1 + num2;
    printf("Sum of %d + %d = %d\n",num1,num2,num3);

    num3 = num1 * num2;
    printf("Product of Two Numbers = %d",num3);

}
