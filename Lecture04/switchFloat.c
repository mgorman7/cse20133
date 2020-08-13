/**********************************************
* File: switchInt.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of a switch statement
* using a 32-bit Single Precision Floating Point Integer
*
* WARNING: This code will NOT COMPILE because floats cannot 
* be used in switch statements. This compiler error is deliberate
* to teach students about switch statements.
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

	float NDClass = 1;

	switch(NDClass){

		case 0:
			fprintf(stdout, "The student is a Notre Dame Freshman\n");
			break;
			
		case 1:
			fprintf(stdout, "The student is a Notre Dame Sophomore\n");
			break;
			
		case 2:
			fprintf(stdout, "The student is a Notre Dame Junior\n");
			break;
			
		case 3:
			fprintf(stdout, "The student is a Notre Dame Senior\n");
			break;
			
		default:
			fprintf(stdout, "The value must be between 0 and 3\n");
			break;

	}

	return 0;
}
