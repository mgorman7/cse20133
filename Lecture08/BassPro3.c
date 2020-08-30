#include <stdio.h>

#define NRDAYS 7     /* number of business days */

/* Function Declarations */
void printSales( int sales[ ], int nrElements );
int AddSales (int sales[ ], int nrElements);

int main ( )
{

	/* sales for each business day */
	int sales[NRDAYS] = {288, 359, 509, 777, 1044, 1841, 106};
   
	printSales(sales, NRDAYS);

	int totalSales = AddSales (sales, NRDAYS);
                          
	fprintf (stdout, "\nTotal Sales: %d\n", totalSales);

	return 0;
}

/* Function Definitions */
void printSales( int sales[ ], int nrElements ){
	
   fprintf(stdout, "\n");
   for (int day = 0; day < nrElements; day++)
   {
      fprintf(stdout, "Sales for day %d: %d\n", day + 1, sales[day]);
   }	
	
}

int AddSales (int sales[ ], int nrElements)
{
   int total = 0;
   int i;

   for (i = 0; i < nrElements; i++)
   {
      total += sales[i];
   }

   return total;
}
  