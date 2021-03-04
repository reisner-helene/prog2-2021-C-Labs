/*
 * Exercise 4 - Temperature (multiple files)
 * main.c: Main program
 * Author: Ayman Makki

 Objectives :
  - learn multiple files project and how to compile them
	- ensure clarity and logics in the choice of file names and distribution of code
 */

#include <stdio.h>

#include "temperature.h"

int main() {

	Temperature fahrenheit = 53;
	Temperature celsius;

	celsius = toCelsius(fahrenheit);

	Temperature fahrenheitBackConverted = toFahrenheit(celsius);

	printf("%5.1f °F = %5.1f °C = %5.1f °F\n", fahrenheit, celsius, fahrenheitBackConverted);
	
	return 0;
}
