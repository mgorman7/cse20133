/**********************************************
* File: factDblBad.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* Calculates the factorial of an input value
**********************************************/
#include <stdio.h>
#include "Recurse.h"

int main(){

	double factVal = GetValidDouble();
	
	fprintf( stdout, "%.0lf! = %.0lf\n", factVal, factDblBad( factVal ) );

	return 0;

}
