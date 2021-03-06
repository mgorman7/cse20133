# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 28

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make classIntro
# First Example of Classes
classIntroObjs :=  classIntro.o line.o point.o

classIntro: $(classIntroObjs)
	$(PP) $(CXXFLAGS) -o classIntro $(classIntroObjs)

classIntro.o: classIntro.cpp line.h
	$(PP) $(CXXFLAGS) -c classIntro.cpp

line.o: line.cpp line.h
	$(PP) $(CXXFLAGS) -c line.cpp

point.o: point.cpp point.h
	$(PP) $(CXXFLAGS) -c point.cpp
	


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
	
	


# Make all
all: funcOver cinFuncOver classIntro

# Make clean
clean :
	rm -rf *.o funcOver cinFuncOver classIntro
