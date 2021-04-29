#include <stdio.h>

int is_prime(unsigned v) {
    unsigned i;

    if (v == 0) return 0;
    if (v == 1) return 1;

    for (i=2; i<v; i++){
        if (v % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    unsigned i;

    for (i=0; i<100; i++) {
        printf("Value: %10u, Result: %d\n", i, is_prime(i));
    }
    return 0;
}