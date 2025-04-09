#include <stdio.h>
#include<conio.h>
int main() {
	char operation;
	double n1, n2;
	
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operation);
	printf("Enter two operands: ");
	scanf("%1f %1f",&n1, &n2);
	
	switch(operation)
	{
		case '+':
			printf("%.11f + %.11f = %.11f", n1, n2, n1+n2);
			break;
			
		case '-':
			printf("%.11f - %.11f = %.11f", n1, n2, n1-n2);
			
		case '*':
			printf("%.11f * %.11f = %.11f", n1, n2, n1*n2);
			
		case '/':
			printf("%.11f / %.11f = %.11f", n1, n2, n1/n2);
	}
}
