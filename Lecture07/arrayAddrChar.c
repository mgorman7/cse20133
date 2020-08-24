#include <stdio.h>

int main(){
	
	int i = 0;
	char sample[5];
	
	sample[0] = 'N';
	sample[1] = 'o';
	sample[2] = 't';
	sample[3] = 'r';
	sample[4] = 'e';
	
	fprintf( stdout, "Base address of sample array is %p\n", (void *)&sample );
	
	for(i = 0; i < 5; i++){
		
		fprintf( stdout, "%c %p\n", sample[i], (void *)&sample[i] );
	}
	
	return 0;
}

