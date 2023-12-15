#include <stdio.h>

void main() {
    double s1, s2, h;

    printf("Enter the length of side 1: ");
    scanf("%lf", &s1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &s2);

    printf("Enter the length of the h: ");
    scanf("%lf", &h);

    if (s1 * s1 + s2 * s2 == h * h || s1 * s1 + h * h == s2 * s2 || s2 * s2 + h * h == s1 * s1)
        {
            printf("The triangle is right-angled.\n");
        }
    else
        {
            printf("The triangle is not right-angled.\n");
        }
}
