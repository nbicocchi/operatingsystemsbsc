#include <stdio.h>

int main() {
    unsigned int n = 100, cols = 5, i;

    for(i=0; i<=n; i++) {
        if (i%cols == 0) {
            printf("\n");
        }
        printf("%4u ", i);
    }
    printf("\n");
}
