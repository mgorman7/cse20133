#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/* Too many elements allocated */
	char* months[11] = {"January",   "February", 
						"March",    "April",
						"May",       "June", 
						"July",     "August",
						"September", "October", 
						"November", "December"};
	

	for( long unsigned int iter = 0; iter < 12; iter++ ){
		
		fprintf( stdout, "Month %lu = %s\n", iter + 1, months[iter] );
		
	}
	
	return 0;
}
