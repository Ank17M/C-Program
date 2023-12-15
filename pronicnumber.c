#include <stdio.h>

int main() {
    printf("Pronic numbers in the range 0 to 100:\n");

    for (int num = 1; num <= 100; num++) {
        int isPronic = 0;

        for (int i = 0; i * (i + 1) <= num; i++) {
            if (i * (i + 1) == num) {
                isPronic = 1;
                break;
            }
        }
        if (isPronic) {
            printf("%d\n", num);
        }
    }

    return 0;
}
