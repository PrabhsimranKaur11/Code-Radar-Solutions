#include<stdio.h>
int bubble(int arr[],int n);
int bubble(int arr[],int n){
    if(1){
        for(int i=0;i<n-1;i++){
            for(int j =0;j<n-1-i;j++){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("Sorted");
}
else{printf("Not Sorted");}}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
        bubble(arr,n);
    }
}