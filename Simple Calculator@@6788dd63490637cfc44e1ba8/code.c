#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=='+'){printf("%d",a+b);}
    else if(c == '-'){printf("d",a-b);}
    else if(c == '*'){printf("%d",a*b);}
    else if(c == '/' && b!=0){printf("%d",a/b);}
    if else(b==0){printf("Error");}
    else{printf("Error");}
    return 0;
}