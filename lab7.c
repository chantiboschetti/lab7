#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort implementation
void bubbleSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swaps++;
            }
        }
    }
    printf("Number of swaps: %d\n", swaps);
}

// Selection sort implementation
void selectionSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
            swaps++;
        }
    }
    printf("Number of swaps: %d\n", swaps);
}

// Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", arr[i], i + 1);
    }
    printf("\n");
}

int main() {
    // Define array1 and array2
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    printf("array1 bubble sort:\n");
    bubbleSort(array1, n1);
    printArray(array1, n1);

    printf("array2 bubble sort:\n");
    bubbleSort(array2, n2);
    printArray(array2, n2);

    printf("array1 selection sort:\n");
    selectionSort(array1, n1);
    printArray(array1, n1);

    printf("array2 selection sort:\n");
    selectionSort(array2, n2);
    printArray(array2, n2);

    return 0;
}
