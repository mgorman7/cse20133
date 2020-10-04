/**********************************************
* File: ptr.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains examples of outputting  
* pointers in C++
**********************************************/

#include <iostream> /*C++ version of stdio.h*/
#include "constFunc.h"

/********************************************
* Function Name  : main
* Pre-conditions : none
* Post-conditions: int
* 
* This is the main driver function 
********************************************/
int main(){

	double radius = 5;
	
	std::cout << "The circle's radius is " << radius << std::endl;
	std::cout << "The value of Pi is " << PI << std::endl;
	
	std::cout << "The area of the circle is " 
		<< CircleArea( radius ) << std::endl;
		
	std::cout << "The circumfrence of the circle is " 
		<< CircleCircumference( radius ) << std::endl;

	return 0;
}
