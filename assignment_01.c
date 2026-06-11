#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, choice, i;
    int *arr;
    int key = -1;
    clock_t start, end;
    double time_taken;

    while (1) {
        printf("\n--- TIME COMPLEXITY ANALYSIS ---\n");
        printf("1. Linear Search (O(n))\n");
        printf("2. Binary Search (O(log n))\n");
        printf("3. Bubble Sort (O(n^2))\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4)
            break;

        printf("Enter input size (n): ");
        scanf("%d", &n);

        arr = (int *)malloc(n * sizeof(int));

        for (i = 0; i < n; i++)
            arr[i] = i;

        start = clock();

        if (choice == 1) {
            linearSearch(arr, n, key);
        }
        else if (choice == 2) {
            binarySearch(arr, n, key);
        }
        else if (choice == 3) {
            for (i = 0; i < n; i++)
                arr[i] = rand();
            bubbleSort(arr, n);
        }
        else {
            printf("Invalid choice!\n");
            free(arr);
            continue;
        }

        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;

        printf("Time taken: %f seconds\n", time_taken);

        free(arr);
    }

    return 0;
}