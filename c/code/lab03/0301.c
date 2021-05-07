#include <stdio.h>

long matrix_edge(unsigned n_rows, unsigned n_cols, int m[][n_cols]) {
    int i;
    long sum = 0;

    /* first row */
    for (i = 0; i < n_cols; i++) {
        sum += m[0][i];
    }

    /* last row */
    for (i = 0; i < n_cols; i++) {
        sum += m[n_rows - 1][i];
    }

    /* first column */
    for (i = 1; i < n_rows - 1; i++) {
        sum += m[i][0];
    }

    /* last column */
    for (i = 1; i < n_rows - 1; i++) {
        sum += m[i][n_cols - 1];
    }

    return sum;
}

int main(void) {
    int m[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16},
    };

    printf("matrix edge sum = %ld\n", matrix_edge(4, 4, m));
}