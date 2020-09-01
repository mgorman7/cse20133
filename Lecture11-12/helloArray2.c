/**********************************************
* File: helloArray.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* An example of "Hello, World" with procedural
* programming, char array, and array[] operators
*
* Lecture 02 - Slide 41
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char* hello = "Hello, World\n";
	
	fprintf( stdout, "%s", hello );
	
	return 0;
}
