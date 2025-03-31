#include<stdio.h>
int factorialRange(int start,int end);
int factorialRange(int start,int end){
    for(int i = start;i<end;i++){
        if(i==0 || i==1){
            return 1;
        }
        else{
            int product = 0;
            product = product * i;
            printf("%d",product);
        }
    }
}