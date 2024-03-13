#include <stdio.h>

void bubblesort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    
    do {
        swapped = 0;
        
        for(i = 1; i < n; i++) {
            if(arr[i-1] > arr[i]) {
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                swapped = 1;
            }
        }
        
    } while(swapped);
}

int main() {
    int arr[] = {15,5,10,14,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    printf("before sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    bubblesort(arr, n);
    
    printf("after sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}