#include<stdio.h>
int bubble(int arr[],int n);
int bubble(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
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
            printf("Sorted");
            break;
        }
        else{
            printf("Not Sorted");
        }
    }
    return 0;
}