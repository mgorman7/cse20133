/**********************************************
* File: hello.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is the classic Hello, World program 
* but modified with an output specifier
**********************************************/

#include <stdio.h> /* fprintf */

int main(void){
	
	fprintf(stdout, "%s\n", "Hello, World");

	return 0;
}
