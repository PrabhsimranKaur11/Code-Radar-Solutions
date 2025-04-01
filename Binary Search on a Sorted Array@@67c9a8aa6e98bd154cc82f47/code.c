#include<stdio.h>
int binarySearch(int arr[],int n ,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
if(arr[mid]==target){
    return mid;
}
else if(arr[mid]<target){
    left=mid+1;
}
else{
    left=mid-1;
}
    }
    return -1;
}
void handleResult(int arr[],int n ,int target){
    result = binarySearch(int arr[],int n ,int target);
    if(result!=-1){
        printf("%d\n",result);
    }
    else{printf("-1");}
}