EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:swan-lake-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Swan Lake Music Art"
Date "2017-01-15"
Rev "0.1"
Comp "Aravinth.info"
Comment1 ""
Comment2 ""
Comment3 "with Piezoceramic Element and ATtiny85"
Comment4 "Play Swan Lake - Dance of Four Little Swan music as monophonic sound"
$EndDescr
$Comp
L ATTINY85-S IC1
U 1 1 587BDA6A
P 3300 3400
F 0 "IC1" H 2150 3800 50  0000 C CNN
F 1 "ATTINY85-S" H 4300 3000 50  0000 C CNN
F 2 "Housings_SOIC:SOIJ-8_5.3x5.3mm_Pitch1.27mm" H 4250 3400 50  0000 C CIN
F 3 "" H 3300 3400 50  0000 C CNN
	1    3300 3400
	-1   0    0    1   
$EndComp
$Comp
L CONN_01X08 P1
U 1 1 587BDB74
P 5250 3400
F 0 "P1" H 5250 3850 50  0000 C CNN
F 1 "CONN_01X08" V 5350 3400 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x08_Pitch2.54mm" H 5250 3400 50  0001 C CNN
F 3 "" H 5250 3400 50  0000 C CNN
	1    5250 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 3150 4650 3050
Wire Wire Line
	4650 3050 5050 3050
Wire Wire Line
	4650 3350 4800 3350
Wire Wire Line
	4800 3350 4800 3150
Wire Wire Line
	4800 3150 5050 3150
Wire Wire Line
	5050 3250 4650 3250
Wire Wire Line
	1950 3150 1950 2900
Wire Wire Line
	1950 2900 4950 2900
Wire Wire Line
	4950 2900 4950 3350
Wire Wire Line
	4950 3350 5050 3350
Wire Wire Line
	4650 3450 4850 3450
Wire Wire Line
	4850 3450 4850 3650
Wire Wire Line
	4850 3650 5050 3650
Wire Wire Line
	4650 3550 5050 3550
Wire Wire Line
	4650 3650 4800 3650
Wire Wire Line
	4800 3650 4800 3400
Wire Wire Line
	4800 3400 5050 3400
Wire Wire Line
	5050 3400 5050 3450
Wire Wire Line
	5050 3750 5050 3900
Wire Wire Line
	5050 3900 1950 3900
Wire Wire Line
	1950 3900 1950 3650
$EndSCHEMATC
