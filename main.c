#include <msp430.h> 


/**
 * main.c
 */
// This is a comment to test
#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= 0x01;                          // Set P1.0 to output direction
    int j;
    j=0;
    for(;;) {
        volatile unsigned int i;            // volatile to prevent optimization
        if (j % 10 == 0) {
            P1OUT ^= 0x01;                      // Toggle P1.0 using exclusive-OR
        }

        i = 10000;                          // SW Delay
        do i--;
        while(i != 0);

        j++;

    }
}
