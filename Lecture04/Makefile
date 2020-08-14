# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 04

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Example of an unintentional NULL statement
# Command: make unintNull 
unintNull: unintNull.o 
	$(CC) $(CFLAGS) -o unintNull unintNull.o

unintNull.o: unintNull.c 
	$(CC) $(CFLAGS) -c unintNull.c
	
	
# Unintentional NULL statement example FIXED
# Command: make unintNullFix 
unintNullFix: unintNullFix.o 
	$(CC) $(CFLAGS) -o unintNullFix unintNullFix.o

unintNullFix.o: unintNullFix.c 
	$(CC) $(CFLAGS) -c unintNullFix.c
	

# Simple if statement example 
# Command: make ifEx 
ifEx: ifEx.o 
	$(CC) $(CFLAGS) -o ifEx ifEx.o

ifEx.o: ifEx.c 
	$(CC) $(CFLAGS) -c ifEx.c
	
	
# Simple if/else statement example 
# Command: make ifElseEx 
ifElseEx: ifElseEx.o 
	$(CC) $(CFLAGS) -o ifElseEx ifElseEx.o

ifElseEx.o: ifElseEx.c 
	$(CC) $(CFLAGS) -c ifElseEx.c
	
	
# Shows an example of a switch statement using a 32-bit int 
# Command: make switchInt 
switchInt: switchInt.o 
	$(CC) $(CFLAGS) -o switchInt switchInt.o

switchInt.o: switchInt.c 
	$(CC) $(CFLAGS) -c switchInt.c
	
	
# Shows an example of a switch statement using a 32-bit unsigned int 
# Command: make switchUnInt 
switchUnInt: switchUnInt.o 
	$(CC) $(CFLAGS) -o switchUnInt switchUnInt.o

switchUnInt.o: switchUnInt.c 
	$(CC) $(CFLAGS) -c switchUnInt.c
	
	
# Shows an example of a switch statement using a 8-bit signed int 
# Command: make switchFixInt 
switchFixInt: switchFixInt.o 
	$(CC) $(CFLAGS) -o switchFixInt switchFixInt.o

switchFixInt.o: switchFixInt.c 
	$(CC) $(CFLAGS) -c switchFixInt.c
	
	
# Shows an example of a switch statement using a long int 
# Command: make switchLongInt 
switchLongInt: switchLongInt.o 
	$(CC) $(CFLAGS) -o switchLongInt switchLongInt.o

switchLongInt.o: switchLongInt.c 
	$(CC) $(CFLAGS) -c switchLongInt.c


# Shows an example of a switch statement using a signed char
# Command: make switchChar
switchChar: switchChar.o 
	$(CC) $(CFLAGS) -o switchChar switchChar.o

switchChar.o: switchChar.c 
	$(CC) $(CFLAGS) -c switchChar.c
	
	
# Shows an example of a switch statement using an unsigned char
# Command: make switchUnChar
switchUnChar: switchUnChar.o 
	$(CC) $(CFLAGS) -o switchUnChar switchUnChar.o

switchUnChar.o: switchUnChar.c 
	$(CC) $(CFLAGS) -c switchUnChar.c
	
	
# Shows an example of a switch statement using a 32-bit single precision float 
# WARNING: switchFloat.c contains a deliberate compiler error
# Command: make switchFloat 
switchFloat: switchFloat.o 
	$(CC) $(CFLAGS) -o switchFloat switchFloat.o

switchFloat.o: switchFloat.c 
	$(CC) $(CFLAGS) -c switchFloat.c


# Make all - switchFloat not included in make all because the compilation will stop
all: ifEx ifElseEx switchInt switchUnInt switchFixInt switchChar switchLongInt unintNull unintNullFix

# Make clean
clean :
	rm -rf *.o ifEx ifElseEx switchInt switchUnInt switchFixInt switchChar switchLongInt switchFloat unintNull unintNullFix



