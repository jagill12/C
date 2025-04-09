#include <stdio.h>
#include <conio.h>
int main()
{
	int x[3][2] = {{0, 1}, {2, 3}, {4, 5}};
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			printf("Element at x[%i][%i]: ", i, j);
			printf("%d\n", x[i][j]);
		}
	}
getch();
return(0);
}
