# This is the Makefile for the CSE 20133 course Lab 09

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make HW07
# Planets
HW07Objs :=  HW07.o Functions.o Planet.o

HW07: $(HW07Objs)
	$(PP) $(CXXFLAGS) -o HW07 $(HW07Objs)

HW07.o: HW07.cpp Planet.h Functions.h
	$(PP) $(CXXFLAGS) -c HW07.cpp

Functions.o: Functions.cpp Functions.h
	$(PP) $(CXXFLAGS) -c Functions.cpp

Planet.o: Planet.cpp Planet.h
	$(PP) $(CXXFLAGS) -c Planet.cpp
	
	
# Make all
all: HW07

# Make clean
clean :
	rm -rf *.o HW07
