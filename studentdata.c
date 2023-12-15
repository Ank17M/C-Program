#include <stdio.h>

int main() {
    char name[50];
    int rollNo, marks1, marks2, marks3, marks4;
    float totalMarks, percentage;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter marks obtained in subject 1 (out of 100): ");
    scanf("%d", &marks1);

    printf("Enter marks obtained in subject 2 (out of 100): ");
    scanf("%d", &marks2);

    printf("Enter marks obtained in subject 3 (out of 100): ");
    scanf("%d", &marks3);

    printf("Enter marks obtained in subject 4 (out of 100): ");
    scanf("%d", &marks4);

    totalMarks = marks1 + marks2 + marks3 + marks4;
    percentage = (totalMarks / 400) * 100;

    printf("\nStudent Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);
    printf("Total Marks Obtained: %.2f\n", totalMarks);
    printf("Percentage Score: %.2f%%\n", percentage);

    return 0;
}
