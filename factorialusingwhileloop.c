
#include<stdint.h>
void main()
{
    int num, fact=1,i;

    num = 5;
    while(num != 0)
    {
        fact = fact * num;
        num--;
    }
    printf("%d",fact);
}
