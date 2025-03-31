
int fibonacciSeries(int n);
int fibonaccciSeries(int n){
    int first =0;
    int second =1;
    int next;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }}
