/*
 * global.c
 *
 *  Created on: Oct 31, 2022
 *      Author: anvua
 */
#include "global.h"
int status=INIT;
int counter=0;
int count_timer=0;

GPIO_PinState BUTTON[NUM_OF_BUTTON]={RESET_BUTTON_Pin,INC_BUTTON_Pin,DEC_BUTTON_Pin};
