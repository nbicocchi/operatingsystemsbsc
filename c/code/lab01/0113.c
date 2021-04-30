#include <stdio.h>

int main() {
    unsigned n = 10;
    double somma_inversa = 0.0;
    int i;

    for (i = 1; i<=n; i++) {
        somma_inversa += 1 / (double)i;
    }

    printf("somma_inversa=%lf\n", somma_inversa);
}