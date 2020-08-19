/**********************************************
* File: factHeaderEx.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* using header files to simplify and re-use code 
**********************************************/

#include "factorial.h" /* Header file */

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(int argc, char** argv){
	
	if(argc != 2){
		fprintf(stderr, "The number of inputs is incorrect. ./factCmdLine [Integer]\n");
		exit(-1);
	} 
	
	int input = atoi( argv[1] );
	
	int resultInt;
	float resultFloat;
	double resultDouble;

	resultInt = factInt(input);
	if(resultInt != -1)
		fprintf(stdout, "Integer value of %d! is %d. Hex is %x\n", input, resultInt, resultInt);
	
	resultFloat = factFloat(input);
	if(resultFloat != -1)
		fprintf(stdout, "Scientific value of %d! is %e. Hex is %a\n", input, resultFloat, resultFloat);
	
	resultDouble = factDouble(input);
	if(resultDouble != -1)
		fprintf(stdout, "Scientific value of %d! is %le. Hex is %la\n", input, resultDouble, resultDouble);

	return 0;
}