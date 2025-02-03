#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=='+'){printf("%d",sum);}
    else if(c == '-'){printf("%d",a-b);}
    else if(c == '*'){printf("%d",a*b);}
    else if(c =='/' && b!=0){printf("%d",a/b);}
    else{printf("E");}
    return 0;
}