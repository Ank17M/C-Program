#include<stdio.h>
void main()
{
    int i, j, n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0; i<=n-1;i++)
    {
        for(j=0; j<=n-1;j++)
        {
            if(i==0||i==n-1)
            {
                printf("* ");
            }
            else if(i+j==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
