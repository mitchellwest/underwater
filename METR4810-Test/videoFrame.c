#include <avr/io.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void videoFrame(){
	//start camera
	PORTC |= PINC4 | PINC5;
};
