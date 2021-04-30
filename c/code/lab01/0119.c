#include <stdio.h>
#include <math.h>

int main() {
    unsigned int i, mask, n = 255, bits=0;

    for (i=0; i<32; i++) {
        mask = (unsigned)pow(2, i);
        if ((n & mask) == mask) bits++;
    }
    printf("active bits=%d/32\n", bits);
}
