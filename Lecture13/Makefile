# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 13

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


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


# Show the importance of correct function declaration order
# Command: make badCompOrderFix
badCompOrderFix: badCompOrderFix.o 
	$(CC) $(CFLAGS) -o badCompOrderFix badCompOrderFix.o

badCompOrderFix.o: badCompOrderFix.c 
	$(CC) $(CFLAGS) -c badCompOrderFix.c



# Calculate a factorial using double 
# Initial student example of their own function
# Command: make factFuncEx
factFuncEx: factFuncEx.o 
	$(CC) $(CFLAGS) -o factFuncEx factFuncEx.o

factFuncEx.o: factFuncEx.c 
	$(CC) $(CFLAGS) -c factFuncEx.c


# Shows the student an example of arrays with Pass By Reference
# Command: make swapArray
swapArray: swapArray.o 
	$(CC) $(CFLAGS) -o swapArray swapArray.o

swapArray.o: swapArray.c 
	$(CC) $(CFLAGS) -c swapArray.c


# Shows the student an example of arrays with Pass By Reference
# Command: make swapArray2
swapArray2: swapArray2.o 
	$(CC) $(CFLAGS) -o swapArray2 swapArray2.o

swapArray2.o: swapArray2.c 
	$(CC) $(CFLAGS) -c swapArray2.c


# Initial Example of Pointer to Pointers
# Command: make passBy
passBy: passBy.o 
	$(CC) $(CFLAGS) -o passBy passBy.o

passBy.o: passBy.c 
	$(CC) $(CFLAGS) -c passBy.c
	

# Make all
all: squareFunc factRecurse factOverflow goodCompOrder badCompOrderFix factFuncEx swapArray

# Make clean
clean :
	rm -rf *.o squareFunc factRecurse factOverflow goodCompOrder badCompOrderFix factFuncEx swapArray
