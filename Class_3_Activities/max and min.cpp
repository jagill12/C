#include <stdio.h>

int findMax(int *num1, int *num2);

int main() {
	int a, b;
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	int max = findMax(&a, &b);
	
	printf("The maximum number between %d and %d is %d\n", a, b, max);
	
	return 0;
}

int findMax(int *num1, int *num2) {
	if (*num1 > *num2) {
		return *num1;
	} else {
		return *num2;
	}
}
