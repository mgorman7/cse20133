#include <stdio.h>
#include <math.h>

int main()
{
	/* Define the variables */
	double radius = 3;
	double height = 1.73; 
	double PI = 3.141592;
	
	fprintf( stdout, "Radius = %.0lf, height = %.2lf, PI = %lf\n", radius, height, PI );
	
    return 0;
}
