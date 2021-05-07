#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 128

void rotate13(char *dst, const char *src) {
    unsigned long i, l;
    char shift = 1;

    l = strlen(src);
    for (i = 0; i < l; i++) {
        if (islower(src[i])) {
            dst[i] = src[i] + shift <= 'z' ? src[i] + shift : src[i] + shift - ('z' - 'a') - 1;
        } else if (isupper(src[i])) {
            dst[i] = src[i] + shift <= 'Z' ? src[i] + shift : src[i] + shift - ('Z' - 'A') - 1;
        } else {
            dst[i] = src[i];
        }

    }
    dst[l] = '\0';
}

int main(void) {
    char src[SIZE] = "zzzzzz";
    char dst[SIZE];

    rotate13(dst, src);
    printf("%s\n", dst);

}