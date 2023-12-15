#include<stdio.h>
void main()
{
    int n, i, j;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    for(i=n; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
