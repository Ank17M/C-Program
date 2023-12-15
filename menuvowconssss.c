#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase to handle both uppercase and lowercase characters
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }

    return 0;
}
