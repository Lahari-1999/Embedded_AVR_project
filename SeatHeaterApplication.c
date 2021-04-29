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
       if(!(BUTTON_ON || HEATER_ON)) {
//setting if the input bit to 0th bit of pinB is made 0 from 1 by pressing led

                _delay_ms(20);
                SET_LED_ON; //set portB0 it will ON the led
                temp = ReadADC(1); // setting channel to 1
                _delay_ms(200);


        }
        else
        {
                _delay_ms(20);
                SET_LED_OFF; //clear 0th bit of portB and it will OFF the led
        }
    }

 return 0;
}
