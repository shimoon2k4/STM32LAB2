/*
 * software_timer.h
 *
 *  Created on: Oct 8, 2025
 *      Author: Lenovo
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#define TIMER_CYCLE 10
extern int timer_flag[4];
void setTimer(int index, int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
