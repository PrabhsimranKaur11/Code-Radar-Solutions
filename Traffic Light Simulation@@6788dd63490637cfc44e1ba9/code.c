#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case('R'):
        printf("Stop");
        case('G'):
        printf("GO");
        case('Y'):
        printf("Slow Down");
        default:
        printf("Invalid input");
    }
}