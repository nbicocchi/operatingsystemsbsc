#include <stdio.h>

int main() {
    int i, somma = 0, n = 10;

    for (i=1; i<=n; i+=2) {
        somma += i;
    }
    printf("somma=%d\n", somma);
}