#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *time_conversion(const char *s) {
    int hh, mm, ss;
    char ampm[3];

    if (sscanf(s, "%d:%d:%d%2s", &hh, &mm, &ss, ampm) != 4) {
        return NULL;
    }

    if (strcmp(ampm, "AM") == 0) {
        if (hh == 12) {
            hh = 0;
        }
    } else if (strcmp(ampm, "PM") == 0) {
        if (hh != 12) {
            hh += 12;
        }
    } else {
        return NULL;
    }

    char *result = (int*)malloc(9 * sizeof(char));

    if (result == NULL) {
        return NULL;
    }

    snprintf(result, 9, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}

int main(void) {
    char input[16];

    if (scanf("%15s", input) != 1) {
        return 1;
    }

    char *result = time_conversion(input);

    if (result == NULL) {
        return 1;
    }

    printf("%s\n", result);

    free(result);

    return 0;
}
