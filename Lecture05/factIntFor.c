/**********************************************
* File: factIntFor.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* function prototypes and definitions 
*
* Modifies factInt.c by doing a range of tests using 
* a for loop. 
* Loop exceeds 13 to show students issues with overflow. 
**********************************************/

#include "stdio.h"

/* Function Prototypes */
int factorial(int num);

void printFactorial( int num, int result );

/* main function */
int main(void){
	
	for( int num = 1; num < 20; num++ ){

		/* Get the result */
		int result = factorial(num);
	
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
int factorial(int num){

	// 0! is 1
	if(num == 0)
		return 1;

	int result = 1;
	while(num > 0){

		result *= num;
		num--;

	}

	return result;
}


void printFactorial( int num, int result ){
	
	fprintf(stdout, "Value of %d! is %d. Hex is %x\n", num, result, result);
}
