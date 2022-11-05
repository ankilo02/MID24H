/*
 * global.h
 *
 *  Created on: Oct 31, 2022
 *      Author: anvua
 */
#include "main.h"

#ifndef GLOBAL_H_
#define GLOBAL_H_

#define NUM_OF_BUTTON 4
extern GPIO_PinState BUTTON[NUM_OF_BUTTON];
#define GPIO_LED_PORT GPIOA

#define INIT 0
#define INC 1
#define DEC 2
#define WAIT 3

extern int status;
extern int counter;
extern int count_timer;

#endif /* GLOBAL_H_ */
