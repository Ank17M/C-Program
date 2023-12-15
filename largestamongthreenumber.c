#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the Three numbers => ");
    scanf("%d %d %d", &a , &b , &c);
    printf("Three Numbers are => %d, %d, %d\n",a , b , c);
    if(a>b&&a>c)
        printf("A is greater");
    else if(b>a&&b>c)
        printf("B is Greater");
    else if(c>a&&c>b)
        printf("C is Greater");
    else
        printf("Numbers are Equal");
    getch();
}
