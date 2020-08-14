# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 08

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Simple Finite State Machine Example  
# Command: make NDFightFSM
NDFightFSM: NDFightFSM.o 
	$(CC) $(CFLAGS) -o NDFightFSM NDFightFSM.o

NDFightFSM.o: NDFightFSM.c 
	$(CC) $(CFLAGS) -c NDFightFSM.c
	

# Simple function example  
# Same code that is run in the Stack example with SumOfSquare
# Command: make squareFunc
squareFunc: squareFunc.o 
	$(CC) $(CFLAGS) -o squareFunc squareFunc.o

squareFunc.o: squareFunc.c 
	$(CC) $(CFLAGS) -c squareFunc.c



# Simple function example  
# Shows that a function can call itself
# Command: make factRecurse
factRecurse: factRecurse.o 
	$(CC) $(CFLAGS) -o factRecurse factRecurse.o

factRecurse.o: factRecurse.c 
	$(CC) $(CFLAGS) -c factRecurse.c
	
	
# Simple function example  
# Shows the example of Stack Overflow using factorial 
# Produces a deliberate segmentation fault 
# Command: make factOverflow
factOverflow: factOverflow.o 
	$(CC) $(CFLAGS) -o factOverflow factOverflow.o

factOverflow.o: factOverflow.c 
	$(CC) $(CFLAGS) -c factOverflow.c



# Show the importance of correct function declaration order
# This version compiles correctly 
# Command: make goodCompOrder
goodCompOrder: goodCompOrder.o 
	$(CC) $(CFLAGS) -o goodCompOrder goodCompOrder.o

goodCompOrder.o: goodCompOrder.c 
	$(CC) $(CFLAGS) -c goodCompOrder.c



# Show the importance of correct function declaration order
# This version DOES NOT COMPILE
# Not included in make all since that would stop all compilation 
# Command: make badCompOrder
badCompOrder: badCompOrder.o 
	$(CC) $(CFLAGS) -o badCompOrder badCompOrder.o

badCompOrder.o: badCompOrder.c 
	$(CC) $(CFLAGS) -c badCompOrder.c


# Calculate a factorial using double 
# Initial student example of their own function
# Command: make factFuncEx
factFuncEx: factFuncEx.o 
	$(CC) $(CFLAGS) -o factFuncEx factFuncEx.o

factFuncEx.o: $(07)/factFuncEx.c 
	$(CC) $(CFLAGS) -c factFuncEx.c



# Simple Variable Scope Example 
# Command: make varScope
varScope: varScope.o 
	$(CC) $(CFLAGS) -o varScope varScope.o

varScope.o: varScope.c 
	$(CC) $(CFLAGS) -c varScope.c
	
	

# Variable scope with -Wshadow removed
# Example to show students the issues with block scope 
# and why using -Wshadow is important to help keep track of 
# variables to maintain production quality code  
# Command: make varScopeBad
varScopeBad: varScopeBad.o 
	$(CC) $(CFLAGS) -o varScopeBad varScopeBad.o

varScopeBad.o: varScopeBad.c 
	$(CC) $(CFLAGS) -c varScopeBad.c
		

	
# factorial.o is already included, so no need to re-include! 


# Make all
all: squareFunc factRecurse factOverflow goodCompOrder varScope factFuncEx

# Make clean
clean :
	rm -rf *.o NDFightFSM squareFunc factRecurse factOverflow goodCompOrder varScope factFuncEx
