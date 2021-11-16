/*
 * Copyright (c) 2014-2020 Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

// Adjust pin name to your board specification.
// You can use LED1/LED2/LED3/LED4 if any is connected to PWM capable pin,
// or use any PWM capable pin, and see generated signal on logical analyzer.
PwmOut led(PWM_OUT);

int main()
{
    // specify period first
         // 50% duty cycle, relative to period
    //led = 0.5f;          // shorthand for led.write()
    //led.pulsewidth(2);   // alternative to led.write, set duty cycle time in seconds
    while (1){
        led.period(0.05f);      // 50 ms period
        led.write(0.1f);
        ThisThread::sleep_for(1s);
        led.period(0.05f);      // 50 ms period
        led.write(0.5f);
        ThisThread::sleep_for(1s);
    };
}
