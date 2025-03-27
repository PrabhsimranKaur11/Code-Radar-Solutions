#include<stdio.h>

void fibonacciSeries(int n) {
    int f = 0; // First number in the Fibonacci sequence
    int s = 1; // Second number in the Fibonacci sequence
    int t;     // Temporary variable for calculation

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", f);
        } else if (i == 1) {
            printf("%d ", s);
        } else {
            t = f + s; // Sum of the previous two numbers
            f = s;     // Update the first number
            s = t;     // Update the second number
            printf("%d ", t); // Print the current Fibonacci number
        }
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacciSeries(n); // Call the function to print Fibonacci series
    return 0;
}