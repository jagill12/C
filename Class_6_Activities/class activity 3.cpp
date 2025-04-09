#include <stdio.h>

int linearSearch(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == i)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = {-10, -1, 0, 3, 10, 11, 31, 51, 100};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Fixed Point is %d", linearSearch(arr, n));
	getchar();
	return 0;
}
