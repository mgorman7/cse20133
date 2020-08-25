/**********************************************
* File: factHeaderEx.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* using header files to simplify and re-use code 
**********************************************/

#include "factorial.h"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* Declare variables */
	int resultInt;
	float resultFloat;
	double resultDouble;
	
	resultInt = factInt(MAX_INT_FACT);
	if(resultInt != -1){
		fprintf(stdout, "%d! = %d\n", MAX_INT_FACT, resultInt);
	}
	
	resultFloat = factFloat(MAX_FLOAT_FACT);
	if(resultFloat != -1){
		fprintf(stdout, "%d! = %f\n", MAX_FLOAT_FACT, resultFloat);
	}
	
	resultDouble = factDouble(MAX_DOUBLE_FACT);
	if(resultDouble != -1){
		fprintf(stdout, "%d! = %lf\n", MAX_DOUBLE_FACT, resultDouble);
	}
	

	return 0;
}
