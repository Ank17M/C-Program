#include<stdio.h>
int main()
{
    int a, b, c, Sn;
    printf("Enter value of a -> ");
    scanf("%d",&a);
    printf("\nEnter value of b -> ");
    scanf("%d",&b);

    printf("Enter the S.no from the Following operator - \n1(+=) \n2(*=) \n -> ");
    scanf("%d",&Sn);

    switch(Sn)
    {
        case 1:
            a+=b; //assign sum -> assigning resultant sum value of a and b into a;
            printf("\n a+=b -> %d",a);
            break;

        case 2:
            a*=b; //assign product -> assigning resultant product value of a and b into a;
            printf("\n a*=b -> %d",a);
            break;

        default:
            printf("\n You have entered a invalid S.no.");
    }
    return 0;
}
