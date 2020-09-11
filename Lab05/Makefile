# GCC is for the GCC compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CFLAGS := -std=c11 $(FLAGS)



# Lab 05
# Command: make Lab05
Lab05Objs := Lab05.o pointers.o

Lab05: $(Lab05Objs)
	$(CC) $(CFLAGS) -o Lab05 $(Lab05Objs)

Lab05.o: Lab05.c pointers.h
	$(CC) $(CFLAGS) -c Lab05.c

pointers.o: pointers.c pointers.h
	$(CC) $(CFLAGS) -c pointers.c




# Make all
all: Lab05

# Make clean
clean :
	rm -rf *.o Lab05
