# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 06

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm


# Example of a initial array  
# Command: make 
arrayIntro: arrayIntro.o 
	$(CC) $(CFLAGS) -o arrayIntro arrayIntro.o

arrayIntro.o: arrayIntro.c 
	$(CC) $(CFLAGS) -c arrayIntro.c



# Example of a multidimensional array
# Command: make multiDim
multiDim: multiDim.o 
	$(CC) $(CFLAGS) -o multiDim multiDim.o

multiDim.o: multiDim.c 
	$(CC) $(CFLAGS) -c multiDim.c



# Example of a poorly implemented array
# Command: make arrayDire
arrayDire: arrayDire.o 
	$(CC) $(CFLAGS) -o arrayDire arrayDire.o

arrayDire.o: arrayDire.c 
	$(CC) $(CFLAGS) -c arrayDire.c



# Printing the address of array elements
# Command: make arrayAddr
arrayAddr: arrayAddr.o 
	$(CC) $(CFLAGS) -o arrayAddr arrayAddr.o

arrayAddr.o: arrayAddr.c 
	$(CC) $(CFLAGS) -c arrayAddr.c


# Printing the sizes of data elements
# Command: make sizeOf
sizeOf: sizeOf.o 
	$(CC) $(CFLAGS) -o sizeOf sizeOf.o

sizeOf.o: sizeOf.c 
	$(CC) $(CFLAGS) -c sizeOf.c


# Combining Concepts - Print Multiplication Tables
# Command: make times
times: times.o 
	$(CC) $(CFLAGS) -o times times.o

times.o: times.c 
	$(CC) $(CFLAGS) -c times.c


# Make all
all: arrayIntro multiDim arrayDire arrayAddr sizeOf times

# Make clean
clean :
	rm -rf *.o arrayIntro multiDim arrayDire arrayAddr sizeOf times
