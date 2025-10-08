/*
 * exercise1.h
 *
 *  Created on: Sep 30, 2025
 *      Author: Lenovo
 */

#ifndef INC_EXERCISE6_H_
#define INC_EXERCISE6_H_
#include "main.h"
extern int timer_flag[10];
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
void displayCol(int index);
void clearMatrix();
void shiftBuffer(int shift);
void updateLEDMatrix(int index, int shift);



#endif /* INC_EXERCISE6_H_ */
