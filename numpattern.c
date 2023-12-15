#include<stdio.h>
void main()
{
    int num, i , j = 1;
    printf("Enter the starting number : ");
    scanf("%d",&num);
    i = num;
    printf("%d ",num);
    num = num - 5;
    do{
        printf("%d ",num);
        if(num>0&&j==1)
        {
            num -= 5;
        }
        else if(num==0)
        {
            j = 0;
            num -= 5;
        }
        else
        {
            j = 0;
            num += 5;
        }
    }while(num != i);
    printf("%d", num);
}
