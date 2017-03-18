//includes

bool checkCamera(){
    if(AVR_SIGNAL.cameraFrame != NULL){
        printf("Camera is connected");
        return TRUE
    } else{
        printf("Camera is disconnected");
        return FALSE
    };

};
