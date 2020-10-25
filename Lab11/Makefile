# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 - Lab 11

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make Lab11
Lab11Objs := Lab11.o

Lab11: $(Lab11Objs)
	$(PP) $(CXXFLAGS) -o Lab11 $(Lab11Objs)

Lab11.o: Lab11.cpp SLList.h SorSLList.h
	$(PP) $(CXXFLAGS) -c Lab11.cpp -o $@

	

# Make all
all: Lab11 


# Make clean
clean :
	rm -rf *.o Lab11
