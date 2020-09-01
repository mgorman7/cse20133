/**********************************************
* File: array2.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a char array and print all the addresses
* of the location of the characters
*
* Lecture 02 - Part 1 - Slide 20
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	long unsigned int numCharacters = 13;
	
	char hello[numCharacters];
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
	
		fprintf( stdout, "%p\n", (void *)&hello[iter] );
	
	}

	return 0;
}
