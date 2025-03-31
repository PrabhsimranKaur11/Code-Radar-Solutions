#include<stdio.h>
int bubbleSort(int arr[],int n){
    int i;
    for(int i = 0; i < n-1;i++){
        for(int j = 0;j<n-2;j++)
        if (arr[i]>arr[j]){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }}}