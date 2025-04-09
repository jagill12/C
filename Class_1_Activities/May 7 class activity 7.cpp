#include <stdio.h>

int main() {
	
	int a = 20;
	char b = 'B';
	double c = 17349494.249324;
	int a1 = 20, b1 = 20, result1;
	int a2 = 1, b2 = 0, result2;
	printf("Size of a is: %d \n", sizeof(a));
	printf("Size of b is: %d \n", sizeof(b));
	printf("Size of c is: %d \n", sizeof(c));
	printf("Memory addresss of a: %d \n", &a);
	result1 = (a1==b1)?(a1+b1):(a1-b1);
	printf("result1 = %d \n",result1);
	result2 = (a2 && b2);
	printf("a2 && b2 = %d \n",result2);
	result2 = (a2 || b2);
	printf("a2 || b2 = %d \n",result2);
	result2 = !a2;
	printf("!a2 = %d \n", result2);
	return 0;
}
