/**********************************************
* File: ifEx.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of an if statement 
**********************************************/

#include "stdio.h"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	float x = (float)1.1, y = (float)1.1;
	double x2 = 1.3, y2 = 1.4;

	/* This if statement is true, and will print the if statement */
	if( x == y ){
		fprintf(stdout, "The condition x == y is met\n\n");
	}
	else{
		fprintf(stdout, "The condition x == y is not met met\n\n");
	}
	
	/* This is the second condition with a double */

	/* This if statement is false, and will not evaluate */
	if( x2 == y2 ){
		fprintf(stdout, "The condition x2 == y2 is met\n");
	}
	/* This statement is an example of why using float values is a bad idea */
	/* 1.4 - 1.3 is 0.1, but the IEEE 754 format will give 0.09999999999999986677 */
	else if( ( y2 - x2 ) == 0.1 ){
		fprintf(stdout, "The condition ( y2 - x2 ) == 0.1 is met\n");
	}	
	/* These are the statements that will be printed */
	else{
		fprintf(stdout, "The condition ( y2 - x2 ) == 0.1 is NOT met\n");
		fprintf(stdout, "When using f, (1.4-1.3) and 0.1 seem the same at 6 decimals: %f and %f\n", (1.4 - 1.3), 0.1);
		fprintf(stdout, "At 20 places, 1.4 - 1.3 in IEEE 754 evaluates to: %.20f and %a\n", (1.4 - 1.3), (1.4 - 1.3) );
		fprintf(stdout, "At 20 places, 0.1 when put in IEEE 754 evaluates: %.20f and %a\n", 0.1, 0.1);
		fprintf(stdout, "The computing device interprets 1.4-1.3 and 0.1 are slightly different\n");
		fprintf(stdout, "The difference is very slight, but just enough to fail the second test\n");
		fprintf(stdout, "This issue is why its strongly recommended to NOT use float or double in control statements\n");
	}	

	return 0;
}

