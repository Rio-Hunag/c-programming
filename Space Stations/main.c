
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int flatland_space_stations(int n, int count, int stations[]) {
    qsort(stations, count, sizeof(int), compare);

    int max_dist = stations[0];

    for (int i = 1; i < count; i++) {
        int dist = (stations[i] - stations[i - 1]) / 2;

        if (dist > max_dist) {
            max_dist = dist;
        }
    }

    int last_dist = n - 1 - stations[count - 1];

    if (last_dist > max_dist) {
        max_dist = last_dist;
    }

    return max_dist;
}

int main(void) {
    int n, m;

    if (scanf("%d %d", &n, &m) != 2) {
        return 1;
    }

    if (n <= 0 || m <= 0 || m > n) {
        return 1;
    }

    int *stations = malloc(m * sizeof(int));

    if (stations == NULL) {
        return 1;
    }

    for (int i = 0; i < m; i++) {
        if (scanf("%d", &stations[i]) != 1) {
            free(stations);
            return 1;
        }

        if (stations[i] < 0 || stations[i] >= n) {
            free(stations);
            return 1;
        }
    }

    int result = flatland_space_stations(n, m, stations);

    printf("%d\n", result);

    free(stations);

    return 0;
}
