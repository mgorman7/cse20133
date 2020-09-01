/**********************************************
* File: array4.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a basic program to show students how to 
* allocate a char array, sets all the characters
* to Hello, World, and then prints their addresses and values
*
* Lecture 02 - Slide 38
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	long unsigned int numCharacters = 13;
	
	char hello[numCharacters];
	char* reference = hello;
	
	hello[0] = 'H';
	hello[1] = 'e';
	hello[2] = 'l';
	hello[3] = 'l';
	hello[4] = 'o';
	hello[5] = ',';
	hello[6] = ' ';
	hello[7] = 'W';
	hello[8] = 'o';
	hello[9] = 'r';
	hello[10] = 'l';
	hello[11] = 'd';
	hello[12] = '\n';
	
	for(long unsigned int iter = 0; iter < numCharacters; iter++){
		
		fprintf( stdout, "%p %c %p %c\n", (void *)reference, *(reference), (void *)&hello[iter], hello[iter] );
				
		reference = reference + 1;
		
	}

	return 0;
}
