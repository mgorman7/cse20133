/**********************************************
* File: voidTypes3.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Example of allocating different types using the
* same void pointer
*
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	void* numbers = malloc( sizeof(double) + sizeof(float) + sizeof(int) );
	void* reference = numbers;
	
	// Put a double in the first 64 bits after reference
	*((double *)(reference)) = -0.625;
	
	// Move past 64 bits and put in a float 
	reference = (double *)reference + 1;
	*((float *)(reference)) = 1.5625;
	
	// Move past 32 bits and put in an integer
	reference = (float *)reference + 1;
	*((int *)(reference)) = 131;
	
	// Printing the values. Set the reference back to numbers
	reference = numbers;

	// Print the value and address of the double	
	fprintf( stdout, "Double: %lf", *((double *)(reference)) );
	fprintf( stdout, " at address %p\n\n", (void *)reference );

	// Add 64 bits and print the value and address of the float	
	reference = (double *)reference + 1;
	fprintf( stdout, "Float: %f", *((float *)(reference)) );
	fprintf( stdout, " at address %p\n\n", (void *)reference );
	
	// Add 32 bits and print the value and address of the integer
	reference = (float *)reference + 1;
	fprintf( stdout, "Float: %d", *((int *)(reference)) );
	fprintf( stdout, " at address %p\n\n", (void *)reference );
	
	// Print the final results
	fprintf( stdout, "Address of numbers  : %p\n", (void *)numbers );
	fprintf( stdout, "Address of reference: %p\n", (void *)reference );
	
	// Free void* with allocated memory
	free( numbers );

	return 0;
}
