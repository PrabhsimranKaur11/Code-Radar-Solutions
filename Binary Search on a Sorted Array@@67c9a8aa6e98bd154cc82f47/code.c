#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow
        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

// Function to handle the result
void handleResult(int arr[], int n, int target) {
    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("-1\n");
    }
}