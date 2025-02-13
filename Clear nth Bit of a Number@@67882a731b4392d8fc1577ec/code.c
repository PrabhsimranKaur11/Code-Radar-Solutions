// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
   printf("%d", a&=a~(a<<b));
return 0;
}