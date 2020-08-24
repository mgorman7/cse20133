#include <stdio.h>

#define arrayLen 5

int main(){
    
	/* C does not allow variables to used to declare array lengths */
    int array[arrayLen] = {22, 47, -101, 92, 8};
    
    for(unsigned int iter = 0; iter < arrayLen; iter++){
        
        fprintf( stdout, "%d ", array[iter]);
        
    }
    
    fprintf( stdout, "\n");
    
    return 0;
}

