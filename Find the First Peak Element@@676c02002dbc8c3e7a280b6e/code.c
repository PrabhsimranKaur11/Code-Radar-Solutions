#include<stdio.h>
int bubbleSort(int arr[],int n);
int printArray(int arr[],int n);
int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    int printArray(int arr[],int n){
    printf("%d\n", arr[n - 1]);

}
return 0;}