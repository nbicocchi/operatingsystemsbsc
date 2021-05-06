#include <stdio.h>

#define SIZE 128

void trova_max(int *rmax, const int *values, unsigned size) {
    unsigned i;
    int max = values[0];

    for (i = 0; i < size; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }
    *rmax = max;
}

int main(void) {
    int i, rmax, src[SIZE];

    /* filling the array */
    for (i = 0; i < SIZE; i++) {
        src[i] = i;
    }

    trova_max(&rmax, src, SIZE);
    printf("%d\n", rmax);
}