#include<stdio.h>
#define MAX 1000
void main()
{
    int ar[MAX], arrsize, i;

    printf("Enter size of array : ");
    scanf("%d",&arrsize);

    for(i=0; i<arrsize; i++)
    {
        printf("Enter element a[%d] : ",i);
        scanf("%d",&ar[i]);
    }

    printf("Entered array is: ");
    for(i=0; i<arrsize; i++)
    {
        printf("%d ",ar[i]);
    }
}
