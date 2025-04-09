#include <stdio.h>

int divisor(int num) {
	if (num % 3 == 0 || num % 7 == 0){
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int num;
	
	printf("Enter a positive whole number: ");
	scanf("%d", &num);
	
	if (num > 0) {
		if (divisor(num)) {
			printf("%d is divisible by 3 or 7.\n", num);
		} else {
			printf("&d is not divisible by 3 or 7.\n", num);
		}
	} else {
		printf("Please enter a positive integer.\n");
	}
	return 0;
}
