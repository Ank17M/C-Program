#include<stdio.h>
void main()
{
    int a;
    printf("Enter int value -> ");
    scanf("%d",&a);
    printf("Value entered -> %d",a);
    printf("\nSize -> %d bytes",sizeof(a));
    printf("\nAddress of %d is -> %p",a,a);

    float b;
    printf("\nEnter float value -> ");
    scanf("%f",&b);
    printf("Value entered -> %.3f",b);
    printf("\nSize -> %d bytes",sizeof(b));

    char c;
    printf("\nEnter a character -> ");
    scanf(" %c",&c);
    printf("Character entered -> %c",c);
    printf("\nSize -> %d bytes",sizeof(c));

    double d;
    printf("\nEnter double value -> ");
    scanf("%lf",&d);
    printf("Value entered -> %lf",d);
    printf("\nSize -> %d bytes",sizeof(d));

    short int e;
    printf("\nEnter short int value -> ");
    scanf("%hd",&e);
    printf("Value entered -> %hd",e);
    printf("\nSize -> %d bytes",sizeof(e));
}
