/**********************************************
* File: newArray.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains an example of proper memory allocation
* using new and delete in C++. Comments from previous code
* in C are used to show what you no longer need to do
* since it is abstracted away.
**********************************************/

#include <iostream>

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){

	/* Properly allocate memory */
	long unsigned int mallocSize = 5;
	//char *First = (char *)malloc(mallocSize * sizeof(char));
	char *First = new char[mallocSize];
	
	/* Recall from overloaded operators: address is called by reference */
	std::cout << "Location of First is " << &First << std::endl;
	
	/* Correct insertion of elements */
	First[0] = 'N';
	First[1] = 'o';
	First[2] = 't';
	First[3] = 'r';
	First[4] = 'e';
	
	std::cout << "The word is " << First << std::endl;

	/* Free Memory */
	// free(First);
	delete First;
}
