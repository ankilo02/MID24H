/*
 * fsm_simple_buttons.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Vu Ba Thai An
 */


#include "fsm_simple_buttons.h"

// 0 INIT, 1 INC, 2 DEC, 3 WAIT
void fsm_simple_buttons_run(){

	//Led Blinky
	// LED Toggle every a second
	if(timer0_flag==1){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimer0(1000);
	}


	switch (status){
	// Initial state of System
	case INIT:
		// Display 0 when the System are Waiting every 1 second
		if(timer1_flag==1){
			display7SEG(0);
			setTimer1(1000);
		}
		// in DONT work state set in INIT state
		if(isButton1Press(0)==1){
			counter=0;
			display7SEG(0);
			setTimer1(1000);
		}
		//Press INC in INIT state, INC is a state of System at that time
		if(isButton1Press(1)==1){
			status=INC;
			counter++;
			if(counter==10) counter=0;
			display7SEG(counter);
			count_timer=0;// create COUNTER_TIMER 10S from pressing
			setTimer1(1000);
		}
		//Press DEC in INIT state, DEC is a state of System at that time
		if(isButton1Press(2)==1){
			status=DEC;
			counter--;
			if(counter==-1) counter=9;
			display7SEG(counter);
			count_timer=0;
			setTimer1(1000);
		}
		break;
		//COUNTDOWN state of System
	case DEC:
		// If counter_timer enough 10 second-> WAIT state
		if(timer1_flag==1){
			if(count_timer==10)
				status=WAIT;
			count_timer++;
			if(TimeOutForKeyPress[2]>200 || TimeOutForKeyPress[2]<100){
				counter--;
				if(counter==-1) counter=9;
				display7SEG(counter);
			}
			setTimer1(1000);
		}
		// Press INIT in DEC state, INIT is a state of System at that time
		if(isButton1Press(0)==1){
			counter=0;
			count_timer=0;
			display7SEG(counter);
			setTimer1(1000);
		}
		//Press DEC, DEC is a state of System at that time
		if(isButton1Press(2)==1){
			status=DEC;
			counter--;
			if(counter==-1) counter=9;
			count_timer=0;
			display7SEG(counter);
			setTimer1(1000);
		}
		// PRESS LONG BUTTON_DEC (HOLDING)
		if (isButton1LongPress(2)==1){
			if(timer1_flag==1){
				counter--;
				if(counter==-1) counter=9;
				count_timer=0;
				display7SEG(counter);
				setTimer1(1000);
			}
		}
		// Press INC in DEC state, INC is a state of System at that time
		if(isButton1Press(1)==1){
			status=INC;
			counter++;
			if(counter==10) counter=0;
			count_timer=0;
			display7SEG(counter);
			setTimer1(1000);
		}
		break;
		//Increase Counter
	case INC:
		//If counter_timer enough 10 second-> WAIT state
		if(timer1_flag==1){
			if (count_timer == 10)
				status=WAIT;
			count_timer++;
			if(TimeOutForKeyPress[1]>200 || TimeOutForKeyPress[1]<100){
				counter++;
				if(counter==10) counter=0;
				display7SEG(counter);
			}
			setTimer1(1000);
		}
		// Press INIT in INC, INIT is a state of System at that time
		if(isButton1Press(0)==1){
			counter=0;
			count_timer=0;
			display7SEG(0);
			setTimer1(1000);
		}
		// Press INC, INC is a state of System at that time
		if(isButton1Press(1)==1){
			status=INC;
			counter++;
			count_timer=0;
			if(counter==10) counter=0;
			display7SEG(counter);
			setTimer1(1000);
		}
		// Press Long BUTTON_INC (HOLDING)
		if (isButton1LongPress(1)==1){
			if (timer1_flag==1){
				counter++;
				count_timer=0;
				if(counter==10) counter=0;
				display7SEG(counter);
				setTimer1(1000);
			}
		}
		// Press DEC in INC state, DEC is a state of System at that time
		if(isButton1Press(2)==1){
			status=DEC;
			counter--;
			count_timer=0;
			if(counter==-1) counter=9;
			display7SEG(counter);
			setTimer1(1000);
		}
		break;
		// WAITING state
	case WAIT:
		//Check 7Seg every 1 second in Wait state
		if(timer1_flag==1){
			if(counter>0){
				counter--;
				display7SEG(counter);
				setTimer1(1000);
			}

			if(counter==0){
				status=INIT;
				setTimer1(1000);
			}
		}
		// Press INIT in WAIT state, INIT is a state of System at that time
		if(isButton1Press(0)==1){
			counter=0;
			display7SEG(counter);
			setTimer1(1000);
		}
		// Press INC in WAIT state,  INC is a state of System at that time
		if(isButton1Press(1)==1){
			status=INC;
			counter++;
			if(counter==10) counter=0;
			display7SEG(counter);
			count_timer=0;
			setTimer1(1000);
		}
		// Press DEC in WAIT state,  DEC is a state of System at that time
		if(isButton1Press(2)==1){
			status=DEC;
			counter--;
			if(counter==-1) counter=9;
			display7SEG(counter);
			count_timer=0;
			setTimer1(1000);
		}
		break;
	default:
		break;
	}
}
