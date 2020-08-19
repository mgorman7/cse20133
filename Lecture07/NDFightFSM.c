#include <stdio.h>	/* Included for fprintf */
#include <stdlib.h>	/* Included for exit */

int main(void){
	
	/* Time through the song */
	unsigned int timeThrough = 0;
	unsigned int state = 0;
	
	/* Keep going until we reach the last state */
	while( state <= 5 ){
	
		/* Switch statement is more efficient than if/else here */
		switch( state ){
			
			case 0:
				fprintf( stdout, "Begin Song\n" );
				state = 1;
				break;
				
			case 1:
				fprintf( stdout, "Play measures 1-20\n");
				state = 2;
				break;
				
			case 2:
				fprintf( stdout, "Play measures 21-34\n");
				
				/* make FSM Decision */
				if( timeThrough == 0 ){
					timeThrough = 1;
					state = 3;
				}
				else{
					fprintf( stdout, "Second time through. Do not repeat\n" );
					state = 4;
				}
				break;
				
			case 3:
				fprintf( stdout, "Play measures 35-36\n" );
				fprintf( stdout, "Go back to measure 21\n");
				state = 2;
				break;			

			case 4:
				fprintf( stdout, "Play measures 37-41\n" );
				state = 5;
				break;
				
			case 5:
				fprintf( stdout, "Song is complete\n" );
				state = 6;
				break;

			default:
				fprintf( stdout, "Invalid state\n" );
				exit(-1); /* Terminate the program */
				break;
			
		}
	
	}
	
	return 0;
	
}