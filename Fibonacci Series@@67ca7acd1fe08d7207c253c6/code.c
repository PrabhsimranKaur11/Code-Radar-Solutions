#include<stdio.h>
int fibonacciSeries(int n);
int fibonacciSeries(int n){
    for(int i=0;i<n;i++){
         int f = 0;
            int s =1;
            int t;
        if(n<=0){
            f=t;}
        else{
            int t= f+s;
            f=s;
            s=t;}
        printf("%d",t);
    }
}