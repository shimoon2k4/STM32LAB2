/*
 * software_timer.c
 *
 *  Created on: Oct 8, 2025
 *      Author: Lenovo
 */
#include "software_timer.h"
int timer_flag[4] = {0, 0, 0, 0};
int timer_counter[4] = {0, 0, 0, 0};
void setTimer(int index, int duration){
	if(index>3) return;
	timer_counter[index] = duration/TIMER_CYCLE;
	timer_flag[index] = 0;
}
void timerRun(){
	int index = 0;
	while(index<4){
	if(timer_counter[index]>0){
		timer_counter[index]--;
		if(timer_counter[index] <= 0){
			timer_flag[index] = 1;
		}
	}
	index++;
	}
}

