#include <stdio.h>

int main() {
    int num, i = 2, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<=1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        while (i <= num/2)
        {
            if (num % i == 0) {
                prime = 0;
                break;
            }
            i++;
        }
     }

    if (prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
