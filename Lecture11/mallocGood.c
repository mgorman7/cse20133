/**********************************************
* File: mallocGood.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of proper memory allocation
* This file contains the fix of the core dump from mallocBad.c
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
	
	/* Correct insertion of elements */
	First[0] = 'N';
	First[1] = 'o';
	First[2] = 't';
	First[3] = 'r';
	First[4] = 'e';
	
	fprintf(stdout, "The word is %s\n", First);
	fprintf(stdout, "Location of First is %p\n", First);

	/* Free Memory */
	free(First);

}
