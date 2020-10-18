/**********************************************
* File: point.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* This file contains the method declarations for 
* class point, used in the introduction to C++ 
* classes lecture. 
**********************************************/

#ifndef POINT_H
#define POINT_H

#include <iostream>

typedef float COORDINATE;

class point{
	
	private:
		COORDINATE x;
		COORDINATE y;
	
	public:
	
		point();
		
		point(COORDINATE inX, COORDINATE inY);
		
		COORDINATE getX() const;
		
		COORDINATE getY() const;
		
		void setX(COORDINATE inX);
		
		void setY(COORDINATE inY);
		
		void printPoint() const;
		
		friend std::ostream& operator<<( std::ostream& out, const point& printPoint );
	
};	// This is really important. Large compiler errors if not

#endif
