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
	
	fprintf( stdout, "Radius = %lf, height = %lf, PI = %lf\n", radius, height, PI );
	
	/* Print the result */
	/* Example of calling a function within a function call */
	fprintf( stdout, "Cyclinder Area = %lf\n", cylArea( radius, height, PI ) );
	
	fprintf( stdout, "Cyclinder Volume = %lf\n", cylVol( radius, height, PI ) );
	
    return 0;
}
