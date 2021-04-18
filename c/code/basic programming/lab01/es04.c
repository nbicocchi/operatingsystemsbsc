#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2){
    float r1 = powf((float)(x1 - x2), 2);
    float r2 = powf((float)(y1 - y2), 2);
    return sqrtf(r1 + r2);
}

int main(){
    int x1 = 0;
    int y1 = 0;

    int x2 = 10;
    int y2 = 10;

    float d = distance(x1, y1, x2, y2);
    printf("p1=(%3d,%+3d) p2=(%+3d,%+3d) distance=%f\n", x1, y1, x2, y2, d);
}