# GCC is for the GCC compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CFLAGS := -std=c11 $(FLAGS)



# Lab 07
# Command: make Lab07
Lab07Objs := Lab07.o student.o

Lab07: $(Lab07Objs)
	$(CC) $(CFLAGS) -o Lab07 $(Lab07Objs)

Lab07.o: Lab07.c student.h
	$(CC) $(CFLAGS) -c Lab07.c

student.o: student.c student.h
	$(CC) $(CFLAGS) -c student.c




# Make all
all: Lab07

# Make clean
clean :
	rm -rf *.o Lab05
