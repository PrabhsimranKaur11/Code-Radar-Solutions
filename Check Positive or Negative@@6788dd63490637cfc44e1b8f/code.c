#include <stdio.h>
int main() {
    int a;
    scanf("%d",a);
    if(a>0){
    printf("Positive %c");}
    if(a==0){
        printf("Zero %c");
    }
    else{
        printf("Negative %c");
    }
    return 0;
}