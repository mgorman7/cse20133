# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 05

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 


# Initial Example of Functions 
# Command: make printGreet
printGreet: printGreet.o 
	$(CC) $(CFLAGS) -o printGreet printGreet.o

printGreet.o: printGreet.c 
	$(CC) $(CFLAGS) -c printGreet.c


# Initial Example of Splitting Tasks
# Command: make findPrintAvg
findPrintAvg: findPrintAvg.o 
	$(CC) $(CFLAGS) -o findPrintAvg findPrintAvg.o

findPrintAvg.o: findPrintAvg.c 
	$(CC) $(CFLAGS) -c findPrintAvg.c


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



# Combining Concepts
# Command: make factInt
factInt: factInt.o 
	$(CC) $(CFLAGS) -o factInt factInt.o

factInt.o: factInt.c 
	$(CC) $(CFLAGS) -c factInt.c


# Combining Concepts
# Command: make factIntFor
factIntFor: factIntFor.o 
	$(CC) $(CFLAGS) -o factIntFor factIntFor.o

factIntFor.o: factIntFor.c 
	$(CC) $(CFLAGS) -c factIntFor.c


# Combining Concepts
# Command: make factFloat
factFloat: factFloat.o 
	$(CC) $(CFLAGS) -o factFloat factFloat.o

factFloat.o: factFloat.c 
	$(CC) $(CFLAGS) -c factFloat.c



# Combining Concepts
# Command: make factDouble
factDouble: factDouble.o 
	$(CC) $(CFLAGS) -o factDouble factDouble.o

factDouble.o: factDouble.c 
	$(CC) $(CFLAGS) -c factDouble.c


# Combining Concepts
# Command: make factDoubleSci
factDoubleSci: factDoubleSci.o 
	$(CC) $(CFLAGS) -o factDoubleSci factDoubleSci.o

factDoubleSci.o: factDoubleSci.c 
	$(CC) $(CFLAGS) -c factDoubleSci.c



# Calculate a factorial using double 
# Initial student example of their own function
# Command: make factFuncEx
factFuncEx: factFuncEx.o 
	$(CC) $(CFLAGS) -o factFuncEx factFuncEx.o

factFuncEx.o: factFuncEx.c 
	$(CC) $(CFLAGS) -c factFuncEx.c
		

	
# factorial.o is already included, so no need to re-include! 


# Make all
all: printGreet findPrintAvg squareFunc factRecurse factOverflow factFuncEx factDoubleSci factDouble factFloat factInt factIntFor

# Make clean
clean :
	rm -rf *.o printGreet findPrintAvg NDFightFSM squareFunc factRecurse factOverflow factFuncEx factDoubleSci factDouble factFloat factInt factIntFor
