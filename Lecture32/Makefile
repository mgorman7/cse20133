# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 - Lecture 36

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make SLLTest
SLLTestObjs := SLLTest.o

SLLTest: $(SLLTestObjs)
	$(PP) $(CXXFLAGS) -o SLLTest $(SLLTestObjs)

SLLTest.o: SLLTest.cpp SLList.h
	$(PP) $(CXXFLAGS) -c SLLTest.cpp -o $@



# Command: make SLLTest2
SLLTest2Objs := SLLTest2.o

SLLTest2: $(SLLTest2Objs)
	$(PP) $(CXXFLAGS) -o SLLTest2 $(SLLTest2Objs)
	./SLLTest2

SLLTest2.o: SLLTest2.cpp SLList.h
	$(PP) $(CXXFLAGS) -c SLLTest2.cpp -o $@

	

# Make all
all: SLLTest SLLTest2


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o SLLTest SLLTest2
