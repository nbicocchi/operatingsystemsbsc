#include <stdio.h>

int is_prime(unsigned v){
    unsigned i, t;
    if(v<=1){
        return 0;
    }
    t = v/2;
    for(i=2 ; i<=t ; i++){
        if(0 == v % i){
            return 0;
        }
    }
    return 1;
}

int main(){
    unsigned values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 321317, 173, 131, 93213, 545265124, 33217};
    unsigned values_size = sizeof(values)/sizeof(unsigned);
    int r, i;

    for(i=0;i<values_size;i++){
        r = is_prime(values[i]);
        printf("Value: %10u, Result: %d\n", values[i], r);
    }
    return 0;
}