#include<math.h>
#include<stdio.h>

void main()
{
    int num,onum,sum=0,rem, n=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    onum = num;
    while(onum != 0)
    {
        onum = onum/10;
        ++n;
    }

    onum = num;
    while(onum !=0)
    {
        rem = onum % 10;
        sum = sum + pow(rem,n);
        onum = onum/10;
    }

    if(sum==num)
    {
        printf("%d is Armstrong Number",num);
    }
    else
    {
        printf("%d is Not Armstrong Number",num);
    }
}
