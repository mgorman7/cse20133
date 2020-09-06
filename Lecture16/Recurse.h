/**********************************************
* File: Recurse.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Contains all the recusrion functions 
**********************************************/
#ifndef RECURSE_H
#define RECURSE_H

#include "math.h"
#include "stdio.h"

unsigned int GetValidUInt();

double GetValidDouble();

unsigned int factorialUInt(unsigned int i);

double factorialDbl(unsigned int i);

double factDblBad(double i);

double exponential(double x, unsigned int k);



/* double Fib(double n){
	
	if(n == 0){
		return 1;
	}
	else if(n == 1){
		return 1;
	}
	
	return Fib(n-1) + Fib(n-2);
	
} */


#endif
