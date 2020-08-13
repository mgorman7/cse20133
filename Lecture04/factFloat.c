/**********************************************
* File: factFloat.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains a program that calculates a
* factorial of a given number and stores the result
* in a float using a for loop 
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

	int num = 34, iter; 
	float factorial = 1;

	// Use the for loop to perform the loop 
	for(iter = 1; iter <= num; iter++){

		factorial *= (float)iter;
		
	}
	fprintf(stdout, "...\nThe factorial of %d is: %e \tand the hex is %a\n", num, factorial, factorial); 
	
	// Next, we go to 35!, which exceeds the IEEE 754 Single FLoating Point Precision
	factorial *= 35;
	fprintf(stdout, "...\nThe factorial of 35 is: %e \tand the hex is %a\n", factorial, factorial); 

	return 0;
}
