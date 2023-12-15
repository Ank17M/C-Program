#include <stdio.h>

int main() {
    int total_vehicles = 200;
    int total_wheels = 540;
    int wheels_per_4wheeler = 4;
    int wheels_per_2wheeler = 2;

    int x, y; // Number of 4-wheelers (x) and 2-wheelers (y)

    x = (total_wheels - (total_vehicles * wheels_per_2wheeler)) / (wheels_per_4wheeler - wheels_per_2wheeler);

    y = total_vehicles - x;

    printf("Number of 4-wheelers: %d\n", x);
    printf("Number of 2-wheelers: %d\n", y);

    return 0;
}
