#include <stdio.h>

#define ROWS 2
#define COLS 3

void do_stuff(int rows, int cols, int v[][cols]) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%3d", v[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int v[ROWS][COLS] = {
            {1, 2, 3},
            {4, 5, 6},
    };

    do_stuff(ROWS, COLS, v);
}




