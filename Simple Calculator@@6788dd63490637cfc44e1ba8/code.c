#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    switch(c){
    case '+':
    printf(a+b);
    case '-':
    printf("%d",a-b);
    case '*':
    printf("%d",a*b);
    case '/':
    if (b!= 0){
    printf("%d",a/b);}
    else{printf("error");}
    default:
    printf("error");
    return 0;
}}