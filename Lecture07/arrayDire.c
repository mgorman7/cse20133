#include <stdio.h>

int main()
{

     int i = 0, j = 0;
     int sample[5][7];
     
     for (i = 0; i < 5; i++)
     {
		 // Common Error Here - i does not increment
          for( j = 0; i < 7; j++ ){
              
              sample[i][j] = i * j;
              
              fprintf( stdout, "%d ", sample[i][j]);
          }
          
          fprintf( stdout, "\n");
     }
     
     fprintf( stdout, "\n");

    return 0;
}

