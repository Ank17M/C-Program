#include<stdio.h>
#include<conio.h>
#define start main
int start()
{
    int a,b;
    a = 100;
    b = 100;
    if(a>b)
        printf("A is greater");
    else if(b>a)
        printf("B is greater");
    else
        printf("Both are Equal");
    return 0;
}
