/*
 * software_timer.h
 *
 *  Created on: Nov 4, 2022
 *      Author: anvua
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include "main.h"
#define TIMER_CYCLE 10
extern int timer0_counter;
extern int timer0_flag ;
extern int timer1_counter ;
extern int timer1_flag ;
void setTimer0 (int duration );
void setTimer1 (int duration );
void timer_run();



#endif /* INC_SOFTWARE_TIMER_H_ */
