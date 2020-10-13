# This is the Makefile for the CSE 20133 course Lab 09

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make Lab09
# Play with Dog
Lab09Objs :=  Lab09.o Dog.o

Lab09: $(Lab09Objs)
	$(PP) $(CXXFLAGS) -o Lab09 $(Lab09Objs)

Lab09.o: Lab09.cpp Dog.h
	$(PP) $(CXXFLAGS) -c Lab09.cpp

Dog.o: Dog.cpp Dog.h
	$(PP) $(CXXFLAGS) -c Dog.cpp
	
	
# Make all
all: Lab09

# Make clean
clean :
	rm -rf *.o Lab09
