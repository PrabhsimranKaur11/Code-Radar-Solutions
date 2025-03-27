// Your code here...
#include <stdio.h>
int fibbo(int n);
int fibbo(int n){
    if(n==0){return 0;}
    else{for(int i=0;i<=5;i++){printf(n + fibbo(n+1);)}
}}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d");
    fibbo(n);
    return 0;
}