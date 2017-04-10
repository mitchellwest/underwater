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
#include "main.h"
#include "init.h"
#include "executeCmd.h"

#define sbi(x,y) x |= _BV(y) //set bit
#define cbi(x,y) x &= ~(_BV(y)) //clear bit
#define tbi(x,y) x ^= _BV(y) //toggle bit
#define is_high(x,y) ((x & _BV(y)) == _BV(y)) //check if the input pin is high
#define is_low(x,y) ((x & _BV(y)) == 0) //check if the input pin is low

//main


int main(void){
	
	int ping = 0;
	int motorCmd[] = [];
	
	init();
	videoFrame();
	while(ping != 1){
		
		motorCmd = keyPressed();
		if (motorCmd != NULL){
			executeCmd(motorCmd);
		}
		
	};
 
};
