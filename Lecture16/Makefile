# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 16

# GCC is for the GCC compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CFLAGS := -std=c11 $(FLAGS)



# Factorial using recursion and Unsigned Integers
# Command: make factUInt
factUIntObjs := factUInt.o Recurse.o

factUInt: $(factUIntObjs)
	$(CC) $(CFLAGS) -o factUInt $(factUIntObjs)

factUInt.o: factUInt.c Recurse.h
	$(CC) $(CFLAGS) -c factUInt.c



# Factorial using recursion and Doubles
# Command: make factDbl
factDblObjs := factDbl.o Recurse.o

factDbl: $(factDblObjs)
	$(CC) $(CFLAGS) -o factDbl $(factDblObjs)

factDbl.o: factDbl.c Recurse.h
	$(CC) $(CFLAGS) -c factDbl.c	
	
# No Need to Rewrite Recurse.o - Already Done!



# Factorial using recursion and Doubles
# DELIBERATE ERROR - Won't hit 0 exactly
# Command: make factDblBad
factDblBadObjs := factDblBad.o Recurse.o

factDblBad: $(factDblBadObjs)
	$(CC) $(CFLAGS) -o factDblBad $(factDblBadObjs)

factDblBad.o: factDblBad.c Recurse.h
	$(CC) $(CFLAGS) -c factDblBad.c	
	
# No Need to Rewrite Recurse.o - Already Done!


	
# Exponential using recursion
# Command: make exp
expObjs := exp.o Recurse.o

exp: $(expObjs)
	$(CC) $(CFLAGS) -o exp $(expObjs)

exp.o: exp.c Recurse.h
	$(CC) $(CFLAGS) -c exp.c

# No Need to Rewrite Recurse.o - Already Done!	



# Exponential using recursion - with greater Precision
# Command: make expPrecise
expPreciseObjs := expPrecise.o Recurse.o

expPrecise: $(expPreciseObjs)
	$(CC) $(CFLAGS) -o expPrecise $(expPreciseObjs)

expPrecise.o: expPrecise.c Recurse.h
	$(CC) $(CFLAGS) -c expPrecise.c

# No Need to Rewrite Recurse.o - Already Done!		
	
	
# Exponential using recursion
# Command: make fib
fibObjs := fib.o

fib: $(fibObjs)
	$(CC) $(CFLAGS) -o fib $(fibObjs)

fib.o: fib.c
	$(CC) $(CFLAGS) -c fib.c



# Exponential using recursion
# Command: make fibMemo
fibMemoObjs := fibMemo.o Recurse.o

fibMemo: $(fibMemoObjs)
	$(CC) $(CFLAGS) -o fibMemo $(fibMemoObjs)

fibMemo.o: fibMemo.c
	$(CC) $(CFLAGS) -c fibMemo.c

Recurse.o: Recurse.c Recurse.h
	$(CC) $(CFLAGS) -c Recurse.c

# Make all
all: factUInt factDbl factDblBad exp expPrecise fib fibMemo

# Make clean
clean :
	rm -rf *.o factUInt factDbl factDblBad exp expPrecise fib fibMemo
