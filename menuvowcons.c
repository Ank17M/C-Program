#include<stdio.h>
void main()
{
    char choice;
    printf("Enter a Character : ");
    scanf(" %c",&choice);
    choice = tolower(choice);
    switch (choice)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", choice);
            break;
        default:
            printf("%c is a consonant.\n", choice);
    }
}
