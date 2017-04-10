//includes
#include <stdbool.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int checkCamera(void){
  struct AVR_SIGNAL {
    int motorSignal[5]; //placeholder
    int cameraFrame;
  };
  struct AVR_SIGNAL newSig = {.motorSignal = {1,1,1,1,1}, .cameraFrame = 1};
  if(newSig.cameraFrame != NULL){
      printf("Camera is connected");
      return 1;
  } else{
      printf("Camera is disconnected");
      return 0;
  };

};
