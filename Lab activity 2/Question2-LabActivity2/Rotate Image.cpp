#include <stdio.h>

#define N 3
#define M 4

void rotateImage(int image[N][M]) {
	int temp[N][M];
	
	printf("Original image: \n \n");
	
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("\t%d ", image[i][j]);
            
            //iterates over each value in order from top left to bottom right. 
            
        }
        printf("\n");
    }
    
    printf("\nImage after rotating 90 degrees clockwise: \n \n");
    
    for (int i = 0; i < M; i++) {
    	
    	//switch i and j's assignments of rows and columns.
    	//i starts at the lowest M value. iterate i up by 1 every time we go through each spot equal to j in each row, from the first to the last.
    	
        for (int j = N - 1; j >= 0; j--) {
        	
        //j starts at the highest N value and iterates down. 
        //meaning this loop starts at the first column of the last (fourth) row, then the first column of the third row, second row, and first, before moving on to the second column of the last row, and so on.
        	
            temp[i][j] = image[j][i];
        
		//as they're saved from the bottom up, left to right from the original matrix, the coordinates are then inverted and saved to a temp matrix.
		//this inversion rotates the locations of the variables in the original matrix along a diagonal line, from top-left to bottom-right.
		//that rotation across the imaginary negative diagonal line will allow the image to appear to be rotated 90 degrees if the values can be printed out as flipped across the y-axis in the new formation.
            
        }
    }
	
	//we can print the values of the temp matrix as though they're flipped across the y-axis by printing in the same order as the iteration of the last loop.
	//since the values were inverted, M will now connotate rows and N will connotate columns.
	//meaning we start on the first row, last column, printing to the first column, and moving to the next row down, and so on.
	//this effectively flips the matrix across the y-axis.
	
	for (int i = 0; i < M; i++) {
        for (int j = N - 1; j >= 0; j--) {
            printf("\t%d ", temp[i][j]);
        }
        printf("\n");
    }
}

int main() {
	int image[N][M] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	
	rotateImage(image);
	
	return 0;
}
