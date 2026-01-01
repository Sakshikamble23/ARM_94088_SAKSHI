/*
 * dh11.h
 *
 *  Created on: Jan 1, 2026
 *      Author: sanket mirage
 */

#ifndef INC_DH11_H_
#define INC_DH11_H_
#include "stm32f407xx.h" // change family if needed
#define DH11_PORT GPIOA

#define DH11_PIN GPIO_PIN_5
void DH11_Init(void);

uint8_t DH11_ReadByte(uint8_t *temperature, uint8_t *humidity);

void delay_us(uint32_t us);

#endif /* INC_DH11_H_ */
