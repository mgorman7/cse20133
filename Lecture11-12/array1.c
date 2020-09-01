/**********************************************
* File: array1.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a char array and print its address
*
* Lecture 02 - Part 1 - Slides 25
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	long unsigned int numCharacters = 13;
	
	char hello[numCharacters];
	
	fprintf( stdout, "%p\n", (void *)hello);

	return 0;
}
