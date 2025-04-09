#include <stdio.h>
#include<conio.h>
struct child {
	int x;
	char c;
};

struct parent {
	int a;
	struct child b;
};

int main()
{
	struct parent var1 = {25, 195, 'A'};
	printf("var1.a = %d\n", var1.a);
	printf("var1.b.x = %\n", var1.b.x);
	printf("var1.b.c = %c", var1.b.c);
	getch();
	return 0;
}
