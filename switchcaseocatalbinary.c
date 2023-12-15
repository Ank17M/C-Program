#include<stdio.h>
void main()
{
    char L;
    do{
        int choice;
        printf("Choose conversion:\n");
        printf("1. Binary to Octal\n");
        printf("2. Octal to Binary\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                {
                    long int binarynum, octalnum = 0, j = 1, remainder;
                    printf("Enter the value for  binary number: ");
                    scanf("%ld", &binarynum);
                    while (binarynum != 0)
                    {
                        remainder = binarynum % 10;
                        octalnum = octalnum + remainder * j;
                        j = j * 2;
                        binarynum = binarynum / 10;
                    }
                    printf("Equivalent octal value: %lo\n", octalnum);
                    printf("Do you want to convert another number? (y/n) : ");
                    scanf(" %c",&L);
                    break;
                }

            case 2:
                {
                    int num, decimal = 0, i = 0;
                    long binary = 0;
                    printf("Enter an octal number: ");
                    scanf("%d", &num);
                    while (num != 0){
                        decimal = decimal + (num % 10) * pow(8, i);
                        i++;
                        num = num / 10;
                    }
                    i = 1;
                    while (decimal != 0){
                        binary = binary + (decimal % 2) * i;
                        decimal = decimal / 2;
                        i = i * 10;
                    }
                    printf("Equivalent Binary number is: %ld\n", binary);
                    printf("Do you want to convert another number? (y/n) : ");
                    scanf(" %c",&L);
                    break;
                }

            default:
                printf("Invalid choice!\n");
                printf("Do you want to convert another number? (y/n) : ");
                scanf(" %c",&L);

                break;
        }
    }while(L == 'y' || L == 'Y');
    printf("Program Terminated");
}
