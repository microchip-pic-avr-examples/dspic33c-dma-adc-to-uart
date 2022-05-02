/**
 * SCCP1 Generated Driver Source File
 * 
 * @file 	  sccp1.c
 * 
 * @ingroup   pulseoutputdriver
 * 
 * @brief 	  This is the generated driver source file for SCCP1 driver
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

// Section: Included Files

#include <xc.h>
#include <stddef.h>
#include "../sccp1.h"

// Section: File specific functions

void (*SCCP1_PulseOutputHandler)(void) = NULL;

// Section: Driver Interface

const struct PULSEOUTPUT_INTERFACE Pulse_Output1 = {
    .Initialize          = &SCCP1_PulseOutput_Initialize,
    .Deinitialize        = &SCCP1_PulseOutput_Deinitialize,
    .Enable              = &SCCP1_PulseOutput_Enable,
    .Disable             = &SCCP1_PulseOutput_Disable,
    .CountSet            = &SCCP1_PulseOutput_CountSet,
    .SoftwareTriggerSet  = &SCCP1_PulseOutput_SoftwareTriggerSet,
    .CallbackRegister = &SCCP1_PulseOutput_CallbackRegister,
    .Tasks               = NULL
};

// Section: SCCP1 Module APIs

void SCCP1_PulseOutput_Initialize (void)
{
    // MOD Dual Edge Compare; CCSEL disabled; TMR32 16 Bit; TMRPS 1:64; CLKSEL FOSC/2; TMRSYNC disabled; CCPSLP disabled; CCPSIDL disabled; CCPON disabled; 
    CCP1CON1L = 0xC4;
    // SYNC None; ALTSYNC disabled; ONESHOT disabled; TRIGEN disabled; IOPS Each Time Base Period Match; RTRGEN disabled; OPSRC Timer Interrupt Event; 
    CCP1CON1H = 0x0;
    // ASDG 0x0; SSDG disabled; ASDGM disabled; PWMRSEN disabled; 
    CCP1CON2L = 0x0;
    // ICSEL ; AUXOUT Disabled; ICGSM Level-Sensitive mode; OCAEN disabled; OENSYNC disabled; 
    CCP1CON2H = 0x0;
    // PSSACE Tri-state; POLACE disabled; OSCNT None; OETRIG disabled; 
    CCP1CON3H = 0x0;
    // ICOV disabled; ICDIS disabled; SCEVT disabled; ASEVT disabled; TRCLR disabled; TRSET disabled; ICGARM disabled; 
    CCP1STATL = 0x0;
    // TMRL 0x0000; 
    CCP1TMRL = 0x0;
    // TMRH 0x0000; 
    CCP1TMRH = 0x0;
    // PRL 31250; 
    CCP1PRL = 0x7A12;
    // PRH 0; 
    CCP1PRH = 0x0;
    // CMPA 0; 
    CCP1RA = 0x0;
    // CMPB 31250; 
    CCP1RB = 0x7A12;
    // BUFL 0x0000; 
    CCP1BUFL = 0x0;
    // BUFH 0x0000; 
    CCP1BUFH = 0x0;
    
    SCCP1_PulseOutput_CallbackRegister(&SCCP1_PulseOutput_Callback);
    
    IFS0bits.CCP1IF = 0;
    IEC0bits.CCP1IE = 1;
    
    CCP1CON1Lbits.CCPON = 1; //Enable Module
}

void SCCP1_PulseOutput_Deinitialize (void)
{
    CCP1CON1Lbits.CCPON = 0;
    
    
    IFS0bits.CCP1IF = 0;
    IEC0bits.CCP1IE = 0;
    
    CCP1CON1L = 0x0;
    CCP1CON1H = 0x0;
    CCP1CON2L = 0x0;
    CCP1CON2H = 0x100;
    CCP1CON3H = 0x0;
    CCP1STATL = 0x0;
    CCP1TMRL = 0x0;
    CCP1TMRH = 0x0;
    CCP1PRL = 0xFFFF;
    CCP1PRH = 0xFFFF;
    CCP1RA = 0x0;
    CCP1RB = 0x0;
    CCP1BUFL = 0x0;
    CCP1BUFH = 0x0;
}

void SCCP1_PulseOutput_Enable( void )
{
    CCP1CON1Lbits.CCPON = 1;
}


void SCCP1_PulseOutput_Disable( void )
{
    CCP1CON1Lbits.CCPON = 0;
}

void SCCP1_PulseOutput_CountSet(uint16_t onTime, uint16_t pulseCount)
{
    CCP1RB = onTime+pulseCount;
    CCP1RA = onTime;
    CCP1PRL = onTime+pulseCount;
}

void SCCP1_PulseOutput_SoftwareTriggerSet( void )
{
    CCP1STATLbits.TRSET = 1;
}

void SCCP1_PulseOutput_CallbackRegister(void* handler)
{
    if(NULL != handler)
    {
        SCCP1_PulseOutputHandler = handler;
    }
}

void __attribute__ ((weak)) SCCP1_PulseOutput_Callback ( void )
{ 

} 


void __attribute__ ( ( interrupt, no_auto_psv ) ) _CCP1Interrupt ( void )
{    
    // SCCP1 callback function 
    (*SCCP1_PulseOutputHandler)();
    IFS0bits.CCP1IF = 0;
}
/**
 End of File
*/
