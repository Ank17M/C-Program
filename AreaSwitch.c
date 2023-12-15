#include <stdio.h>

int main() {
    char choice;
    double area;
    int base, height, length, width, radius;

        printf("Choose a shape to calculate the area:\n");
        printf("1. Triangle\n");
        printf("2. Rectangle\n");
        printf("3. Circle\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter base and height of the triangle: ");
                scanf("%d %d", &base, &height);
                area = 0.5 * base * height;
                printf("Area of the triangle: %.2f\n", area);
                break;
            case '2':
                printf("Enter length and width of the rectangle: ");
                scanf("%d %d", &length, &width);
                area = length * width;
                printf("Area of the rectangle: %.2f\n", area);
                break;
            case '3':
                printf("Enter radius of the circle: ");
                scanf("%d", &radius);
                area = 3.14159 * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            default:
                printf("Invalid choice.\n");
        }

    return 0;
}
