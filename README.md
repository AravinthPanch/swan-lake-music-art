Swan Lake Music Art
=====================================

- Find the music in MIDI or convert it to MIDI from Music Sheet (https://www.8notes.com/scores/11419.asp)
- Crop MIDI to the required size
- Use museScore v1.3+ (not v2) to import MIDI to 1/8th tempo
- Install zapchords plugin into museScore
- Select notes and click on Plugins->Zap Chords to remove chords
- Save it as MusicXml
- Convert it to headers by xml2h.py
	- Choose 16000000 Hz
	- Chose parts
	- Choose prescalar 1024
- Choose delay in main cpp to adjust tempo

