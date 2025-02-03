#include <stdio.h>
int main() {
     char a,b, c;
    scanf("%c %c",&a,&b);
    scanf("%c",&c);
    if(c==+){printf(a+b);}
    else if(c == -){printf(a-b);}
    else if(c == *){printf(a*b);}
    else if(c == / && b!=0){printf(a/b);}
    else{printf("Error");}
    return 0;
}