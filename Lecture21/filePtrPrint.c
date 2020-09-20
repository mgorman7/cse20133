/**********************************************
* File: filePtrPrint.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows that the user can print the output to 
* the file ASCII values, exactly like lecture 10
**********************************************/

#include <stdio.h>
#include <stdlib.h> /* Included for the exit function */

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
		fprintf(stdout, "File %s was found!\n", argv[1]);
		
		int tempChar;
		
		while( (tempChar = fgetc(fp1)) != EOF ){
			
			fprintf(stdout, "The ASCII value is %d\n", tempChar);
		}
		
		fprintf(stdout, "The ASCII value is %d\n", tempChar);
		
		fclose(fp1);
	}

	return 0;
}
