
#include <stdio.h>
#include <stdlib.h>

int workbook(int n, int k, int arr[]) {
    int page = 1;
    int special_problems = 0;

    for (int i = 0; i < n; i++) {
        int total_problems = arr[i];

        for (int start = 1; start <= total_problems; start += k) {
            int end = start + k - 1;

            if (end > total_problems) {
                end = total_problems;
            }

            if (page >= start && page <= end) {
                special_problems++;
            }

            page++;
        }
    }

    return special_problems;
}

int main(void) {
    int n, k;

    if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0) {
        return 1;
    }

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1 || arr[i] <= 0) {
            free(arr);
            return 1;
        }
    }

    printf("%d\n", workbook(n, k, arr));

    free(arr);
    return 0;
}
