#include<stdio.h>
int bubble(int arr[],int n);
int bubble(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    else if(arr[i]==arr[i+1]){
        printf("Sorted");
        break;
    }}
    return 1; 
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        bubble(arr,n);
        if(bubble(arr,n)){
            printf("Not Sorted");
            break;
        }
        else{
            printf("Sorted");
            break;
        }
    }
    return 0;
}