#include <stdio.h>
#include <stdlib.h>

#define NUM_MONTHS 12
#define JAN 0
#define JAN_LEN 7

int main(){
	
	char** months = (char **)malloc( NUM_MONTHS * sizeof(char *) );
	
	months[ JAN ] = "January";
	
	for( long unsigned int iter = 0; iter < NUM_MONTHS; iter++ ){
		
		fprintf( stdout, "Month %lu = %s\n", iter + 1, months[iter] );
		
	}
	
	return 0;
}
