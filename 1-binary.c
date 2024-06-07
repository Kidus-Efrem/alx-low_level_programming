#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) // Check for NULL array
        return -1;

    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right) {
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Return -1 if not found
}
