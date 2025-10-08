/*
 * exercise1.c
 *
 *  Created on: Sep 30, 2025
 *      Author: Lenovo
 */
#include <exercise10.h>
const int MAX_LED = 4;
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x18, 0x3C, 0x66, 0x66, 0x7E, 0x7E, 0x66, 0x66};
int led_buffer[4] = {1, 5, 0, 8};
void clear7SEG() {
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
}
void display7SEG(int num){
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin,  SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin,  SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,  SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,  SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin,  SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin,  SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin,  SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin,  SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,  SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin,  SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin,  SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,  SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,  SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin,  SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,  SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin,  SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,  SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,  SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin,  SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin,  SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,  SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	default:
		clear7SEG();
		break;
	}
}
void update7SEG(int index){
	switch(index){
	case 1:
		display7SEG(led_buffer[0]);
		break;
	case 2:
		display7SEG(led_buffer[1]);
		break;
	case 3:
		display7SEG(led_buffer[2]);
		break;
	case 4:
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
void updateClockBuffer(int hour, int minute){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;
}
void initState() {
	clear7SEG();
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}
void displayCol(int index)
{
	HAL_GPIO_WritePin(GPIOA, ENM0_Pin, (matrix_buffer[index] & 0x01) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM1_Pin, (matrix_buffer[index] & 0x02) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM2_Pin, (matrix_buffer[index] & 0x04) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM3_Pin, (matrix_buffer[index] & 0x08) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM4_Pin, (matrix_buffer[index] & 0x10) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM5_Pin, (matrix_buffer[index] & 0x20) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM6_Pin, (matrix_buffer[index] & 0x40) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM7_Pin, (matrix_buffer[index] & 0x80) ? RESET : SET);
}

void clearMatrix(){
	HAL_GPIO_WritePin(GPIOB, ROW0_Pin | ROW1_Pin | ROW2_Pin | ROW3_Pin | ROW4_Pin | ROW5_Pin | ROW6_Pin | ROW7_Pin , SET);
}
void shiftBuffer(int shift)
{
	for (int i = 0; i < 8; i++)
	{
		uint8_t tmp = matrix_buffer[i];
		matrix_buffer[i] = (tmp << (8 - shift)) | (tmp >> shift);
	}
}
void updateLEDMatrix(int index, int shift)
{
	clearMatrix();
	switch (index)
	{
		case 0:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW0_Pin, RESET);
			break;
		case 1:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW1_Pin, RESET);
			break;
		case 2:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW2_Pin, RESET);
			break;
		case 3:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW3_Pin, RESET);
			break;
		case 4:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW4_Pin, RESET);
			break;
		case 5:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW5_Pin, RESET);
			break;
		case 6:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW6_Pin, RESET);
			break;
		case 7:
			displayCol(index);
			HAL_GPIO_WritePin(GPIOB, ROW7_Pin, RESET);
			break;
		default:
			shiftBuffer(shift);
			break;
	}
}

