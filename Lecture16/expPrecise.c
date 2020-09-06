/**********************************************
* File: exp.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* The main driver for the exponential recursive
* solver 
**********************************************/
#include "Recurse.h"

int main(){
	
	double exponent = 5;
	
	unsigned int summations = 30;
	
	fprintf( stdout, "e^%lf = %.9lf\n", exponent, exponential(exponent, summations) );
	
	return 0;
}
