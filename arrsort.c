#include<stdio.h>
void main()
{
    int a,i,j,temp;
    printf("enter size of arr ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf("enter the number a[%d] ",i);
        scanf("%d",&arr[i]);
    }


    for(i=0;i<a;i++)
    {
       for(j=0;j<a-i-1;j++)
       {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
       }

    }
    for(i=0;i<a;i++)
    {
        printf("%d  ",arr[i]);
    }

}
