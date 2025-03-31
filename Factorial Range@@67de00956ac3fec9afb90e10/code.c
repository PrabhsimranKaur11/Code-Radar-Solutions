#include<stdio.h>
int factorialRange(int start,int end);
int factorialRange(int start,int end){
    for(int i = start;i<end;i++){
        if(i==0 || i==1){
            return 1;
        }
      else{
       return start * factorialRange(int start,int end-1);
      }  
        
    }
}