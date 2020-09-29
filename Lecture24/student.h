#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50

typedef struct student{
 /*
 ** Step 2
 ** Complete the structure definition for a student. A student structure must
 ** have 2 strings to store the first and last names, as well as 3 doubles to
 ** store the midterm, final exam, and final grade.
 */
      
}STUDENT;


/*************************************************
 * ReadStudents -
 * Reads the student roster from the input file and store it in an array
 *   of STUDENT structures.
 *
 * Output: int - the number of students that were in the file
 * Input:  STUDENT students[] - the array of student structures
 *************************************************/
int ReadStudents(STUDENT students[]);

/*************************************************
 * CalculateScores -
 * Calculates the final grade for each student using the defined constant
 *    weight for each exam.
 *
 * Output: NONE
 * Input:  STUDENT students[] - the array of student structures
 * Input:  int numStudents - the number of students in the array
 *************************************************/
void CalculateScores(STUDENT students[], int numStudents);

/*************************************************
 * PrintStudents -
 * Prints each student's first name, last name, and final grade as a 
 *    percentage.
 *
 * Output: NONE
 * Input:  STUDENT students[] - the array of student structures
 * Input:  int numStudents - the number of students in the array
 *************************************************/
void PrintStudents(STUDENT students[], int numStudents);

/*************************************************
 * ChangeName -
 * Searches for a student with the specified first and last name in the array
 *    and changes their name to the new first and last name. Does nothing
 *    if the first and last name do not match any student.
 *
 * Output: NONE
 * Input:  STUDENT students[] - the array of student structures
 * Input:  int numStudents - the number of students in the array
 * Input:  char originalFirstName[] - the student's original first name
 * Input:  char originalLastName[] - the student's original last name
 * Input:  char newFirstName[] - the student's new first name
 * Input:  char newLastName[] - the student's new last name
 *************************************************/
void ChangeName(STUDENT students[], int numStudents, char originalFirstName[],
		char originalLastName[], char newFirstName[], 
		char newLastName[]);
		
		
#endif