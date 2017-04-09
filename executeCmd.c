
#include <avr/io.h>
#include <stdbool.h>
#include <stdlib.h>

void executeCmd(int number, int value){
	switch (number){
		//motor 0
		case 0:
			switch(value){
				case -1:
					//motor off
					PORTD &= ~(PIND6 | PIND7);
					PORTB &= ~PINB0;
					//operate motor clockwise
					PORTD |= PIND6;  //(1<<6); //0b01000000 PD6 = High - enable motor for B0/D7 but disable D7
					PORTB |= PINB0;   //(1<<0); //0b00000001; // PB0 = High - motor B0 direction
					break;
				case 1:
					//motor off
					PORTD &= ~(PIND6 | PIND7);
					PORTB &= ~PINB0;
					//operate motor counter-clockwise
					PORTD |= PIND7 | PIND6;   //(1<<7) | (1<<6); // 0b11000000; // PD6 = High - enable motor for B0/D7 but disable D7
					break;
				case 0:
					//motor off
					PORTD &= ~(PIND6 | PIND7); // PD6 = High - enable motor for B0/D7 but disable D7
					PORTB &= ~PINB0; // PB0 = High - motor B0 direction
					break;
				}
				break;
		//motor 1
		case 1:
			switch(value){
				case -1:
					//motor off
					PORTD &= ~PIND5;
					PORTB &= ~(PINB6 | PINB7);
					//operate motor clockwise
					PORTD |= PIND5;  
					PORTB |= PINB6; 
					break;  
				case 1:
					//motor off
					PORTD &= ~PIND5;
					PORTB &= ~(PINB6 | PINB7);
					//operate motor counter-clockwise
					PORTD |= PIND5;   
					PORTB |= PINB7;
					break;
				case 0:
					//motor off
					PORTD &= ~PIND5;
					PORTB &= ~(PINB6 | PINB7);
					break;
				}
				break;
		//motor 2
		case 2:
			switch(value){
				case -1:
					//motor off
					PORTC &= ~(PINC0 | PINC1);
					PORTB &= ~PINB1;
					//operate motor clockwise
					PORTC |= PINC1;
					PORTB |= PINB1;
					break;
				case 1:
					//motor off
					PORTC &= ~(PINC0 | PINC1);
					PORTB &= ~PINB1;
					//operate motor counter-clockwise
					PORTC |= PINC0;
					PORTB |= PINB1;
					break;
				case 0:
					//motor off
					PORTC &= ~(PINC0 | PINC1);
					PORTB &= ~PINB1;
					break;
			}
			break;
		//motor 3
		case 3:
			switch(value){
				case -1:
					//motor off
					PORTC &= ~(PINC2 | PINC3);
					PORTB &= ~PINB2;
					//operate motor clockwise
					PORTC |= PINC2;
					PORTB |= PINB2;
					break;
				case 1:
					//motor off
					PORTC &= ~(PINC2 | PINC3);
					PORTB &= ~PINB2;
					//operate motor counter-clockwise
					PORTC |= PINC3;
					PORTB |= PINB2;
					break;
				case 0:
					//motor off
					PORTC &= ~(PINC2 | PINC3);
					PORTB &= ~PINB2;
					break;
			}
			break;
			/*
		//motor 4 PWM
		case 4:
			switch(value){
				case -1:
					//motor off
					PORTC &= ~(PINC2 | PINC3);
					PORTB &= ~PINB2;
					//operate motor clockwise
					PORTC |= PINC2;
					PORTB |= PINB2;
					break;
				case 1:
					//motor off
					PORTC &= ~(PINC2 | PINC3);
					PORTB &= ~PINB2;
					//operate motor counter-clockwise
					PORTC |= PINC3;
					PORTB |= PINB2;
					break;
				case 0:
					//motor off
					PORTC &= ~(PINC2 | PINC3);
					PORTB &= ~PINB2;
					break;
			}
			break; */
	}
}
