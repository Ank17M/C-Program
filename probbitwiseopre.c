#include <stdio.h>

int main() {
    // Declare variables p, q, and r as integers
    int p, q, r;

    // Set values for p, q, and r
    p = 3;
    q = 1;
    r = 2;

    // Check the conditions using bitwise AND and XOR operators
    if ((p + (2 & 2 & 2)) && (q + (3 & 3 & 3)) && (r + (2 ^ 2 ^ 2))) {
        p = p - 2;
        q = p;
    } else {
        p = r;
        p = q ^ r;
    }

    // Print the sum of p, q, and r
    printf("%d\n", p + q + r);

    return 0;
}
