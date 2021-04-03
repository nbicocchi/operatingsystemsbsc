#include <stdio.h>

void print_symbol(unsigned v){
    if(v<10){
        printf("%u", v);
    } else {
        printf("%c", v - 10 + 'A');
    }
}

void convert_base(unsigned v, unsigned base){
    unsigned x;

    do {
        x = v % base;
        print_symbol(x);
        v /= base;
    }while(v!=0);

}

int main(){
    unsigned values[] = {5, 10, 16, 18, 29, 5231, 3231231};
    unsigned base;
    int i;
    for(i=0; i<sizeof(values)/sizeof(unsigned); i++) {
        printf("Valore: %u\n", values[i]);
        for(base=2; base<=26; base++) {
            printf("\tBase %u: ", base);
            convert_base(values[i], base);
            printf("\n");
        }
    }
    return 0;
}