//includes
#include <stdio.h>

int[] keyPressed(){
	
	int[] motorCmd = [];
	
	key = getch();
	//for each key loop
	switch(key) {
		case "UP"0x26:
			motorCmd[0] = 1;
		case "DOWN"0x28:
			motorCmd[0] = -1;
		case !("UP" | "DOWN") | ("UP" & "DOWN"):
			motorCmd[0] = 0;
		case "LEFT"0x25:
			motorCmd[1] = 1;
		case "RIGHT"0x27:
			motorCmd[1] = -1;
		case !("LEFT" | "RIGHT") | ("LEFT" & "RIGHT"):
			motorCmd[1] = 0;
		case "W"0x57:
			motorCmd[2] = 1;
		case "S"0x53:
			motorCmd[2] = -1;
		case !("W" | "S") | ("W" & "S"):
			motorCmd[2] = 0;
		case "A"0x41:
			motorCmd[3] = 1;
		case "D"0x44:
			motorCmd[3] = -1;
		case !("A" | "D") | ("A" & "D"):
			motorCmd[3] = 0;
		case "Q"0x51:
			motorCmd[4] = 1;
		case "E"0x45:
			motorCmd[4] = -1;
		case !("Q" | "E") | ("Q" & "E");
			motorCmd[4] = 0;
	}
    return motorCmd;
	
};
