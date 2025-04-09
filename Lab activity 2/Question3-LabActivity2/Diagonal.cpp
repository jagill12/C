#include <stdio.h>

//print diagonal void function. This takes a matrix given to it, and has rows and columns as variables to work with.
//the first dimension in the matrix variable is empty to signify that it is a matrix of matrices.

void printDiagonal(int matrix[][4], int rows, int cols) {
	
    //iterate over each diagonal starting from the top left corner.
    
    for (int diagonalSum = 0; diagonalSum < rows + cols - 1; diagonalSum++) {
    	int startRow = 0;
    	int startCol = 0;
    	
    	//initialize the starting row and column for the loop.
        //the number of diagonals in any 2D matrix is 1 less than the sum of the rows and columns.
        
        if (diagonalSum < rows) {
			startRow = diagonalSum;
		} else {
			startRow = rows - 1;
		}
        
        //if the current iteration of diagonalSum is less than the number of rows, we're in the upper half of the matrix, and the start row is just the current diagonalSum.
        //if the current iteration of diagonalSum is greater than the number of rows, then we start at the last row, "rows - 1", which is important for the coming while loop.
        
        if (diagonalSum < rows) {
        	startCol = 0;
		} else {
			startCol = diagonalSum - rows + 1;
		}
        
        //if the current iteration of diagonalSum is less than the number of rows, we start at the first column.
        //if the current iteration of diagonalSum is greater than or equal to the number of rows, we start at the column equal to the current diagonalSum, minus the number of rows and then add one.
        
        while (startRow >= 0 && startCol < cols) {
            printf("%d ", matrix[startRow][startCol]);
            startRow--;
            startCol++;
            
            //lowering startRow and increasing startCol successfully iterates through every row and column in the set.
            
        }
        printf("\n");  //move to the next diagonal.
    }
}

int main() {
    int matrix[5][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16},
                        {17, 18, 19, 20}};
                        
    //number of rows and columns must be specified for the void function to work properly.
    
	int rows = 5;
    int cols = 4;

    printDiagonal(matrix, rows, cols);
    
    return 0;
}
