/**********************************************
* File: factUInt.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* Calculates the factorial of an input value
**********************************************/
#include <stdio.h>
#include "Recurse.h"

int main(){

	unsigned int factUInt = GetValidUInt();
	
	fprintf( stdout, "%u! = %u\n", factUInt, factorialUInt( factUInt ) );

	return 0;

}
