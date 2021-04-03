#include <stdio.h>
#include <limits.h>

void print_aligned(unsigned n, unsigned cols){
    unsigned i;
//    printf("%4u", 0);
    i=0;
    printf("%4u ", i);
    for(i=1 ; i<n ; i++) {
        if(0 == i%cols) {
            printf("\n");
        }
        printf("%4u ", i);
    }
    if(0 == i%cols) {
        printf("\n");
    }
    printf("%4u ", i);
    printf("\n");
}

int main(){
    print_aligned(100, 2);
    print_aligned(100, 5);
    print_aligned(100, 7);
    print_aligned(100, 10);
    print_aligned(UINT_MAX, 50);
}
