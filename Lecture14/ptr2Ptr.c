#include <stdio.h>
#include <stdlib.h>

/* function declaration */
void GetMemory (long unsigned int count, int **arrayPtr);

void SetValues (long unsigned int count, int **arrayPtr);

void PrintValues (long unsigned int count, int **arrayPtr);

int main()
{
	/* Variables */
	long unsigned int nrElements;
	int *values ;

	fprintf(stdout, "Enter number of elements in integer values: ") ;
	fscanf(stdin, "%lu", &nrElements) ;

	GetMemory(nrElements, &values);
   
	SetValues(nrElements, &values);

	PrintValues(nrElements, &values);

	/* Give up use of the memory block */
	free(values) ;

	return 0;
}


void GetMemory (long unsigned int count, int **arrayPtr)
{

	// Allocate
	*arrayPtr = (int *) malloc( count * sizeof(int) ) ;
   
	// Check Memory
	if (*arrayPtr == NULL)
	{
		fprintf(stdout, "Oops, we're out of memory\n") ;
		exit(-1);
	}
}   


void SetValues (long unsigned int count, int **arrayPtr){
	
	int value = 1;
	for (long unsigned int iter = 0; iter < count; iter++)
	{
		*( *arrayPtr + iter ) = value;
		
		value *= 2;
	}	
	
}


void PrintValues (long unsigned int count, int **arrayPtr){
	
   for (long unsigned int iter = 0; iter < count; iter++)
   {
      fprintf( stdout, "2^%lu = %d\n", iter, *( *arrayPtr + iter ));
   }		
	
}

