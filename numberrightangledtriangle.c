#include<stdio.h>
void main()
{
    int i, j, number = 1;
    for(i=1; i<=4; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
}
