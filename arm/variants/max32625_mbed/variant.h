/*******************************************************************************
 * Copyright (C) 2017 Maxim Integrated Products, Inc., All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 ******************************************************************************/

#ifndef _VARIANT_MAX32625MBED_H_
#define _VARIANT_MAX32625MBED_H_

#include "gpio.h"

#define VARIANT_MCK RO_FREQ


// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR         Serial
#define SERIAL_PORT_HARDWARE        Serial
#define SERIAL_PORT_HARDWARE1       Serial1
#define SERIAL_PORT_HARDWARE2       Serial2
#define SERIAL_PORT_HARDWARE3       Serial3
#define SERIAL_PORT_HARDWARE_OPEN   Serial1
#define SERIAL_PORT_HARDWARE_OPEN1  Serial2
#define SERIAL_PORT_HARDWARE_OPEN2  Serial3

#define PIN_NC      -1
#define PIN_ANALOG  -2
#define NUM_OF_PINS 53

#define LED_BUILTIN 24

#define DEFAULT_I2CM_PORT 0
#define DEFAULT_SPIM_PORT 1
#define DEFAULT_SERIAL_PORT 0

// Analog Pins can be accessed by either external pin# or A0 to A3
#define A0 49
#define A1 50
#define A2 51
#define A3 52

#define PIN_MASK_TO_PIN(msk) (31 - __CLZ(msk))

#define IS_VALID(p)       ( (p) < NUM_OF_PINS )
#define IS_NC(p)          ( pinLut[(p)].port == PIN_NC ) 
#define IS_ANALOG(p)      ( IS_VALID(p) && (pinLut[(p)].port == PIN_ANALOG) ) 
#define IS_DIGITAL(p)     ( IS_VALID(p) && !IS_NC(p) && !IS_ANALOG(p) ) 
#define GET_PIN_IRQ(p)    ( (uint32_t)MXC_GPIO_GET_IRQ(pinLut[p].port) )
#define GET_PIN_MASK(p)   ( pinLut[p].mask )
#define GET_PIN_PORT(p)   ( pinLut[p].port )
#define GET_PIN_CFG(p)    ( (gpio_cfg_t *)&pinLut[p] )
#define SET_PIN_MODE(p,m) ( pinLut[p].pad = m )

extern gpio_cfg_t pinLut[NUM_OF_PINS];

// Enumeration to allow portability between mbed and arduino
enum mbedPins {
/* PORT 0 */
    P0_0 = 0,
    P0_1,
    P0_2,
    P0_3,
    P0_4,
    P0_5,
    P0_6,
    P0_7,
/* PORT 1 */
    P1_4 = 8,
    P1_5,
    P1_3,
    P1_1,
    P1_2,
    P1_0,
    P1_6,
    P1_7,
/* PORT 2 */
    P2_0 = 16,
    P2_1,
    P2_2,
    P2_3,
    P2_4,
    P2_5,
    P2_6,
    P2_7,
/* PORT 3 */
    P3_0 = 24,
    P3_1,
    P3_2,
    P3_3,
    P3_4,
    P3_5,
    P3_6,
    P3_7,
/* PORT 4 */
    P4_0 = 32,
    P4_1,
    P4_2,
    P4_3,
    P4_4,
    P4_5,
    P4_6,
    P4_7,
/* PORT 5 */
    P5_0 = 40,
    P5_1,
    P5_2,
    P5_3,
    P5_4,
    P5_5,
    P5_6,
    P5_7,
/* PORT 6 */
    P6_0 = 48,
};

#endif // _VARIANT_MAX32625MBED_H_
