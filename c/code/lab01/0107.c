#include <stdio.h>

int main() {
    int i, exp = 1, n = 8;

    for (i=0; i<n; i++) {
        exp *= 2;
    }
    printf("2^%d=%d\n", n, exp);
}