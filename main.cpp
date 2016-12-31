/*******************************************************************************
*
*   @file   main.c
*   @brief  Play notes from generated music headers
*
********************************************************************************/

/*******************************************************************************
* Includes
********************************************************************************/
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <util/delay.h>

#include "lib/playtune.h"
#include "songs/mspacman.h"

/*******************************************************************************
* Functions
********************************************************************************/
int main(void)
{
    PlayTune p0(0, PART0);
    while ( p0.isPlaying()) {
        p0.playNote();
        _delay_ms(80);
    }
    return (0);
}