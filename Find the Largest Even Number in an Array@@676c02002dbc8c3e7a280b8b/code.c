#include<stdio.h>
int insertionSort(int arr[],int n);
int printArray(int arr[],int n);
int insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(int arr[],int n){
    for(int j=0;j<n;j++){
        if(arr[n-1]%2==0){
        printf("%d",arr[n-1]);
  break;
    }
    else  if(arr[n-2]%2==0){
        printf("%d",arr[n-2]);
        break;}
    else{printf("-1");
    break;}}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
insertionSort(arr, n);
printArray(arr,n);
return 0;

}