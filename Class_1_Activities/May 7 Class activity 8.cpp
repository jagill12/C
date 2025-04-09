#include <stdio.h>
#include<conio.h>
int main() {
	
	int var = 2;
	
	switch (var) {
	case 1:
		printf("Case 1 is executed");
		break;
	case 2:
		printf("Case 2 is executed");
		break;
	default:
		printf("Default Case is executed");
		break;
	}
	getch();
	return 0;
}
