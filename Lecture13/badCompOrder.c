/**********************************************
* File: badCompOrder.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows the student the importance of
* putting the files in the correct order. foo and bar are
* not in the incorrect order, and will NOT compile. 
**********************************************/
#include <stdio.h>

/********************************************
* Function Name  : foo
* Pre-conditions : int x
* Post-conditions: int
* 
* Returns x + bar(x) 
********************************************/
int foo(int x){

/* Because the code is in the wrong order, the function is bar is defined implicitly
   Production Quality Code required explicit declaration of all functions
   The compiler error when you run this code is shown below (for make badCompOrder)
In function ‘foo’:
badCompOrder.c:28:2: error: implicit declaration of function ‘bar’ 
		[-Werror=implicit-function-declaration]
  return x + bar(x); */
	return x + bar(x);
}


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
