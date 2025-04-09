#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int n = 17;
	
	if (isPrime(n)) {
		printf("%d is prime\n", n);
	} else {
		printf("&d is not prime.\n", n);
	}
	
	return 0;
}
