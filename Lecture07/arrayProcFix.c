#include <stdio.h>

#define arrayLen 5	// Note how compiler directives do not have commas

int main(){
    
	/* Permissible becaue arrayLen is a directive, not a variable */
    int array[arrayLen] = {22, 47, -101, 92, 8};
    
    for(unsigned int iter = 0; iter < arrayLen; iter++){
        
        fprintf( stdout, "%d ", array[iter]);
        
    }
    
    fprintf( stdout, "\n");
    
    return 0;
}

