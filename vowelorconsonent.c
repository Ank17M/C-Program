#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter the character -> ");
    scanf("%c",&ch);
    printf("Entered Character is -> %c\n",ch);
    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
        printf("%c is Vowel",ch);
    else
        printf("%c is Consonant",ch);
}
