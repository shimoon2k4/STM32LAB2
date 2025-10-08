/*
 * exercise1.h
 *
 *  Created on: Sep 30, 2025
 *      Author: Lenovo
 */

#ifndef INC_EXERCISE8_H_
#define INC_EXERCISE8_H_
#include "main.h"
extern int timer_flag[3];
extern int second,
           minute,
	       hour;
void update7SEG(int index);
void updateClockBuffer();
void setTimer(int index, int duration);
void timerRun();
void display7SEG(int num);
void initState();
void clear7SEG();




#endif /* INC_EXERCISE8_H_ */
