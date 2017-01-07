
/**
   Author: Aravinth Panchadcharam
   Description : transcribe a song within an octave
   Date: 03/01/17
*/

const int piezo_pin = 6;
int tempo = 1000;
char keys[] = {'c', 'C', 'd', 'D', 'e', 'f', 'F', 'g', 'G', 'a', 'A', 'b'};
int freq[] = {261, 277, 293, 311, 329, 349, 369, 391, 415, 440, 466, 493};
int note = 0;
int octave = 1;
int hz = 0;
char music_sheet[] = "ffgfba";
int tone_length[] = {1, 1, 1, 1, 1, 1};

int song_length = sizeof(music_sheet) - 1;

void setup()
{
  pinMode(piezo_pin, OUTPUT);
}

// get frequency from given note
int get_freq(char note)
{
  for (int i = 0; i < 12; i++)
    if (keys[i] == note) return freq[i];
}

// main loop
void loop()
{
  for (int note = 0; note < song_length; note++)
  {
    hz = get_freq(music_sheet[note]);
    tone(piezo_pin, hz, tone_length[note]);
    delay(tempo);
  }
}


