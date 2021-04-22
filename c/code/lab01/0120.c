#include "es25_lib.h"

#include <stdio.h>

int main() {
    unsigned i;
    for (i = 0; i <= 3999; i++) {
        printf("%4u: ", i);
        to_romans(i);
        printf("\n");
    }
    return 0;
}