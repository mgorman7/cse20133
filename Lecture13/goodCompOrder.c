/**********************************************
* File: goodCompOrder.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows the student the importance of
* putting the files in the correct order. This is
* the correct order, and will compile correctly 
**********************************************/
#include <stdio.h>

/********************************************
* Function Name  : bar
* Pre-conditions : int y
* Post-conditions: int
* 
* Returns 10 times y
********************************************/
int bar(int y){

	return y * 10;

}


/********************************************
* Function Name  : foo
* Pre-conditions : int x
* Post-conditions: int
* 
* Returns x + bar(x) 
********************************************/
int foo(int x){

	return x + bar(x);
}


/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	fprintf(stdout, "%d\n", foo(10));	// Will return 110

	return 0;

}
