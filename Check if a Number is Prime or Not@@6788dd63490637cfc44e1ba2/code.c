#include <stdio.h>
int main() {
  int i,j,count=0;
  scanf("%d",&a);
  if(i<=1){printf("Not Prime");}
for (j=1,j<=i;j++)
{
    if (i%j==0){
        count++;
    }
}
if (count == 2){
    printf("Prime");
}
else{printf("Not Prime");
}
}