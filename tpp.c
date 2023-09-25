#include <htc.h>

void delay_ms( int ms) {
     int i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 9999; j++) {
            
        }
    }
}

void main(){

    int counter = 3;

    TRISB=1;
    TRISA0=1;
    TRISA4=1;


    TRISA1=0;
    TRISA2=0;
    TRISA3=0;

    while (1){
        if (RA4==1){
            if (counter!=0){
                if (RA0==1){
                    if (RB0==0 && RB1==1 && RB2==0 && RB3==1 && RB4==0 && RB5==0 && RB6==1 && RB7==1 ){
                        
                        RA3=1;
                        delay_ms(1); 
                        RA3=0;
                    }else{
                        
                        RA2=1;
                        delay_ms(1); 
                        RA2=0;
                        counter-=1;
                    }
                }
            }else{
                RA1=1;
                delay_ms(1); 
                RA1=0;

                counter = 3;
            }
        }else{
            counter = 3;

            RA1=0;
            RA2=0;
            RA3=0;
        }
    }
}