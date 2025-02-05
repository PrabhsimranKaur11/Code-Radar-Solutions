#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
     a<<31 & 1?printf("Set"):printf("Not Set");
    return 0;
}