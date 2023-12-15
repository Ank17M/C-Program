// C Program To Convert Octal To Binary
#include <stdio.h>
#include <math.h>

void main(){

    int num, decimal = 0, i = 0;
    long binary = 0;
    // Asking for Input
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

    printf("Equivalent Binary number is: %ld", binary);

}
