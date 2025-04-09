#include <stdio.h>
#include <conio.h>
void addOne(int* ptr) {
	(*ptr)++;
}

int main()
{
	int* p, i = 10;
	p = &i;
	addOne(p);
	
	printf("%d", *p);
	getch();
	return 0;
}
