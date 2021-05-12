#include <stdio.h>

void fill_matrix_1(int rows, int cols, int m[][cols]) {
    int i, j;
    for (i = 0; i<rows; i++) {
        for (j = 0; j<cols; j++) {
            m[i][j] = i * j;
        }
    }
}

void fill_matrix_2(int rows, int cols, int **m) {
    int i, j;
    for (i = 0; i<rows; i++) {
        for (j = 0; j<cols; j++) {
            m[i][j] = i * j;
        }
    }
}

void show_matrix_1(int rows, int cols, int m[][cols]) {
    int i, j;

    for (i = 0; i<rows; i++) {
        for (j = 0; j<cols; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}

void show_matrix_2(int rows, int cols, int **m) {
    int i, j;

    for (i = 0; i<rows; i++) {
        for (j = 0; j<cols; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}

#define SIZE 10
int main(void) {
    int m[SIZE][SIZE];

    fill_matrix_1(SIZE, SIZE, m);
    fill_matrix_2(SIZE, SIZE, m);
    show_matrix_1(SIZE, SIZE, m);
    show_matrix_2(SIZE, SIZE, m);
}




