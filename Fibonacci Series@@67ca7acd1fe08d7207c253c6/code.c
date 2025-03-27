#include<stdio.h>
int fibonacciSeries(int n);
int fibonacciSeries(int n){
    for(int i=0;i<n;i++){
         int f = 0;
            int s =1;
        if(n<=0){t=f;}
        else{
            int t= f+s;
            f=s;
            s=t;}
        printf("%d",t);
    }
}