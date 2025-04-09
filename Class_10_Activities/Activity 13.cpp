#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isNotPrime(int n) {
	if (n < 2) {
		return true;
	}
	
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return true;
		}
	}
	
	return false;
}

int main() {
	int n = 15;
	
	if (isNotPrime(n)) {
		printf("%d is not prime.\n", n);
	} else {
		printf("%d is prime.\n", n);
	}
	
	return 0;
}
