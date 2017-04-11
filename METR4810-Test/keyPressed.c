//includes
#include <avr/io.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int * keyPressed(){
	
	static int motorCmd[5] = {0};
	/*motorCmd[0] = 0;
	motorCmd[1] = 0;
	motorCmd[2] = 0;
	motorCmd[3] = 0;
	motorCmd[4] = 0;*/
	char key = getchar();
	//for each key loop
	switch(key) {
		case 0x26://"UP"://0x26:
			if(key == !(0x26 || 0x28) || (0x26 && 0x28)){//!("UP" | "DOWN") | ("UP" & "DOWN"):
				motorCmd[0] = 0;
			} else {
				motorCmd[0] = 1;
			}
		case 0x28://"DOWN"://0x28:
			if(key == !(0x26 || 0x28) || (0x26 && 0x28)){//!("UP" | "DOWN") | ("UP" & "DOWN"):
				motorCmd[0] = 0;
				} else {
				motorCmd[0] = -1;
			}
		case 0x25://"LEFT"://0x25:
			if(key == !(0x25 || 0x27) || (0x25 && 0x27)){//!("LEFT" | "RIGHT") | ("LEFT" & "RIGHT"):
				motorCmd[1] = 0;
			} else {
				motorCmd[1] = 1;
			}
		case 0x27://"RIGHT"://0x27:
			if(key == !(0x25 || 0x27) || (0x25 && 0x27)){//!("LEFT" | "RIGHT") | ("LEFT" & "RIGHT"):
				motorCmd[1] = 0;
				} else {
				motorCmd[1] = -1;
			}
		case 0x57://"W"://0x57:
			if (key == !(0x57 || 0x53) || (0x57 && 0x53)){//!("W" | "S") | ("W" & "S"):
				motorCmd[2] = 0;
			} else{
				motorCmd[2] = 1;
			}
		case 0x53://"S"://0x53:
			if (key == !(0x57 || 0x53) || (0x57 && 0x53)){//!("W" | "S") | ("W" & "S"):
				motorCmd[2] = 0;
				} else{
				motorCmd[2] = -1;
			}
		case 0x41://"A"://0x41:
			if (key == !(0x41 || 0x44) || (0x41 && 0x44)){//!("A" | "D") | ("A" & "D"):
				motorCmd[3] = 0;
			} else {
				motorCmd[3] = 1;
			}
		case 0x44://"D"://0x44:
			if (key == !(0x41 || 0x44) || (0x41 && 0x44)){//!("A" | "D") | ("A" & "D"):
				motorCmd[3] = 0;
				} else {
				motorCmd[3] = -1;
			}
		case 0x51://"Q"://0x51:
			if (key == !(0x51 || 0x45) || (0x51 && 0x45)){//!("Q" | "E") | ("Q" & "E");
				motorCmd[4] = 0;
			} else {
				motorCmd[4] = 1;
			}
		case 0x45://"E"://0x45:
			if (key == !(0x51 || 0x45) || (0x51 && 0x45)){//!("Q" | "E") | ("Q" & "E");
				motorCmd[4] = 0;
				} else {
				motorCmd[4] = -1;
			}
	}
    return motorCmd;
	
};
