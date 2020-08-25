#include <stdio.h>

/* Function Declarations */
void printSales( int sales[ ], long unsigned int nrElements );
int AddSales (int sales[ ], long unsigned int nrElements);

int main ( )
{

	/* sales for each business day */
	int sales[] = {288, 359, 509, 777, 1044, 1841, 106};
	
	long unsigned int arraySize = sizeof(sales)/sizeof(int);
   
	printSales(sales, arraySize);

	int totalSales = AddSales (sales, arraySize);
                          
	fprintf (stdout, "\nTotal Sales: %d\n", totalSales);

	return 0;
}

void printSales( int sales[ ], long unsigned int nrElements ){
	
   fprintf(stdout, "\n");
   for (long unsigned int day = 0; day < nrElements; day++)
   {
      fprintf(stdout, "Sales for day %lu: %d\n", day + 1, sales[day]);
   }	
	
}

int AddSales (int sales[ ], long unsigned int nrElements)
{
   int total = 0;
   long unsigned int i;

   for (i = 0; i < nrElements; i++)
   {
      total += sales[i];
   }

   return total;
}
  