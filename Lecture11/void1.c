/**********************************************
* File: void1.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a void pointer and print its address
*
* Lecture 02 - Part 1 - Slide 10
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	long unsigned int numCharacters = 13;
	
	void* hello = malloc( numCharacters * sizeof(char) );
	
	fprintf( stdout, "%p\n", (void *)hello );;
	
	free( hello );

	return 0;
}

