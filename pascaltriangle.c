#include <stdio.h>

void main()
{
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            {
                printf(" ");
            }

        int number = 1;
        for (int j = 0; j <= i; j++)
            {
                printf("%d ", number);
                number = number * (i - j) / (j + 1);
            }
        printf("\n");
    }
}
