#include <stdio.h>
#include "student.h"

#define MAX_STUDENTS 50

int main()
{
   STUDENT students[MAX_STUDENTS];
   int numStudents = 0;
   
   char firstName[MAX_NAME_LENGTH];
   char lastName[MAX_NAME_LENGTH];
   
   char newFirstName[MAX_NAME_LENGTH];
   char newLastName[MAX_NAME_LENGTH];

   fprintf( stdout, "Welcome to Lab 7! Structures and Strings\n\n");

   /*
   ** Step 2b
   ** Uncommment this call.
   */

   /* numStudents = ReadStudents(students); */

   /*
   ** Step 3b
   ** Uncomment this call.
   */

   /* 
   CalculateScores(students, numStudents);
   PrintStudents(students, numStudents);
   */

   /*
   ** Step 4b
   ** Uncomment the remainder of this code
   */

   /*
   fprintf( stdout, "\n\nEditing the roster...\n\n");
   
   fscanf( stdin, "%s", firstName);
   fscanf( stdin, "%s", lastName);

   fscanf( stdin, "%s", newFirstName);
   fscanf( stdin, "%s", newLastName);
   
   ChangeName(students, numStudents, firstName, lastName, 
			newFirstName, newLastName);

   PrintStudents(students, numStudents);
   */
   

   return 0;
}