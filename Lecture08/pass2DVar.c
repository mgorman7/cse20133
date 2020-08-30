#include <stdio.h>

#define ROWS 7
#define COLS 5

/* Function Declarations */
void  FillArray  (int rows, int cols, int array[][cols]);
float FindMean   (int rows, int cols, int array[rows][cols]);
void  PrintArray (int rows, int cols, int array[rows][cols]);

int main ( ) 
{
   int array[ROWS][COLS];
   float mean;

   FillArray (ROWS, COLS, array);
   mean = FindMean (ROWS, COLS, array);

   PrintArray (ROWS, COLS, array);
   fprintf( stdout, "\nThe mean of all the values is %.2f\n", mean);

   return 0;
}

/* Find the Mean of the Values */
float FindMean (int rows, int cols, int array[rows][cols])
{
  int i, j, num;
  float mean, total = 0.0;

  /* Find the sum of all the elements */
  for (i = 0; i < rows; i++)
  {
     for (j = 0; j < cols; j++)
     {
        total += (float)array[i][j];
     }
  }

  /* Calculate number of elements */
  num = rows * cols;

  /* Find the mean */
  mean = total/(float)num;

  return mean;
}


/* Function definitions */
void  FillArray  (int rows, int cols, int array[][cols])
{
  int i, j;

  /* Assign each element the value of the
  product of the two indices */
  for (i = 0; i < rows; i++)
  {
     for (j = 0; j < cols; j++)
     {
        array[i][j] = i * j + 2;
     }
  }
}

/* Print Array */
void PrintArray (int rows, int cols, int array[rows][cols])
{
  int i, j ;

  for (i = 0; i < rows; i++)
  {
     for (j = 0; j < cols; j++)
     {
        fprintf( stdout, "%4d", array[i][j]);
     }
     fprintf( stdout, "\n");
  }
}
