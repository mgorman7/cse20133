# This is the Makefile for the CSE 20133 course Lab 10

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make Lab10
# Create Classes
Lab10Objs :=  Lab10.o Square.o Triangle.o Shape.o

Lab10: $(Lab10Objs)
	$(PP) $(CXXFLAGS) -o Lab10 $(Lab10Objs)

Lab10.o: Lab10.cpp
	$(PP) $(CXXFLAGS) -c Lab10.cpp

Square.o: Square.cpp Square.h
	$(PP) $(CXXFLAGS) -c Square.cpp

Triangle.o: Triangle.cpp Triangle.h
	$(PP) $(CXXFLAGS) -c Triangle.cpp

Shape.o: Shape.cpp Shape.h
	$(PP) $(CXXFLAGS) -c Shape.cpp
	
	
# Make all
all: Lab10

# Make clean
clean :
	rm -rf *.o Lab10
