#include <stdio.h>
#include <math.h>

void split_float(float v, unsigned precision){
    int int_part;
    unsigned dec_part;
    printf("Valore:%f ", v);
    int_part = (int) v;
    v -= (float) int_part;
    // qui potremmo anche approssimare al decimale più vicino
    dec_part = (unsigned)(v * powf(10.0f, (float)precision));
    printf("Precisione: %u Parte intera: %d Parte decimale: %u\n",
           precision, int_part, dec_part);
}

int main(){
    const float test[3] = {3.36f, 24.00045f, 23.99999f};
    const unsigned precision[5] = {1, 2, 3, 4, 5};
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            split_float(test[i], precision[j]);
        }
    }
}