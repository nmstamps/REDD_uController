/*
 * DAC.h
 *
 *  Created on: Nov 19, 2019
 *      Author: KrisStone
 */

#ifndef DAC_H_
#define DAC_H_

#include "MSP430FR5xx_6xx/driverlib.h" //Comment out if using Windows OS


/*
 * Function Purpose: To set the pins on Port 1 (P1) as output pins
 *                   These will be used for digital logic values
 *                   for the DAC digital inputs
 *
 * Parameters: GPIO port, GPIO pin
 *
 * Return: NONE
 */
void GPIO_setAsOutputPin(uint8_t selectedPort, uint16_t selectedPins);

/*
 * Function Purpose: To set the multiplexer on Port 1 (P1) to the PRIMARY
 *                   module function.
 *
 * Parameters: GPIO port, GPIO pin, GPIO mode
 *
 * Return: NONE
 */
void GPIO_setAsPeripheralModuleFunctionOutputPin(uint8_t selectedPort, uint16_t selectedPins, uint8_t mode);

/*
 * Function Purpose: To set the pins on Port 1 as HIGH
 *                   digital logic values that will be used by the DAC
 *                   to represent binary values that will be transformed
 *                   into analog voltage values on the output of the DAC
 *
 * Parameters: GPIO port, GPIO pin
 *
 * Return: NONE
 */
void GPIO_setOutputHighOnPin(uint8_t selectedPort, uint16_t selectedPins);

/*
 * Function Purpose: To set the pins on Port 1 as LOW
 *                   digital logic values that will be used by the DAC
 *                   to represent binary values that will be transformed
 *                   into analog voltage values on the output of the DAC
 *
 * Parameters: GPIO port, GPIO pin
 *
 * Return: NONE
 */
void GPIO_setOutputLowOnPin(uint8_t selectedPort, uint16_t selectedPins);

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.0) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_0();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.1) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_1();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 2 (P1.2) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_2();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 3 (P1.3) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_3();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.4) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_4();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.5) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_5();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.6) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_6();

/*
 * Function Purpose: To configure all necessary parameters of
 *                   Port 1 Pin 1 (P1.7) for DAC operation
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
void configurePortP1_7();

#endif /* DAC_H_ */
