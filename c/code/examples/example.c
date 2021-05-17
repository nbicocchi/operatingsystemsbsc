#include <stdio.h>

int sum(int a, int b) {
    return a+ + b;
}

int *f(void) {
    int i = 13;
    return &i;
}

int main(void) {
    int *p = f();
    printf("%d\n", *p);
    sum(2, 3);
    printf("%d\n", *p);
}