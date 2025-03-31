#include<Stdio.h>
int selectionSort(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++)
        {
int temp =0;
if(arr[j]>arr[j+1]){
    int temp = arr[j];
    arr[j]=arr[j+1]
    arr[j+1]=temp;
}}}

int printArray(int arr[], int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
}