/**********************************************
* File: factBad.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains the function definitions  
* for the factorial program.
*
* Includes the factBad.h with the int global 
* variables instead of #define compiler directives
* so the code will not compile. The compiler error 
* is in factBad.h 
**********************************************/

#include "factBad.h"

/********************************************
* Function Name  : factInt
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 13, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
int factInt(int num){

	// Error checking
	if(num < MIN_FACT || num > MAX_INT_FACT) {
		fprintf(stdout, "The value was not between %d and %d. ", MIN_FACT, MAX_INT_FACT);
		fprintf(stdout, "Cannot represent %d! with an integer\n", num);
		return -1;
	}

	// 0! is 1
	if(num == 0)
		return 1;

	// If num is between 1 and 170
	int result = 1;
	while(num > 0){

		result *= num;
		num--;

	}

	return result;

}


/********************************************
* Function Name  : factFloat
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 34, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
float factFloat(int num){

	// Error checking
	if(num < MIN_FACT || num > MAX_FLOAT_FACT) {
		fprintf(stdout, "The value was not between %d and %d. ", MIN_FACT, MAX_FLOAT_FACT);
		fprintf(stdout, "Cannot represent %d! with an float\n", num);
		return -1;
	}

	// 0! is 1
	if(num == 0)
		return 1;

	// If num is between 1 and 34
	float result = 1;
	while(num > 0){

		result *= (float) num;
		num--;

	}

	return result;

}

/********************************************
* Function Name  : factDouble
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 170, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
double factDouble(int num){

	// Error checking
	if(num < MIN_FACT || num > MAX_DOUBLE_FACT) {
		fprintf(stdout, "The value was not between %d and %d. ", MIN_FACT, MAX_DOUBLE_FACT);
		fprintf(stdout, "Cannot represent %d! with an double\n", num);
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
