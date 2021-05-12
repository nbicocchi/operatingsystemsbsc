#include <stdio.h>

void fill_array_1(int size, int *v) {
    int i;
    for (i = 0; i < size; i++) {
        v[i] = i;
    }
}

void fill_array_2(int size, int v[]) {
    int i;
    for (i = 0; i < size; i++) {
        v[i] = i;
    }
}

void show_array_1(int size, int *v) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%5d", v[i]);
    }
    printf("\n");
}

void show_array_2(int size, int v[]) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%5d", v[i]);
    }
    printf("\n");
}

#define SIZE 10
int main(void) {
    int v[SIZE];

    fill_array_1(SIZE, v);
    fill_array_2(SIZE, v);
    show_array_1(SIZE, v);
    show_array_2(SIZE, v);
}




