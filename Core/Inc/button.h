/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: anvua
 */


#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#include "global.h"
#include "fsm_simple_buttons.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButton1Press(int idx_button);
int isButton1LongPress(int idx_button);
int isButton1DoublePress(int idx_button);

extern int TimeOutForKeyPress[NUM_OF_BUTTON];
void getKeyInput();


#endif /* INC_BUTTON_H_ */
