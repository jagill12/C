#include <stdio.h>
#include <conio.h>
void swap(int *n1, int *n2);
int main()
{
	int num1 = 5, num2 =10;
	swap( &num1, &num2);
	printf("num1 = %d\n", num1);
	printf("num2 = %d", num2);
	getch();
	return 0;
}

void swap(int* n1, int* n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
