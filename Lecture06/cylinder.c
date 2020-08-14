// Compute Area of a Cylinder
// Using formula A = 2 * PI * r * h + 2 * PI * R^2
// Where r is radius and h is height

#include <stdio.h>
#include <math.h>

/* Calculates the area of a Cylinder */
double cylArea( double radius, double height, double PI ){
	
	return 2 * PI * radius * (radius + height);
	
}

/* Calculates the area of a Cylinder */
double cylVol( double radius, double height, double PI ){
	
	return 2 * PI * pow( radius, 2 ) * height;
	
}

int main()
{
	/* Define the variables */
	double radius = 3;
	double height = 1.73; 
	double PI = 3.14159;
	
	/* Print the result */
	/* Example of calling a function within a function call */
	fprintf( stdout, "Cyclinder Area = %lf\n", cylArea( radius, height, PI ) );
	
	double volume = cylVol( radius, height, PI );

	/* Prints the value, exponential, and IEEE 754 Hex */
	fprintf( stdout, "Cyclinder Volume = %.3lf, %e, %a\n", volume, volume, volume );

	
    return 0;
}
