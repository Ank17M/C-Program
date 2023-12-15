#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swap adjacent elements
    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Display the modified array
    printf("Array after swapping adjacent elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0; // Exit the program successfully
}
