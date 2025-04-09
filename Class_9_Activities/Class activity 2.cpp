#include <stdio.h>

typedef int Arr[4];

int main()
{
	Arr temp = {10, 20, 30, 40};
	printf("typedef using an array\n");
	
	for (int i = 0; i < 4; i++) {
		printf("%d ", temp[i]);
	}
	return 0;
}
