/**********************************************
* File: factDbl.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* Calculates the factorial of an input value
**********************************************/
#include <stdio.h>
#include "Recurse.h"

int main(){

	unsigned int factVal = GetValidUInt();
	
	fprintf( stdout, "%u! = %.0lf\n", factVal, factorialDbl( factVal ) );

	return 0;

}
