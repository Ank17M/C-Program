#include<stdio.h>
void main()
{
    int n, i = 1, fact = 1;
    printf("Enter the number for factorial : ");
    scanf("%d",&n);
    factorial:
        if(i>1)
        {
            break;
        }
        else
        {
            fact = fact*i;
            i++;
            goto factorial;
        }
    printf("%d",fact);
}
