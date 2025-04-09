r#include <stdio.h>
int main()
{
	
	char ch = 'B';
	printf("%c\n", ch);
	
	int x = 45, y = 90;
	printf("%d\n", x);
	printf("%i\n", y);
	float f = 12.67;
	printf("%f\n", f);
	printf("%e\n", f);
	int a = 67;
	printf("%o\n", a);
	printf("%x\n", a);
	char str[] = "Hello World";
	printf("%s\n", str);
	printf("%20s\n", str);
	printf("%-20s\n", str);
	printf("%20.5s\n", str);
	printf("%-20.5s\n", str);
	return 0;
}
