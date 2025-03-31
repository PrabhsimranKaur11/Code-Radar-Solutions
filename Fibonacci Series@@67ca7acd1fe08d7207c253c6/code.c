int fibonacciSeries(int n);
int fibonacciSeries(int n){
    for ( int i=0;i<n;i++){
        int f =0;
        int s = 1;
        int t;
        if(i<= 1){
            t = i;
        }
        else{
            t =f + s;
            f = s;
            s = t;
        }
        printf("%d ",f);
    }
}