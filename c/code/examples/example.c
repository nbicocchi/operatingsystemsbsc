#include <stdio.h>

struct data {
    int g;
    int m;
    int a;
};

typedef struct {
    int x, y;
    int raggio;
} cerchio_t;

int datecmp(const struct data *d1, const struct data *d2) {
    int ret;
    if (!(ret=(d1->a - d2->a)))
        if (!(ret=(d1->m - d2->m)))
            ret=(d1->g - d2->g);
    return ret;
}

int equals(const cerchio_t *c1, const cerchio_t *c2) {
    return ((c1->x == c2->x) &&
        (c1->y == c2->y) &&
        (c1->raggio == c2->raggio));
}

int main(void) {
    typedef enum { falso, vero } booleano;
    booleano flags[10] = { vero };
    booleano flag = vero;

    printf("%d\n", flag);
    printf("%s\n", flag != falso ? "vero" : "falso");

    flag = 5; // non dà errori in compilazione
}




