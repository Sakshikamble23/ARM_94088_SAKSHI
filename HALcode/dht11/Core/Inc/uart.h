/*
 * uart.h
 *
 *  Created on: Dec 31, 2025
 *      Author: HP
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "stm32f4xx_hal.h"

/* UART handle declaration */
extern UART_HandleTypeDef huart2;

/* Function prototypes */
void UART2_Init(void);
void UART_SendString(char *str);
void UART_SendNumber(uint32_t num);



#endif /* INC_UART_H_ */
