#include <stdio.h>

const unsigned long mis_secs = 1000UL;
const unsigned long mis_minutes = mis_secs * 60UL;
const unsigned long mis_hours = mis_minutes * 60UL;
const unsigned long mis_days = mis_hours * 24UL;

int main() {
    unsigned long mils = 1000000000UL;
    unsigned long days, hours, minutes, secs;

    days = mils / mis_days;
    mils %= mis_days;

    hours = mils / mis_hours;
    mils %= mis_hours;

    minutes = mils / mis_minutes;
    mils %= mis_minutes;

    secs = mils / mis_secs;
    printf("%02lu-%02lu-%02lu-%02lu", days, hours, minutes, secs);
}