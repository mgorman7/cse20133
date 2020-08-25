#include <stdio.h>

#define SIZE 11		// Global Variable

int main ( ) 
{
	
   int i, j, table[SIZE][SIZE];

   /* Fill table with the products of the indices */
   for (i = 0; i < SIZE; i++) 
   {
      for (j = 0; j < SIZE; j++)
      {
         table[i][j] = i * j;
      }
   }

   /* Print the table */
   for (i = 0; i < SIZE; i++) 
   {
      for (j = 0; j < SIZE; j++)
      {
         fprintf(stdout, "%4d", table[i][j]);
      }
      fprintf(stdout, "\n");
   }

   return 0;
}
