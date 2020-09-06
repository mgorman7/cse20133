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

int main(void){

	int num = 3;

	fprintf( stdout, "%lf\n", factorial(num) );

	return 0;
}

double factorial(int num){

	if( num == 0 ){
		
		return 1;
	}

	return (double)num * factorial(num - 1);
}
