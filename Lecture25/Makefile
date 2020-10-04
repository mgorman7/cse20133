# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 25

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CFLAGS := -std=c11 $(FLAGS)
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)



# Compilation for the Hello, World in C
# Command: make hello
helloObjs := hello.o

hello: $(helloObjs)
	$(CC) $(CFLAGS) -o hello $(helloObjs)

hello.o: $(07)/hello.c
	$(CC) $(CFLAGS) -c $(07)/hello.c
	
	
	
# Compilation for the Hello, World in C
# Command: make hello
helloCPPObjs := helloCPP.o

helloCPP: $(helloCPPObjs)
	$(PP) $(CXXFLAGS) -o helloCPP $(helloCPPObjs)

helloCPP.o: helloCPP.cpp
	$(PP) $(CXXFLAGS) -c helloCPP.cpp
	
	
	
# Examples of outputting C++ values
# Command: make output
outputObjs := output.o

output: $(outputObjs)
	$(PP) $(CXXFLAGS) -o output $(outputObjs)

output.o: output.cpp
	$(PP) $(CXXFLAGS) -c output.cpp



# Examples of outputting C++ values
# Command: make output
ptrObjs := ptr.o

ptr: $(ptrObjs)
	$(PP) $(CXXFLAGS) -o ptr $(ptrObjs)

ptr.o: ptr.cpp
	$(PP) $(CXXFLAGS) -c ptr.cpp
	
	
	
# Examples of using const
# Command: make output
constObjs := const.o constFunc.o

const: $(constObjs)
	$(PP) $(CXXFLAGS) -o const $(constObjs)

const.o: const.cpp constFunc.h 
	$(PP) $(CXXFLAGS) -c const.cpp
	
constFunc.o: constFunc.cpp constFunc.h 
	$(PP) $(CXXFLAGS) -c constFunc.cpp


# Examples of cin
# Command: make cin
cinObjs := cin.o

cin: $(cinObjs)
	$(PP) $(CXXFLAGS) -o cin $(cinObjs)

cin.o: cin.cpp
	$(PP) $(CXXFLAGS) -c cin.cpp
	
	
	
# Examples of cin with strings
# Command: make cinStr
cinStrObjs := cinStr.o

cinStr: $(cinStrObjs)
	$(PP) $(CXXFLAGS) -o cinStr $(cinStrObjs)

cinStr.o: cinStr.cpp
	$(PP) $(CXXFLAGS) -c cinStr.cpp


# Make all
all: hello helloCPP output ptr const cin cinStr

# Make clean
clean :
	rm -rf *.o hello helloCPP output ptr const cin cinStr
