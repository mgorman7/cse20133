/**********************************************
* File: void2.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a void pointer and print all the addresses
* of the location of the characters
*
* Lecture 02 - Slides 27-28
**********************************************/

#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	long unsigned int numCharacters = 13;
	
	void* hello = malloc( numCharacters * sizeof(char) );
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
	
		fprintf( stdout, "%p\n", (void *)((char *)hello + iter*sizeof(char)) );
	
	}
	
	free( hello );

	return 0;
}
