
/**
   Author:        Aravinth Panchadcharam
   Description:   Swan Lake Monotonic Music on ATtiny85. Monotonic notes of music are transcribed manually
                  and played in 3rd to 5th octave of Piano key frequency with the 49th key, the fifth A (A4), tuned to 440 Hz.
                  Arduino is used as a dev board.
   Date:          08/01/17
*/

/**
   Target:      ATtiny85   
   Library:     https://github.com/SpenceKonde/ATTinyCore can be installed via board manager
   Wiring:      PBO or Physical pin 5 of ATtiny85 is connected to the piezo element   
   
   Build:       Select Board -> "ATtiny 25/45/85", Chip -> "ATtiny85", Clock -> "8 MHz Internal"
   Flashing:    Use Arduino as ISP by flashing ArduinoISP firmware to Arduino UNO,
                Connect 10uF capcitor between RESET and GND pin on Arduino,
                Arduino +5V       --->  ATtiny85 Pin 8 (VCC)
                Arduino Ground    --->  ATtiny85 Pin 4 (GND)
                Arduino Pin 10    --->  ATtiny85 Pin 1 (PB5 / RESET)
                Arduino Pin 11    --->  ATtiny85 Pin 5 (PB0 / MOSI)
                Arduino Pin 12    --->  ATtiny85 Pin 6 (PB1 / MISO)
                Arduino Pin 13    --->  ATtiny85 Pin 7 (PB2 / SCL)

                http://www.instructables.com/id/Program-an-ATtiny-with-Arduino
*/


#include "key_frequency.h"

/*******************************************************************************
  Local variables
********************************************************************************/
// PB0
const int piezo_pin = 0;
int tempo = 140 / 4;

int music_sheet[][2] = {
  {A4,  4},
  {A4,  4},
  {A4,  4},
  {A4,  8},
  {B4,  4},
  {A4,  4},
  {Gx4, 4},

  {B4,  4},
  {B4,  4},
  {B4,  4},
  {B4,  8},
  {Cx5, 4},
  {B4,  4},
  {A4,  4},

  {A4,  4},
  {Cx5, 4},
  {Fx5, 4},
  {F5,  8},

  {Cx4, 2},
  {B3,  2},
  {A3,  2},
  {Gx3, 2},

  {0,  2},

  {A4,  4},
  {Cx5, 4},
  {Fx5, 4},
  {F5,  8},

  {Cx4, 2},
  {B3,  2},
  {A3,  2},
  {Gx3, 2},

  // Pause
  {0,  4},

  // Higher pitch
  {A5,  4},
  {A5,  4},
  {A5,  4},
  {A5,  8},
  {B5,  4},
  {A5,  4},
  {Gx5, 4},

  {B5,  4},
  {B5,  4},
  {B5,  4},
  {B5,  8},
  {Cx6, 4},
  {B5,  4},
  {A5,  4},

  {A5,  4},
  {Cx6, 4},
  {Fx6, 4},
  {F6,  8},

  {Cx5, 2},
  {B4,  2},
  {A4,  2},
  {Gx4, 2},

  {0,  2},

  {A5,  4},
  {Cx6, 4},
  {Fx6, 4},
  {F6,  8},

  {Cx5, 2},
  {B4,  2},
  {A4,  2},
  {Gx4, 2},

};

int song_length = (sizeof(music_sheet) / sizeof(int)) / 2;

/*******************************************************************************
  Functions
********************************************************************************/
void setup()
{
  pinMode(piezo_pin, OUTPUT);
}

// main loop
void loop()
{
  for (int note = 0; note < song_length; note++)
  {
    int hz = music_sheet[note][0];
    int duration = music_sheet[note][1];

    // play note pause
    if (hz == 0)
      delay(tempo * duration);

    // play note
    else
      tone(piezo_pin, hz, duration * tempo);

    // note interval
    delay(tempo * 2 * duration);
  }

  // interval between music loop
  delay (2000);
}

