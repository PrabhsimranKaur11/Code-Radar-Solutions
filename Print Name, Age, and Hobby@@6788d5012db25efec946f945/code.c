#include <stdio.h>
int main() {
    char a[100],b[100];
    int c;
    scanf("%s %s",&a,&b);
    scanf("%d",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %s",b);
    return 0;
}