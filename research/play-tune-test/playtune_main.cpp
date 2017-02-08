/*******************************************************************************
*
*   @file   playtune_main.cpp
*   @brief  Play notes from generated music headers using Playtune method
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
#include "songs/swan.h"
#include "songs/sw.h"

/*******************************************************************************
* Functions
********************************************************************************/
int main(void)
{
    PlayTune p0(0, SW0);
    while ( p0.isPlaying()) {
        p0.playNote();
        _delay_ms(120);
    }
    return (0);
}