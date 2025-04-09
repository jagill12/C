#include <stdio.h>
#include <conio.h>

int age(int num){
	if (num>=18){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int num;
	
	printf("Give me the age of a person: ", &num);
	scanf("%d", &num);
	
	if (num > 0) {
		if (age(num)) {
			printf("This person is old enough to vote.\n");
		} else {
			printf("This person is not old enough to vote.\n");
		}
	} else {
		printf("Please enter a positive integer.\n");
	}
	getch();
	return 0;
}
