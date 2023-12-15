#include <stdio.h>

void main() {
    char ch;
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Check Vowel\n");
        printf("2. Check Consonant\n");
        printf("3. Terminate Program\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a character: ");
                scanf(" %c", &ch);
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
                        printf("%c is not a vowel.\n", ch);
                }
                break;

            case 2:
                printf("Enter a character: ");
                scanf(" %c", &ch);
                ch = tolower(ch);

                if ((ch >= 'a' && ch <= 'z') && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                    printf("%c is a consonant.\n", ch);
                } else {
                    printf("%c is not a consonant.\n", ch);
                }
                break;

            case 3:
                printf("Program Terminated!\n");
                break;

            default:
                printf("Invalid choice. Enter a number between 1 and 3.\n");
        }
    } while (choice != 3);

}
