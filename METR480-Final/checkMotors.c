//includes
#include <stdbool.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


int checkMotors(void){
    int motors = 0;
    int motorConnection[5] = {0};
    struct AVR_SIGNAL {
  		int motorSignal[5]; //placeholder
  		int cameraFrame;
  	};
  	struct AVR_SIGNAL newSig = {.motorSignal={1,1,1,1,1}, .cameraFrame = 1};
    for(int motorNo = 0; motorNo < 4; motorNo++){
        if(newSig.motorSignal[motorNo] != 1){
            printf("Motor %d is not connected", motorNo);
            motorConnection[motorNo] = 1;
        } else{
            printf("Motor %d is connected", motorNo);
        };
        if(motorNo == 0){
            int motors = motorConnection[motorNo];
        }else{
            motors &= motorConnection[motorNo];
        };
    };
    return motors;

};
