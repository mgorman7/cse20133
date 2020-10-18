# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 31

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CFLAGS := -std=c11 $(FLAGS)
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


# Command: make template
# Initial Class Template Example
templateObjs :=  template.o

template: $(templateObjs)
	$(PP) $(CXXFLAGS) -o template $(templateObjs)

template.o: template.cpp A.h
	$(PP) $(CXXFLAGS) -c template.cpp



# Command: make classBad
# Example of incorrect template with cpp file
# Deliberate Compiler Error
classBadObjs :=  classBad.o Abad.o

classBad: $(classBadObjs)
	$(PP) $(CXXFLAGS) -o classBad $(classBadObjs)

classBad.o: classBad.cpp Abad.h
	$(PP) $(CXXFLAGS) -c classBad.cpp
	
Abad.o: Abad.cpp Abad.h
	$(PP) $(CXXFLAGS) -c Abad.cpp



# Command: make newInt
# First Instance of new keyword. Refresh on pointers
newIntObjs :=  newInt.o

newInt: $(newIntObjs)
	$(PP) $(CXXFLAGS) -o newInt $(newIntObjs)

newInt.o: newInt.cpp
	$(PP) $(CXXFLAGS) -c newInt.cpp
	
	
	
# Command: make newInt
# Arrays using new and delete. Refresh on array pointers
newArrayObjs :=  newArray.o

newArray: $(newArrayObjs)
	$(PP) $(CXXFLAGS) -o newArray $(newArrayObjs)

newArray.o: newArray.cpp
	$(PP) $(CXXFLAGS) -c newArray.cpp
	
	


# Command: make tempBad
# Example of incorrect template overloaded operator
# Deliberate Compiler Error
tempBadObjs :=  tempBad.o

tempBad: $(tempBadObjs)
	$(PP) $(CXXFLAGS) -o tempBad $(tempBadObjs)

tempBad.o: tempBad.cpp A.h
	$(PP) $(CXXFLAGS) -c tempBad.cpp



# Command: make template
# Initial Class Template Example
tempDestObjs :=  tempDest.o

tempDest: $(tempDestObjs)
	$(PP) $(CXXFLAGS) -o tempDest $(tempDestObjs)

tempDest.o: tempDest.cpp A.h
	$(PP) $(CXXFLAGS) -c tempDest.cpp
	


# namespace Example
# Command: make namespace
namespaceObjs :=  namespace.o

namespace: namespace.o
	$(PP) $(CXXFLAGS) -o namespace $(namespaceObjs)
	./namespace

namespace.o: namespace.cpp
	$(PP) $(CXXFLAGS) -c namespace.cpp
	
	
	
# nameGood Example
# Command: make nameGood
nameGoodObjs :=  nameGood.o

nameGood: nameGood.o
	$(PP) $(CXXFLAGS) -o nameGood $(nameGoodObjs)
	./nameGood

nameGood.o: nameGood.cpp
	$(PP) $(CXXFLAGS) -c nameGood.cpp



# nameGood2 Example
# Command: make nameGood2
nameGood2Objs :=  nameGood2.o

nameGood2: nameGood2.o
	$(PP) $(CXXFLAGS) -o nameGood2 $(nameGood2Objs)
	./nameGood2

nameGood2.o: nameGood2.cpp
	$(PP) $(CXXFLAGS) -c nameGood2.cpp



# Make all
all: lltest

# Make clean
clean :
	rm -rf *.o template newInt newArray tempDest lltest
