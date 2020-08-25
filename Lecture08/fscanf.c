#include <stdio.h>

int main(){
	
	int value;
	
	fprintf( stdout, "Enter an integer: ");
	
	fscanf( stdin, "%d", &value );
	
	fprintf( stdout, "The value entered is: %d\n", value );
	
	return 0;
}