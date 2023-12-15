#include<stdio.h>
#define MAX 100
void main()
{
    int arrsize, i, j,temp, ar[MAX];

    printf("Enter size of array : ");
    scanf("%d",&arrsize);

    for(i=0; i<arrsize; i++)
    {
        printf("Enter array element a[%d] : ",i);
        scanf("%d",&ar[i]);
    }

    printf("Entered array is: ");
    for(i=0; i<arrsize; i++)
    {
        printf("%d ",ar[i]);
    }

    for(i=0; i<arrsize; i++)
    {
        for(j=0; j<arrsize-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    printf("\nSorted array is : ");
    for(i=0; i<arrsize; i++)
    {
        printf("%d ",ar[i]);
    }

}
