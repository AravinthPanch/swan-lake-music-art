/*******************************************************************************
*
*   @file   ara_main.cpp
*   @brief  Play notes by generating piano note frequency mathematically
*
********************************************************************************/

/*******************************************************************************
* Includes
********************************************************************************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <util/delay.h>


/*******************************************************************************
* Local variables
********************************************************************************/

// 5th octave A is centered at 440 Hz in Piano
const int a4_freq = 440;

// twelve temperament frequency 1/12 power of 2
const float semitone_freq = 1.05946;

// C1 of Piano is at key 4 at 32.72 Hz
const int fist_octave_key = 4;

const int total_keys_per_octave = 12;

char scale_keys[] = {'c', 'd', 'e', 'f', 'g', 'a', 'b'};

/*******************************************************************************
* Functions
********************************************************************************/
void play_note(int note_freq, int duration)
{

}

int get_note_position(char note, bool is_sharp)
{
	switch (note)
	{
	case 'a':
		return 5;
	}
}

int get_note_frequency(char note, bool is_sharp, int octave)
{
	// get key number
	//
	int current_octave_first_key = fist_octave_key + total_keys_per_octave * (octave - 1);

	int current_note_position = get_note_position(note, is_sharp);
}

int main(void)
{
	while (1)
	{
		get_note_frequency('a', false, 4);
	}
}