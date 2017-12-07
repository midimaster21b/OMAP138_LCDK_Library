/*
 * gpio.h
 *
 *  Created on: Dec 6, 2017
 *      Author: Joshua Edgcombe
 */

#ifndef GPIO_H_
#define GPIO_H_

#define GPIO_MEMORY_BASE 0x01E26000

// GPIO0ARM_DIR67
// 0x01E26088
#define GPIO_DIR67          (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0x88))
#define GPIO_OUT_DATA67     (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0x8C))
#define GPIO_SET_DATA67     (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0x90))
#define GPIO_CLR_DATA67     (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0x94))
#define GPIO_IN_DATA67      (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0x98))
#define GPIO_SET_RIS_TRIG67 (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0x9C))
#define GPIO_CLR_RIS_TRIG67 (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xA0))
#define GPIO_SET_FAL_TRIG67 (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xA4))
#define GPIO_CLR_FAL_TRIG67 (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xA8))
#define GPIO_INTSTAT67      (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xAC))

#define GPIO_DIR8           (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xB0))
#define GPIO_OUT_DATA8      (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xB4))
#define GPIO_SET_DATA8      (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xB8))
#define GPIO_CLR_DATA8      (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xBC))
#define GPIO_IN_DATA8       (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xC0))
#define GPIO_SET_RIS_TRIG8  (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xC4))
#define GPIO_CLR_RIS_TRIG8  (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xC8))
#define GPIO_SET_FAL_TRIG8  (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xCC))
#define GPIO_CLR_FAL_TRIG8  (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xD0))
#define GPIO_INTSTAT8       (*(volatile uint32_t*)(GPIO_MEMORY_BASE + 0xD4))

#define GPIO_PORT_7_PINS    0xFFFF0000

#endif /* GPIO_H_ */
