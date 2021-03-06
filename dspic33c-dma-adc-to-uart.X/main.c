/*
? [2022] Microchip Technology Inc. and its subsidiaries.

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
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/adc/adc1.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/dma/dma.h"

//Timer Callback routine for every instance
void TMR1_TimeoutCallback( void )
{ 
    ADC1_SoftwareTriggerEnable();
} 
/*
    Main application
*/

int main(void)
{
    /*Initializes the DMA, UART, Timer, ADC*/
    SYSTEM_Initialize();

    DMA_Driver.ChannelDisable(DMA_CHANNEL_0);
    DMA_Driver.SourceAddressSet(DMA_CHANNEL_0,(uint16_t)&ADCBUF23);
    DMA_Driver.DestinationAddressSet(DMA_CHANNEL_0,(uint16_t)&U1TXREG);
    DMA_Driver.ChannelEnable(DMA_CHANNEL_0);
    
    while(1)
    {
      
    }    
}
