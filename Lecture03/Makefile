# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 2

# CC is for the gcc compiler for C 
CC := gcc

# CFLAGS are the required compiler flags for the CSE 20133 course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror


# Compilation for the nothing program 
# Command: make nothing 
nothing: nothing.o
	$(CC) $(CFLAGS) -o nothing nothing.o

nothing.o: nothing.c
	$(CC) $(CFLAGS) -c nothing.c
	
	
	
# Compilation for the Hello, World 
# Command: make hello
hello: hello.o
	$(CC) $(CFLAGS) -o hello hello.o

hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c


# Compilation for int Print 
# Command: make intPrint
intPrint: intPrint.o
	$(CC) $(CFLAGS) -o intPrint intPrint.o

intPrint.o: intPrint.c
	$(CC) $(CFLAGS) -c intPrint.c


# Make all 
all: nothing hello intPrint
	
# Make clean 
clean:
	rm -rf *.o *.swp nothing hello intPrint                                             
