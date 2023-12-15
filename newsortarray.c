#include<stdio.h>
void main()
{
    int arrsize, i, j,temp;

    printf("Enter size of array : ");
    scanf("%d",&arrsize);

    int ar [arrsize];

    for(i=0; i<arrsize; i++)
    {
        printf("Enter elements of a[%d] : ",i);
        scanf("%d",&ar[i]);
    }

    for(i=0; i<arrsize; i++)
    {
        for(j=i+1; i<arrsize-i-1; j++)
        {
            if(ar[j]<ar[i])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("\nSorted array is : ");
    for(i=0; i<arrsize; i++)
    {
        printf("%d ",ar[i]);
    }

}
