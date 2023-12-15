#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfWeek(int year, int month, int day) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = day;

    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i];

        // Add an extra day for February in a leap year
        if (i == 2 && isLeapYear(year)) {
            totalDays++;
        }
    }

    // Add extra days for previous years
    for (int i = 1; i < year; i++) {
        totalDays += isLeapYear(i) ? 366 : 365;
    }

    // Calculate the day of the week (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    return totalDays % 7;
}

int main() {
    int year, month, day;

    // Enter the date
    printf("Enter the date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &year, &month, &day);

    // Calculate the day of the week
    int dayOfWeekIndex = dayOfWeek(year, month, day);

    // Define an array of day names
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Print the result
    printf("The day of the week is: %s\n", days[dayOfWeekIndex]);

    return 0;
}

