#include <stdio.h>

void estimateTime(int weight) {
    if (weight < 0 || weight > 7000) {
        printf("INVALID INPUT\n");
    } else if (weight == 0) {
        printf("Time Estimated: 0 Minutes\n");
    } else if (weight <= 2000) {
        printf("Time Estimated: 25 Minutes\n");
    } else if (weight <= 4000) {
        printf("Time Estimated: 35 Minutes\n");
    } else if (weight <= 7000) {
        printf("Time Estimated: 45 Minutes\n");
    } else {
        printf("OVERLOADED\n");
    }
}

int main() {
    int weight;
    printf("Enter weight (0 to 7000 grams): ");
    scanf("%d", &weight);
    estimateTime(weight);
    return 0;
}
