#include<stdio.h>
int searchInRotatedArray(int arr[],int n ,int target){
  int found=0;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
        return i;
    }
  }return -1;}
  int handle(int arr[],int n ,int target){
    int result =searchInRotatedArray(arr,n ,target);
    if(result!=-1){
        printf("%d",result);
    }
    return -1;
  }
