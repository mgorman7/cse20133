#include <stdio.h>
#include <math.h>

/* Function Declarations */
double cylArea( double radius, double height, double PI );

int main()
{
	/* Define the variables */
	double radius = 3;
	double height = 1.73; 
	double PI = 3.14159;
	
	fprintf( stdout, "Radius = %lf, height = %lf, PI = %lf\n", radius, height, PI );
	
	/* Print the result */
	/* Example of calling a function within a function call */
	fprintf( stdout, "Cyclinder Area = %lf\n", cylArea( radius, height, PI ) );
	
    return 0;
}

/* Calculates the area of a Cylinder */
double cylArea( double radius, double height, double PI ){
	
	return 2 * PI * radius * (radius + height);
	
}
