#include<stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("i%d",i);
            printf("j%d   ",j);
        }
        printf("\n");
    }
    return 0;
}
