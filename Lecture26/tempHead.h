/**********************************************
* File: tempHead.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file demonstrates an example of templates
* where the function is in the header file.
* tempHead.h includes the function definition
* in the header file.
**********************************************/

#ifndef TEMPHEAD_H
#define TEMPHEAD_H

/********************************************
* Function Name  : printFunc
* Pre-conditions : T t_var
* Post-conditions: none
* 
* Initial Example of a Templated Class 
********************************************/
template<class T> void printFunc(T t_var){
	
	std::cout << t_var << std::endl;
	
}

#endif