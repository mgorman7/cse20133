/**********************************************
* File: fib.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Contains the main driver function for a Fibonacci
* solver 
**********************************************/

#include <stdio.h>

double Fib(unsigned int n);

int main(){
	
	unsigned int FibVal = 5;

	fprintf( stdout, "Fib(%u) = %lf\n", FibVal, Fib( FibVal ) );

	return 0;
}

double Fib(unsigned int n){
	
	if(n == 0){
		return 1;
	}
	else if(n == 1){
		return 1;
	}
	
	return Fib(n-1) + Fib(n-2);
}
