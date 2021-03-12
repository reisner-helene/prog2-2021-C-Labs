/*
 * Exercise 10 - Merging two sorted arrays
 *
 * main.c: Main program.
 *
 * Author: Christian Grévisse
 * Date: 05.03.2018
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define l1 10 //define a lenght of each array
#define l2 15

#include "headers/array.h"//header file that gives eg function print_array

int main() {
	// declaration of arrays
	int t1[l1], t2[l2];

	// setting the seed of the pseudo-random number generator
	srand(0); //this zero makes sure that the random numbers are always good... it's a seed... when people write articles they give the seed they used!

	// filling the arrays with random numbers
	fill_array(t1, l1);
	fill_array(t2, l2);

	// printing their content
	printf("t1 = ");
	print_array(t1, l1);
	printf("t2 = ");
	print_array(t2, l2);

	// sorting them
	sort_array(t1, l1);
	sort_array(t2, l2);

	// printing their changed content
	printf("\nt1 = ");
	print_array(t1, l1);
	printf("t2 = ");
	print_array(t2, l2);

	// declaration of the merge array
	int merge[l1+l2];   //create one that would fit all of this: [1.2.2.3.5.6]

	/*
	 * "two finger"-algorithm for merging the arrays: at each step,
	 * we check which array currently contains the lowest value, set
	 * this to the current position in the merge array and advance the
	 * "finger"; finally, we append the remaining elements in the array
	 * that have not yet been inserted during the first loop.
	 */
	int i = 0; int j = 0;        //start at zero
	while(i < l1 && j < l2)      //while both are under lenght
		if(t1[i] <= t2[j]) {      //if number of one is below the other one
			merge[i+j] = t1[i];
			i++;                    //update the position in the 1st array
		} else {
			merge[i+j] = t2[j];
			j++;
		}
	while(i < l1) {
		merge[i+j] = t1[i]; 			//when you reach the end of one array, just add all the numbers of the other one
		i++;											//updating the position here
	}
	while(j < l2) {
		merge[i+j] = t2[j];				//when you reach the end of one array, just add all the numbers of the other one
		j++;
	}
	// printing the content of the sorted merge array
	printf("\nmerge = ");
	print_array(merge, l1 + l2);

	return 0;
}
