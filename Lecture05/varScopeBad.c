/**********************************************
* File: varScopeBad.c
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example to teach students
* about the difference between local, function.
* and global scope of variables 
**********************************************/

#include <stdio.h>

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
	
	while(x > 0){

/* The next line contains a compiler error when using -Wshadow 
   We have redefined y inside the block procedure of this while loop 
   If you remove the -Wshadow flag, this code will compile and run.
   However, production quality code should not define a block with a variable where the 
   local function contains a variable with the same name.
   
/escnfs/home/mmorri22/f19-cse20133/08-Functions/varScopeBad.c: In function ‘main’:
/escnfs/home/mmorri22/f19-cse20133/08-Functions/varScopeBad.c:41:7: error: declaration of ‘y’ shadows a previous local [-Werror=shadow]
   int y = 5;
       ^
/escnfs/home/mmorri22/f19-cse20133/08-Functions/varScopeBad.c:19:14: error: shadowed declaration is here [-Werror=shadow]
  int x = 20, y = 30;

*/
		int y = 5;
		x -= y;
		
		fprintf(stdout, "Block scope in while loop: x = %d, y = %d\n", x, y);
	}
	
	fprintf(stdout, "Local main scope after while loop: x = %d, y = %d\n", x, y);

	return 0;
}
