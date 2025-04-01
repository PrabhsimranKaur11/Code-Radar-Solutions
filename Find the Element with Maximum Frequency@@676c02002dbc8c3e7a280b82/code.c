#include <stdio.h>

void countFrequency(int arr[], int size) {
    int visited[size];

    for (int i = 0; i < size; i++) {
        if (visited[i]) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as visited
            }
        }
        printf("Element %d appears %d times.\n", arr[i], count);
    }
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",arr[i]);
    }
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    countFrequency(arr, size);
    return 0;
}