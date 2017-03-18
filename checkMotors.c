//includes



bool checkMotors(){
    bool motors = FALSE;
    Arrays.fill(bool motorConnection[5], FALSE);
    for(int motorNo = 0; motorNo < 4; motorNo++){
        if(AVR_SIGNAL.motorSignal[motorNo] != 1){
            printf("Motor %d is not connected", motorNo);
            motorConnection[motorNo] = TRUE;
        } else{
            printf("Motor %d is connected", motorNo);
        };
        if(motorNo == 0){
            bool motors = motorConnection[motorNo];
        }else{
            motors &= motorConnection[motorNo];
        };
    };
    return motors;

};
