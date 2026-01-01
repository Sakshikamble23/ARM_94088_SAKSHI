/*
 * mq2.c
 *
 *  Created on: Dec 31, 2025
 *      Author: sanket mirage
 */

#include "mq2.h"
#include "my_lcd.h"
#include "my_buzzer.h"
#include<stdio.h>
#include "my_led.h"

/* Local ADC handle */
static ADC_HandleTypeDef *mq2_adc;

/* Initialize MQ2 with ADC handle */
void MQ2_Init(ADC_HandleTypeDef *hadc)
{
    mq2_adc = hadc;
}

/* Read ADC value from MQ2 */
uint32_t MQ2_ReadADC(void)
{
    uint32_t value = 0;

    HAL_ADC_Start(mq2_adc);
    HAL_ADC_PollForConversion(mq2_adc, HAL_MAX_DELAY);
    value = HAL_ADC_GetValue(mq2_adc);
    HAL_ADC_Stop(mq2_adc);

    return value;
}

/* Decide air quality based on ADC value */
AirQuality_t MQ2_GetAirQuality(uint32_t adc_value)
{
	char lcd_buf[16];

	lcd16x2_i2c_setCursor(0, 0);
		      lcd16x2_i2c_printf("GAS :      ");   // clear line

		      lcd16x2_i2c_setCursor(0, 6);
		      sprintf(lcd_buf, "%lu", adc_value);
		      lcd16x2_i2c_printf(lcd_buf);

		      /* Second line: Air quality */
		      lcd16x2_i2c_setCursor(0, 7);

		      if (adc_value < 1200)
		      {
		          lcd16x2_i2c_printf("AIR: GOOD     ");

		          led_on1();
		          led_off2();
		          led_off3();
		          buzzer_off();
		          return 0;
		            // optional if LED4 exists
		      }
		      else if (adc_value < 1200)
		      {
		          lcd16x2_i2c_printf("AIR: MODERATE ");

		          led_off1();
		          led_on2();
		          led_off3();
		          buzzer_off();
		          return 1;
		      }
		      else
		      {
		          lcd16x2_i2c_printf("AIR: BAD !!!  ");

		          led_off1();
		          led_off2();
		          led_on3();
		          buzzer_on();
		          return 2;

		      }

		      HAL_Delay(1000);

}

