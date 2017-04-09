//includes

int[] keyPressed(){
	
	int[] motorCmd = [];
	
	switch(key) {
		case "UP":
			motorCmd += [0, 1];
		case "DOWN":
			motorCmd += [0, -1];
		case "LEFT":
			motorCmd += [1, 1];
		case "RIGHT":
			motorCmd += [1, -1];
		case "W":
			motorCmd += [2, 1];
		case "S":
			motorCmd += [2, -1];
		case "A":
			motorCmd += [3, 1];
		case "D":
			motorCmd += [3, -1];
		case "Q":
			motorCmd += [4, 1];
		case "E":
			motorCmd += [4, -1];
	}
    return motorCmd;
	
};
