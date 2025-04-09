#include <stdio.h>
#include<conio.h>

int main()
{
	
	const int int_const = 25;
	
	const char char_const = 'A';
	
	const float float_const = 15.66;
	
	printf("Printing value of Integer Constant: %d\n",
		int_const);
	printf("Printing value of Character Constant: %c\n",
		char_const);
	printf("Printing value of Float Constant: %f",
		float_const);
		
	getch();
	return 0;
}
