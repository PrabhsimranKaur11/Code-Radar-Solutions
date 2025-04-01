#include<stdio.h>
int binarySearch(int arr,int n ,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
if(int arr[mid]==target){
    return mid;
}
else if(int arr[mid]<target){
    left=mid+1;
}
else{
    left=mid-1;
}
    }
    return -1;
}
void result(int arr,int n ,int target){
    result = binarySearch(int arr,int n ,int target);
    if(result!=0){
        printf("%d",result);
    }
    else{printf("-1");}
}