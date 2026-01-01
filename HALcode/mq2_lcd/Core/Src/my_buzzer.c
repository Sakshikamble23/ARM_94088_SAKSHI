/*
 * my_buzzer.c
 *
 *  Created on: Dec 31, 2025
 *      Author: sanket mirage
 */

#include "my_buzzer.h"
#include "stm32f4xx_hal.h"

/* Change GPIO & PIN as per your connection */
#define BUZZER_GPIO_PORT   GPIOC
#define BUZZER_PIN         GPIO_PIN_7

void buzzer_on(void)
{
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,  GPIO_PIN_SET);
}

void buzzer_off(void)
{
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,  GPIO_PIN_RESET);
}

