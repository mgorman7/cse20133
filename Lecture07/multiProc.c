#include <stdio.h>

#define ROWS 7
#define COLUMNS 5

int main(){
    
    int array[ROWS][COLUMNS] = {
		{ 22, 47, -101, 92, 8 },
		{ 44, 19, 188, -76, 4 },
		{ 66, 1111, 5, 106, 1 },
		{ 88, 99, 18, 17, 7 },
		{ 100, -77, 28, 27, 6 },
		{ 110, 55, 38, -37, 3 },
		{ 122, 33, 48, 47, 2 }
	};
    
    for(unsigned int iter = 0; iter < ROWS; iter++){
		
		for( unsigned int jter = 0; jter < COLUMNS; jter++ ){
        
			fprintf( stdout, "%4d ", array[iter][jter]);
		}
        
		fprintf( stdout, "\n");
    }
    
    return 0;
}

