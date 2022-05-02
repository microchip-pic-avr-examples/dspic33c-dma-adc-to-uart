/**
 * PULSEOUTPUT Generated Driver Interface Header File
 * 
 * @file 	  pulseoutput_interface.h
 * 
 * @defgroup  pulseoutputdriver Pulse Output Driver
 * 
 * @brief 	  Pulse Generator Driver is used to generate a one shot Pulse or 
 *            series of Pulse on a Output Pin using dsPIC MCUs
 *
 * @version   Driver Version 2.0.0
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

#ifndef PULSEOUTPUT_INTERFACE_H
#define PULSEOUTPUT_INTERFACE_H

// Section: Included Files

#include <stdint.h>

// Section: Data Type Definitions
        
/**
 @ingroup  pulseoutputdriver
 @struct   PULSEOUTPUT_INTERFACE
 @brief    Structure containing the function pointers of PULSEOUTPUT pulse generator driver
*/

struct PULSEOUTPUT_INTERFACE{
    void (*Initialize)(void);
    ///< Pointer to SCCPx_PulseOutput_Initialize e.g. \ref SCCP1_PulseOutput_Initialize
    
    void (*Deinitialize)(void);
    ///< Pointer to SCCPx_PulseOutput_Deinitialize e.g. \ref SCCP1_PulseOutput_Deinitialize
    
    void (*Enable)(void);
    ///< Pointer to SCCPx_PulseOutput_Enable e.g. \ref SCCP1_PulseOutput_Enable
    
    void (*Disable)(void);
    ///< Pointer to SCCPx_PulseOutput_Disable e.g. \ref SCCP1_PulseOutput_Disable
    
    void (*CountSet)(uint16_t onTime, uint16_t pulseCount);
    ///< Pointer to SCCPx_PulseOutput_CountSet e.g. \ref SCCP1_PulseOutput_CountSet
    
    void (*SoftwareTriggerSet)(void);
    ///< Pointer to SCCPx_PulseOutput_SoftwareTriggerSet e.g. \ref SCCP1_PulseOutput_SoftwareTriggerSet
    
    void (*CallbackRegister)(void* handler);
    ///< Pointer to SCCPx_PulseOutput_CallbackRegister e.g. \ref SCCP1_PulseOutput_CallbackRegister
    
    void (*Tasks)(void);
    ///< Pointer to SCCPx_PulseOutput_Tasks e.g. \ref SCCP1_PulseOutput_Tasks (Supported only in polling mode)
};

#endif  //PULSEOUTPUT_INTERFACE_H
/**
 End of File
*/
