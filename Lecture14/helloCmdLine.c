/**********************************************
* File: helloCmdLine.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This is the first example of command line arguments for the student 
**********************************************/

#include <stdio.h>
#include <stdlib.h>

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(int argc, char** argv){
	
	if(argc < 2){
		fprintf(stderr, "Not enough arguments\n");
		exit(-1);
	}
	
	int i = 0;
	while(i < argc){
		
		fprintf(stdout, "argv[%d] = %s\n", i, argv[i]);
		i++;
	}

	return 0;
}
