// Your code here...
#include<stdio.h>
int main(){
    int row,column;
    int n;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
     for(column=1;column<=row-1;column++){
        printf("*");
     }
     printf("\n");
    }
    return 0;
}