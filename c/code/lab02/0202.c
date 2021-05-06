#include <stdio.h>
#include <string.h>

#define SIZE 128

void reverses(char *dst, const char *src) {
    unsigned long i, l;

    l = strlen(src);
    for (i = 0; i < l; i++) {
        dst[l-1-i] = src[i];
    }
    dst[l] = '\0';
}

int main(void) {
    char src[SIZE] = "nicola";
    char dst[SIZE];

    reverses(dst, src);
    printf("%s\n", dst);

}