#include <stdio.h>
int main() {
int i ,j;
scanf("%d",&j);
for(i=1;i<=10;i++){
    int table = j*i;
    printf("%d x %d = %d\n",j,i,table);
}
    return 0;
}