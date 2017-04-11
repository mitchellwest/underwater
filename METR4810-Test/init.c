//includes

#include <avr/io.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
//#include "checkMotors.h"
//#include "checkCamera.h"


void init(void){
	// setup
	// DDR 
	DDRB = 0x00;
	DDRC = 0x00;
	DDRD = 0x00;
	// in
	DDRB &= (0xFF & ~(PORTB3 | PORTB4 | PORTB5));
	DDRC &= (0xFF & ~(PORTC4 | PORTC6)); // Camera data
	DDRD &= (0xFF & ~PORTD0); // Wifi RX
	// out
	DDRB |= PORTB0 | PORTB1 | PORTB2 | PORTB6 | PORTB7; // Motor 4 cc/w, Motor 1 enable, Motor 2 enable, Motor 3 c/w, Motor 3 cc/w
	DDRC |= PORTC0 | PORTC1 | PORTC2 | PORTC3 | PORTC5; // Motor 1 c/w, Motor 1 cc/w, Motor 2 c/w, Motor 2 cc/w, Camera clock
	DDRD |= PORTD1 | PORTD2 | PORTD3 | PORTD4 | PORTD6 | PORTD7; // Wifi TX, LEDs, Servo PWM, Server on, Motor 4 enable, Motor 4 c/w
	
	// PORTS
	// all off for init
	PORTB = 0x00;
	PORTC = 0x00;
	PORTD = 0x00;
	// on for programming
	PORTB &= (0xFF);
	PORTC &= (0xFF);
	// always on
	//PORTC |= PINC4 | PINC5; // Camera data, Camera clock -- defined in videoFrame.c
	PORTD |= PIND0 | PIND1; // Wifi RX, Wifi TX
	
	
	// i2c init
	//i2c_init();
	
	//wifi init
	
	// connect to computer
	
	
	
	
	/*
    //int connectionStatus = 0;
    //connect to avr
    //avr.ssh();

    //connect to gamepad
    //bool g = connectGamepad();


    //check each motor is connected
    //check camera is connected
    //connectionStatus = checkMotors() && checkCamera(); //&& connectGamepad(); //logic and any other checks

    //return connectionStatus;
	*/
};
