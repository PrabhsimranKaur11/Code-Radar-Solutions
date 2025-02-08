#include <stdio.h>
int main() {
   int sum = 0;
   int n;
scanf("%d",&n);
 int i=1;
 if(n>0){
 do{
sum=sum+i;
i++;}while(i<=n);
printf("%d",sum);}
else{printf("%d",sum==0);}
    return 0;
}