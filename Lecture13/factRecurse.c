/**********************************************
* File: factRecurse.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This contains an example of recursion used 
* in Lecture 14 to show how the stack works
**********************************************/
#include <stdio.h>


/********************************************
* Function Name  : factorial
* Pre-conditions : int num
* Post-conditions: double
* 
* This function calculate the factorial of num
* and returns a double. 
********************************************/
double factorial(int num);


/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* Declare variables */
	int num = 3;
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
