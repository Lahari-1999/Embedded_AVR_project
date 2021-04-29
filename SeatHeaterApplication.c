/**
 * @file SeatHeaterApplication.c
 * @author vootla lahari sfid:260904 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-04-27
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include"activity1.h"
#include"activity2.h"

/**
 * @brief Main function
 *
 * @return int
 */

int main(void)
{
    activity1();
    InitADC();
    uint16_t temp;

    while(1)
    {
       if(!(BUTTON_ON || HEATER_ON)) { //Set PIND 0th and PIND 1st.It checks if the button is pressed or not.

                _delay_ms(20);
                SET_LED_ON; //set portB0 it will ON the led
                temp = ReadADC(1);
                _delay_ms(200);


        }
        else
        {
                _delay_ms(20);
                SET_LED_OFF; //clear portB0 it will OFF the led
        }
    }

 return 0;
}
