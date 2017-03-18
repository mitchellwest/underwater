//includes


bool init(){
    bool connectionStatus = FALSE;
    //connect to avr
    //avr.ssh();

    //connect to gamepad
    //bool g = connectGamepad();


    //check each motor is connected
    //check camera is connected
    connectionStatus = checkMotors() && checkCamera(); //&& connectGamepad(); //logic and any other checks

    return connectionStatus;
};
