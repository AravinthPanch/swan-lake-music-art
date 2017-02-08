###############################################################################
#
#	@description	Build and flash Swan Lake Music to uController
#	@target			attiny85
#	@author			Aravinth Panchadcharam
#
###############################################################################

PROJECT_NAME=attiny_test
AVR_FREQ=8000000L
MCU=attiny85
BUILD_DIR=./build
FLASHER_PORT=/dev/tty.usbmodem14121

init:
	@echo "=== Swan Lake Music Art ==="
	@echo "=> Creating build dirs"
	@rm -rf $(BUILD_DIR)
	@mkdir $(BUILD_DIR)

build_proj:
	@echo "=> Building and linking" 	
	@avr-gcc -Os -DF_CPU=$(AVR_FREQ) -mmcu=$(MCU) -c main.cpp -o $(BUILD_DIR)/$(PROJECT_NAME).o
	@avr-gcc -mmcu=$(MCU) $(BUILD_DIR)/$(PROJECT_NAME).o -o $(BUILD_DIR)/$(PROJECT_NAME).out
	@avr-objcopy -O ihex -R .eeprom $(BUILD_DIR)/$(PROJECT_NAME).out $(BUILD_DIR)/$(PROJECT_NAME).hex

flash: 	
	@echo "=> Flashing hex"
	@cd $(BUILD_DIR)/; avrdude -c avrisp -p $(MCU) -P $(FLASHER_PORT) -b 19200 \
	-e -U flash:w:$(PROJECT_NAME).hex:i

all: init build_proj flash
	


