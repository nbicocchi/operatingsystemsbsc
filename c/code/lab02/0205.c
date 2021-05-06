#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 1024

void capitalize(char *dst, const char *src) {
    unsigned long i, l;

    l = strlen(src);
    if (l > 0) dst[0] = src[0];
    for (i = 1; i < l; i++) {
        dst[i] = src[i-1] == ' ' ? (char)toupper(src[i]) : (char)tolower(src[i]);
    }
    dst[l] = '\0';
}

int main(void) {
    char src[SIZE] = "Give a man a fish and you feed him for a day; teach a man to fish and you feed him for a lifetime.";
    char dst[SIZE];

    capitalize(dst, src);
    printf("%s\n", dst);
}