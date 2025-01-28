#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%a==0 && a%1==0 && (a>1) && a!=4){
        printf("Prime"); }
else{printf("Not Prime");}
    return 0;
}