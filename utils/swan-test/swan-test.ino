
/**
   Author: Aravinth Panchadcharam
   Description : Use key_frequency.h to generate Swan Lake
   Date: 08/01/17
*/

#include "key_frequency.h"

/*******************************************************************************
  Local variables
********************************************************************************/
const int piezo_pin = 6;
int tempo = 140 / 4;

int music_sheet[][2] =
{
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
  Serial.begin(9600);

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

