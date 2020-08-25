#include <stdio.h>

#define  SIZE  10

/* Function Declarations */
void printArray(int array[], long unsigned int numElems);
void Squares(int array[], long unsigned int numElems);
void Cubes(int array[], long unsigned int numElems);

/* Note how much simpler the main function looks */
int main ( ) 
{
	int array[SIZE];

	fprintf( stdout, "What the array initially looks like\n" );
	printArray(array, SIZE);

	fprintf( stdout, "Squares:\n" );
	Squares(array, SIZE);
	printArray(array, SIZE);

	fprintf( stdout, "Cubes:\n" );
	Cubes(array, SIZE) ;
	printArray(array, SIZE);

	return 0;
}

/* Function Definitions */
void printArray(int array[], long unsigned int numElems){
	
	for (long unsigned int i = 0; i < numElems; i++){
		
		/* Use %lu to print long unsigned int */
		fprintf( stdout, "array[%lu] = %d\n", i, array[i]) ;
	}
	fprintf( stdout, "\n") ;
}

void Squares(int array[], long unsigned int numElems){
	
	for (long unsigned int i = 0; i < numElems; i++) {
		
		/* Cast from long unsigned int to int */
		array[i] = (int)(i * i);
	}	
}

void Cubes(int array[], long unsigned int numElems) 
{

	for (long unsigned int i = 0; i < numElems; i++) {

		array[i] = (int)(i * i * i);
	}
}