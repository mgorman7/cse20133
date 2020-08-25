/**********************************************
* File: factorial.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains the function definitions 
* for the Header Example for Class
**********************************************/

#include "factorial.h"

/********************************************
* Function Name  : factInt
* Pre-conditions : int num
* Post-conditions: int
* 
* Takes in an int between 0 and 13, and returns the 
* factorial value. Returns -1 if those values are exceeded 
********************************************/
int factInt(int num){
	
	/* Error Checking */
	if(num < MIN_FACT || num > MAX_INT_FACT){
		fprintf(stderr, "%d is invalid for integers\n", num);
		return -1;
	}
	
	/* 0! = 1 */
	if(num == 0){
		return 1;
	}
	
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
* Post-conditions: float
* 
* Takes in an int between 0 and 34, and returns the 
* factorial value. Returns -1 if those values are exceeded 
********************************************/
float factFloat(int num){
	
	/* Error Checking */
	if(num < MIN_FACT || num > MAX_FLOAT_FACT){
		fprintf(stderr, "%d is invalid for floats\n", num);
		return -1;
	}
	
	/* 0! = 1 */
	if(num == 0){
		return 1;
	}
	
	float result = 1;
	while(num > 0){
		
		result *= (float)num;
		num--;
	}
	
	return result;
	
}


/********************************************
* Function Name  : factDouble
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 170, and returns the 
* factorial value. Returns -1 if those values are exceeded 
********************************************/
double factDouble(int num){
	
	/* Error Checking */
	if(num < MIN_FACT || num > MAX_DOUBLE_FACT){
		fprintf(stderr, "%d is invalid for doubles\n", num);
		return -1;
	}
	
	/* 0! = 1 */
	if(num == 0){
		return 1;
	}
	
	double result = 1;
	while(num > 0){
		
		result *= (double)num;
		num--;
	}
	
	return result;
	
}
