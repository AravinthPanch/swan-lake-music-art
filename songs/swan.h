#ifndef SWAN
#define SWAN
#include <stdint.h>
#include <avr/pgmspace.h>

#define SWAN0 1024,swan0_notes,swan0_delays,sizeof(swan0_notes)/sizeof(*(swan0_notes)),sizeof(swan0_delays)/sizeof(*(swan0_delays))

/*

    Part: 0
    Freq: 16000000
    Number of voices: 1
    Note length: 360
    Delay length: 360

*/

const uint8_t swan0_notes[] PROGMEM = {
83,55,83,55,83,55,83,55,83,20,20,20,20,18,15,20,21,15,18,18,18,16,13,18,20,13,16,10,18,10,21,13,31,18,37,20,13,16,10,18,10,21,13,31,18,37,10,10,10,10,8,7,10,10,7,8,8,8,7,6,8,10,6,7,4,8,23,10,6,31,8,37,7,10,6,7,4,8,23,10,6,31,8,37,16,13,23,13,13,23,13,10,23,11,15,13,27,12,31,16,27,15,26,15,15,26,15,15,26,15,11,26,12,16,27,11,8,23,10,13,23,7,23,7,11,6,6,27,6,33,4,6,52,7,6,39,6,31,7,27,7,7,26,7,21,7,23,5,26,6,7,23,13,27,11,10,27,16,37,16,14,33,13,13,27,13,23,10,23,11,26,13,13,31,12,31,16,27,15,15,26,15,20,15,23,11,26,12,16,27,11,8,23,10,13,27,7,23,7,31,11,6,6,27,6,33,4,6,7,6,39,6,31,7,27,7,7,26,7,26,7,26,5,26,6,7,20,8,37,7,6,34,12,31,11,10,20,20,20,20,18,15,20,21,15,18,18,18,16,13,18,20,13,16,10,18,10,21,13,31,18,37,20,13,16,10,18,10,21,13,83,10,10,10,10,8,7,10,10,7,8,8,8,7,6,7,10,6,7,4,8,5,10,6,31,8,37,10,6,7,4,8,5,10,6,31,8,37,7,55,13,16,10,15,20,55,13,16,10,15,20,10,16,55,21,55,20,55,23,31,20,55,13,16,10,15,20,10,55,13,16,10,15,20,10,16,55,21,55,20,55,23,31,20,55,13,83,13,0,0
};
const uint8_t swan0_delays[] PROGMEM = {
1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,7,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,5,1,1,2,1,1,1,1,1,1,1,5,1,1,1,1,1,2,1,2,2,2,1,2,1,2,2,2,2,1,3,1,3,1,3,2,1,1,1,2,1,2,2,2,1,1,2,1,2,2,2,2,1,3,1,3,1,3,2,1,1,1,1,1,1,1,4
};

#endif