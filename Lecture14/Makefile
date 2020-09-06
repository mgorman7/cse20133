# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 13

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Initial Example of Pointer to Pointers
# Command: make ptr2Ptr
ptr2Ptr: ptr2Ptr.o 
	$(CC) $(CFLAGS) -o ptr2Ptr ptr2Ptr.o

ptr2Ptr.o: ptr2Ptr.c 
	$(CC) $(CFLAGS) -c ptr2Ptr.c



# Initial Example of Pointer to Pointers
# Command: make charProc1
charProc1: charProc1.o 
	$(CC) $(CFLAGS) -o charProc1 charProc1.o

charProc1.o: charProc1.c 
	$(CC) $(CFLAGS) -c charProc1.c
	
	
	
# Initial Example of Pointer to Pointers
# Command: make charProc2
charProc2: charProc2.o 
	$(CC) $(CFLAGS) -o charProc2 charProc2.o

charProc2.o: charProc2.c 
	$(CC) $(CFLAGS) -c charProc2.c


# Initial Example of Pointer to Pointers
# Command: make charProc
charProc: charProc.o 
	$(CC) $(CFLAGS) -o charProc charProc.o

charProc.o: charProc.c 
	$(CC) $(CFLAGS) -c charProc.c
	


# Initial Example of Pointer to Pointers
# Command: make charPtr2Ptr
charPtr2Ptr: charPtr2Ptr.o 
	$(CC) $(CFLAGS) -o charPtr2Ptr charPtr2Ptr.o

charPtr2Ptr.o: charPtr2Ptr.c 
	$(CC) $(CFLAGS) -c charPtr2Ptr.c



# Initial Example of Pointer to Pointers
# Command: make charPtr2Ptr
charPtr2PtrBad: charPtr2PtrBad.o 
	$(CC) $(CFLAGS) -o charPtr2PtrBad charPtr2PtrBad.o

charPtr2PtrBad.o: charPtr2PtrBad.c 
	$(CC) $(CFLAGS) -c charPtr2PtrBad.c


# Make all
all: ptr2Ptr charProc1 charProc2 charProc charPtr2Ptr

# Make clean
clean :
	rm -rf *.o ptr2Ptr charProc1 charProc2 charProc charPtr2Ptr
