#include <8052.h>

int main(void){

    P2 = 0xFF;
    for(int i = 20000; i>0;i--){};

    P2 = 0x00;
    for(int i = 5000; i>0;i--){};

    return 0;
}