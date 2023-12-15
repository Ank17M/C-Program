#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Character -> ");
    scanf("%c",&ch);
    printf("%c",ch);
    ch = toupper(ch);
    printf("\n%c",ch);

}
