#include <stdio.h>

int main() {
    int v[] = {1, 5, 34, 187, -2};
    int max, i;

    max = v[0];
    for (i=0; i<5; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    printf("max=%d\n", max);
}