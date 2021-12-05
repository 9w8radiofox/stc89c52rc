#define ledPin P2  // To toggle P2 on the microcontroller

int main(void){

    while(1){}
        ledPin = 0x00;  // P2 set to 0x00
        for (int i=50; i>0; i--) {}
        ledPin = 0xff;  // P2 set to 0xFF
        for (int i=50; i>0; i--) {}
    }
    
}
