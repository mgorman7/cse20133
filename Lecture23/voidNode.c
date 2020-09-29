/**********************************************
* File: voidNode.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Example of allocating different types using the
* same void pointer. We store and print 
* a double and a float and an int
*
* Shows void pointers as "Pass by reference"
* and modularity
*
* Lecture 3 - Slide 9
**********************************************/

#include <stdio.h>
#include <stdlib.h>

void setNodeValues( void* reference, double theDbl, float theFlt, int theInt ){
	
	// Put a double in the first 64 bits after reference
	*((double *)(reference)) = theDbl;
	
	// Move past 64 bits and put in a float 
	reference = (double *)reference + 1;
	*((float *)(reference)) = theFlt;
	
	// Move past 32 bits and put in an integer
	reference = (float *)reference + 1;
	*((int *)(reference)) = theInt;	
	
}


void printNodeValues( void* reference ){
	
	fprintf( stdout, "-----------------------------\n");
	fprintf( stdout, "Initial address of reference: %p\n\n", (void *)reference );
	
	// Print the value and address of the double	
	fprintf( stdout, "Double: %lf", *((double *)(reference)) );
	fprintf( stdout, " at address %p\n", (void *)reference );

	// Add 64 bits and print the value and address of the float	
	reference = (double *)reference + 1;
	fprintf( stdout, "Float: %f", *((float *)(reference)) );
	fprintf( stdout, " at address %p\n", (void *)reference );
	
	// Add 32 bits and print the value and address of the integer
	reference = (float *)reference + 1;
	fprintf( stdout, "Float: %d", *((int *)(reference)) );
	fprintf( stdout, " at address %p\n", (void *)reference );
	
}

int main(void){
	
	long unsigned int nodeSize = sizeof(double) + sizeof(float) + sizeof(int);
	
	void* node1 = malloc( nodeSize );
	void* node2 = malloc( nodeSize );
	
	// Set the node Values for node1 
	setNodeValues( node1, -0.625, (float)1.5625, 131 );
	
	// Set the node Values for node2 
	setNodeValues( node2, -34.77, (float)44.96, 1842 );
	
	// Printing the values. Set the reference back to numbers
	printNodeValues( node1 );
	printNodeValues( node2 );
	
	// Free void* with allocated memory
	free( node1 );
	free( node2 );

	return 0;
}
