#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

    // Insert code
    DDRB |=(1<<PB0);


    DDRD&=~(1<<PD0); // clear bit
    PORTD|=(1<<PD0); //SET BIT

    DDRD&=~(1<<PD1); // clear bit
    PORTD|=(1<<PD1); //SET BIT



    while(1){


    if(!((PIND&(1<<PD0)) || (PIND&(1<<PD1)))){

     PORTB |=(1<<PB0);
        _delay_ms(2000);
    }
    else{
        PORTB&=~(1<<PB0);
         _delay_ms(2000);
    }


}
    return 0;
}
