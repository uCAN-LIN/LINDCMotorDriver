/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F15325
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set DRV_B_FnR aliases
#define DRV_B_FnR_TRIS                 TRISAbits.TRISA2
#define DRV_B_FnR_LAT                  LATAbits.LATA2
#define DRV_B_FnR_PORT                 PORTAbits.RA2
#define DRV_B_FnR_WPU                  WPUAbits.WPUA2
#define DRV_B_FnR_OD                   ODCONAbits.ODCA2
#define DRV_B_FnR_ANS                  ANSELAbits.ANSA2
#define DRV_B_FnR_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define DRV_B_FnR_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define DRV_B_FnR_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define DRV_B_FnR_GetValue()           PORTAbits.RA2
#define DRV_B_FnR_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define DRV_B_FnR_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define DRV_B_FnR_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define DRV_B_FnR_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define DRV_B_FnR_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define DRV_B_FnR_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define DRV_B_FnR_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define DRV_B_FnR_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()               do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()                do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()                do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()       do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()      do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()               do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()                do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()                do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()       do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()      do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set DRV_A_FnR aliases
#define DRV_A_FnR_TRIS                 TRISCbits.TRISC2
#define DRV_A_FnR_LAT                  LATCbits.LATC2
#define DRV_A_FnR_PORT                 PORTCbits.RC2
#define DRV_A_FnR_WPU                  WPUCbits.WPUC2
#define DRV_A_FnR_OD                   ODCONCbits.ODCC2
#define DRV_A_FnR_ANS                  ANSELCbits.ANSC2
#define DRV_A_FnR_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define DRV_A_FnR_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define DRV_A_FnR_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define DRV_A_FnR_GetValue()           PORTCbits.RC2
#define DRV_A_FnR_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define DRV_A_FnR_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define DRV_A_FnR_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define DRV_A_FnR_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define DRV_A_FnR_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define DRV_A_FnR_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define DRV_A_FnR_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define DRV_A_FnR_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/