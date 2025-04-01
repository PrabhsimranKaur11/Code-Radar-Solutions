#include<stdio.h>

// Function to compute the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to compute and print the sum of digits for all array elements
void printSumOfDigits(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ",sumOfDigits(arr[i]));
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printSumOfDigits(arr, n);
    
    return 0;
}