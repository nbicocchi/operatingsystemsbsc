#include <stdio.h>

#define SIZE 128


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