#include<stdio.h>
void main()
{
    int i, j;
    char alpha = 'A';
    for(i=1; i<=5; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%c ",alpha);
        }
        printf("\n");
        alpha++;
    }
}
