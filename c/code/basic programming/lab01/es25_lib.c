
#include "es25_lib.h"

//25. Mostrare un numero intero senza segno tramite i numeri romani:
//• l’input è una variabile int unsigned

#include <stdio.h>
#include <assert.h>

void romans_notations(unsigned number, char symbol1, char symbol2, char symbol3){
    // the function must never be called with number equal to zero o greater than 10
    // assert verifies it during debugging
    assert(number<=10 && number >0);

    switch(number) {
        case 1:
            printf("%c", symbol1);
            break;
        case 2:
            printf("%c%c", symbol1, symbol1);
            break;
        case 3:
            printf("%c%c%c", symbol1, symbol1, symbol1);
            break;
        case 4:
            printf("%c%c", symbol1, symbol2);
            break;
        case 5:
            printf("%c", symbol2);
            break;
        case 6:
            printf("%c%c", symbol2, symbol1);
            break;
        case 7:
            printf("%c%c%c", symbol2, symbol1, symbol1);
            break;
        case 8:
            printf("%c%c%c%c", symbol2, symbol1, symbol1, symbol1);
            break;
        case 9:
            printf("%c%c", symbol1, symbol3);
            break;
        case 10:
            printf("%c", symbol3);
            break;
    }
}

void to_romans(unsigned v){
    unsigned x;

    // max allowed roman number, assert verifies it during debugging,
    // the function must never be called with out-of-range values
    assert(v<=3999);

    if(v==0){
        printf("0");
    }

    for( ; v > 1000 ; v-=1000){
        printf("M");
    }

    if(v > 100){
        x = v / 100;
        romans_notations(x, 'C', 'D', 'M');
        v -= x * 100;
    }

    if (v > 10) {
        x = v / 10;
        romans_notations(x, 'X', 'L', 'C');
        v -= x * 10;
    }

    if (v > 0) {
        romans_notations(v, 'I', 'V', 'X');
    }
}