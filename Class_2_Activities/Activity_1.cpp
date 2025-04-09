#include <stdio.h>
#include <ctype.h>
#include<conio.h>
int main()
{
	char x;
	printf("Enter an alphabet :");
	x = getchar();
	if (islower(x))
		putchar(toupper(x));
	else
		putchar(tolower(x));
getch();
return 0;
}
