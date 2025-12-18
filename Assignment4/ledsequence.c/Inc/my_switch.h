/*
 * my_switch.h
 *
 *  Created on: Dec 18, 2025
 *      Author: sanket mirage
 */

#ifndef MY_SWITCH_H_

#define MY_SWITCH_H_





#define BV(n) (1 << (n))



void switch_init(void);

int switch_status(void);

int  switch_press_count(void);

int switch_read(void);







#endif /* MY_SWITCH_H_ */
