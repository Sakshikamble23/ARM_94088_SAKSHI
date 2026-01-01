/*
 * mq2.h
 *
 *  Created on: Dec 31, 2025
 *      Author: sanket mirage
 */

#ifndef __MQ2_H
#define __MQ2_H

#include "stm32f4xx_hal.h"

/* Air quality levels */
typedef enum
{
    AIR_GOOD = 0,
    AIR_MODERATE,
    AIR_BAD
} AirQuality_t;

/* Function prototypes */
void MQ2_Init(ADC_HandleTypeDef *hadc);
uint32_t MQ2_ReadADC(void);
AirQuality_t MQ2_GetAirQuality(uint32_t adc_value);

#endif
/* INC_MQ2_H_ */
