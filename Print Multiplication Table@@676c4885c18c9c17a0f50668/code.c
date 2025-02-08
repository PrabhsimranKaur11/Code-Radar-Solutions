#include <stdio.h>
int main() {
int i ,j;
scanf("%d",&j);
for(i=0;i<=10;i++){
    int table = j*i;
    printf(",j x i = %d\n",table);
}
    return 0;
}