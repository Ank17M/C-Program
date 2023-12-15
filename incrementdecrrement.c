#include<stdio.h>
void main()
{
    int a = 4, b, d = 4, c;
    b = ++a + ++a + ++a;
    c = d++ + d++ + d++;
    printf("%d",b);
    printf("\n%d",c);
}
