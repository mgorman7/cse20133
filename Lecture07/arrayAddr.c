#include <stdio.h>

int main(){
	
	int i = 0;
	int sample[5];
	
	fprintf( stdout, "Base address of sample array is %p\n", (void *)&sample );
	
	for(i = 0; i < 5; i++){
		
		sample[i] = i*5;
		
		fprintf( stdout, "%d %p\n", sample[i], (void *)&sample[i] );
	}
	
	return 0;
}

