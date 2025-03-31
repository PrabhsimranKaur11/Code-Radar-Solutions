int factorial(int n); 
int factorialRange(int start, int end);
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int factorialRange(int start, int end) {
    int result = 1; 
    for (int i = start; i <= end; i++) { 
        result *= factorial(i); 
    }
    return result; }
