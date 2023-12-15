#include<stdio.h>
#define MAX 1000
void main()
{
    int ar[MAX], arrsize, i, temp;

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


    for(i=0; i<arrsize-1; i=i+2)
    {
        temp = ar[i];
        ar[i] = ar[i+1];
        ar[i+1] = temp;
    }

    printf("\nAdjacent Swapped Array is : ");
    for(i=0; i<arrsize; i++)
    {
        printf("%d ",ar[i]);
    }
}
