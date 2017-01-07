
/**
   Author: Aravinth Panchadcharam
   Description : Test Piano key frequencies using Piezoceramic Element
   Date: 03/01/17
*/

const int piezo_pin = 6;
int tempo = 1000;

char keys[] = {'c', 'C', 'd', 'D', 'e', 'f', 'F', 'g', 'G', 'a', 'A', 'b'};
int freq[] = {261, 277, 293, 311, 329, 349, 369, 391, 415, 440, 466, 493};
int note = 0;
int octave = 1;
int hz = 0;

void setup()
{
  pinMode(piezo_pin, OUTPUT);
}

void loop()
{
  // move to next octave on 12th note
  if (note == sizeof(freq) / sizeof(int))
  {
    note = 0;
    octave = octave * 2;
  }

  // reset octave if final octave is reached
  if (hz >= 65535) octave = 1;
  hz = freq[note] * octave;

  // play note at given tempo
  tone(piezo_pin, hz);
  delay(tempo);
  note++;
}
