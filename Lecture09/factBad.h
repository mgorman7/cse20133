/**********************************************
* File: factBad.h 
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains the function prototypes 
* for the factorials. Contains a deliberate compiler
* error to teach students the importance of using 
* #define compiler directives instead of global variables
**********************************************/

#ifndef FACTBAD_H
#define FACTBAD_H

#include "stdio.h"
#include "stdlib.h" /* Included for exit */

/* This file contains a compiler error. Here, we used int variables instead of 
#define compiler directives. As a result, the compiler will try to insert these variables
every time factBad.h is included in a file. This is why we get multiple definitions 
of all four variables. The exact compiler error is shown below in the rest of the comment

/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.o:(.bss+0x0): multiple definition of `MIN_FACT'
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHeaderBad.o:(.bss+0x0): first defined here
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.o: In function `factInt':
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.c:26: multiple definition of `MAX_INT_FACT'
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHeaderBad.o:/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHead            erBad.c:23: first defined here
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.o: In function `factInt':
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.c:26: multiple definition of `MAX_FLOAT_FACT'
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHeaderBad.o:/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHead            erBad.c:23: first defined here
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.o: In function `factInt':
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factBad.c:26: multiple definition of `MAX_DOUBLE_FACT'
/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHeaderBad.o:/escnfs/home/mmorri22/f19-cse20133/08-Functions/factHead            erBad.c:29: first defined here
collect2: error: ld returned 1 exit status
*/

int MIN_FACT = 0;			// Correct code would be #define MIN_FACT 0
int MAX_INT_FACT = 13;		// Correct code would be #define MIN_INT_FACT 13
int MAX_FLOAT_FACT = 34;	// Correct code would be #define MIN_INT_FACT 34
int MAX_DOUBLE_FACT = 170; 	// Correct code would be #define MIN_INT_FACT 170

/********************************************
* Function Name  : factInt
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 13, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
int factInt(int num);


/********************************************
* Function Name  : factFloat
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 34, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
float factFloat(int num);

/********************************************
* Function Name  : factDouble
* Pre-conditions : int num
* Post-conditions: double
* 
* Takes in an int between 0 and 170, and returns
* the factorial value. Returns -1 if those values 
* are exceeded 
********************************************/
double factDouble(int num);

#endif
