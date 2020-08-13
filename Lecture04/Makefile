# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 06

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 

# Variables for Folders
06 := ~/f19-cse20133/06-Selection


# Example of an unintentional NULL statement
# Command: make unintNull 
unintNull: $(06)/unintNull.o 
	$(CC) $(CFLAGS) -o $(06)/unintNull $(06)/unintNull.o

unintNull.o: $(06)/unintNull.c 
	$(CC) $(CFLAGS) -c $(06)/unintNull.c
	
	
# Unintentional NULL statement example FIXED
# Command: make unintNullFix 
unintNullFix: $(06)/unintNullFix.o 
	$(CC) $(CFLAGS) -o $(06)/unintNullFix $(06)/unintNullFix.o

unintNullFix.o: $(06)/unintNullFix.c 
	$(CC) $(CFLAGS) -c $(06)/unintNullFix.c
	

# Simple if statement example 
# Command: make ifEx 
ifEx: $(06)/ifEx.o 
	$(CC) $(CFLAGS) -o $(06)/ifEx $(06)/ifEx.o

ifEx.o: $(06)/ifEx.c 
	$(CC) $(CFLAGS) -c $(06)/ifEx.c
	
	
# Simple if/else statement example 
# Command: make ifElseEx 
ifElseEx: $(06)/ifElseEx.o 
	$(CC) $(CFLAGS) -o $(06)/ifElseEx $(06)/ifElseEx.o

ifElseEx.o: $(06)/ifElseEx.c 
	$(CC) $(CFLAGS) -c $(06)/ifElseEx.c
	
	
# Shows an example of a switch statement using a 32-bit int 
# Command: make switchInt 
switchInt: $(06)/switchInt.o 
	$(CC) $(CFLAGS) -o $(06)/switchInt $(06)/switchInt.o

switchInt.o: $(06)/switchInt.c 
	$(CC) $(CFLAGS) -c $(06)/switchInt.c
	
	
# Shows an example of a switch statement using a 32-bit unsigned int 
# Command: make switchUnInt 
switchUnInt: $(06)/switchUnInt.o 
	$(CC) $(CFLAGS) -o $(06)/switchUnInt $(06)/switchUnInt.o

switchUnInt.o: $(06)/switchUnInt.c 
	$(CC) $(CFLAGS) -c $(06)/switchUnInt.c
	
	
# Shows an example of a switch statement using a 8-bit signed int 
# Command: make switchFixInt 
switchFixInt: $(06)/switchFixInt.o 
	$(CC) $(CFLAGS) -o $(06)/switchFixInt $(06)/switchFixInt.o

switchFixInt.o: $(06)/switchFixInt.c 
	$(CC) $(CFLAGS) -c $(06)/switchFixInt.c
	
	
# Shows an example of a switch statement using a long int 
# Command: make switchLongInt 
switchLongInt: $(06)/switchLongInt.o 
	$(CC) $(CFLAGS) -o $(06)/switchLongInt $(06)/switchLongInt.o

switchLongInt.o: $(06)/switchLongInt.c 
	$(CC) $(CFLAGS) -c $(06)/switchLongInt.c


# Shows an example of a switch statement using a signed char
# Command: make switchChar
switchChar: $(06)/switchChar.o 
	$(CC) $(CFLAGS) -o $(06)/switchChar $(06)/switchChar.o

switchChar.o: $(06)/switchChar.c 
	$(CC) $(CFLAGS) -c $(06)/switchChar.c
	
	
# Shows an example of a switch statement using an unsigned char
# Command: make switchUnChar
switchUnChar: $(06)/switchUnChar.o 
	$(CC) $(CFLAGS) -o $(06)/switchUnChar $(06)/switchUnChar.o

switchUnChar.o: $(06)/switchUnChar.c 
	$(CC) $(CFLAGS) -c $(06)/switchUnChar.c
	
	
# Shows an example of a switch statement using a 32-bit single precision float 
# WARNING: switchFloat.c contains a deliberate compiler error
# Command: make switchFloat 
switchFloat: $(06)/switchFloat.o 
	$(CC) $(CFLAGS) -o $(06)/switchFloat $(06)/switchFloat.o

switchFloat.o: $(06)/switchFloat.c 
	$(CC) $(CFLAGS) -c $(06)/switchFloat.c


# Make all - switchFloat not included in make all because the compilation will stop
all: ifEx ifElseEx switchInt switchUnInt switchFixInt switchChar switchLongInt unintNull unintNullFix

# Make clean
clean :
	rm -rf *.o ifEx ifElseEx switchInt switchUnInt switchFixInt switchChar switchLongInt switchFloat unintNull unintNullFix



