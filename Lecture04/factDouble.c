/**********************************************
* File: factDoulbe.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains a program that calculates a
* factorial of a given number and stores the result
* in a double using a for loop 
**********************************************/
#include "stdio.h"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program
********************************************/
int main(void){

	int num = 170, iter; 
	double factorial = 1;

	// Use the for loop to perform the loop 
	for(iter = 1; iter <= num; iter++){

		factorial *= (double) iter;
		
	}
	fprintf(stdout, "...\nThe factorial of %d is: %e \tand the hex is %la\n", num, factorial, factorial); 
	
	// Next, we go to 171!, which exceeds the IEEE 754 Double FLoating Point Precision
	factorial *= 171;
	fprintf(stdout, "...\nThe factorial of 171 is: %e \tand the hex is %la\n", factorial, factorial); 

	return 0;
}
