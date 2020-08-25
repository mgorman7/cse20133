/**********************************************
* File: factHeaderBad.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* using header files to simplify and re-use code.
* This code will not compile because the factBad.h 
* uses global variables instead of #define compiler 
* directives, so the compiler will add the variables
* in multiple locations, and fail.
**********************************************/

#include "factBad.h" /* Header file */

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	int resultInt;
	float resultFloat;
	double resultDouble;

	resultInt = factInt(MAX_INT_FACT);
	if(resultInt != -1)
		fprintf(stdout, "Integer value of %d! is %d. Hex is %x\n", MAX_INT_FACT, resultInt, resultInt);
	
	resultFloat = factFloat(MAX_FLOAT_FACT);
	if(resultFloat != -1)
		fprintf(stdout, "Scientific value of %d! is %e. Hex is %a\n", MAX_FLOAT_FACT, resultFloat, resultFloat);
	
	resultDouble = factDouble(MAX_DOUBLE_FACT);
	if(resultDouble != -1)
		fprintf(stdout, "Scientific value of %d! is %le. Hex is %la\n", MAX_DOUBLE_FACT, resultDouble, resultDouble);

	return 0;
}