#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
if(n==1){
    printf("%d",arr[0]);
}
else if(arr[0]>arr[1]){
    printf("%d",arr[0]);
}
for(int i=0;i<n,i++)
if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
    printf("%d",arr[i]);
}
else if(arr[n]>arr[i-2]){
    printf("%d",arr[n]);
    return 0;
}
printf("-1");
}