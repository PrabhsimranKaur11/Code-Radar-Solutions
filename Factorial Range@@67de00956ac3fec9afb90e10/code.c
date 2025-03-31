#include <stdio.h>

void factorialRange(int start, int end) {
    // Check for invalid range
    if (start > end) {
        printf("Invalid range\n");
        return;
    }
else{
    // Loop to calculate and print factorials
    for (int i = start; i <= end; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j; // Calculate factorial
        }
        printf("Factorial of %d: %d\n", i, fact); // Print result
    }
}}

