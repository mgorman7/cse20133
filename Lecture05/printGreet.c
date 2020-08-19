#include <stdio.h>

/* Function Declarations */
void printGreeting();


/* Main Function */
int main( void ){
	
	printGreeting();
	
	return 0;
}

/* Function Definitions */
void printGreeting(){
	
	int year = 2020;
	
	fprintf( stdout, "Hello Notre Dame Students!\n" );
	fprintf( stdout, "Welcome to Intro to Computing in Fall %d\n", year );
	
}


