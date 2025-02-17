#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(b=1;b<=10;b++){
        int c = a*b;
        printf("%d x %d = \n",c);
    }
return 0;
}