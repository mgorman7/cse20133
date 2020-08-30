# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 10

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wshadow -Wconversion -pedantic -Werror 


# Basic integer pointer
# Command: make charEx 
charEx: charEx.o 
	$(CC) $(CFLAGS) -o charEx charEx.o

charEx.o: charEx.c 
	$(CC) $(CFLAGS) -c charEx.c
	


# Basic integer pointer
# Command: make intPtr 
intPtr: intPtr.o 
	$(CC) $(CFLAGS) -o intPtr intPtr.o

intPtr.o: intPtr.c 
	$(CC) $(CFLAGS) -c intPtr.c



# Pointer Example 1
# Command: make pointers1 
pointers1: pointers1.o 
	$(CC) $(CFLAGS) -o pointers1 pointers1.o

pointers1.o: pointers1.c 
	$(CC) $(CFLAGS) -c pointers1.c


# Basic integer pointer with pedantic compiler errors
# Command: make intPtrBad 
intPtrBad: intPtrBad.o 
	$(CC) $(CFLAGS) -o intPtrBad intPtrBad.o

intPtrBad.o: intPtrBad.c 
	$(CC) $(CFLAGS) -c intPtrBad.c



# Basic Memory Allocation
# Command: make malloc 
malloc: malloc.o 
	$(CC) $(CFLAGS) -o malloc malloc.o

malloc.o: malloc.c 
	$(CC) $(CFLAGS) -c malloc.c
	
	
	
# Improper Memory Allocation example
# Command: make mallocBad
mallocBad: mallocBad.o 
	$(CC) $(CFLAGS) -o mallocBad mallocBad.o

mallocBad.o: mallocBad.c 
	$(CC) $(CFLAGS) -c mallocBad.c



# Proper Memory Allocation example
# Fixes issue in mallocBad.c 
# Command: make mallocGood
mallocGood: mallocGood.o 
	$(CC) $(CFLAGS) -o mallocGood mallocGood.o

mallocGood.o: mallocGood.c 
	$(CC) $(CFLAGS) -c mallocGood.c	
	
	
	
# Basic Memory Allocation with type abstraction
# Command: make mallAbst 
mallAbst: mallAbst.o 
	$(CC) $(CFLAGS) -o mallAbst mallAbst.o

mallAbst.o: mallAbst.c 
	$(CC) $(CFLAGS) -c mallAbst.c



# Make all (intPtrBad not include because of deliberate compiler errors) 
all: charEx intPtr malloc mallocBad mallocGood mallAbst

# Make clean
clean :
	rm -rf *.o charEx intPtr intPtrBad pointers1



