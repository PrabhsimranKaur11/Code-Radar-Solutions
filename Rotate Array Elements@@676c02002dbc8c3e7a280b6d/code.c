#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Ensure k is within bounds of the array length
    k = k % n;

    // Temporary array to store rotated elements
    int temp[n];
    
    // Copy rotated elements to the temporary array
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + n - k) % n];
    }

    // Copy temporary array back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

   
    scanf("%d", &n);

    int arr[n];
    
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &k);

    // Rotate array
    rotateArray(arr, n, k);
    
    // Print rotated array
    printf("Rotated Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}