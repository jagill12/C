#include <stdio.h>
#include <stdbool.h>

bool isSubsetSum(int set[], int n, int sum) {
	if (sum == 0)
		return true;
	if (n == 0)
		return false;
		
	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);
		
	return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main() {
	int set[] = {3, 34, 4, 12, 5, 2};
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	
	if (isSubsetSum(set, n, sum))
		printf("Subset with given sum exists");
	else 
		printf("Subset with given sum does not exist");
		
	return 0;
}
