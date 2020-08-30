/**********************************************
* File: malloc.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a program that shows the student how to 
* allocate memory using void pointers 
**********************************************/

#include "stdio.h"
#include "stdlib.h" /* For memory allocation */

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* Declare variables */
	long unsigned int mallocSize = 5;
	void *vp1 = malloc(mallocSize * sizeof(char));
	
	/* Assigning array values */
	( (char *) vp1)[0] = 'N';
	( (char *) vp1)[1] = 111;
	( (char *) vp1)[2] = 't';
	( (char *) vp1)[3] = 70 + 44;
	( (char *) vp1)[4] = 0x65;
	
	/* Print to user */
	fprintf(stdout, "The word is %s\n", (char *) vp1);

	/* Free all allocated memory */
	free(vp1);

	return 0;
}
