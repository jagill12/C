#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

bool isPossible(int arr[], int n, int m, int curr_min)
{
	int studentsRequired = 1;
	int curr_sum = 0;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] > curr_min)
			return false;
			
		if (curr_sum + arr[i] > curr_min) {
			studentsRequired++;
			
			curr_sum = arr[i];
			
			if (studentsRequired > m)
				return false;
		}
		
		else
			curr_sum += arr[i];
	}
	return true;
}

int findPages(int arr[], int n, int m)
{
	long long sum = 0;
	if (n < m)
		return -1;
	int mx = arr[0];
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		mx = (arr[i] > mx ? arr[i] : mx);
	}
	
	int start = mx, end = sum;
	int result = INT_MAX;
	
	while (start <= end) {
		int mid = (start + end) / 2;
		if (isPossible(arr, n, m, mid)) {
			result = mid;
			
			end = mid - 1;
		}
		
		else
			start = mid + 1;
	}
	return result;
}

int main() {
	int arr[] = {12, 24, 34, 67, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = 2;
	printf("Number of pages = %d\n", findPages(arr, n, m));
	return 0;
}
