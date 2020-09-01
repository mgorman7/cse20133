/**********************************************
* File: mallocBad.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of improper memory allocation
* Here, we allocate the memory for a character array
* However, we define the char* like a string
* This reallocates the memory, and frees the pointer
* The later free will cause a memory trace because the pointer 
* is no longer pointing to a memory location 
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

	/* Properly allocate memory */
	long unsigned int mallocSize = 5;
	char *First = malloc(mallocSize * sizeof(char));
	
	fprintf(stdout, "Location of First is %p\n", First); 
	
	/* Incorrect insertion of elements */
	First = "Notre";
	
	fprintf(stdout, "The word is %s\n", First);
	fprintf(stdout, "Location of First is %p\n", First);

	/* Free Memory */
	free(First);


}
