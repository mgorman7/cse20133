#include <stdio.h>

/* Function Declarations */
void printMatrix( unsigned int row, unsigned int col, int matrix[][col] );

void multiplyMatrix( unsigned int rowA, unsigned int overlap, unsigned int colB, 
	int matrixA[rowA][overlap], int matrixB[overlap][colB], int result[rowA][colB] );

void test1();

void test2();


/* Main Program */
int main(){
	
	test1();
	
	test2();

	return 0;
	
}


void printMatrix( unsigned int row, unsigned int col, int matrix[][col] ){
	
	for( unsigned int iter = 0; iter < row; iter++ ){
		
		for( unsigned int jter = 0; jter < col; jter++ ){
			
			fprintf( stdout, "%d ", matrix[iter][jter] );
		}
		
		fprintf( stdout, "\n" );
	}
}


void multiplyMatrix( unsigned int rowA, unsigned int overlap, unsigned int colB, 
	int matrixA[rowA][overlap], int matrixB[overlap][colB], int result[rowA][colB] ){
		

	for (unsigned int iter = 0; iter < rowA; ++iter) {
		
		for (unsigned int jter = 0; jter < colB; ++jter) {
			
			for (unsigned int kter = 0; kter < overlap; ++kter) {
				
				result[iter][jter] += matrixA[iter][kter] * matrixB[kter][jter];
				
			}
		}
	}
		
}


void test1(){
	
	fprintf( stdout, "-------------------------\n" );
	fprintf( stdout, "Test 1\n\n");
	
	int matrixA[2][3] = { {1, 2, 3}, {4, 5, 6} };
	
	int matrixB[3][2] = { {7, 8}, {9, 10}, {11, 12} };
	
	fprintf( stdout, "Matrix A:\n" );
	printMatrix( 2, 3, matrixA );

	fprintf( stdout, "\nMatrix B:\n" );
	printMatrix( 3, 2, matrixB );
	
	int result[2][2] = { {0, 0}, {0, 0} };
	
	multiplyMatrix( 2, 3, 2, matrixA, matrixB, result );
	
	fprintf( stdout, "\nResult:\n" );
	printMatrix( 2, 2, result );
	
}


void test2(){
	
	fprintf( stdout, "-------------------------\n" );
	fprintf( stdout, "Test 2\n\n");
	
	int matrixA[1][3] = { { 3, 4, 2 } };
	
	int matrixB[3][4] = { {13, 9, 7, 15}, {8, 7, 4, 6}, {6, 4, 0, 3} };
	
	fprintf( stdout, "Matrix A:\n" );
	printMatrix( 1, 3, matrixA );

	fprintf( stdout, "\nMatrix B:\n" );
	printMatrix( 3, 4, matrixB );
	
	int result[1][4] = { { 0, 0, 0, 0 } };
	
	multiplyMatrix( 1, 3, 4, matrixA, matrixB, result );
	
	fprintf( stdout, "\nResult:\n" );
	printMatrix( 1, 4, result );		
	
}