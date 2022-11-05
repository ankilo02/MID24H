/*
 * button.c
 *
 *  Created on: Nov 4, 2022
 *      Author: anvua
 */

#ifndef SRC_BUTTON_C_
#define SRC_BUTTON_C_

#include "button.h"

int button1_flag = 0;
int KeyReg0[NUM_OF_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[NUM_OF_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[NUM_OF_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[NUM_OF_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};

int TimeOutForKeyPress[NUM_OF_BUTTON]={100,100,100,100};
int count_doubleB[NUM_OF_BUTTON]={-1,-1,-1,-1};

int check_doubleB[NUM_OF_BUTTON]={0,0,0,0};
int check_longB[NUM_OF_BUTTON]={0,0,0,0};
int check_pressB[NUM_OF_BUTTON]={0,0,0,0};


int isButton1Press(int idx_button){
	if(check_pressB[idx_button]==1){
		check_pressB[idx_button]=0;
		return 1;
	}
	return 0;
}

int isButton1LongPress(int idx_button){
	return check_longB[idx_button];
}

int isButton1DoublePress(int idx_button){
	return check_doubleB[idx_button];
}

void getKeyInput(){
	for(int i=0 ;i<NUM_OF_BUTTON;i++){
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		KeyReg2[i] = HAL_GPIO_ReadPin(GPIOA, BUTTON[i]);
		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg2[i] != KeyReg3[i]){
				KeyReg3[i] = KeyReg2[i];
				if (KeyReg3[i] == PRESSED_STATE){
					TimeOutForKeyPress[i] = 300;
					if(check_longB[i]!=1)
						check_pressB[i]=1;
				}else{
					TimeOutForKeyPress[i]=300;
					check_longB[i]=0;
				}
			}else{
				TimeOutForKeyPress[i] --;
				if (TimeOutForKeyPress[i] == 0){
					KeyReg3[i]=NORMAL_STATE;
					if(KeyReg2[i]==PRESSED_STATE)
						check_longB[i]=1;
				}
			}
		}
	}
}
#endif /* SRC_BUTTON_C_ */
