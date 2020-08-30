/**********************************************
* File: helloArray3.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* An example of "Hello, World" with object-oriented 
* programming of char* and << operator for the
* entire array
*
* Lecture 02 - Slide 42
**********************************************/

#include <stdio.h>
#include <stdlib.h>

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	char* hello = "Hello, World\n";
	
	fprintf( stdout, "%s", hello );

	return 0;
}
