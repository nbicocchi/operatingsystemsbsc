#include <stdio.h>

#define TRUE 1
#define FALSE 0

/* Functions for swapping two integers numbers */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Function to implement bubble sort */
void bubble_sort(int arr[], int n) {
    int i, j, changed;
    for (i = 0; i < n-1; i++) {
        changed = FALSE;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                changed = TRUE;
                swap(&arr[j], &arr[j + 1]);
            }
        }
        if (!changed) break;
    }
}

/* Function to print an array */
void show_array(int arr[], int size) {
    int i;
    for (i=0; i < size; i++) {
        printf("[%d] %d\n", i, arr[i]);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    show_array(arr, n);
    bubble_sort(arr, n);
    show_array(arr, n);
}
