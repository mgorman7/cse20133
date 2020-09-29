/**********************************************
* File: voidTypes.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Example of allocating different types using the
* same void pointer. First, we store and print 
* a double only.
*
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	void* numbers = malloc( sizeof(double) );
	void* reference = numbers;
	
	// Put a double in the first 64 bits after reference
	*((double *)(reference)) = -0.625;
	
	// Printing the values. Set the reference back to numbers
	reference = numbers;
	
	fprintf( stdout, "Double: %lf", *((double *)(reference)) );
	fprintf( stdout, " at address %p\n\n", (void *)reference );
	
	fprintf( stdout, "Address of numbers  : %p\n", (void *)numbers );
	fprintf( stdout, "Address of reference: %p\n", (void *)reference );
	
	// Free void* with allocated memory
	free( numbers );

	return 0;
}
