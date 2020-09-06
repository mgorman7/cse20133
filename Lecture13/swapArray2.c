/**********************************************
* File: swapArray2.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file combines concepts for students by 
* swapping values in an array with pass by reference
**********************************************/

#include <stdio.h>
#include <stdlib.h> // Included for malloc

/********************************************
* Function Name  : swapInts
* Pre-conditions : int* word, long unsigned int numInts, int a, int b
* Post-conditions: none
* 
* Swaps the values of a and b in the array 
********************************************/
void swapInts(int* word, long unsigned int numInts, int a, int b);

int main(void){
	
	/* Declare variables */
	long unsigned int numInts = 6;
	int swapInt[6];
	
	/* Store the values */
	int i;
	for(i = 0; i < (int)numInts; i++){
		
		*(swapInt + i) = i*2;
		
	}
	
	swapInts(swapInt, numInts, 0, i-1);
	swapInts(swapInt, numInts, -1, i-1);
	swapInts(swapInt, numInts, 0, (int)numInts);
	swapInts(swapInt, numInts, 1, 3);	

	return 0;
}

void swapInts(int* word, long unsigned int numInts, int a, int b){
	
	/* Error Checking */
	if( a < 0 || b < 0 ){
		fprintf(stderr, "Invalide input to swapInts. Less than 0.\n");
		return;
	}
	
	if( a >= (int)numInts || b >= (int)numInts ){
		fprintf(stderr, "Invalid input to swapInts. Exceeds the array length.\n");
		return;
	}
	
	/* Swap valid array locations */
	fprintf(stdout, "Before: word[%d] = %d and word[%d] = %d\n", a, word[a], b, word[b]);
	
	/* Swap */
	int temp = word[a];
	*(word + a) = word[b];
	word[b] = temp;
	
	fprintf(stdout, "After: word[%d] = %d and word[%d] = %d\n", a, word[a], b, word[b]);
	
}

