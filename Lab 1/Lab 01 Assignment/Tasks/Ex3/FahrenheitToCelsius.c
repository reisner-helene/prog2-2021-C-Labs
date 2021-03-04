/*
 * Exercise 2 - Temperature Conversion
 * Author: Ayman Makki

 Objectives :
  - Build and run the `FahrenheitToCelsius.c` source file. What do you observe? What might be the issue? Propose your solution.
 */

#include <stdio.h>

int main() {
	int fahrenheit = 76;
	int celsius;

	// what's wrong here?
	celsius =  (5/9) * (fahrenheit-32);
	printf("%d °F ==> %d °C\n", fahrenheit, celsius);


	return 0;
}
