/**********************************************
* File: switchFixInt.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of a switch statement
* using a fixed 8-bit signed integer 
**********************************************/

#include "stdio.h"
#include "stdint.h" // Included for int8_t 

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	int8_t NDClass = 1;

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
