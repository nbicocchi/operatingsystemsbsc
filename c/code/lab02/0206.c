#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 128

void frequencies(unsigned *freqs, const char *src) {
    unsigned long i, l;

    for (i = 0; i < 26; i++) {
        freqs[i] = 0;
    }

    l = strlen(src);
    for (i = 0; i < l; i++) {
        if (isalpha(src[i])) {
            freqs[tolower(src[i]) - 'a'] += 1;
        }
    }
}

int main(void) {
    int i;
    char src[SIZE] = "Give a man a fish and you feed him for a day; teach a man to fish and you feed him for a lifetime.";
    unsigned freqs[26];

    frequencies(freqs, src);
    for (i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, freqs[i]);
    }

}