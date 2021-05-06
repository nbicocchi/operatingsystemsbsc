#include <stdio.h>

#define SIZE 9

void reversei(int *dst, const int *src, unsigned size) {
    unsigned i;

    for (i = 0; i < size; i++) {
        dst[i] = src[size-1-i];
    }
}

int main(void) {
    int src[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int dst[SIZE];
    int i;

    reversei(dst, src, SIZE);

    for (i = 0; i < SIZE; i++) {
        printf("%d ", dst[i]);
    }
}