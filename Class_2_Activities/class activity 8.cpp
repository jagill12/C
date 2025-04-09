#include <stdio.h>
#include <conio.h>

int main() 
{
	int arr[5] = {10, 20, 30, 40, 50};
	arr[2] = 100;
printf("Elements in Array: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	
	getch();
	return 0;
}
