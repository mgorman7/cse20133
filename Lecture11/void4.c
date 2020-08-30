/**********************************************
* File: void4.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a void pointer and memory, sets all the characters
* to Hello, World, and then prints their addresses and values
*
* Lecture 02 - Slide 36
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
	
	void* hello = malloc( numCharacters * sizeof(char) );
	void* reference = hello;
	
	*((char *)( (char *)hello + 0)) = 72;
	*((char *)( (char *)hello + 1)) = 101;
	*((char *)( (char *)hello + 2)) = 108;
	*((char *)( (char *)hello + 3)) = 108;
	*((char *)( (char *)hello + 4)) = 111;
	*((char *)( (char *)hello + 5)) = 44;
	*((char *)( (char *)hello + 6)) = 32;
	*((char *)( (char *)hello + 7)) = 87;
	*((char *)( (char *)hello + 8)) = 111;
	*((char *)( (char *)hello + 9)) = 114;
	*((char *)( (char *)hello + 10)) = 108;
	*((char *)( (char *)hello + 11)) = 100;
	*((char *)( (char *)hello + 12)) = 10;
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
		
		fprintf( stdout, "%p %c\n", (void *)reference, *((char *)(reference)));

		reference = (char *)reference + sizeof(char);
		
	}
	
	free( hello );

	return 0;
}
