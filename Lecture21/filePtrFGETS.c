/**********************************************
* File: filePtrFGETS.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows that the user how to read in 
* using fgets 
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
	FILE *fp1 = fopen(argv[1], "r");

	/* If the FILE pointer is NULL after this, then no file exists */
	if(fp1 == NULL){
		fprintf(stderr, "The file %s does not exist\n", argv[1]);
		exit(-1);
	}
	else{
		fprintf(stdout, "File %s was found\n", argv[1]);
		
		long unsigned int mallocSize = 256;
		char* tempString = malloc( mallocSize * sizeof(char) );
		
		while( (tempString = fgets(tempString, (int)mallocSize, fp1)) != NULL ){
			
			fprintf(stdout, "The ASCII read in is %s\n", tempString);
		}
		
		fprintf(stdout, "The ASCII value is: %s\n", tempString);
		
		free(tempString);
		/* Only use fclose if you have verified it is opened. Otherwise, Seg fault! */
		fclose(fp1);
	}

	return 0;
}
