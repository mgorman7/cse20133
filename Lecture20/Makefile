# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 20

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Included in this lecture to show the implications of removing flags 
BADFL := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic 


# First Example of testing1
# Command: make testing1
testing1: testing1.o 
	$(CC) $(CFLAGS) -o testing1 testing1.o

testing1.o: testing1.c 
	$(CC) $(CFLAGS) -c testing1.c



# Fibonacci Memoization GDB
# Command: make fibMemo
fibMemo: fibMemo.o 
	$(CC) $(CFLAGS) -o fibMemo fibMemo.o

fibMemo.o: fibMemo.c 
	$(CC) $(CFLAGS) -c fibMemo.c



# Fibonacci Memoization GDB
# Command: make fibMemoFix
fibMemoFix: fibMemoFix.o 
	$(CC) $(CFLAGS) -o fibMemoFix fibMemoFix.o

fibMemoFix.o: fibMemoFix.c 
	$(CC) $(CFLAGS) -c fibMemoFix.c
	

# Make all
all: testing1 fibMemo fibMemoFix

# Make clean
clean :
	rm -rf *.o testing1 fibMemo fibMemoFix
