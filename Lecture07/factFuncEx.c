/**********************************************
* File: factFuncEx.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* function prototypes and definitions 
**********************************************/

#include "stdio.h"
#include "stdlib.h" // Included for exit 

/* Function Prototypes */
double factorial(int num);

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	int num = 170;
	double result;

	result = factorial(num);

	if(result == -1){
		fprintf(stderr, "The value was not between 0 and 170\n");
		exit(-1);
	}

	fprintf(stdout, "Scientific value of %d! is %e. Hex is %la\n", num, result, result);

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
double factorial(int num){

	// Error checking
	if(num < 0 || num > 170) {
		return -1;
	}

	// 0! is 1
	if(num == 0)
		return 1;

	// If num is between 1 and 170
	double result = 1;
	while(num > 0){

		result *= (double)num;
		num--;

	}

	return result;

}
