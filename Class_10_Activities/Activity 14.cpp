#include <stdio.h>
#include <stdbool.h>

bool complementSubsetSumDoesNotExist(int set[], int n, int sum) {
	if (sum == 0) {
		return false;
	}
	if (n == 0) {
		return true;
	}
	if (set[n - 1] > sum) {
		return complementSubsetSumDoesNotExist(set, n - 1, sum);
	}
	return complementSubsetSumDoesNotExist(set, n - 1, sum) && complementSubsetSumDoesNotExist(set, n - 1, sum - set[n - 1]);
}

int main() {
	int set[] = {3, 34, 4, 12, 5, 2};
	int sum = 9;
	
	if (complementSubsetSumDoesNotExist(set, sizeof(set) / sizeof(set[0]), sum)) {
		printf("No subset with sum %d exists.\n", sum);
	} else {
		printf("Subset with sum %d exists.\n", sum);
	}
	
	return 0;
}
