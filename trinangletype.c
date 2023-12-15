#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter length of side 1: ");
    scanf("%d", &side1);

    printf("Enter length of side 2: ");
    scanf("%d", &side2);

    printf("Enter length of side 3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It is an Equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It is an Isosceles triangle.\n");
    } else {
        printf("It is a Scalene triangle.\n");
    }

    return 0;
}
