# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 08

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm


# Bass Pro Shop Story Part 1
# Command: make BassPro1
BassPro1: BassPro1.o 
	$(CC) $(CFLAGS) -o BassPro1 BassPro1.o

BassPro1.o: BassPro1.c 
	$(CC) $(CFLAGS) -c BassPro1.c



# Bass Pro Shop Story Part 2  
# Command: make BassPro2
BassPro2: BassPro2.o 
	$(CC) $(CFLAGS) -o BassPro2 BassPro2.o

BassPro2.o: BassPro2.c 
	$(CC) $(CFLAGS) -c BassPro2.c



# Bass Pro Shop Story Part 3  
# Command: make BassPro3
BassPro3: BassPro3.o 
	$(CC) $(CFLAGS) -o BassPro3 BassPro3.o

BassPro3.o: BassPro3.c 
	$(CC) $(CFLAGS) -c BassPro3.c



# Bass Pro Shop Story Part 4 
# Command: make BassPro4
BassPro4: BassPro4.o 
	$(CC) $(CFLAGS) -o BassPro4 BassPro4.o

BassPro4.o: BassPro4.c 
	$(CC) $(CFLAGS) -c BassPro4.c



# Bass Pro Shop Story Part 5 
# Command: make BassPro5
BassPro5: BassPro5.o 
	$(CC) $(CFLAGS) -o BassPro5 BassPro5.o

BassPro5.o: BassPro5.c 
	$(CC) $(CFLAGS) -c BassPro5.c	



# Call By Reference Example
# Command: make callBy
callBy: callBy.o 
	$(CC) $(CFLAGS) -o callBy callBy.o

callBy.o: callBy.c 
	$(CC) $(CFLAGS) -c callBy.c	



# Passing 2D Array Example
# Command: make passing2D
passing2D: passing2D.o 
	$(CC) $(CFLAGS) -o passing2D passing2D.o

passing2D.o: passing2D.c 
	$(CC) $(CFLAGS) -c passing2D.c	


# Passing 2D Array with array parameters as variables Example
# Command: make pass2DVar
pass2DVar: pass2DVar.o 
	$(CC) $(CFLAGS) -o pass2DVar pass2DVar.o

pass2DVar.o: pass2DVar.c 
	$(CC) $(CFLAGS) -c pass2DVar.c	


# Passing 2D Array with array parameters as variables Example
# Command: make pass2DVarBad
pass2DVarBad: pass2DVarBad.o 
	$(CC) $(CFLAGS) -o pass2DVarBad pass2DVarBad.o

pass2DVarBad.o: pass2DVarBad.c 
	$(CC) $(CFLAGS) -c pass2DVarBad.c	


# Initial Example of fscanf
# Command: make fscanf
fscanf: fscanf.o 
	$(CC) $(CFLAGS) -o fscanf fscanf.o

fscanf.o: fscanf.c 
	$(CC) $(CFLAGS) -c fscanf.c


# Combining Concepts
# Command: make Combine
Combine: Combine.o 
	$(CC) $(CFLAGS) -o Combine Combine.o

Combine.o: Combine.c 
	$(CC) $(CFLAGS) -c Combine.c	

# Make all
all: BassPro1 BassPro2 BassPro3 BassPro4 callBy passing2D pass2DVar fscanf Combine

# Make clean
clean :
	rm -rf *.o BassPro1 BassPro2 BassPro3 BassPro4 callBy passing2D pass2DVar fscanf Combine
