#include <stdio.h>

#define SIZE 128

long findi(int t, const int *values, unsigned size) {
    long i;

    for (i = 0; i < size; i++) {
        if (values[i] == t) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int i, src[SIZE];
    long index;

    /* filling the array */
    for (i = 0; i < SIZE; i++) {
        src[i] = i;
    }

    index = findi(100, src, SIZE);
    printf("%ld\n", index);

}