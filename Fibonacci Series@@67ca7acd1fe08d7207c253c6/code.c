// Your code here...
#include <stdio.h>
int fibonacciSeries(int n);
int fibonacciSeries(int n){
    if(n==0){return 0;}
    else{for(int i=0;i<n;i++){
      int first =0,int second=1;
      int finall =first +second;
      first = second;
      second =finall;
      printf("%d",finall);
      }
}}