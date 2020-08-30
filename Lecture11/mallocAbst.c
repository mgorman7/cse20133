/**********************************************
* File: mallocAbst.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is a program that shows the student how to 
* allocate memory using char and void pointers 
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
	long unsigned int mallocSize2 = 4;
	
	/* Allocate memory */
	void *vp1 = malloc(mallocSize * sizeof(char));
	char *cp1 = malloc(mallocSize2 * sizeof(char));
	
	/* Assigning array values */
	( (char *) vp1)[0] = 'N';
	( (char *) vp1)[1] = 111;
	( (char *) vp1)[2] = 't';
	( (char *) vp1)[3] = 70 + 44;
	( (char *) vp1)[4] = 0x65;
	
	/* Assign array 2 */
	cp1[0] = 'D'; cp1[1] = 'a'; cp1[2] = 'm'; cp1[3] = 'e';
	
	/* Print to user */
	fprintf(stdout, "The words are %s %s\n", (char *) vp1, cp1); 
	
	/* Combining Concepts: Printing Addresses */
	fprintf(stdout, "The base address of vp1: %p\n", vp1);
	fprintf(stdout, "The location of vp1[0] : %p\n", & ( (char *) vp1)[0]);
	fprintf(stdout, "The location of vp1[1] : %p\n", & ( (char *) vp1)[1]);  
	fprintf(stdout, "Base address of cp1    : %p\n", cp1);
	fprintf(stdout, "The location of cp1[0] : %p\n", &cp1[0]);
	fprintf(stdout, "The location of cp1[1] : %p\n", &cp1[1]); 

	/* Free all allocated memory */
	free(vp1);
	free(cp1);

	return 0;
}
