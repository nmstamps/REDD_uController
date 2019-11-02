//#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <msp430.h> 
#include <MSP430FR5xx_6xx\driverlib.h>

//comment to push updates

#define LED1 BIT0
#define BUTTON BIT1
#define PRESSED 0


void main(void) {

    WDT_A_hold(WDT_A_BASE);              // Stop watchdog timer

    unsigned char button_cur, button_prev;

    //GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
    GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= LED1;                          // Set P1.0 to output direction
    P1OUT|= LED1;

    while(1){
        volatile unsigned int i;            // volatile to prevent optimization
        button_cur = (P1IN & BUTTON);
        if ((button_prev == PRESSED) &&
                  (button_cur  != PRESSED) ){


            P1OUT ^= LED1; //toggle the LED
          }
        button_prev = button_cur;

    }

}
