
/**
 * @file main.c
 * @author vootla lahari sfid:260904 
 * @brief 
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include <avr/io.h>
#include <util/delay.h>



/**
 * @brief  A main function to operate on button sensor and heater sensor to turn on LED
 * 
 * @return int 
 */

int main(void)

{


/**
 * @brief Main code
 * 
 */
    DDRB |=(1<<PB0);


    DDRD&=~(1<<PD0); // clear bit
    PORTD|=(1<<PD0); //SET BIT

    DDRD&=~(1<<PD1); // clear bit
    PORTD|=(1<<PD1); //SET BIT



    while(1){


    if(!((PIND&(1<<PD0)) || (PIND&(1<<PD1)))){

     PORTB |=(1<<PB0); //make 0th bit of port B as 1, makes led glow
        _delay_ms(2000);
    }
    else{
        PORTB&=~(1<<PB0); // make led off
         _delay_ms(2000); 
    }
}

    return 0;
}
