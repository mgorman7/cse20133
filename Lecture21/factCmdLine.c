/**********************************************
* File: factHeaderEx.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* using header files to simplify and re-use code 
**********************************************/

#include "../18-Header/factorial.h"

#include <stdlib.h>

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(int argc, char** argv){
	
	/* Error Checking */
	if(argc != 2){
		fprintf(stderr, "Output Format: ./factCmdLine [Integer]\n");
		exit(-1);
	}
	
	// int input = atoi( argv[1] );
	int input = atoi( *(argv + 1) );
	
	if(argv[1][0] < 48 || argv[1][0] > 57){
		
		fprintf(stderr, "Not a valid input: %s\n", argv[1]);
		exit(-1);
	}
	
	/* Declare variables */
	int resultInt;
	float resultFloat;
	double resultDouble;
	
	resultInt = factInt(input);
	if(resultInt != -1){
		fprintf(stdout, "%d! = %d\n", input, resultInt);
	}
	
	resultFloat = factFloat(input);
	if(resultFloat != -1){
		fprintf(stdout, "%d! = %f\n", input, resultFloat);
	}
	
	resultDouble = factDouble(input);
	if(resultDouble != -1){
		fprintf(stdout, "%d! = %lf\n", input, resultDouble);
	}
	

	return 0;
}
