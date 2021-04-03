#include <stdio.h>
#include <math.h>

#define TEST_SIZE 4

float distance(int x1, int y1, int x2, int y2){
    float r1 = powf((float)(x1 - x2), 2.0F);
    float r2 = powf((float)(y1 - y2), 2.0F);
    return sqrtf(r1 + r2);
}

int main(){
    const int x1[TEST_SIZE] = {1, 4, -7, -20};
    const int y1[TEST_SIZE] = {2, 1, -9, -55};
    const int x2[TEST_SIZE] = {19, -22, 10, -7};
    const int y2[TEST_SIZE] = {23, -88, 19, -22};
    const float test_results[TEST_SIZE] = {27.658634F, 92.720009F, 32.756680F, 35.468296F};
    float r;
    int i;

    int array_size = sizeof(x1)/sizeof(int);
    printf("array size is %d\n", array_size);

    for(i=0;i<array_size;i++){
        r = distance(x1[i], y1[i], x2[i], y2[i]);
        printf("p1=(%3d,%+3d) p2=(%+3d,%+3d) distance=%f\n", x1[i], y1[i], x2[i], y2[i], r);
        if(r != test_results[i]){
            printf("Risultato sbagliato!");
        }
    }
}