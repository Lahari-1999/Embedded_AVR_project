/**
 * @file activity1.c
 * @author vootla lahari sfid:260904 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include"activity1.h"

void activity1()
{
SET_LED; // set LED as OUTPUT
CLEAR_BUTTON_DATA; //clear PORTD 0th bit.
PULLUP_BUTTON; //Set PortB 0th bit.
CLEAR_HEATER_DATA; //clear PORTD 1st bit.
PULLUP_HEATER;// Set PortB 1st bit.

}
