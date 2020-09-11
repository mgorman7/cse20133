/**********************************************
* File: passByRef.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file includes the first example for the student
* of passing values by reference to a function 
**********************************************/

#include <stdio.h>
#include <stdlib.h> // Included for malloc

void getLetter(char* word, long unsigned int wordSize, char findChar, int* currLetter);

int main(void){
	
	long unsigned int wordSize = 5;

	char* Notre = (char *)malloc(wordSize * sizeof(char));
	
	Notre[0] = 'N'; Notre[1] = 'o'; Notre[2] = 't'; Notre[3] = 'r'; Notre[4] = 'e'; 
	
	int currLetter = -1;	
	char findChar = 't';

	// Get the location of the letter
	getLetter(Notre, wordSize, findChar, &currLetter);
	
	fprintf(stdout, "The current letter %c was at Notre[%d]\n", findChar, currLetter);
	
	free(Notre);

	return 0;
}

void getLetter(char* word, long unsigned int wordSize, char findChar, int* currLetter){
	
	for(long unsigned int i = 0; i < wordSize; i++){
		
		if(word[i] == findChar){
			
			*currLetter = (int)i;
		
			return;
		}
	}
}


