/**********************************************
* File: char3.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a char pointer and memory, set the first two
* bytes equal to characters, and then print their address
* and values
*
* Lecture 02 - Slide 34
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
	
	long unsigned int numCharacters = 13;
	
	char* hello = (char *)malloc( numCharacters * sizeof(char) );
	char* reference = hello;
	
	*(reference) = 'H';
	reference = reference + 1;
	*((char *)(reference)) = 'e';
	
	fprintf( stdout, "%p %c\n", (void *)hello, *(hello) );
	fprintf( stdout, "%p %c\n", (void *)reference, *(reference) );
	
	free( hello );

	return 0;
}
