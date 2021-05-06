#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 128

void rotate13(char *dst, const char *src) {
    unsigned long i, l;
    char shift = 13;

    l = strlen(src);
    for (i = 0; i < l; i++) {
        if (islower(src[i])) {
            dst[i] = src[i] + shift <= 'z' ? src[i] + shift : 'a' - 1 + src[i] + shift - 'z';
        } else if (isupper(src[i])) {
            dst[i] = src[i] + shift <= 'Z' ? src[i] + shift : 'A' - 1 + src[i] + shift - 'Z';
        } else {
            dst[i] = src[i];
        }

    }
    dst[l] = '\0';
}

int main(void) {
    char src[SIZE] = "NICOLA nicola";
    char dst[SIZE];

    rotate13(dst, src);
    printf("%s\n", dst);

}