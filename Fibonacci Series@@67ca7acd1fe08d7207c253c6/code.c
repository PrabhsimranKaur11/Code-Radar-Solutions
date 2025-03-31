
#include<stdio.h>
int fibonnaci(int n);
int fibonnaci(int n){
    int first =0;
    int second =1;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
           int  next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }}
