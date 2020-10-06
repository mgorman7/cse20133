# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 27 - Lab 08

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

	
	
# Examples of std::string and std::vector
# Command: make output
Lab08Objs := Lab08.o

Lab08: $(Lab08Objs)
	$(PP) $(CXXFLAGS) -o Lab08 $(Lab08Objs)

Lab08.o: Lab08.cpp
	$(PP) $(CXXFLAGS) -c Lab08.cpp



# Make all
all: Lab08

# Make clean
clean :
	rm -rf *.o Lab08
