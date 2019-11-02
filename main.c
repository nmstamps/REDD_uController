//#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <msp430.h> 
#include <MSP430FR5xx_6xx\driverlib.h>



#define LED1 BIT0
#define BUTTON BIT1
#define PRESSED 0


void main(void) {

    WDT_A_hold(WDT_A_BASE);              // Stop watchdog timer

    unsigned char button_cur, button_prev;

    //GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);


    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= LED1;                          // Set P1.0 to output direction
    P1OUT|= LED1;

    while(1){
        volatile unsigned int i;            // volatile to prevent optimization
        P1OUT ^= LED1;                      // Toggle P1.0 using exclusive-OR

        __delay_cycles(1000000);

    }

}
