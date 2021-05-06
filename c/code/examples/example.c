#include <stdio.h>

void stampa_array(const int *v, unsigned size) {
    unsigned i;

    for (i = 0; i < size; i++) {
        printf("%d\n", v[i]);
    }
}

int main(void) {
    int v[16];
    int *v2 = v;

    printf("%ld\n", sizeof(v));
    printf("%ld\n", sizeof(v2));
    printf("%p\n", &v[0]);
    printf("%p\n", &v2);
}




