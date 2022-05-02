/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *            
 * @version   Driver Version 1.0.0
 *            
 * @skipline  Device : dsPIC33CK256MP508
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE15 GPIO Pin which has a custom name of led_red to High
 * @pre      The RE15 must be set as Output Pin             
 * @return   none  
 */
#define led_red_SetHigh()          (_LATE15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE15 GPIO Pin which has a custom name of led_red to Low
 * @pre      The RE15 must be set as Output Pin
 * @return   none  
 */
#define led_red_SetLow()           (_LATE15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE15 GPIO Pin which has a custom name of led_red
 * @pre      The RE15 must be set as Output Pin
 * @return   none  
 */
#define led_red_Toggle()           (_LATE15 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE15 GPIO Pin which has a custom name of led_red
 * @return   none  
 */
#define led_red_GetValue()         _RE15

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE15 GPIO Pin which has a custom name of led_red as Input
 * @return   none  
 */
#define led_red_SetDigitalInput()  (_TRISE15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE15 GPIO Pin which has a custom name of led_red as Output
 * @return   none  
 */
#define led_red_SetDigitalOutput() (_TRISE15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @return   none  
 */
void PINS_Initialize(void);



#endif
