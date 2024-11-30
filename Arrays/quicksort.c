#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) { // Changed condition to j <= high - 1
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void qsort(int arr[], int low, int high) {
    if (low < high) {
        int i = partition(arr, low, high);
        
        qsort(arr, low, i - 1);
        qsort(arr, i + 1, high);
    }
}

int main() {
    int arr[] = {20, 44, 34, 78, 98, 33, 4, 5, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    return 0;
}
