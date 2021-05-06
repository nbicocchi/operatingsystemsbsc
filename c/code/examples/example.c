#include <stdio.h>

#define ROWS 2
#define COLS 3

int sum(int v[ROWS][COLS]) {
    int i, j, sum = 0;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sum += v[i][j];
        }
    }
    return sum;
}

int sum_mod(int v[][COLS]) {
    int i, j, sum = 0;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sum += v[i][j];
        }
    }
    return sum;
}

int sum_mod_mod(int **v, int rows, int cols) {
    int i, j, sum = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += v[i][j];
        }
    }
    return sum;
}

int main(int argc, char *argv[]) {
    int v[ROWS][COLS] = {
            {1, 2, 3},
            {4, 5, 6},
    };
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d", v[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", sum_mod_mod(v, ROWS, COLS));
}




