
#include<Stdio.h>
int sumofdigit(int num){
   while(num!=0){ int sum =0;
    sum+=num%10;
    num/=10;
}}
void printdigits(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d",sumofdigit(arr[i]));
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printdigits(arr, n);
    
    return 0;
}






























