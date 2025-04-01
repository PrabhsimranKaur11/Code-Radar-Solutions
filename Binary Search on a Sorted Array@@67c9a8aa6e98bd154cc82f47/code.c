#include<stdio.h>
int binarySearch(int arr,int n,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
    int mid = left + right /2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        left+1;
    }
    else{
        left-1;
    }
}return -1;}
void result(int arr,int n,int target){
    result =binarySearch(arr,n,target);
    if(return!=-1){
        printf("%d",result);
        else{return -1;}
    }
}