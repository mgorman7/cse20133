/**********************************************
* File: factOverflow.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This contains an example of recursion used 
* in Lecture 14 to show how the stack works
* Note: This code deliberately produces a segmentation
* fault to teach student about the stack.
**********************************************/
#include <stdio.h>

double factorial(int num);

int main(void){
	
	/* Declare variables */
	int num = 1000000000;
	fprintf(stdout, "%d! = %f\n", num, factorial(num));

	return 0;
}

double factorial(int num){
	
	/* Base Case */
	if(num == 0){
		return 1;
	}
	
	/* Recursive Case */
	else{
		return (double)num * factorial(num - 1);
	}
}
