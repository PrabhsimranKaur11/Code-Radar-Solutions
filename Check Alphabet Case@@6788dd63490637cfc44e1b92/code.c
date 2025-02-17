#include<stdio.h>
int main(){
    int a;
    if(a>='a' && a<='z'){
    printf("Lowercase");}
    else if(a>='A' && a<='Z'){
    printf("Uppercase");}
    else{
    printf("Not an alphabet");}
    return 0;
}