#include <stdio.h>
#include <time.h>

int main() {
    struct tm date;
    time_t t;

    // Enter the date
    printf("Enter the date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &date.tm_year, &date.tm_mon, &date.tm_mday);

    // Adjust for the structure format (years since 1900, months 0-11)
    date.tm_year -= 1900;
    date.tm_mon -= 1;

    // Set other fields of the tm structure
    date.tm_hour = 0;
    date.tm_min = 0;
    date.tm_sec = 0;
    date.tm_isdst = -1;  // Set to -1 to let the system determine if daylight saving time is in effect

    // Convert tm structure to time_t
    t = mktime(&date);

    if (t == -1) {
        perror("mktime");
        return 1;
    }

    // Use strftime to get the day of the week
    char day_of_week[20];
    strftime(day_of_week, sizeof(day_of_week), "%A", &date);

    // Print the result
    printf("The day of the week is: %s\n", day_of_week);

    return 0;
}
