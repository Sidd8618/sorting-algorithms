#include <stdio.h>

void selectionsort(int arr[], int n) {
    int i = 0;
    int j, min, temp;
    int swapped; 
    
    do {
        swapped = 0; 
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
                swapped = 1; 
            }
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        i++;
    } while (swapped);
    
}

int main() {
    int arr[] = {25,12,11,98,7,41,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    
    printf("original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    selectionsort(arr, n);
    
    printf("sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}