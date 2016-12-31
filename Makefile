###############################################################################
#
#	@description	Build and flash Swan Lake Music to uController
#	@target			atmega328p (Arduino Uno)
#	@author			Aravinth Panchadcharam
#
###############################################################################

PROJECT_NAME=swan_lake
AVR_FREQ=16000000L
MCU=atmega328p
BUILD_DIR=./build
FLASHER_PORT=/dev/tty.usbmodem1411

init:
	@echo "=== Swan Lake Music Art ==="
	@echo "=> Creating build dirs"
	@rm -rf $(BUILD_DIR)
	@mkdir $(BUILD_DIR)

src_build:
	@echo "=> Building and linking" 	
	@avr-gcc -Os -DF_CPU=$(AVR_FREQ) -mmcu=$(MCU) -c main.cpp -o $(BUILD_DIR)/$(PROJECT_NAME).o
	@avr-gcc -Os -DF_CPU=$(AVR_FREQ) -mmcu=$(MCU) -c lib/playtune.cpp -o $(BUILD_DIR)/playtune.o	
	@avr-gcc -mmcu=atmega328p $(BUILD_DIR)/$(PROJECT_NAME).o $(BUILD_DIR)/playtune.o \
	-o $(BUILD_DIR)/$(PROJECT_NAME).out
	
	@avr-objcopy -O ihex -R .eeprom $(BUILD_DIR)/$(PROJECT_NAME).out $(BUILD_DIR)/$(PROJECT_NAME).hex

flash: 
	@echo "=> Flashing hex"
	@cd $(BUILD_DIR)/; avrdude -F -V -c arduino -p $(MCU) -P $(FLASHER_PORT) -b 115200 \
	-D -U flash:w:$(PROJECT_NAME).hex:i

all: init src_build flash
	


