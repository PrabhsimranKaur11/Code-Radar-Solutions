#include<stdio.h>

int factorial(int n); // Function to compute factorial
int factorialRange(int start, int end); // Function for factorial of a range

// Function to calculate factorial of a single number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to calculate factorials for a range of numbers
int factorialRange(int start, int end) {
    int result = 1; // Initialize result
    for (int i = start; i <= end; i++) { // Loop through the range
        result *= factorial(i); // Multiply factorials of each number
    }
    return result; // Return accumulated result
}

