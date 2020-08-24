#include <stdio.h>

int main(){
    
    unsigned int arrayLen = 5;
    
    int array[5] = {22, 47, -101, 92, 8};
    
    for(unsigned int iter = 0; iter < arrayLen; iter++){
        
        fprintf( stdout, "%d ", array[iter]);
        
    }
    
    fprintf( stdout, "\n");
    
    return 0;
}

