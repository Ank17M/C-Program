#include<stdio.h>
#define MAX 10000
void main()
{
    int arrsize, i, searchkey, flag=0;

    printf("Enter size of array : ");
    scanf("%d",&arrsize);

    int ar [MAX];

    for(i=0; i<arrsize; i++)
    {
        printf("Enter elements of a[%d] : ",i);
        scanf("%d",&ar[i]);
    }

    printf("Entered array is: ");
    for(i=0; i<arrsize; i++)
    {
        printf("%d ",ar[i]);
    }

    printf("\nEnter Search Key : ");
    scanf("%d",&searchkey);

    for(i=0; i<arrsize; i++)
    {
        if(ar[i]==searchkey)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is found in array at position a[%d].",searchkey,i);
    }
    else
    {
        printf("%d is not found in array.",searchkey);
    }
}
