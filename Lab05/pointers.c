#include "pointers.h"


/***************************************************************************
 * Function: ScanCoordinates
 * input(s): a pointer to an int "x", and another pointer to an int "y"
 * output(s): None
 *
 * The purpose of this function is to scan in a coordinate (both and x and y
 * parts) and to change their values in main via the use of pointers.
 ***************************************************************************/
void ScanCoordinates(int* xPtr, int* yPtr)
{

   /***********************************
    *             Step 1              * 
    ***********************************/

}


/***************************************************************************
 * Function: ConvertInchesToFeet
 * input(s): a pointer to an int "feet", a pointer to double "inches" and a
 *           double which contains the total number of inches. 
 * output(s): None
 *
 * The purpose of this function is to take the double variable "totalInches"
 * and modify the pointers "feet" and "inches" so that they are effectively
 * returned to main
 ***************************************************************************/
void ConvertInchesToFeet(int* feetPtr, double* inchesPtr, double totalInches)
{

   /************************************
    *             Step 3               *
    ************************************/

}


/***************************************************************************
 * Function: CalculateDistance
 * input(s): two sets of (x,y) coordinates
 * output(s): a double containing the distance between those two pointers
 *   It uses this formula:
 *     distance = SquareRoot( ((x2 - x1)^2) + ((y2 - y1)^2))
 ***************************************************************************/
double CalculateDistance(int x1, int y1, int x2, int y2 )
{
   return (sqrt( ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) ));
}