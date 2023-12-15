#include <stdio.h>

int main() {
    int units;
    float totalBill, electricityDuty, fixedCharge = 220.0;

    printf("Enter units of consumption: ");
    scanf("%d", &units);

    if (units <= 200) {
        totalBill = fixedCharge;
    } else if (units <= 400) {
        totalBill = fixedCharge + (units - 200) * 6;
    } else if (units <= 600) {
        totalBill = fixedCharge + 200 * 6 + (units - 400) * 7;
    } else {
        totalBill = fixedCharge + 200 * 6 + 200 * 7 + (units - 600) * 8;
    }

    electricityDuty = 0.05 * totalBill;

    totalBill += electricityDuty;

    printf("Electricity Bill: Rs. %.2f\n", totalBill);

    return 0;
}
