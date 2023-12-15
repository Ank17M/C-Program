#include<stdio.h>
void main()
{
    int i,s = 0;
    for(i = 1; s <= 100; i++)
    {
        s = i * (i + 1);
        printf("%d\n",s);
    }
}
