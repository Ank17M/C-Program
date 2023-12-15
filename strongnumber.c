#include<stdint.h>
void main()
{
    int num, onum, res=0, fact, n, i;

    printf("Enter a number : ");
    scanf("%d",&num);

    onum = num;

    while(onum != 0)
    {
        fact = 1;
        n = onum % 10;
        for(i = 1; i<=n; i++)
        {
            fact = fact*i;
        }
        res = res + fact;
        onum = onum/10;
    }

    if(res==num)
    {
        printf("%d is Strong Number",num);
    }
    else
    {
        printf("%d is Not Strong Number",num);
    }
}
