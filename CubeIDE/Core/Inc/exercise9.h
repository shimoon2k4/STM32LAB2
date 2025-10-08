/*
 * exercise1.h
 *
 *  Created on: Sep 30, 2025
 *      Author: Lenovo
 */

#ifndef INC_EXERCISE9_H_
#define INC_EXERCISE9_H_
#include "main.h"
extern int second,
           minute,
	       hour;
void update7SEG(int index);
void updateClockBuffer();
void display7SEG(int num);
void initState();
void clear7SEG();
void displayCol(int index);
void clearMatrix();
void updateLEDMatrix(int index);



#endif /* INC_EXERCISE9_H_ */
