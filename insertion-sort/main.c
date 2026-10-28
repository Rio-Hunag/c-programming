
#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
}

void insertion_sort_step(int arr[], int n) {
    int target = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > target) {
        arr[i + 1] = arr[i];
        print_array(arr, n);
        i--;
    }

    arr[i + 1] = target;
    print_array(arr, n);
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    insertion_sort_step(arr, n);

    free(arr);
    return 0;
}
