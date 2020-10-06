/**********************************************
* File: output.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains examples of outputting  
* data value types in C++
**********************************************/

#include <iostream> /*C++ version of stdio.h*/

/********************************************
* Function Name  : main
* Pre-conditions : none
* Post-conditions: int
* 
* This is the main driver function 
********************************************/
int main(){

	int tempInt = 26;
	float tempFloat = (float)-6.2;
	
	std::cout << "This line will have two End-of-Line chars after it.\n" << std::endl;
	
	std::cout << "The values are: " 
		<< tempInt << " " << tempFloat << std::endl;
		
		
	std::cout << "The addresses are : " 
		<< &tempInt << " " << &tempFloat << std::endl;
	
	return 0;
}
