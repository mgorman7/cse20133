/**********************************************
* File: helloVoid.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* An example of "Hello, World" with imperative
* programming, void pointers, and pointer arithmetic
*
* Lecture 02 - Slide 40
**********************************************/

#include <stdio.h>
#include <stdlib.h>

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
		
		fprintf( stdout, "%c", *((char *)(reference)) );
		
		reference = (char *)reference + sizeof(char);
	}
	
	free( hello );

	return 0;
}
