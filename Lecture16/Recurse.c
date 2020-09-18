#include "Recurse.h"

unsigned int GetValidUInt(){
	
	fprintf( stdout, "Input a valid unsigned integer: ");
	
	unsigned int validUInt;
	
	fscanf( stdin, "%u", &validUInt );
	
	return validUInt;
}


int GetValidInt(){
	
	fprintf( stdout, "Input a valid integer: ");
	
	int validInt;
	
	fscanf( stdin, "%d", &validInt );
	
	return validInt;
}


double GetValidDouble(){
	
	fprintf( stdout, "Input a valid double: ");
		
	double validDbl;
	
	fscanf( stdin, "%lf", &validDbl );
	
	return validDbl;
}


unsigned int factorialUInt(unsigned int i){
	
	// Base case i = 0
	if(i == 0){
		return 1;
	}

	return i * factorialUInt( i-1 );
}


double factorialDbl(unsigned int i){
	
	// Base case i = 0
	if(i == 0){
		return 1;
	}

	return (double)i * factorialDbl( i-1 );
}


double factDblBad(double i){
	
	// Base case i = 0
	if(i == 0){
		return 1;
	}

	return i * factDblBad( i-1 );	
	
}


double exponential(double x, unsigned int k){
	
	if(k == 0)
		return 1;

	fprintf( stdout, "x = %.0lf, k = %u,\tx^k = %.0lf,", x, k, pow(x,k) );
		
	fprintf( stdout, "\tn! = %.0lf, ", factorialDbl(k) );
	
	fprintf( stdout, "\tx^n/n! = %.15lf \n", pow(x,k) / factorialDbl(k) );

	return (pow(x,k)/factorialDbl(k)) + exponential( x, k - 1 );
  
}
