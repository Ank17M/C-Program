#include<stdio.h>
void main()
{
    int ar[6] = {9,2,4,5,1,8};
    int i, max;
    max = ar[0];
    for(i=0; i<6; i++)
    {
        if(max<ar[i])
        {
            max = ar[i];
        }
    }
    printf("Minimum : %d", max);
}
