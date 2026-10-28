
#include <stdio.h>
#include <stdlib.h>

int find_min_width(int width[], int entry, int exit) {
    int min_width = width[entry];

    for (int i = entry; i <= exit; i++) {
        if (width[i] < min_width) {
            min_width = width[i];
        }
    }

    return min_width;
}

int main(void) {
    int n, t;

    if (scanf("%d %d", &n, &t) != 2) {
        return 1;
    }

    if (n <= 0 || t <= 0) {
        return 1;
    }

    int *width = (int*)malloc(n * sizeof(int));

    if (width == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &width[i]) != 1) {
            free(width);
            return 1;
        }
    }

    for (int i = 0; i < t; i++) {
        int entry, exit;

        if (scanf("%d %d", &entry, &exit) != 2) {
            free(width);
            return 1;
        }

        if (entry < 0 || exit >= n || entry > exit) {
            free(width);
            return 1;
        }

        printf("%d\n", find_min_width(width, entry, exit));
    }

    free(width);

    return 0;
}
