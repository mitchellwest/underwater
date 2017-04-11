/*
 * METR480-Final.c
 *
 * Created: 09-Apr-17 10:52:35 PM
 * Author : Mitch
 */ 

//includes

//global vars
//placeholder AVR_SIGS
#include <avr/io.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "init.h"
#include "executeCmd.h"
/*
#define sbi(x,y) x |= _BV(y) //set bit
#define cbi(x,y) x &= ~(_BV(y)) //clear bit
#define tbi(x,y) x ^= _BV(y) //toggle bit
#define is_high(x,y) ((x & _BV(y)) == _BV(y)) //check if the input pin is high
#define is_low(x,y) ((x & _BV(y)) == 0) //check if the input pin is low
*/
//main


int main(void){
	
	int ping = 0;
	int *motorP;
	int motorCmd[5] = {0};
		/*
	motorCmd[0] = 0;
	motorCmd[1] = 0;
	motorCmd[2] = 0;
	motorCmd[3] = 0;
	motorCmd[4] = 0; */
	init();
	videoFrame();
	while(ping != 1){
		
		motorP = keyPressed();
		for (int i = 0; i < 5; i++) {
			motorCmd[i] = *(motorP + i);
		}
		//if (motorCmd != NULL){
		executeCmd(motorCmd);
		//}
		
	};
 
};
