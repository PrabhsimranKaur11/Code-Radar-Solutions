#include <stdio.h>

// Iterative function to calculate factorial of a single number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate factorials for a range of numbers
int factorialRange(int start, int end) {
    int result = 1; // Initialize result
    for (int i = start; i <= end; i++) { // Loop through the range
        result *= factorial(i); // Multiply factorials of each number
    }
    return result; // Return accumulated result
}

