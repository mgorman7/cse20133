/**********************************************
* File: factInt.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an introductory example of 
* function prototypes and definitions 
*
* Shows students the benefits of function calls 
* by reducing the complexity of coding in main
**********************************************/

#include "stdio.h"
#include "stdlib.h" // Included for exit 

/* Function Prototypes */
int factorial(int num);

void printFactorial( int num, int result );

/* main function */
int main(void){

	int num1 = 10, num2 = 11, num3 = 12;
	int result1, result2, result3;

	/* Get results */
	result1 = factorial(num1);
	result2 = factorial(num2);
	result3 = factorial(num3);
	
	/* Print Results */
	printFactorial( num1, result1 );
	printFactorial( num2, result2 );
	printFactorial( num3, result3 );

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

	// If num is between 1 and 170
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
