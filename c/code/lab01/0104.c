#include <stdio.h>
#include <math.h>

int main() {
    int x1 = 0, y1 = 0;
    int x2 = 10, y2 = 10;
    float distance;

    distance = sqrtf((x1-x2) * (x1-x2)  + (y1-y2) * (y1-y2));
    printf("p1=(%3d,%+3d) p2=(%+3d,%+3d) distance=%f\n", x1, y1, x2, y2, distance);
}