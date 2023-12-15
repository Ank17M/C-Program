#include<stdio.h>
int factorial(int a)
{
    int fact = 1;
    for(int i=1; i<=a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of %d = %d",num,factorial(num));
    return 0;
}
