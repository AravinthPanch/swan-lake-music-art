
/**
   Author: Aravinth Panchadcharam
   Description : Play notes by generating piano note frequency mathematically
   Date: 07/01/17
*/

/*******************************************************************************
  Local variables
********************************************************************************/

// First octave A is centered at 55 Hz in Piano
const int a1_freq = 55;

// twelve temperament frequency 1/12 power of 2
const float semitone_freq = 1.05946;

// C1 of Piano is at key 4 at 32.72 Hz
const int fist_octave_key = 4;
const int total_keys_per_octave = 12;
const int piezo_pin = 6;

/*******************************************************************************
  Functions
********************************************************************************/
void play_note(int note_freq, int duration)
{

}

int get_note_position(char note, bool is_sharp)
{
  switch (note)
  {
  case 'c':
    if (is_sharp) return 1;
    else return 0;
  case 'd':
    if (is_sharp) return 3;
    else return 2;
  case 'e':
    return 4;
  case 'f':
    if (is_sharp) return 6;
    else return 5;
  case 'g':
    if (is_sharp) return 8;
    else return 7;
  case 'a':
    if (is_sharp) return 10;
    else return 9;
  case 'b':
    return 11;
  }
}

int get_note_frequency(char note, bool is_sharp, int octave)
{
  // get key number
  int current_octave_first_key = fist_octave_key + total_keys_per_octave * (octave - 1);
  Serial.print("current_octave_first_key");
  Serial.println(current_octave_first_key);

  int current_key_in_scale = get_note_position(note, is_sharp);
  Serial.print("current_key_in_scale");
  Serial.println(current_key_in_scale);

  int current_key = current_octave_first_key + current_key_in_scale;
  Serial.print("current_key");
  Serial.println(current_key);

  float exponent = (current_key - 13) / 12;
  Serial.print("exponent");
  Serial.println(exponent);

  double key_freq =  pow(2, exponent) * a1_freq;
  Serial.print("key_freq");
  Serial.println(key_freq);

  return 0;
}

void setup()
{
  pinMode(piezo_pin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float test = 38 / 12;
  Serial.println(semitone_freq);

  get_note_frequency('a', false, 4);
  delay(2000);
  get_note_frequency('b', false, 4);
  delay(2000);
  get_note_frequency('d', false, 4);
  delay(2000);
  while (1);
}
