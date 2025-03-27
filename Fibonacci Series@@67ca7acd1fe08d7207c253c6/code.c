#include<stdio.h>
void fibonaccciSeries(int n);
void fibonacciSeries(int n){
    int first=0;
    int second=1;
    int next;
for(int i=0;i<n;i++){
    if(i==0){printf("%d",first);}
    else if (i==1){printf("%d",second);}
    else(
        next = first +second;
        first = second;
        second = next;
        printf("%d",next);
    )
}
}