#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* count the number of space separated words in a string */
unsigned word_count(const char *s){
    unsigned count=0, length, i;

    length = (unsigned)strlen(s);
    for (i=0; i<length; i++) {
        if (isspace(s[i])) count++;
    }
    return count + 1;
}

/* splits the string s into an array of strings (dinamically allocated) */
char **split(const char *s) {
    int index=0;
    char *str, *ptr, **list;
    unsigned words;

    /* create a copy of s because of strtok modifies the passed string */
    str = strdup(s);
    words = word_count(str);

    /* allocate the NULL-terminated list of pointers */
    list = malloc((words + 1) * sizeof(*list));
    if (!list) return NULL;
    list[words] = NULL;

    ptr = strtok(str, " ");
    while(ptr != NULL) {
        /* allocate each string */
        list[index] = malloc((strlen(ptr) + 1) * sizeof(**list));
        if (!list[index]) return NULL;

        strcpy(list[index], ptr);
        index++;

        ptr = strtok(NULL, " ");
    }
    free(str);
    return list;
}

int main(void) {
    char **list, str[] = "Rosso di sera bel tempo si spera";
    int i;

    list = split(str);

    /* show the result */
    for (i = 0; list[i] != NULL; i++) {
        printf("%s\n", list[i]);
    }

    /* free actual strings */
    for (i = 0; list[i] != NULL; i++) {
        free(list[i]);
    }
    /* free NULL string (the last one) */
    free(list[i]);

    /* free array of char pointers */
    free(list);
}