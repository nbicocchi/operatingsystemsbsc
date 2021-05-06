#include <stdio.h>
#include <string.h>

#define SIZE 128

void rotate13(char *dst, const char *src) {
    unsigned long i, l;
    char shift = 13;

    l = strlen(src);
    for (i = 0; i < l; i++) {
        dst[i] = src[i] + shift <= 'z' ? src[i] + shift : 'a' - 1 + src[i] + shift -  'z';
    }
    dst[l] = '\0';
}

int main(void) {
    char src[SIZE] = "nicola";
    char dst[SIZE];

    rotate13(dst, src);
    printf("%s\n", dst);

}