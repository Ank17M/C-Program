#include <stdio.h>

int main() {
    char input;
    int isVowel;
    char choice;

    do {
        printf("Enter a character: ");
        scanf(" %c", &input);

        switch (input) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                isVowel = 1;
                break;
            default:
                isVowel = 0;
        }

        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
            if (isVowel) {
                printf("%c is a vowel.\n", input);
            } else {
                printf("%c is a consonant.\n", input);
            }
        } else {
            printf("Invalid input. Please enter a valid character.\n");
        }

        printf("Do you want to check another character? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program terminated.\n");

    return 0;
}
