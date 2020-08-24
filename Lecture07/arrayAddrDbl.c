#include <stdio.h>

int main(){
	
	int i = 0;
	double value = 2.3;
	double sample[5];
	
	fprintf( stdout, "Base address of sample array is %p\n", (void *)&sample );
	
	for(i = 0; i < 5; i++){
		
		sample[i] = value * 5;
		
		fprintf( stdout, "%lf %p\n", sample[i], (void *)&sample[i] );
	}
	
	return 0;
}

