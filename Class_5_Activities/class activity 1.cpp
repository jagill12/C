#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int size;
	printf("Enter size of elements: ");
	scanf("%d", &size);
	
ptr = (int*)malloc(size * sizeof(int));
	if (ptr == NULL) {
		printf("Memory not allocated. \n");
	}
	else {
		printf("Memory successfully allocated using malloc.\n");
		
		for (int j = 0; j < size; j++) {
			ptr[j] = j + 10;
		}
		
		printf("The elements of the array are: ");
		for (int k = 0; k < size; k++) {
			printf("%d ", ptr[k]);
		}
	}
	return 0;
}
