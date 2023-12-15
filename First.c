#include<stdio.h>
#include<conio.h>
#define start main
int start()
{
    int a;
    printf("Enter the Value of a => ");
    scanf("%d",&a);
    printf("\nValue of a => %d",a);
    printf("\nAddress of a => %d", &a);
    printf("\nSize of A => %d",sizeof(a));
    return 0;
}
