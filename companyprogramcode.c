#include <stdio.h>

int main() {
    int total_vehicles,total_wheels;
    printf("Enter total number of Vehicles : ");
    scanf("%d",&total_vehicles);
    printf("Enter total number of Wheels : ");
    scanf("%d",&total_wheels);

    int wheels_per_4wheeler = 4;
    int wheels_per_2wheeler = 2;

    int x, y;

    for (x = 0; x <= total_vehicles; x++) {
        y = total_vehicles - x;

        if ((wheels_per_4wheeler * x + wheels_per_2wheeler * y) == total_wheels) {
            printf("Number of 4-wheelers: %d\n", x);
            printf("Number of 2-wheelers: %d\n", y);
            break;
        }
    }

    return 0;
}
