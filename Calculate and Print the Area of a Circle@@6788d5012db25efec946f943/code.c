#include<stdio.h>
int main(){
    int radius;
    scanf("%f",&radius);
    float area = (radius * radius * 3.14);
    printf("Area: %.2f",area);
    return 0;
}