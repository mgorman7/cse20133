/**********************************************
* File: factFloat.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* function prototypes and definitions
*
* Modifies factIntFor.c by changing the result type to a float 
* so that we can get a greater range of results than int.
* Deliberately exceeds 34 to show the students that the 
* range of float has a limit 
**********************************************/

#include "stdio.h"

/* Function Prototypes */
float factorial(int num);

void printFactorial( int num, float result );

/* main function */
int main(void){
	
	for( int num = 13; num < 40; num++ ){

		/* Get the result */
		float result = factorial(num);
	
		/* Print Results */
		printFactorial( num, result );
		
	}

	return 0;
}

/********************************************
* Function Name  : factorial
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 170, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
float factorial(int num){

	// 0! is 1
	if(num == 0)
		return 1;

	float result = 1;
	while(num > 0){

		result *= (float)num;
		num--;

	}

	return result;
}


void printFactorial( int num, float result ){
	
	fprintf(stdout, "Value of %d! is %f. Hex is %a\n", num, result, result);
}
