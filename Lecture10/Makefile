# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 10

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wshadow -Wconversion -pedantic -Werror 
	


# Basic integer pointer
# Command: make intPtr 
intPtr: intPtr.o 
	$(CC) $(CFLAGS) -o intPtr intPtr.o

intPtr.o: intPtr.c 
	$(CC) $(CFLAGS) -c intPtr.c



# Pointer Example 1
# Command: make pointers
pointers: pointers.o 
	$(CC) $(CFLAGS) -o pointers pointers.o

pointers.o: pointers.c 
	$(CC) $(CFLAGS) -c pointers.c



# Make all (intPtrBad not include because of deliberate compiler errors) 
all: intPtr pointers

# Make clean
clean :
	rm -rf *.o intPtr pointers



