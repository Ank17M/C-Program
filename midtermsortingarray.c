#include<stdio.h>
#define MAX 1000
void main()
{
    int ar[MAX], arrsize, i, j, temp, lower_bound, upper_bound, searchkey, mid, flag =0;

    printf("Enter size of array : ");
    scanf("%d",&arrsize);

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

    printf("\nEnter Key to Search :");
    scanf("%d",&searchkey);

    lower_bound = 0;
    upper_bound = arrsize-1;
    while(lower_bound<=upper_bound)
    {
        mid = (lower_bound+upper_bound)/2;
        if(ar[mid]==searchkey)
        {
            flag = 1;
            break;
        }
        else if(ar[mid]<searchkey)
        {
            lower_bound = mid + 1;
        }
        else
        {
            upper_bound = mid - 1;
        }
    }
    if(flag == 1)
    {
        printf("%d found in array.",searchkey);
    }
    else
    {
        printf("%d not found in array.",searchkey);
    }
}
