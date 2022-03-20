#include <8052.H>
#define INT8U unsigned char

void main(){
    INT8U i;
    P2 = 0x03; 
    for(int i = 20000; i>0;i--){};

    while(1){
        for (i=0; i<6;i++){
            P2 = P2 << 1;
            for(int i = 5000; i>0;i--){};
        }
        for (i=0; i<6;i++){
            P2 = P2>>1;
            for(int i = 10000; i>0;i--){};
        }
    }

}