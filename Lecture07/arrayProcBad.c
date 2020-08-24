#include <stdio.h>

int main(){
    
    unsigned int arrayLen = 5;
    
	/* C does not allow variables to used to declare array lengths */
    int array[arrayLen] = {22, 47, -101, 92, 8};
    
    for(unsigned int iter = 0; iter < arrayLen; iter++){
        
        fprintf( stdout, "%d ", array[iter]);
        
    }
    
    fprintf( stdout, "\n");
    
    return 0;
}

