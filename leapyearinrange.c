#include <stdio.h>

int main() {
    int startYear, endYear, leapYears = 0;
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    for (int year = startYear; year <= endYear; ++year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            leapYears++;
    }
    printf("Number of leap years between %d and %d: %d\n", startYear, endYear, leapYears);
    return 0;
}
