/**********************************************
* File: voidTypes2.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Example of allocating different types using the
* same void pointer. We store and print 
* a double and a float.
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	void* numbers = malloc( sizeof(double) + sizeof(float) );
	void* reference = numbers;
	
	// Put a double in the first 64 bits after reference
	*((double *)(reference)) = -0.625;
	
	// Move past 64 bits and put in a float 
	reference = (double *)reference + 1;
	
	*((float *)(reference)) = 1.5625;
	
	// Printing the values. Set the reference back to the initial numbers value
	reference = numbers;
	
	fprintf( stdout, "Double: %lf", *((double *)(reference)) );
	fprintf( stdout, " at address %p\n\n", (void *)reference );
	
	// Move past 64 bits and put in a float 
	reference = (double *)reference + 1;
	
	fprintf( stdout, "Float: %f", *((float *)(reference)) );
	fprintf( stdout, " at address %p\n\n", (void *)reference );
	
	fprintf( stdout, "Address of numbers  : %p\n", (void *)numbers );
	fprintf( stdout, "Address of reference: %p\n", (void *)reference );
	
	// Free void* with allocated memory
	free( numbers );

	return 0;
}
