/**********************************************
* File: factInt.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains a program that calculates a
* factorial of a given number and stores the result
* in an integer using a for loop 
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

	int num = 20, iter, factorial = 1;

	for(iter = 1; iter <= num; iter++){

		factorial *= iter;
		fprintf(stdout, "The factorial of %d is: %d \tand the hex is %x\n", iter, factorial, factorial); 
		
	}

	return 0;
}
