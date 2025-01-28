#include <stdio.h>
int main() {
  int i,j,co=0;
  scanf("%d",&a);
  if(i<=1){printf("Not Prime");}
for (j=1,j<=i;j++)
{
    if (i%j==0){
        co++;
    }
}
if co ==2{
    printf("Prime");
}
else{printf("Not Prime");
}
return 0;
}