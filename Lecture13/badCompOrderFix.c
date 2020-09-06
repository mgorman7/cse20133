/**********************************************
* File: badCompOrderFixed.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file shows the student the importance of
* putting the files in the correct order. foo and bar are
* not in the incorrect order, and will NOT compile. 
**********************************************/
#include <stdio.h>

/* Function Declarations */
int foo(int x);
int bar(int y);

int main(void){

	fprintf(stdout, "%d\n", foo(10));	// Will return 110

	return 0;

}

/* Function Definitions */
int foo(int x){

	return x + bar(x);
}

int bar(int y){

	return y * 10;

}
