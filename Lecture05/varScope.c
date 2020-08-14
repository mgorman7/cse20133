/**********************************************
* File: varScope.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example to teach students
* about the difference between local, function.
* and global scope of variables 
*
* Here is what this program will output when run 
./varScope
Local main scope before while loop: x = 20, y = 30
Global scope of z in main after x+y is 50
Block scope in while loop: x = 15, q = 5
Block scope in while loop: x = 10, q = 5
Block scope in while loop: x = 5, q = 5
Block scope in while loop: x = 0, q = 5
Local main scope after while loop: x = 0, y = 30
Inside subInts, x = 5, y = 25, z = -25
After subInts, x = 5, y = 30, z = -25
**********************************************/

#include <stdio.h>

/* Global Variable Definition */
int z;

/********************************************
* Function Name  : subInts
* Pre-conditions : int x, int y
* Post-conditions: none
* 
* Subtracts y from x and assigns to the global
* variable z.
* Subtracts x from y and assigns to the function
* variable y
********************************************/
void subInts(int x, int y){
	
	z = x - y;
	y = y - x;
	
	fprintf(stdout, "Inside subInts, x = %d, y = %d, z = %d\n", x, y, z);
}

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* Local variables in main */ 
	int x = 20, y = 30;
	
	fprintf(stdout, "Local main scope before while loop: x = %d, y = %d\n", x, y);
	
	z = x + y;
	
	fprintf(stdout, "Global scope of z in main after x+y is %d\n", z);
	
	while(x > 0){
		
		/* Scope of q is inside the while loop. This is an example of Block Scope */
		int q = 5;
		x -= q;
		
		fprintf(stdout, "Block scope in while loop: x = %d, q = %d\n", x, q);
	}
	
	fprintf(stdout, "Local main scope after while loop: x = %d, y = %d\n", x, y);
	
	x = 5; // Change local value to 5
	
	subInts(x, y);
	
	fprintf(stdout, "After subInts, x = %d, y = %d, z = %d\n", x, y, z);

	return 0;
}
