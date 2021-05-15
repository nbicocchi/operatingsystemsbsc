#include <stdio.h>

int *func(void) {
    int n = 13;
    return &n;
}

int main(void) {
    int *p;

    p = func();
    printf("%d\n", *p);
}


