/**********************************************
* File: FSCANFedit.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows an edited FSCANFedit with an fgetc 
* to count the total number of characters
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
		
		long unsigned int mallocSize = 0;
		int tempChar;
		while( (tempChar = fgetc(fp1)) != EOF ){
			mallocSize++;
		}
		
		/* Deallocate and Re-allocate the FILE pointer */
		fclose(fp1);
		fp1 = fopen(argv[1], "r");
		
		char* tempString = malloc( mallocSize * sizeof(char) );
		
		while( fscanf(fp1, "%s", tempString) != EOF ){
			
			fprintf(stdout, "The string read in is %s\n", tempString);
		}
		
		fprintf(stdout, "The string contains the previous value after EOF: %s\n", tempString);
		
		free(tempString);
		/* Only use fclose if you have verified it is opened. Otherwise, Seg fault! */
		fclose(fp1);
	}

	return 0;
}
