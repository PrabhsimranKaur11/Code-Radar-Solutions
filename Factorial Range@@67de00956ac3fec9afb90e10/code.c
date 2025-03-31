#include <stdio.h>

void factorialRange(int start, int end) {
    if (start < 1 || end < 1) {
        printf("Invalid range\n");
        return;
    }

    int i, j;
    for (i = start; i <= end; i++) {
        int fact = 1;
        for (j = 1; j <= i; j++) {
            fact = fact * j;
        }
        printf("%d! = %d\n", i, fact); // Added factorial notation for clarity
    }
}

int main() {
    int start = 1, end = 5; // Example range
    factorialRange(start, end);
    return 0;
}