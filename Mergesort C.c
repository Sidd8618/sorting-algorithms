#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    int swapped = 0;

    do {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
            swapped = 1; 
        }
        k++;
    } while (i < n1 && j < n2);

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    if (swapped)
        swapped = 0;
    else
        swapped = 1;
}

void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {10,5,4,15,6,9,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, size - 1);

    printf("sorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}