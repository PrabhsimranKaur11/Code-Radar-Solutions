#include <stdio.h>
int bubbleSort(int arr[], int n) {
 for (int i = 0; i < n - 1; i++) {
 for (int j = 0; j < n - i - 1; j++) {
 if (arr[j] > arr[j + 1]) {
 int temp = arr[j];
 arr[j] = arr[j + 1];
 arr[j + 1] = temp;
 }
 }
 }
 return arr[n];
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
 bubbleSort(arr, n);
 for (int i = 0; i < n; i++) {
scanf("%d ",&arr[i]);
 }
 return 0;}