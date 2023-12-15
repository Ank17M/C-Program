#include <stdio.h>

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate element: %d\n", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 5, 6, 7, 8, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements in the array:\n");
    findDuplicates(arr, size);

    return 0;
}
