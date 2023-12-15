#include<stdint.h>
void main()
{
    int num, fact=1,i;

    num = 5;

    for(i = 1; i<=num; i++)
    {
        fact = fact*i;
    }
    printf("%d",fact);
}
