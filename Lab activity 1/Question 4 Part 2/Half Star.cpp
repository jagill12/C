#include <stdio.h>
int main(){
	int i = 0;
	int a = 11;
	while (i <= 11){
		i++; //must increase at beginning to not overdo it in the final iteration of the loop
		for (int j = 0; j < a; j++){
			printf(" ");
		}
		a--; //must decrease space number after the first for loop to start it off at the correct number for the next iteration
		for (int k = 0; k < i; k++){
			printf(".");
		}
		printf("\n"); //have to print a new line after all periods have been printed per line
	}
	a++; //resets to 1 less than the proper space number for next loop
	while (i >= 1){
		a++; //start by increasing to the correct number of spaces, and must include it at the beginning of this loop to mirror the first half
		for (int l = 0; l < a; l++){
			printf(" ");
		}
		i--; //flipping locations of i and a between the two while loops is because the first integer must increase while the second must decrease, due to printing order
		for (int m = 0; m < i; m++){
			printf(".");
		}
		printf("\n");
	}
	return 0;
}
