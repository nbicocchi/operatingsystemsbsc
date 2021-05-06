#include <stdio.h>

#define SIZE 10

void merge(int *dst, const int *a1, unsigned s1, const int *a2, unsigned s2) {
    int index_a1 = 0, index_a2 = 0, index_dst;

    for (index_dst = 0; index_dst < s1 + s2; index_dst++) {
        if (a1[index_a1] < a2[index_a2] && index_a1 < s1) {
            dst[index_dst] = a1[index_a1];
            index_a1++;
        } else {
            dst[index_dst] = a2[index_a2];
            index_a2++;
        }
    }
}

int main(void) {
    int i;
    int a1[SIZE] = {1,2,4,6,7,8,22,56,78,84};
    int a2[SIZE] = {31,32,44,46,57,58,88,99,101,111};
    int dst[SIZE * 2];

    merge(dst, a1, SIZE, a2, SIZE);
    for (i = 0; i < SIZE * 2; i++) {
        printf("dst[%d] = %d\n", i, dst[i]);
    }
    return 0;
}