/**********************************************
* File: factRecurse.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This contains an example of recursion used 
* in Lecture 08 to show how the stack works
**********************************************/
#include <stdio.h>

/********************************************
* Function Name  : factorial
* Pre-conditions : int num
* Post-conditions: int
* 
* Takes in an integer and returns the factorial
* of that integer (i.e 5! = 120)
* Since it is an int, anything over 13! will
* result in integer overflow 
********************************************/
int factorial(int num){

	/* Base Case */
	if(num == 0)
		return 1;

	else
		return num * factorial(num - 1);

}

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	fprintf(stdout, "%d\n", factorial(3));

	return 0;
}
