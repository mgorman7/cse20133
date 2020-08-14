# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 06

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm


# Example of a Cylinder Volume Calculation  
# Command: make cylinder1
cylinder1: cylinder1.o 
	$(CC) $(CFLAGS) -o cylinder1 cylinder1.o

cylinder1.o: cylinder1.c 
	$(CC) $(CFLAGS) -c cylinder1.c



# Example of a Cylinder Volume Calculation  
# Command: make cylinder1
cylinder2: cylinder2.o 
	$(CC) $(CFLAGS) -o cylinder2 cylinder2.o

cylinder2.o: cylinder2.c 
	$(CC) $(CFLAGS) -c cylinder2.c



# Example of a Cylinder Volume Calculation  
# Command: make cylinder3
cylinder3: cylinder3.o 
	$(CC) $(CFLAGS) -o cylinder3 cylinder3.o

cylinder3.o: cylinder3.c 
	$(CC) $(CFLAGS) -c cylinder3.c
	


# Example of a Cylinder Volume Calculation  
# Command: make cylinder
cylinder: cylinder.o 
	$(CC) $(CFLAGS) -o cylinder cylinder.o

cylinder.o: cylinder.c 
	$(CC) $(CFLAGS) -c cylinder.c


# Example of a Lab02 Solution  
# Command: make Lab02
Lab02: Lab02.o 
	$(CC) $(CFLAGS) -o Lab02 Lab02.o

Lab02.o: Lab02.c 
	$(CC) $(CFLAGS) -c Lab02.c	


# Make all
all: cylinder Lab02

# Make clean
clean :
	rm -rf *.o cylinder1 cylinder2 cylinder Lab02
