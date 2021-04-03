#include <stdio.h>

const unsigned long mis_secs = 1000UL;
const unsigned long mis_minutes = mis_secs * 60UL;
const unsigned long mis_hours = mis_minutes * 60UL;
const unsigned long mis_days = mis_hours * 24UL;


void mis_to_dms(unsigned long mis){
    unsigned long days, hours, minutes, secs;
    days = mis/mis_days;
    mis %= mis_days;
    hours = mis/mis_hours;
    mis %= mis_hours;
    minutes = mis/mis_minutes;
    mis %= mis_minutes;
    secs = mis/mis_secs;
    printf("%02lu-%02lu-%02lu-%02lu", days, hours, minutes, secs);
}

int main(){
    unsigned long mis;
    for(mis=0UL; mis<500000000UL ; mis+=1000){
        printf("%8lu: ", mis);
        mis_to_dms(mis);
        printf("\n");
    }
    return 0;
}