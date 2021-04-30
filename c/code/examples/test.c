#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
    unsigned n=100, cols=5;
    int i;

    for (i=1; i<=n; i++) {
        printf("%5d", i);
        if (i%cols == 0) printf("\n");
    }
}