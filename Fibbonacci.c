#include <stdio.h>

void main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printf("%d %d ",first,second);

    for (int i = 2; i < n; ++i) {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
}
