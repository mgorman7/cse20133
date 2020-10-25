#include "SLList.h"
#include "SorSLList.h"

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
* 
* This is the main driver function for the program 
* For this lecture, we assume 
********************************************/
int main (int argc, char** argv)
{
	
	/* Test inputs for at least one integer */
	if(argc < 2){
		
		std::cerr <<  "Need at least one integer" << std::endl;
		exit(-1);
	}
	
	/* Initialize Number of Inputs to Linked List */
	unsigned int listLen = argc - 1;
	int num;
	
	/* Call default constructor for Linked List */
	SLList<int> theList;
	
	// Call the default constructor for the Sorted Singly Linked List here
	
	
	/* Start at the first int, and go until the end of the command line */
	for(unsigned int iter = 1; iter <= listLen; ++iter){
		
		int tempInt = atoi(argv[iter]);
		
		std::cout << "Inserting " << tempInt << " into Linked List" << std::endl;
		
		theList.Insert(tempInt);
		
		/* Print the Linked List */
		std::cout << "theList: " << theList << std::endl;	
		
		/* Print the Sorted Linked List Here */
		
	}
	
	while(!theList.IsEmpty()){

		std::cout << std::endl << "Enter a value to be deleted: ";
		
		std::cin >> num;
		
		/* Delete the element from the Linked List */
		theList.Delete( num );
		
		/* Delete the element from the Sorted Linked List Here */
		
		/* Overloaded Output Operator for the Linked List */
		std::cout << "theList: " << theList << std::endl;
		
		/* Print the current Sorted Linked List Here */
	
	}

    return 0;
}
