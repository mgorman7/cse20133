#include <stdio.h>

int main(){
	
	int i = 0;
	int sample[5];
	
	for(i = 0; i < 5; i++){
		
		sample[i] = i*5;
		
		fprintf( stdout, "%d ", sample[i] );
	}
	
	fprintf( stdout, "\n");
	
	return 0;
}