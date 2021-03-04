/*
 * Exercise 2 - Temperature (multiple files)
 * temperature.c: Source file containing implementation of conversion functions
 * Author: Ayman Makki
 */

#include "temperature.h"

Temperature toFahrenheit(Temperature celsius) {
	return 9.0 * celsius / 5.0 + 32.0;
}

Temperature toCelsius(Temperature fahrenheit) {
	return 5.0 * (fahrenheit - 32.0) / 9.0;
}
