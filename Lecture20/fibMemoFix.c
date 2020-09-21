#include <stdio.h>
#include <stdlib.h>

double fibMemo( double* results, unsigned int n );

int main()
{
    
    unsigned int value = 5;
	
    double* array = (double *)malloc( (value + 1) * sizeof(double) );
    
    double result = fibMemo( array, value );
    
    fprintf( stdout, "%.0lf\n", result );
    
    return 0;
}

double fibMemo( double* results, unsigned int n ){
    
    if( results[n] != 0 )
        return results[n];
    
    if( n == 0 || n == 1 ){
        results[n] = 1;
    }
    else{
        results[n] = fibMemo( results, n-1 ) + fibMemo( results, n-2 );
    }
    
	fprintf( stdout, "%u %lf\n", n, results[n] );
	
    return results[n];
}
