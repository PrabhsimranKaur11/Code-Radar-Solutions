#include <stdio.h>
int main() {
   int sum = 0;
   int n;
scanf("%d",&n);
 int i=1;
 do{
sum=sum+i;
i++;}while(i<=n);
printf("%d",sum);
    return 0;
}