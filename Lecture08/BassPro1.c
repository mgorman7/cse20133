#include <stdio.h>

#define NRDAYS 5     /* number of business days */

/* Function Declarations */
int AddSales (int sales1, int sales2, int sales3, int sales4, int sales5);

int main ( )
{

   /* sales for each business day */
   int sales[NRDAYS] = {288, 359, 509, 777, 1044};
   int totalSales;
   int day;

   fprintf(stdout, "\n");
   for (day = 0; day < NRDAYS; day++)
   {
      fprintf(stdout, "Sales for day %d: %d\n", day + 1, sales[day]);
   }

   /* get and print the total sales */
   totalSales = AddSales (sales[0], sales[1], sales[2], sales[3], sales[4]);
                          
   fprintf (stdout, "\nTotal Sales: %d\n", totalSales);

   return 0;
}

/******************************
 ** Function: AddSales
 **
 ** Inputs: sales amounts for 5 days
 ** Output: returns the total sales
 ********************************/

int AddSales (int s1, int s2, int s3, int s4, int s5)
{
   int total = 0;

   total += s1;
   total += s2;
   total += s3;
   total += s4;
   total += s5;
    
   return total;
}   