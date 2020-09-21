/**********************************************
* File: fprintf.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows the student their first output 
* redirection that is not to the Unix terminal
**********************************************/

#include <stdio.h>
#include <stdlib.h> /* Included for the exit function */

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(int argc, char** argv){
	
	/* Error Checking */
	if(argc != 2){
		fprintf(stderr, "Input Format: ./filePtrPrint [File Name]\n");
		exit(-1);
	}

	/* Find the location of the file names and create pointers */
	FILE *fp1 = fopen(argv[1], "w");

	/* If the FILE pointer is NULL after this, then no file exists */
	if(fp1 == NULL){
		fprintf(stderr, "The file %s does not exist\n", argv[1]);
		exit(-1);
	}
	else{
		fprintf(stdout, "File %s was found!\n", argv[1]);
		
		fprintf(fp1, "Hello, World from %s!", argv[1]);
		
		fclose(fp1);
	}

	return 0;
}








