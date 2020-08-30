/**********************************************
* File: intPtr.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains pointer basic to help the student
* become more familiar with C pointers, including
* pointer addresses, data, adereferencing, and void pointers 
**********************************************/

#include "stdio.h"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	int a = 1;
	
	/* Pointer declaration */
	int *firstPtr;
	
	/* Set the pointer to the register address of a */
	firstPtr = &a;
	
	fprintf(stdout, "The info on firstPtr %c", 10);
	fprintf(stdout, "firstPtr register address: %p\n", (void *)&firstPtr);
	fprintf(stdout, "firstPtr value is %p\n", (void *)firstPtr);
	fprintf(stdout, "value pointed to by firstPtr: %d\n", *firstPtr);

	return 0;
}

