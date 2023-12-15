#include<stdio.h>
void main()
{
    int l;
    int arr[] = {9,2,4,5,1,8};
    int min = ar[0];
    l = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<l; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
