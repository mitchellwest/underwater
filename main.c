//includes

//global vars
//placeholder AVR_SIGS
struct AVR_SIGNAL;
int AVR_SIGNAL.motorSignal[5] = {1,1,1,1,1}; //placeholder
bool AVR_SIGNAL.cameraFrame = TRUE;
//main
void main(void){
    bool ping = TRUE;
    //init
    if(init()==TRUE){
        while(ping != FALSE){
            int AVR_SIGNAL.cameraFrame[][] = [:][:];//2D array



            /*check key pressed and execute motors, getchar() for keyboard, use
                    different function for gamepad */
            char key = getchar();
            int AVR_SIGNAL.motorCmd = keyPressed(key, AVR_SIGNAL.motorCmd);
            //execute motor commands
            executeCmd(AVR_SIGNAL.motorCmd);


            //visualize video feed
            videoFrame(AVR_SIGNAL.cameraFrame);

            //ping avr
            switch(pingController()){
                case FALSE:
                    ping = FALSE;
                    printf("Disconnected");
                    break;
                case TRUE:
                    printf("Connected");
                    break;
            };
        };
    };
};
