/**********************************************
* File: ifEx.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of an if statement 
**********************************************/
#include "stdio.h"

int main(void){

	float x = (float)1.1, y = (float)1.1;
	double x2 = 1.3, y2 = 1.4;

	/* This if statement is true, and will print */
	if( x == y ){
		fprintf(stdout, "The condition x == y is met\n");
	}

	/* This if statement is false, and will not print */
	if( x2 == y2 ){
		fprintf(stdout, "The condition x2 == y2 is met\n");
	}

	return 0;
}

