# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 09

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# First Example of Header Files
# Command: make factHeaderEx

factHeaderExObjs := factHeaderEx.o factorial.o

factHeaderEx: $(factHeaderExObjs)
	$(CC) $(CFLAGS) -o factHeaderEx $(factHeaderExObjs)

factHeaderEx.o: factHeaderEx.c factorial.h
	$(CC) $(CFLAGS) -c factHeaderEx.c

factorial.o: factorial.c factorial.h
	$(CC) $(CFLAGS) -c factorial.c

	

# Command: make factHeaderBad
# Example of why not to use global variables in header  
# Note: This code contains a deliberate compiler error and 
# is not included in make all 

# Object Files to be created
factHeaderBadObjs := factHeaderBad.o factBad.o 

# Make command 
factHeaderBad: $(factHeaderBadObjs)
	$(CC) $(CFLAGS) -o factHeaderBad $(factHeaderBadObjs) 

# Each object file individually created 
factHeaderBad.o: factHeaderBad.c factBad.h 
	$(CC) $(CFLAGS) -c factHeaderBad.c
	
factBad.o: factBad.c factBad.h 
	$(CC) $(CFLAGS) -c factBad.c



# Make all
all: factHeaderEx

# Make clean
clean :
	rm -rf *.o factHeaderEx
