/**
 * ADC Generated Driver Types Header File
 * 
 * @file      adc_types.h
 *            
 * @ingroup   adcdriver
 *            
 * @brief     This is the generated driver types header file for the ADC driver
 *            
 * @version   Driver Version 1.1.0
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

#ifndef ADC_TYPES_H
#define ADC_TYPES_H

// Section: Included Files

// Section: Data Type Definitions


/**
 @ingroup  adcdriver
 @enum     ADC_CHANNEL
 @brief    Defines the ADC channles that are selected from the MCC Melody 
           User Interface for the ADC conversions.
 @note     The enum list in the Help document might be just a reference to show 
           the analog channel list. Generated enum list is based on the configuration 
           done by user in the MCC Melody user interface.
*/
enum ADC_CHANNEL
{
    Channel_AN23,    /**<Channel Name:AN23   Assigned to:Shared Channel*/
    MAX_CHANNELS = 1    /**< Maximum number of channels configured by user in MCC Melody User Interface */
};


/**
 @ingroup  adcdriver
 @enum     ADC_DEDICATED_CORE
 @brief    Defines the ADC cores that are 
           available for the module to use.
 @note     The enum list in the Help document might be just a reference to to show 
           the dedicated core list. Generated enum list is based on the configuration 
           done by user in the MCC Melody user interface.
*/
enum ADC_DEDICATED_CORE
{
    MAX_DEDICATED_CORES = 0    /**< Maximum cores configured by user in MCC Melody User Interface */
};


/**
 @ingroup  adcdriver
 @enum     ADC_CMP
 @brief    Defines the ADC comparators that are 
           available for the module to use.
*/
enum ADC_CMP
{
    MAX_CMPS = 0    /**< Maximum Comparators configured by user in MCC Melody User Interface */
};

#endif  //ADC_TYPES_H
