# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20133 course Lecture 10

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wshadow -Wconversion -pedantic -Werror 


# Basic Memory Allocation
# Command: make malloc 
malloc: malloc.o 
	$(CC) $(CFLAGS) -o malloc malloc.o

malloc.o: malloc.c 
	$(CC) $(CFLAGS) -c malloc.c
	
	
	
# Improper Memory Allocation example
# Command: make mallocBad
mallocBad: mallocBad.o 
	$(CC) $(CFLAGS) -o mallocBad mallocBad.o

mallocBad.o: mallocBad.c 
	$(CC) $(CFLAGS) -c mallocBad.c



# Proper Memory Allocation example
# Fixes issue in mallocBad.c 
# Command: make mallocGood
mallocGood: mallocGood.o 
	$(CC) $(CFLAGS) -o mallocGood mallocGood.o

mallocGood.o: mallocGood.c 
	$(CC) $(CFLAGS) -c mallocGood.c	
	
	
	
# Basic Memory Allocation with type abstraction
# Command: make mallAbst 
mallAbst: mallAbst.o 
	$(CC) $(CFLAGS) -o mallAbst mallAbst.o

mallAbst.o: mallAbst.c 
	$(CC) $(CFLAGS) -c mallAbst.c


# Command: make void1
void1Objs :=  void1.o

void1: void1.o
	$(CC) $(CFLAGS) -o void1 $(void1Objs)
	./void1

void1.o: void1.c
	$(CC) $(CFLAGS) -c void1.c
	
	
# C++ void2, World Example
# Command: make void2
void2Objs :=  void2.o

void2: void2.o
	$(CC) $(CFLAGS) -o void2 $(void2Objs)
	./void2

void2.o: void2.c
	$(CC) $(CFLAGS) -c void2.c
	
	
# C++ void3, World Example
# Command: make void3
void3Objs :=  void3.o

void3: void3.o
	$(CC) $(CFLAGS) -o void3 $(void3Objs)
	./void3

void3.o: void3.c
	$(CC) $(CFLAGS) -c void3.c
	
	
# C++ void4, World Example
# Command: make void4
void4Objs :=  void4.o

void4: void4.o
	$(CC) $(CFLAGS) -o void4 $(void4Objs)
	./void4

void4.o: void4.c
	$(CC) $(CFLAGS) -c void4.c
	
	
	
# C++ helloVoid, World Example
# Command: make helloVoid
helloVoidObjs :=  helloVoid.o

helloVoid: helloVoid.o
	$(CC) $(CFLAGS) -o helloVoid $(helloVoidObjs)
	./helloVoid

helloVoid.o: helloVoid.c
	$(CC) $(CFLAGS) -c helloVoid.c



# C++ char1, World Example
# Command: make char1
char1Objs :=  char1.o

char1: char1.o
	$(CC) $(CFLAGS) -o char1 $(char1Objs)
	./char1

char1.o: char1.c
	$(CC) $(CFLAGS) -c char1.c
	
	
	
# C++ char2, World Example
# Command: make char2
char2Objs :=  char2.o

char2: char2.o
	$(CC) $(CFLAGS) -o char2 $(char2Objs)
	./char2

char2.o: char2.c
	$(CC) $(CFLAGS) -c char2.c



# C++ char3, World Example
# Command: make char3
char3Objs :=  char3.o

char3: char3.o
	$(CC) $(CFLAGS) -o char3 $(char3Objs)
	./char3

char3.o: char3.c
	$(CC) $(CFLAGS) -c char3.c
	
	
# C++ char4, World Example
# Command: make char4
char4Objs :=  char4.o

char4: char4.o
	$(CC) $(CFLAGS) -o char4 $(char4Objs)
	./char4

char4.o: char4.c
	$(CC) $(CFLAGS) -c char4.c


# C++ helloChar, World Example
# Command: make helloChar
helloCharObjs :=  helloChar.o

helloChar: helloChar.o
	$(CC) $(CFLAGS) -o helloChar $(helloCharObjs)
	./helloChar

helloChar.o: helloChar.c
	$(CC) $(CFLAGS) -c helloChar.c
	
	
	
# C++ array1, World Example
# Command: make array1
array1Objs :=  array1.o

array1: array1.o
	$(CC) $(CFLAGS) -o array1 $(array1Objs)
	./array1

array1.o: array1.c
	$(CC) $(CFLAGS) -c array1.c
	
	
	
# C++ array2, World Example
# Command: make array2
array2Objs :=  array2.o

array2: array2.o
	$(CC) $(CFLAGS) -o array2 $(array2Objs)
	./array2

array2.o: array2.c
	$(CC) $(CFLAGS) -c array2.c



# C++ array3, World Example
# Command: make array3
array3Objs :=  array3.o

array3: array3.o
	$(CC) $(CFLAGS) -o array3 $(array3Objs)
	./array3

array3.o: array3.c
	$(CC) $(CFLAGS) -c array3.c
	
	
# C++ array4, World Example
# Command: make array4
array4Objs :=  array4.o

array4: array4.o
	$(CC) $(CFLAGS) -o array4 $(array4Objs)
	./array4

array4.o: array4.c
	$(CC) $(CFLAGS) -c array4.c


# C++ helloArray, World Example
# Command: make helloArray
helloArrayObjs :=  helloArray.o

helloArray: helloArray.o
	$(CC) $(CFLAGS) -o helloArray $(helloArrayObjs)
	./helloArray

helloArray.o: helloArray.c
	$(CC) $(CFLAGS) -c helloArray.c
	
	
# C++ helloArray2, World Example
# Command: make helloArray2
helloArray2Objs :=  helloArray2.o

helloArray2: helloArray2.o
	$(CC) $(CFLAGS) -o helloArray2 $(helloArray2Objs)
	./helloArray2

helloArray2.o: helloArray2.c
	$(CC) $(CFLAGS) -c helloArray2.c
	
	
# C++ helloArray3, World Example
# Command: make helloArray3
helloArray3Objs :=  helloArray3.o

helloArray3: helloArray3.o
	$(CC) $(CFLAGS) -o helloArray3 $(helloArray3Objs)
	./helloArray3

helloArray3.o: helloArray3.c
	$(CC) $(CFLAGS) -c helloArray3.c


# C++ hello, World Example
# Command: make hello
helloObjs :=  hello.o

hello: $(helloObjs)
	$(CC) $(CFLAGS) -o hello $(helloObjs)
	./hello

hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c


# Void Type
voidTypeObjs :=  voidType.o

voidType: $(voidTypeObjs)
	$(CC) $(CFLAGS) -o voidType $(voidTypeObjs)
	./voidType

voidType.o: voidType.c
	$(CC) $(CFLAGS) -c voidType.c


# Char Type
charTypeObjs :=  charType.o

charType: $(charTypeObjs)
	$(CC) $(CFLAGS) -o charType $(charTypeObjs)
	./charType

charType.o: charType.c
	$(CC) $(CFLAGS) -c charType.c
	
	
# Array Type
arrayTypeObjs :=  arrayType.o

arrayType: $(arrayTypeObjs)
	$(CC) $(CFLAGS) -o arrayType $(arrayTypeObjs)
	./arrayType

arrayType.o: arrayType.c
	$(CC) $(CFLAGS) -c arrayType.c


# Make all (intPtrBad not include because of deliberate compiler errors) 
all: malloc mallocBad mallocGood mallAbst void1 void2 void3 void4 helloVoid char1 char2 char3 char4 helloChar array1 array2 array3 array4 helloArray helloArray2 helloArray3

# Make clean
clean :
	rm -rf *.o malloc mallocGood mallocAbst void1 void2 void3 void4 helloVoid char1 char2 char3 char4 helloChar array1 array2 array3 array4 helloArray helloArray2 helloArray3 hello



