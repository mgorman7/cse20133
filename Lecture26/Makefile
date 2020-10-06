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

	
	
# Examples of using const
# Command: make output
constObjs := const.o constFunc.o

const: $(constObjs)
	$(PP) $(CXXFLAGS) -o const $(constObjs)

const.o: const.cpp constFunc.h 
	$(PP) $(CXXFLAGS) -c const.cpp
	
constFunc.o: constFunc.cpp constFunc.h 
	$(PP) $(CXXFLAGS) -c constFunc.cpp


# Examples of cin
# Command: make cin
cinObjs := cin.o

cin: $(cinObjs)
	$(PP) $(CXXFLAGS) -o cin $(cinObjs)

cin.o: cin.cpp
	$(PP) $(CXXFLAGS) -c cin.cpp
	
	
	
# Examples of cin with strings
# Command: make cinStr
cinStrObjs := cinStr.o

cinStr: $(cinStrObjs)
	$(PP) $(CXXFLAGS) -o cinStr $(cinStrObjs)

cinStr.o: cinStr.cpp
	$(PP) $(CXXFLAGS) -c cinStr.cpp



# Examples of vector
# Command: make vector
vectorObjs := vector.o

vector: $(vectorObjs)
	$(PP) $(CXXFLAGS) -o vector $(vectorObjs)

vector.o: vector.cpp
	$(PP) $(CXXFLAGS) -c vector.cpp



# Make all
all: const cin cinStr vector

# Make clean
clean :
	rm -rf *.o const cin cinStr vector
