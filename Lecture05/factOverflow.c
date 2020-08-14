/**********************************************
* File: factOverflow.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This contains an example of recursion used 
* in Lecture 08 to show how the stack works
* and how Stack Overflow can occur 
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

	/* Note: This is a deliberate stack overflow to show students 
	   the importance of understanding what is going on in the 
	   computing device. The code will compile, but will give the
	   following error after running:
			./factOverflow
			Segmentation fault (core dumped)
	*/
	fprintf(stdout, "%d\n", factorial(1000000000));

	return 0;
}
