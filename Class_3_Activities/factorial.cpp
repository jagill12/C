#include <stdio.h>

//Fucntion prototype
void calculateFactorial(int *num, int *result);

int main() {
	int number; 
	int factorial = 1;
	
	printf("Enter a number to find its factorial: ");
	scanf("%d", &number);
	
	calculateFactorial(&number, &factorial);
	
	printf("The factorial of %d is %d\n", number, factorial);
	
	return 0;
}

void calculateFactorial(int *num, int *result) {
	*result = 1;
	for (int i = 1; i <= *num; i++) {
		*result *= i;
	}
}
