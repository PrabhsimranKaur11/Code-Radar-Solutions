#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=='+'){printf(a+b);}
    else if(c == '-'){printf(a-b);}
    else if(c == '*'){printf(a*b);}
    else if(c == '/'){printf(a/b);}
    else{printf("Error");}
    return 0;
}