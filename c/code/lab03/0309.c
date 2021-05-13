#include <stdio.h>

#define ROWS 10
#define COLS 10

void show_addresses(int rows, int cols, int v[][cols]) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%p -> %d\n", &v[i][j], v[i][j]);
        }
        printf("\n");
    }
}

#define ROWS 10
#define COLS 10
int main(void) {
    int v[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            v[i][j] = (i + 1) * (j + 1);
        }
    }
    show_addresses(ROWS, COLS, v);
}




