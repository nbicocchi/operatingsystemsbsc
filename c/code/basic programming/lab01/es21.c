#include <stdio.h>

void ascii_table(){
    int i;
    for(i=0;i<=127;i++){
        printf("%1c %02X %03u\n", i, i, i);
    }
}

int main(){
    ascii_table();
}