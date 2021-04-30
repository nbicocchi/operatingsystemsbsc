#include <stdio.h>

int main() {
    int n = 20, i;

    for (i=1; i<=n; i++) {
        if (n%i == 0) {
            printf("%d divisore di %d\n", i, n);
        }
    }
}