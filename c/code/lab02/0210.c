#include <stdio.h>

#define SIZE 128

void trova_minmax(int *rmin, int *rmax, int *values, unsigned size) {
    unsigned i;
    int max = values[0];
    int min = values[0];

    for (i = 0; i < size; i++) {
        if (values[i] > max) {
            max = values[i];
        }
        if (values[i] < min) {
            min = values[i];
        }
    }
    *rmax = max;
    *rmin = min;
}

int main(void) {
    int i, rmax, rmin, src[SIZE];

    /* filling the array */
    for (i = 0; i < SIZE; i++) {
        src[i] = i;
    }

    trova_minmax(&rmin, &rmax, src, SIZE);
    printf("%d %d\n", rmin, rmax);
}