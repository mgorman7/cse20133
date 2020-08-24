#include <stdio.h>

int main()
{
    
    fprintf( stdout, "Size of char is %lu\n", sizeof(char));
    
    fprintf( stdout, "Size of int is %lu\n", sizeof(int));
 
    fprintf( stdout, "Size of float is %lu\n", sizeof(float));
   
    fprintf( stdout, "Size of double is %lu\n", sizeof(double));
    
    fprintf( stdout, "Size of long unsigned int is %lu\n", sizeof(long unsigned int));

    fprintf( stdout, "Size of long int is %lu\n", sizeof(long int));

    return 0;
}


