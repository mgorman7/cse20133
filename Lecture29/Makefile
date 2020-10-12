# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 26

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)



# Simple Example of Function Overloading
# Command: make funcOver
funcOverObjs := funcOver.o

funcOver: $(funcOverObjs)
	$(PP) $(CXXFLAGS) -o funcOver $(funcOverObjs)

funcOver.o: funcOver.cpp
	$(PP) $(CXXFLAGS) -c funcOver.cpp


# Examples of cin with strings
# Command: make cinFuncOver
cinFuncOverObjs := cinFuncOver.o

cinFuncOver: $(cinFuncOverObjs)
	$(PP) $(CXXFLAGS) -o cinFuncOver $(cinFuncOverObjs)

cinFuncOver.o: cinFuncOver.cpp
	$(PP) $(CXXFLAGS) -c cinFuncOver.cpp
	
	
	
# Example of ambiguous overloading
# Contains a deliberate compiler error 
# Not included in make all
# Command: make ambig
ambigObjs := ambig.o

ambig: $(ambigObjs)
	$(PP) $(CXXFLAGS) -o ambig $(ambigObjs)

ambig.o: ambig.cpp
	$(PP) $(CXXFLAGS) -c ambig.cpp
	
	
	
# Initial Example of Templates 
# Command: make template
templateObjs := template.o

template: $(templateObjs)
	$(PP) $(CXXFLAGS) -o template $(templateObjs)

template.o: template.cpp
	$(PP) $(CXXFLAGS) -c template.cpp
	
	

# Initial Example of Templates 
# included in a Header File
# Command: make tempHead
tempHeadObjs := tempHead.o

tempHead: $(tempHeadObjs)
	$(PP) $(CXXFLAGS) -o tempHead $(tempHeadObjs)

tempHead.o: tempHead.cpp tempHead.h
	$(PP) $(CXXFLAGS) -c tempHead.cpp
	
	
	
# Initial Example of Vectors 
# Command: make vector
vectorObjs := vector.o

vector: $(vectorObjs)
	$(PP) $(CXXFLAGS) -o vector $(vectorObjs)

vector.o: vector.cpp
	$(PP) $(CXXFLAGS) -c vector.cpp


# Make all
all: funcOver cinFuncOver template tempHead vector

# Make clean
clean :
	rm -rf *.o funcOver cinFuncOver template tempHead vector
