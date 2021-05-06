#include <stdio.h>

#define SIZE 32

void fibonacci(unsigned *dst, unsigned n) {
    unsigned i;

    dst[0] = 0;
    dst[1] = 1;

    for (i = 2; i < n; i++) {
        dst[i] = dst[i-1] + dst[i-2];
    }
}

int main(void) {
    unsigned i, dst[SIZE];

    fibonacci(dst, SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Fibonacci[%i] = %u\n", i, dst[i]);
    }

}