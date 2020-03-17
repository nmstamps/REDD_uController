/*
 * DAC.c
 *
 *  Created on: Nov 19, 2019
 *      Author: KrisStone
 */

#include "DAC.h"

/*
 * Function Purpose: Sets up the initial state of the MSP430 by configuring
 *                   all necessary GPIO, timers, and communication protocols
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void initialize() {

    //Setup GPIO Port1 Pin0
    configurePortP1_0();
    //Setup GPIO Port1 Pin1
    configurePortP1_1();
    //Setup GPIO Port1 Pin2
    configurePortP1_2();
    //Setup GPIO Port1 Pin3
    configurePortP1_3();
    //Setup GPIO Port1 Pin4
    configurePortP1_4();
    //Setup GPIO Port1 Pin5
    configurePortP1_5();
    //Setup GPIO Port1 Pin6
    configurePortP1_6();
    //Setup GPIO Port1 Pin7
    configurePortP1_7();
    //Setup GPIO Port2 Pin0
    configurePortP2_0();
    //Setup GPIO Port2 Pin1
    configurePortP2_1();
    //Setup GPIO Port2 Pin2
    configurePortP2_2();
    //Setup GPIO Port2 Pin3
    configurePortP2_3();
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 0 (P1.0) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_0() {

    //Set Port P1 and Pin 0 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN0, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 0 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.1) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_1() {

    //Set Port P1 and Pin 1 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN1, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 1 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN1);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 2 (P1.2) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_2() {

    //Set Port P1 and Pin 2 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN2, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 2 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN2);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 3 (P1.3) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_3() {

    //Set Port P1 and Pin 3 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN3, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 3 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN3);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 4 (P1.4) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_4() {

    //Set Port P1 and Pin 4 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN4, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 3 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN4);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 5 (P1.5) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_5() {

    //Set Port P1 and Pin 5 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN5, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 5 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN5);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 6 (P1.6) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_6() {

    //Set Port P1 and Pin 6 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN6, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 6 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN6);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 7 (P1.7) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_7() {

    //Set Port P1 and Pin 7 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1, GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P1 and Pin 7 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN7);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 2 Pin 0 (P2.0) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP2_0() {

    //Set Port P2 and Pin 0 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN0, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P2 and Pin 0 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN0);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 2 Pin 1 (P2.1) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP2_1() {

    //Set Port P2 and Pin 1 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN1, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P2 and Pin 1 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN1);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 2 Pin 2 (P2.2) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP2_2() {

    //Set Port P2 and Pin 2 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN2, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P2 and Pin 2 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN2);
}

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 2 Pin 3 (P2.3) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP2_3() {

    //Set Port P2 and Pin 3 multiplexer as the PRIMARY function (GPIO)
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2, GPIO_PIN3, GPIO_PRIMARY_MODULE_FUNCTION);
    //Set the Port P2 and Pin 3 to be a Digital Output pin
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN3);
}

//Adding this as a test function to test GitHub updating
void testFunction() {
}

