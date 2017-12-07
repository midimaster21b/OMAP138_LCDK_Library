/************************
 * hello.c
 *
 * Description: This program "blinks"(toggles) the gpio pin GP8[10] every ~3.23 seconds.
 * Useful for testing if your board is functioning.
 *
 * Author: Joshua Edgcombe
 * Date: 2017-12-07
 */


#include <stdint.h>

#include "gpio.h"
#include "syscfg.h"

int main(void) {
	uint32_t i = 0;
	uint32_t max_timeout = 0x006FFFFF; // Approx. 3.23s

	// pin 10 0x00000400
	uint32_t pin_ten_mask = 0x00000400;

	// Allow GPIO8[10] to control pin
	SYSCFG0ARM_PINMUX18 |= 0x80000000;

	// Set data to high voltage
	GPIO_OUT_DATA8 |= pin_ten_mask;

	// Set data to output
	GPIO_DIR8 &= ~pin_ten_mask;

	// While true, toggle the output pin
	while(1) {
		for(i=0; i<max_timeout; i++);

		GPIO_OUT_DATA8 ^= pin_ten_mask;
	}

	return 0;
}
