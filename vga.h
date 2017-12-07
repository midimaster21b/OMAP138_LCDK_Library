/*
 * vga.h
 *
 *  Created on: Dec 6, 2017
 *      Author: Joshua Edgcombe
 */

#ifndef VGA_H_
#define VGA_H_

// VGA Specific definitions
#define VGA_PIN_DIRS        GPIO_DIR67
#define VGA_PIN_DATA        GPIO_OUT_DATA67
#define VGA_PIN_MASK        GPIO_PORT_7_PINS

#define VGA_GREEN_BIT_MASK  0xE0070000
#define VGA_BLUE_BIT_MASK   0x1F000000
#define VGA_RED_BIT_MASK    0x00F80000

#endif /* VGA_H_ */
